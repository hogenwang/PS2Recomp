#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC260
// Address: 0x1bc260 - 0x1bc2b0
void sub_001BC260_0x1bc260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC260_0x1bc260");
#endif

    switch (ctx->pc) {
        case 0x1bc284u: goto label_1bc284;
        case 0x1bc294u: goto label_1bc294;
        default: break;
    }

    ctx->pc = 0x1bc260u;

    // 0x1bc260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc26c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc270: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bc270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc274: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bc278: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bc278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bc27c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BC27Cu;
    SET_GPR_U32(ctx, 31, 0x1BC284u);
    ctx->pc = 0x1BC280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC27Cu;
            // 0x1bc280: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC284u; }
        if (ctx->pc != 0x1BC284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC284u; }
        if (ctx->pc != 0x1BC284u) { return; }
    }
    ctx->pc = 0x1BC284u;
label_1bc284:
    // 0x1bc284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc28c: 0xc06f0ac  jal         func_1BC2B0
    ctx->pc = 0x1BC28Cu;
    SET_GPR_U32(ctx, 31, 0x1BC294u);
    ctx->pc = 0x1BC290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC28Cu;
            // 0x1bc290: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC2B0u;
    if (runtime->hasFunction(0x1BC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC294u; }
        if (ctx->pc != 0x1BC294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC2B0_0x1bc2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC294u; }
        if (ctx->pc != 0x1BC294u) { return; }
    }
    ctx->pc = 0x1BC294u;
label_1bc294:
    // 0x1bc294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc29c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc2a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bc2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc2a4: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BC2A4u;
    ctx->pc = 0x1BC2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC2A4u;
            // 0x1bc2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BC2ACu;
    // 0x1bc2ac: 0x0  nop
    ctx->pc = 0x1bc2acu;
    // NOP
    ctx->pc = 0x1bc2b0u;
}
