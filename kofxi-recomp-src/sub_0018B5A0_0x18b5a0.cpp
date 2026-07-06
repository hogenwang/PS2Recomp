#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B5A0
// Address: 0x18b5a0 - 0x18b5f0
void sub_0018B5A0_0x18b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B5A0_0x18b5a0");
#endif

    switch (ctx->pc) {
        case 0x18b5b8u: goto label_18b5b8;
        case 0x18b5d0u: goto label_18b5d0;
        default: break;
    }

    ctx->pc = 0x18b5a0u;

    // 0x18b5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18b5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5b0: 0xc062d5c  jal         func_18B570
    ctx->pc = 0x18B5B0u;
    SET_GPR_U32(ctx, 31, 0x18B5B8u);
    ctx->pc = 0x18B5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5B0u;
            // 0x18b5b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B570u;
    if (runtime->hasFunction(0x18B570u)) {
        auto targetFn = runtime->lookupFunction(0x18B570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5B8u; }
        if (ctx->pc != 0x18B5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B570_0x18b570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5B8u; }
        if (ctx->pc != 0x18B5B8u) { return; }
    }
    ctx->pc = 0x18B5B8u;
label_18b5b8:
    // 0x18b5b8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x18b5b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18b5bc: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x18b5bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x18b5c0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B5C0u;
    {
        const bool branch_taken_0x18b5c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5c0) {
            ctx->pc = 0x18B5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5C0u;
            // 0x18b5c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B5D4u;
            goto label_18b5d4;
        }
    }
    ctx->pc = 0x18B5C8u;
    // 0x18b5c8: 0xc062d60  jal         func_18B580
    ctx->pc = 0x18B5C8u;
    SET_GPR_U32(ctx, 31, 0x18B5D0u);
    ctx->pc = 0x18B5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5C8u;
            // 0x18b5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B580u;
    if (runtime->hasFunction(0x18B580u)) {
        auto targetFn = runtime->lookupFunction(0x18B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5D0u; }
        if (ctx->pc != 0x18B5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B580_0x18b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B5D0u; }
        if (ctx->pc != 0x18B5D0u) { return; }
    }
    ctx->pc = 0x18B5D0u;
label_18b5d0:
    // 0x18b5d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18b5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b5d4:
    // 0x18b5d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b5d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5E0u;
            // 0x18b5e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B5E8u;
    // 0x18b5e8: 0x0  nop
    ctx->pc = 0x18b5e8u;
    // NOP
    // 0x18b5ec: 0x0  nop
    ctx->pc = 0x18b5ecu;
    // NOP
    ctx->pc = 0x18b5f0u;
}
