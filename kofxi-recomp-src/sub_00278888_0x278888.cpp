#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00278888
// Address: 0x278888 - 0x278910
void sub_00278888_0x278888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278888_0x278888");
#endif

    switch (ctx->pc) {
        case 0x2788a8u: goto label_2788a8;
        case 0x2788d4u: goto label_2788d4;
        case 0x2788e0u: goto label_2788e0;
        default: break;
    }

    ctx->pc = 0x278888u;

    // 0x278888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27888c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278894: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x278894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278898: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27889c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2788a0: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x2788A0u;
    SET_GPR_U32(ctx, 31, 0x2788A8u);
    ctx->pc = 0x2788A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2788A0u;
            // 0x2788a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0C8u;
    if (runtime->hasFunction(0x2DB0C8u)) {
        auto targetFn = runtime->lookupFunction(0x2DB0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788A8u; }
        if (ctx->pc != 0x2788A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB0C8_0x2db0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788A8u; }
        if (ctx->pc != 0x2788A8u) { return; }
    }
    ctx->pc = 0x2788A8u;
label_2788a8:
    // 0x2788a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2788a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788ac: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2788ACu;
    {
        const bool branch_taken_0x2788ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2788B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788ACu;
            // 0x2788b0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788ac) {
            ctx->pc = 0x2788F4u;
            goto label_2788f4;
        }
    }
    ctx->pc = 0x2788B4u;
    // 0x2788b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2788B4u;
    {
        const bool branch_taken_0x2788b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2788B4u;
            // 0x2788b8: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788b4) {
            ctx->pc = 0x2788D8u;
            goto label_2788d8;
        }
    }
    ctx->pc = 0x2788BCu;
    // 0x2788bc: 0x8c623430  lw          $v0, 0x3430($v1)
    ctx->pc = 0x2788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13360)));
    // 0x2788c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2788c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2788c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2788C4u;
    {
        const bool branch_taken_0x2788c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2788c4) {
            ctx->pc = 0x2788D8u;
            goto label_2788d8;
        }
    }
    ctx->pc = 0x2788CCu;
    // 0x2788cc: 0xc09d284  jal         func_274A10
    ctx->pc = 0x2788CCu;
    SET_GPR_U32(ctx, 31, 0x2788D4u);
    ctx->pc = 0x2788D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2788CCu;
            // 0x2788d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274A10u;
    if (runtime->hasFunction(0x274A10u)) {
        auto targetFn = runtime->lookupFunction(0x274A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788D4u; }
        if (ctx->pc != 0x2788D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274A10_0x274a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788D4u; }
        if (ctx->pc != 0x2788D4u) { return; }
    }
    ctx->pc = 0x2788D4u;
label_2788d4:
    // 0x2788d4: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2788d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2788d8:
    // 0x2788d8: 0xc09d2bc  jal         func_274AF0
    ctx->pc = 0x2788D8u;
    SET_GPR_U32(ctx, 31, 0x2788E0u);
    ctx->pc = 0x2788DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2788D8u;
            // 0x2788dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274AF0u;
    if (runtime->hasFunction(0x274AF0u)) {
        auto targetFn = runtime->lookupFunction(0x274AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788E0u; }
        if (ctx->pc != 0x2788E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274AF0_0x274af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2788E0u; }
        if (ctx->pc != 0x2788E0u) { return; }
    }
    ctx->pc = 0x2788E0u;
label_2788e0:
    // 0x2788e0: 0x2404ff96  addiu       $a0, $zero, -0x6A
    ctx->pc = 0x2788e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x2788e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2788e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2788e8: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x2788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2788ec: 0x2421826  xor         $v1, $s2, $v0
    ctx->pc = 0x2788ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x2788f0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2788f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2788f4:
    // 0x2788f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2788f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2788f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2788f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2788fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2788fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278900: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x278900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278904: 0x3e00008  jr          $ra
    ctx->pc = 0x278904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278904u;
            // 0x278908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27890Cu;
    // 0x27890c: 0x0  nop
    ctx->pc = 0x27890cu;
    // NOP
    ctx->pc = 0x278910u;
}
