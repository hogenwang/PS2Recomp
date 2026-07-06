#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBE20
// Address: 0x1bbe20 - 0x1bbe70
void sub_001BBE20_0x1bbe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBE20_0x1bbe20");
#endif

    switch (ctx->pc) {
        case 0x1bbe44u: goto label_1bbe44;
        case 0x1bbe54u: goto label_1bbe54;
        default: break;
    }

    ctx->pc = 0x1bbe20u;

    // 0x1bbe20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbe24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbe28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbe28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbe30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bbe30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bbe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bbe38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bbe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bbe3c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE44u);
    ctx->pc = 0x1BBE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE3Cu;
            // 0x1bbe40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE44u; }
        if (ctx->pc != 0x1BBE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE44u; }
        if (ctx->pc != 0x1BBE44u) { return; }
    }
    ctx->pc = 0x1BBE44u;
label_1bbe44:
    // 0x1bbe44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bbe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe4c: 0xc06ef9c  jal         func_1BBE70
    ctx->pc = 0x1BBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE54u);
    ctx->pc = 0x1BBE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE4Cu;
            // 0x1bbe50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBE70u;
    if (runtime->hasFunction(0x1BBE70u)) {
        auto targetFn = runtime->lookupFunction(0x1BBE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE54u; }
        if (ctx->pc != 0x1BBE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBE70_0x1bbe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBE54u; }
        if (ctx->pc != 0x1BBE54u) { return; }
    }
    ctx->pc = 0x1BBE54u;
label_1bbe54:
    // 0x1bbe54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbe58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbe58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbe5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bbe5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbe60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bbe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bbe64: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BBE64u;
    ctx->pc = 0x1BBE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE64u;
            // 0x1bbe68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BBE6Cu;
    // 0x1bbe6c: 0x0  nop
    ctx->pc = 0x1bbe6cu;
    // NOP
    ctx->pc = 0x1bbe70u;
}
