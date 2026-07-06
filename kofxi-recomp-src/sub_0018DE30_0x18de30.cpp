#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018DE30
// Address: 0x18de30 - 0x18de80
void sub_0018DE30_0x18de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DE30_0x18de30");
#endif

    switch (ctx->pc) {
        case 0x18de48u: goto label_18de48;
        default: break;
    }

    ctx->pc = 0x18de30u;

    // 0x18de30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18de30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18de34: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18de34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18de38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18de3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18de40: 0xc06377c  jal         func_18DDF0
    ctx->pc = 0x18DE40u;
    SET_GPR_U32(ctx, 31, 0x18DE48u);
    ctx->pc = 0x18DE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE40u;
            // 0x18de44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DDF0u;
    if (runtime->hasFunction(0x18DDF0u)) {
        auto targetFn = runtime->lookupFunction(0x18DDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE48u; }
        if (ctx->pc != 0x18DE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDF0_0x18ddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE48u; }
        if (ctx->pc != 0x18DE48u) { return; }
    }
    ctx->pc = 0x18DE48u;
label_18de48:
    // 0x18de48: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18DE48u;
    {
        const bool branch_taken_0x18de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de48) {
            ctx->pc = 0x18DE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE48u;
            // 0x18de4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DE70u;
            goto label_18de70;
        }
    }
    ctx->pc = 0x18DE50u;
    // 0x18de50: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x18de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18de54: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18de54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18de58: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18de58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18de5c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18de60: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x18de60u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18de64: 0x50830002  beql        $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DE64u;
    {
        const bool branch_taken_0x18de64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18de64) {
            ctx->pc = 0x18DE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE64u;
            // 0x18de68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18DE70u;
            goto label_18de70;
        }
    }
    ctx->pc = 0x18DE6Cu;
    // 0x18de6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18de70:
    // 0x18de70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18de70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18de74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18de74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18de78: 0x3e00008  jr          $ra
    ctx->pc = 0x18DE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE78u;
            // 0x18de7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DE80u;
    ctx->pc = 0x18de80u;
}
