#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295F60
// Address: 0x295f60 - 0x295fb8
void sub_00295F60_0x295f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295F60_0x295f60");
#endif

    switch (ctx->pc) {
        case 0x295f7cu: goto label_295f7c;
        default: break;
    }

    ctx->pc = 0x295f60u;

    // 0x295f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295f64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295f6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x295f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x295f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x295f74: 0xc0a5762  jal         func_295D88
    ctx->pc = 0x295F74u;
    SET_GPR_U32(ctx, 31, 0x295F7Cu);
    ctx->pc = 0x295F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F74u;
            // 0x295f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295D88u;
    if (runtime->hasFunction(0x295D88u)) {
        auto targetFn = runtime->lookupFunction(0x295D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F7Cu; }
        if (ctx->pc != 0x295F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295D88_0x295d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F7Cu; }
        if (ctx->pc != 0x295F7Cu) { return; }
    }
    ctx->pc = 0x295F7Cu;
label_295f7c:
    // 0x295f7c: 0x8c430188  lw          $v1, 0x188($v0)
    ctx->pc = 0x295f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    // 0x295f80: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x295f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x295f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x295f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295f88: 0x83180a  movz        $v1, $a0, $v1
    ctx->pc = 0x295f88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x295f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x295f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x295f90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295f94: 0xac700088  sw          $s0, 0x88($v1)
    ctx->pc = 0x295f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 16));
    // 0x295f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295f9c: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x295f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    // 0x295fa0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x295fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x295fa4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295fa8: 0xac5100c8  sw          $s1, 0xC8($v0)
    ctx->pc = 0x295fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 17));
    // 0x295fac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x295FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295FB0u;
            // 0x295fb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295FB8u;
    ctx->pc = 0x295fb8u;
}
