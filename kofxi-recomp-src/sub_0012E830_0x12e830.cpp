#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E830
// Address: 0x12e830 - 0x12e8c0
void sub_0012E830_0x12e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E830_0x12e830");
#endif

    switch (ctx->pc) {
        case 0x12e86cu: goto label_12e86c;
        default: break;
    }

    ctx->pc = 0x12e830u;

    // 0x12e830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e834: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x12e834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12e838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e83c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12e840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e844: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12E844u;
    {
        const bool branch_taken_0x12e844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E844u;
            // 0x12e848: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e844) {
            ctx->pc = 0x12E89Cu;
            goto label_12e89c;
        }
    }
    ctx->pc = 0x12E84Cu;
    // 0x12e84c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x12e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12e850: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x12e850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x12e854: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E854u;
    {
        const bool branch_taken_0x12e854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e854) {
            ctx->pc = 0x12E858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E854u;
            // 0x12e858: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E864u;
            goto label_12e864;
        }
    }
    ctx->pc = 0x12E85Cu;
    // 0x12e85c: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x12e85cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x12e860: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12e864:
    // 0x12e864: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x12E864u;
    SET_GPR_U32(ctx, 31, 0x12E86Cu);
    ctx->pc = 0x18DE30u;
    if (runtime->hasFunction(0x18DE30u)) {
        auto targetFn = runtime->lookupFunction(0x18DE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E86Cu; }
        if (ctx->pc != 0x12E86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DE30_0x18de30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E86Cu; }
        if (ctx->pc != 0x12E86Cu) { return; }
    }
    ctx->pc = 0x12E86Cu;
label_12e86c:
    // 0x12e86c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E86Cu;
    {
        const bool branch_taken_0x12e86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e86c) {
            ctx->pc = 0x12E884u;
            goto label_12e884;
        }
    }
    ctx->pc = 0x12E874u;
    // 0x12e874: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x12e874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12e878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e87c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12E87Cu;
    {
        const bool branch_taken_0x12e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E87Cu;
            // 0x12e880: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e87c) {
            ctx->pc = 0x12E8B0u;
            goto label_12e8b0;
        }
    }
    ctx->pc = 0x12E884u;
label_12e884:
    // 0x12e884: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12e888: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x12e888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12e88c: 0x2442c2e0  addiu       $v0, $v0, -0x3D20
    ctx->pc = 0x12e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951648));
    // 0x12e890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12E894u;
    {
        const bool branch_taken_0x12e894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E894u;
            // 0x12e898: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e894) {
            ctx->pc = 0x12E8B0u;
            goto label_12e8b0;
        }
    }
    ctx->pc = 0x12E89Cu;
label_12e89c:
    // 0x12e89c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x12e8a0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x12e8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12e8a4: 0x2442c2e0  addiu       $v0, $v0, -0x3D20
    ctx->pc = 0x12e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951648));
    // 0x12e8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e8ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x12e8acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12e8b0:
    // 0x12e8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8B8u;
            // 0x12e8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E8C0u;
    ctx->pc = 0x12e8c0u;
}
