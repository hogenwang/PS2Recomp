#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002970F8
// Address: 0x2970f8 - 0x297160
void sub_002970F8_0x2970f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002970F8_0x2970f8");
#endif

    switch (ctx->pc) {
        case 0x297110u: goto label_297110;
        case 0x297120u: goto label_297120;
        case 0x297130u: goto label_297130;
        case 0x297140u: goto label_297140;
        case 0x297150u: goto label_297150;
        default: break;
    }

    ctx->pc = 0x2970f8u;

    // 0x2970f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2970f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2970fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297100: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x297100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297108: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x297108u;
    SET_GPR_U32(ctx, 31, 0x297110u);
    ctx->pc = 0x29710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297108u;
            // 0x29710c: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (runtime->hasFunction(0x299FC0u)) {
        auto targetFn = runtime->lookupFunction(0x299FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297110u; }
        if (ctx->pc != 0x297110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299FC0_0x299fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297110u; }
        if (ctx->pc != 0x297110u) { return; }
    }
    ctx->pc = 0x297110u;
label_297110:
    // 0x297110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297114: 0x3e00008  jr          $ra
    ctx->pc = 0x297114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297114u;
            // 0x297118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29711Cu;
    // 0x29711c: 0x0  nop
    ctx->pc = 0x29711cu;
    // NOP
label_297120:
    // 0x297120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297128: 0xc0a6838  jal         func_29A0E0
    ctx->pc = 0x297128u;
    SET_GPR_U32(ctx, 31, 0x297130u);
    ctx->pc = 0x29712Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297128u;
            // 0x29712c: 0x34058002  ori         $a1, $zero, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A0E0u;
    if (runtime->hasFunction(0x29A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x29A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297130u; }
        if (ctx->pc != 0x297130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A0E0_0x29a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297130u; }
        if (ctx->pc != 0x297130u) { return; }
    }
    ctx->pc = 0x297130u;
label_297130:
    // 0x297130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297134: 0x3e00008  jr          $ra
    ctx->pc = 0x297134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297134u;
            // 0x297138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29713Cu;
    // 0x29713c: 0x0  nop
    ctx->pc = 0x29713cu;
    // NOP
label_297140:
    // 0x297140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297148: 0xc0a6838  jal         func_29A0E0
    ctx->pc = 0x297148u;
    SET_GPR_U32(ctx, 31, 0x297150u);
    ctx->pc = 0x29714Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297148u;
            // 0x29714c: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A0E0u;
    if (runtime->hasFunction(0x29A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x29A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297150u; }
        if (ctx->pc != 0x297150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A0E0_0x29a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297150u; }
        if (ctx->pc != 0x297150u) { return; }
    }
    ctx->pc = 0x297150u;
label_297150:
    // 0x297150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297154: 0x3e00008  jr          $ra
    ctx->pc = 0x297154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297154u;
            // 0x297158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29715Cu;
    // 0x29715c: 0x0  nop
    ctx->pc = 0x29715cu;
    // NOP
    ctx->pc = 0x297160u;
}
