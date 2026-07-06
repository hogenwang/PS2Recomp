#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018DDA0
// Address: 0x18dda0 - 0x18ddf0
void sub_0018DDA0_0x18dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DDA0_0x18dda0");
#endif

    switch (ctx->pc) {
        case 0x18ddb8u: goto label_18ddb8;
        default: break;
    }

    ctx->pc = 0x18dda0u;

    // 0x18dda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18dda4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18dda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18dda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ddac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ddb0: 0xc063758  jal         func_18DD60
    ctx->pc = 0x18DDB0u;
    SET_GPR_U32(ctx, 31, 0x18DDB8u);
    ctx->pc = 0x18DDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDB0u;
            // 0x18ddb4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DD60u;
    if (runtime->hasFunction(0x18DD60u)) {
        auto targetFn = runtime->lookupFunction(0x18DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDB8u; }
        if (ctx->pc != 0x18DDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DD60_0x18dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDB8u; }
        if (ctx->pc != 0x18DDB8u) { return; }
    }
    ctx->pc = 0x18DDB8u;
label_18ddb8:
    // 0x18ddb8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DDB8u;
    {
        const bool branch_taken_0x18ddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ddb8) {
            ctx->pc = 0x18DDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDB8u;
            // 0x18ddbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DDD4u;
            goto label_18ddd4;
        }
    }
    ctx->pc = 0x18DDC0u;
    // 0x18ddc0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18ddc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18ddc4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18ddc8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ddcc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18ddccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ddd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ddd4:
    // 0x18ddd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ddd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ddd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ddd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dddc: 0x3e00008  jr          $ra
    ctx->pc = 0x18DDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDDCu;
            // 0x18dde0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DDE4u;
    // 0x18dde4: 0x0  nop
    ctx->pc = 0x18dde4u;
    // NOP
    // 0x18dde8: 0x0  nop
    ctx->pc = 0x18dde8u;
    // NOP
    // 0x18ddec: 0x0  nop
    ctx->pc = 0x18ddecu;
    // NOP
    ctx->pc = 0x18ddf0u;
}
