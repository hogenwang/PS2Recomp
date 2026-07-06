#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D080
// Address: 0x14d080 - 0x14d0e0
void sub_0014D080_0x14d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D080_0x14d080");
#endif

    switch (ctx->pc) {
        case 0x14d0c0u: goto label_14d0c0;
        default: break;
    }

    ctx->pc = 0x14d080u;

    // 0x14d080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d084: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x14d084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14d088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d08c: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x14d08cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x14d090: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x14D090u;
    {
        const bool branch_taken_0x14d090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D090u;
            // 0x14d094: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d090) {
            ctx->pc = 0x14D0D0u;
            goto label_14d0d0;
        }
    }
    ctx->pc = 0x14D098u;
    // 0x14d098: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x14d098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14d09c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14d0a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d0a4: 0x24425dc4  addiu       $v0, $v0, 0x5DC4
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24004));
    // 0x14d0a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14d0ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d0b0: 0x381c0  sll         $s0, $v1, 7
    ctx->pc = 0x14d0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14d0b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d0b8: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14D0B8u;
    SET_GPR_U32(ctx, 31, 0x14D0C0u);
    ctx->pc = 0x14D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0B8u;
            // 0x14d0bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (runtime->hasFunction(0x1B9280u)) {
        auto targetFn = runtime->lookupFunction(0x1B9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0C0u; }
        if (ctx->pc != 0x14D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9280_0x1b9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0C0u; }
        if (ctx->pc != 0x14D0C0u) { return; }
    }
    ctx->pc = 0x14D0C0u;
label_14d0c0:
    // 0x14d0c0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14d0c4: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
    // 0x14d0c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14d0cc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x14d0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_14d0d0:
    // 0x14d0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14D0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0D8u;
            // 0x14d0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D0E0u;
    ctx->pc = 0x14d0e0u;
}
