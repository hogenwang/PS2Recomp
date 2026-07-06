#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010DFE0
// Address: 0x10dfe0 - 0x10e060
void sub_0010DFE0_0x10dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DFE0_0x10dfe0");
#endif

    switch (ctx->pc) {
        case 0x10dff8u: goto label_10dff8;
        case 0x10e008u: goto label_10e008;
        case 0x10e02cu: goto label_10e02c;
        case 0x10e038u: goto label_10e038;
        case 0x10e050u: goto label_10e050;
        default: break;
    }

    ctx->pc = 0x10dfe0u;

    // 0x10dfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10dfe4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10dfe8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10dfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dfec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10dff0: 0xc043424  jal         func_10D090
    ctx->pc = 0x10DFF0u;
    SET_GPR_U32(ctx, 31, 0x10DFF8u);
    ctx->pc = 0x10DFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFF0u;
            // 0x10dff4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFF8u; }
        if (ctx->pc != 0x10DFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DFF8u; }
        if (ctx->pc != 0x10DFF8u) { return; }
    }
    ctx->pc = 0x10DFF8u;
label_10dff8:
    // 0x10dff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x10DFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DFFCu;
            // 0x10e000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E004u;
    // 0x10e004: 0x0  nop
    ctx->pc = 0x10e004u;
    // NOP
label_10e008:
    // 0x10e008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e00c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x10e00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x10e010: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10e010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10e014: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e018: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e01c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10e020: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x10e020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10e024: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E024u;
    SET_GPR_U32(ctx, 31, 0x10E02Cu);
    ctx->pc = 0x10E028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E024u;
            // 0x10e028: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E02Cu; }
        if (ctx->pc != 0x10E02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E02Cu; }
        if (ctx->pc != 0x10E02Cu) { return; }
    }
    ctx->pc = 0x10E02Cu;
label_10e02c:
    // 0x10e02c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e030: 0x3e00008  jr          $ra
    ctx->pc = 0x10E030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E030u;
            // 0x10e034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E038u;
label_10e038:
    // 0x10e038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e03c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e040: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e048: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E048u;
    SET_GPR_U32(ctx, 31, 0x10E050u);
    ctx->pc = 0x10E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E048u;
            // 0x10e04c: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E050u; }
        if (ctx->pc != 0x10E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E050u; }
        if (ctx->pc != 0x10E050u) { return; }
    }
    ctx->pc = 0x10E050u;
label_10e050:
    // 0x10e050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e054: 0x3e00008  jr          $ra
    ctx->pc = 0x10E054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E054u;
            // 0x10e058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E05Cu;
    // 0x10e05c: 0x0  nop
    ctx->pc = 0x10e05cu;
    // NOP
    ctx->pc = 0x10e060u;
}
