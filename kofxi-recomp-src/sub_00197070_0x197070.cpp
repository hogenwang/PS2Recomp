#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197070
// Address: 0x197070 - 0x1970a0
void sub_00197070_0x197070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197070_0x197070");
#endif

    switch (ctx->pc) {
        case 0x19708cu: goto label_19708c;
        default: break;
    }

    ctx->pc = 0x197070u;

    // 0x197070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197074: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19707c: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x19707cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x197080: 0x9444d160  lhu         $a0, -0x2EA0($v0)
    ctx->pc = 0x197080u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955360)));
    // 0x197084: 0xc063808  jal         func_18E020
    ctx->pc = 0x197084u;
    SET_GPR_U32(ctx, 31, 0x19708Cu);
    ctx->pc = 0x197088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197084u;
            // 0x197088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (runtime->hasFunction(0x18E020u)) {
        auto targetFn = runtime->lookupFunction(0x18E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19708Cu; }
        if (ctx->pc != 0x19708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E020_0x18e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19708Cu; }
        if (ctx->pc != 0x19708Cu) { return; }
    }
    ctx->pc = 0x19708Cu;
label_19708c:
    // 0x19708c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197090: 0xa062d070  sb          $v0, -0x2F90($v1)
    ctx->pc = 0x197090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294955120), (uint8_t)GPR_U32(ctx, 2));
    // 0x197094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197098: 0x3e00008  jr          $ra
    ctx->pc = 0x197098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197098u;
            // 0x19709c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1970A0u;
    ctx->pc = 0x1970a0u;
}
