#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001732C0
// Address: 0x1732c0 - 0x173330
void sub_001732C0_0x1732c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001732C0_0x1732c0");
#endif

    switch (ctx->pc) {
        case 0x1732dcu: goto label_1732dc;
        default: break;
    }

    ctx->pc = 0x1732c0u;

    // 0x1732c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1732c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1732c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1732c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1732c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1732c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1732cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1732ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1732d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1732d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732d4: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x1732D4u;
    SET_GPR_U32(ctx, 31, 0x1732DCu);
    ctx->pc = 0x1732D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732D4u;
            // 0x1732d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (runtime->hasFunction(0x1717C0u)) {
        auto targetFn = runtime->lookupFunction(0x1717C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732DCu; }
        if (ctx->pc != 0x1732DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717C0_0x1717c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732DCu; }
        if (ctx->pc != 0x1732DCu) { return; }
    }
    ctx->pc = 0x1732DCu;
label_1732dc:
    // 0x1732dc: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x1732dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1732e0: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1732e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1732e4: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x1732e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1732e8: 0xa01827  not         $v1, $a1
    ctx->pc = 0x1732e8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x1732ec: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1732ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1732f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1732f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1732f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1732f8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1732f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1732fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1732fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x173300: 0x246348c0  addiu       $v1, $v1, 0x48C0
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18624));
    // 0x173304: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x173304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173308: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x173308u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17330c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x17330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x173310: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x173310u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x173314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17331c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17331cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173320: 0x3e00008  jr          $ra
    ctx->pc = 0x173320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173320u;
            // 0x173324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173328u;
    // 0x173328: 0x0  nop
    ctx->pc = 0x173328u;
    // NOP
    // 0x17332c: 0x0  nop
    ctx->pc = 0x17332cu;
    // NOP
    ctx->pc = 0x173330u;
}
