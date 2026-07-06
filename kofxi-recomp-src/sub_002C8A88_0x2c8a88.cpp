#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8A88
// Address: 0x2c8a88 - 0x2c8ad8
void sub_002C8A88_0x2c8a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8A88_0x2c8a88");
#endif

    switch (ctx->pc) {
        case 0x2c8a98u: goto label_2c8a98;
        case 0x2c8aa8u: goto label_2c8aa8;
        case 0x2c8ab8u: goto label_2c8ab8;
        case 0x2c8ac0u: goto label_2c8ac0;
        default: break;
    }

    ctx->pc = 0x2c8a88u;

    // 0x2c8a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c8a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c8a98:
    // 0x2c8a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8a9c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c8a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8aa0: 0xc0b22ec  jal         func_2C8BB0
    ctx->pc = 0x2C8AA0u;
    SET_GPR_U32(ctx, 31, 0x2C8AA8u);
    ctx->pc = 0x2C8AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AA0u;
            // 0x2c8aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (runtime->hasFunction(0x2C8BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AA8u; }
        if (ctx->pc != 0x2C8AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8BB0_0x2c8bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AA8u; }
        if (ctx->pc != 0x2C8AA8u) { return; }
    }
    ctx->pc = 0x2C8AA8u;
label_2c8aa8:
    // 0x2c8aa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8AA8u;
    {
        const bool branch_taken_0x2c8aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AA8u;
            // 0x2c8aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8aa8) {
            ctx->pc = 0x2C8AC0u;
            goto label_2c8ac0;
        }
    }
    ctx->pc = 0x2C8AB0u;
    // 0x2c8ab0: 0xc0b3c74  jal         func_2CF1D0
    ctx->pc = 0x2C8AB0u;
    SET_GPR_U32(ctx, 31, 0x2C8AB8u);
    ctx->pc = 0x2C8AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AB0u;
            // 0x2c8ab4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF1D0u;
    if (runtime->hasFunction(0x2CF1D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CF1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AB8u; }
        if (ctx->pc != 0x2C8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF1D0_0x2cf1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AB8u; }
        if (ctx->pc != 0x2C8AB8u) { return; }
    }
    ctx->pc = 0x2C8AB8u;
label_2c8ab8:
    // 0x2c8ab8: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2C8AB8u;
    SET_GPR_U32(ctx, 31, 0x2C8AC0u);
    ctx->pc = 0x2C8ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AB8u;
            // 0x2c8abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AC0u; }
        if (ctx->pc != 0x2C8AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AC0u; }
        if (ctx->pc != 0x2C8AC0u) { return; }
    }
    ctx->pc = 0x2C8AC0u;
label_2c8ac0:
    // 0x2c8ac0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2c8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2c8ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c8ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AD0u;
            // 0x2c8ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8AD8u;
    ctx->pc = 0x2c8ad8u;
}
