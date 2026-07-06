#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A0E0
// Address: 0x18a0e0 - 0x18a130
void sub_0018A0E0_0x18a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A0E0_0x18a0e0");
#endif

    switch (ctx->pc) {
        case 0x18a0f0u: goto label_18a0f0;
        default: break;
    }

    ctx->pc = 0x18a0e0u;

    // 0x18a0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a0e8: 0xc062794  jal         func_189E50
    ctx->pc = 0x18A0E8u;
    SET_GPR_U32(ctx, 31, 0x18A0F0u);
    ctx->pc = 0x189E50u;
    if (runtime->hasFunction(0x189E50u)) {
        auto targetFn = runtime->lookupFunction(0x189E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0F0u; }
        if (ctx->pc != 0x18A0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E50_0x189e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0F0u; }
        if (ctx->pc != 0x18A0F0u) { return; }
    }
    ctx->pc = 0x18A0F0u;
label_18a0f0:
    // 0x18a0f0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18a0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a0f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a0fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18a100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a104: 0x2442db54  addiu       $v0, $v0, -0x24AC
    ctx->pc = 0x18a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957908));
    // 0x18a108: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a10c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a110: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a118: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18a118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a11c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A11Cu;
            // 0x18a120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A124u;
    // 0x18a124: 0x0  nop
    ctx->pc = 0x18a124u;
    // NOP
    // 0x18a128: 0x0  nop
    ctx->pc = 0x18a128u;
    // NOP
    // 0x18a12c: 0x0  nop
    ctx->pc = 0x18a12cu;
    // NOP
    ctx->pc = 0x18a130u;
}
