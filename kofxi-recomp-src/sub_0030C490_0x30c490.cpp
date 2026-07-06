#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C490
// Address: 0x30c490 - 0x30c520
void sub_0030C490_0x30c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C490_0x30c490");
#endif

    switch (ctx->pc) {
        case 0x30c4c0u: goto label_30c4c0;
        case 0x30c4e8u: goto label_30c4e8;
        case 0x30c4fcu: goto label_30c4fc;
        default: break;
    }

    ctx->pc = 0x30c490u;

    // 0x30c490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c494: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x30c494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x30c498: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30c49c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c4a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c4a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c4a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30c4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4b0: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x30c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x30c4b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4b8: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C4B8u;
    SET_GPR_U32(ctx, 31, 0x30C4C0u);
    ctx->pc = 0x30C4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4B8u;
            // 0x30c4bc: 0x24841e00  addiu       $a0, $a0, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4C0u; }
        if (ctx->pc != 0x30C4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4C0u; }
        if (ctx->pc != 0x30C4C0u) { return; }
    }
    ctx->pc = 0x30C4C0u;
label_30c4c0:
    // 0x30c4c0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x30c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c4c4: 0x119200  sll         $s2, $s1, 8
    ctx->pc = 0x30c4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x30c4c8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x30c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30c4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4d0: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30c4d4: 0x38a00  sll         $s1, $v1, 8
    ctx->pc = 0x30c4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x30c4d8: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x30c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x30c4dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30c4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4e0: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C4E0u;
    SET_GPR_U32(ctx, 31, 0x30C4E8u);
    ctx->pc = 0x30C4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4E0u;
            // 0x30c4e4: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4E8u; }
        if (ctx->pc != 0x30C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4E8u; }
        if (ctx->pc != 0x30C4E8u) { return; }
    }
    ctx->pc = 0x30C4E8u;
label_30c4e8:
    // 0x30c4e8: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x30c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x30c4ec: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x30c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30c4f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30c4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c4f4: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C4F4u;
    SET_GPR_U32(ctx, 31, 0x30C4FCu);
    ctx->pc = 0x30C4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C4F4u;
            // 0x30c4f8: 0x24a51e00  addiu       $a1, $a1, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4FCu; }
        if (ctx->pc != 0x30C4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C4FCu; }
        if (ctx->pc != 0x30C4FCu) { return; }
    }
    ctx->pc = 0x30C4FCu;
label_30c4fc:
    // 0x30c4fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c50c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C50Cu;
            // 0x30c510: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C514u;
    // 0x30c514: 0x0  nop
    ctx->pc = 0x30c514u;
    // NOP
    // 0x30c518: 0x0  nop
    ctx->pc = 0x30c518u;
    // NOP
    // 0x30c51c: 0x0  nop
    ctx->pc = 0x30c51cu;
    // NOP
    ctx->pc = 0x30c520u;
}
