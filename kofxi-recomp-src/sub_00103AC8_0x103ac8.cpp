#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103AC8
// Address: 0x103ac8 - 0x103b18
void sub_00103AC8_0x103ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103AC8_0x103ac8");
#endif

    switch (ctx->pc) {
        case 0x103ae4u: goto label_103ae4;
        case 0x103b04u: goto label_103b04;
        default: break;
    }

    ctx->pc = 0x103ac8u;

    // 0x103ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103acc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103ad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103adc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x103ADCu;
    SET_GPR_U32(ctx, 31, 0x103AE4u);
    ctx->pc = 0x103AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103ADCu;
            // 0x103ae0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AE4u; }
        if (ctx->pc != 0x103AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AE4u; }
        if (ctx->pc != 0x103AE4u) { return; }
    }
    ctx->pc = 0x103AE4u;
label_103ae4:
    // 0x103ae4: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x103ae4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103ae8: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x103ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x103aec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103AECu;
    {
        const bool branch_taken_0x103aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103AECu;
            // 0x103af0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103aec) {
            ctx->pc = 0x103B04u;
            goto label_103b04;
        }
    }
    ctx->pc = 0x103AF4u;
    // 0x103af4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103afc: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103AFCu;
    ctx->pc = 0x103B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AFCu;
            // 0x103b00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103B04u;
label_103b04:
    // 0x103b04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x103B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103B0Cu;
            // 0x103b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x103B14u;
    // 0x103b14: 0x0  nop
    ctx->pc = 0x103b14u;
    // NOP
    ctx->pc = 0x103b18u;
}
