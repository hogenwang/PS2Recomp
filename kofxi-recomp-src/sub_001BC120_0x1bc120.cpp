#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC120
// Address: 0x1bc120 - 0x1bc188
void sub_001BC120_0x1bc120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC120_0x1bc120");
#endif

    switch (ctx->pc) {
        case 0x1bc138u: goto label_1bc138;
        case 0x1bc15cu: goto label_1bc15c;
        case 0x1bc16cu: goto label_1bc16c;
        default: break;
    }

    ctx->pc = 0x1bc120u;

    // 0x1bc120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc124: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x1bc124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x1bc128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc130: 0x806f062  j           func_1BC188
    ctx->pc = 0x1BC130u;
    ctx->pc = 0x1BC134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC130u;
            // 0x1bc134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC188u;
    if (runtime->hasFunction(0x1BC188u)) {
        auto targetFn = runtime->lookupFunction(0x1BC188u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BC188_0x1bc188(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC138u;
label_1bc138:
    // 0x1bc138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc148: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bc148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc14c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bc150: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bc150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bc154: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BC154u;
    SET_GPR_U32(ctx, 31, 0x1BC15Cu);
    ctx->pc = 0x1BC158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC154u;
            // 0x1bc158: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC15Cu; }
        if (ctx->pc != 0x1BC15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC15Cu; }
        if (ctx->pc != 0x1BC15Cu) { return; }
    }
    ctx->pc = 0x1BC15Cu;
label_1bc15c:
    // 0x1bc15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc164: 0xc06f062  jal         func_1BC188
    ctx->pc = 0x1BC164u;
    SET_GPR_U32(ctx, 31, 0x1BC16Cu);
    ctx->pc = 0x1BC168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC164u;
            // 0x1bc168: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC188u;
    if (runtime->hasFunction(0x1BC188u)) {
        auto targetFn = runtime->lookupFunction(0x1BC188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC16Cu; }
        if (ctx->pc != 0x1BC16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC188_0x1bc188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC16Cu; }
        if (ctx->pc != 0x1BC16Cu) { return; }
    }
    ctx->pc = 0x1BC16Cu;
label_1bc16c:
    // 0x1bc16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc178: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bc178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc17c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BC17Cu;
    ctx->pc = 0x1BC180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC17Cu;
            // 0x1bc180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC184u;
    // 0x1bc184: 0x0  nop
    ctx->pc = 0x1bc184u;
    // NOP
    ctx->pc = 0x1bc188u;
}
