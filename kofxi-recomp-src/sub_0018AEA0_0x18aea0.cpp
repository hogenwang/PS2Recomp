#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AEA0
// Address: 0x18aea0 - 0x18aef0
void sub_0018AEA0_0x18aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AEA0_0x18aea0");
#endif

    switch (ctx->pc) {
        case 0x18aeb4u: goto label_18aeb4;
        default: break;
    }

    ctx->pc = 0x18aea0u;

    // 0x18aea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18aea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18aea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18aeac: 0xc062794  jal         func_189E50
    ctx->pc = 0x18AEACu;
    SET_GPR_U32(ctx, 31, 0x18AEB4u);
    ctx->pc = 0x18AEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEACu;
            // 0x18aeb0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (runtime->hasFunction(0x189E50u)) {
        auto targetFn = runtime->lookupFunction(0x189E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEB4u; }
        if (ctx->pc != 0x18AEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E50_0x189e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEB4u; }
        if (ctx->pc != 0x18AEB4u) { return; }
    }
    ctx->pc = 0x18AEB4u;
label_18aeb4:
    // 0x18aeb4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x18aeb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18aeb8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18aebc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18aec0: 0x2463db62  addiu       $v1, $v1, -0x249E
    ctx->pc = 0x18aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957922));
    // 0x18aec4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18aec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18aec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aecc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18aed0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18aed4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18aed8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18aedc: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x18aedcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x18aee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18aee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18aee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x18AEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEE8u;
            // 0x18aeec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AEF0u;
    ctx->pc = 0x18aef0u;
}
