#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1F28
// Address: 0x2a1f28 - 0x2a1f90
void sub_002A1F28_0x2a1f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1F28_0x2a1f28");
#endif

    switch (ctx->pc) {
        case 0x2a1f54u: goto label_2a1f54;
        case 0x2a1f70u: goto label_2a1f70;
        default: break;
    }

    ctx->pc = 0x2a1f28u;

    // 0x2a1f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a1f2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a1f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a1f30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a1f34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a1f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a1f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1f3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a1f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1f44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a1f4c: 0xc0aa5e4  jal         func_2A9790
    ctx->pc = 0x2A1F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F54u);
    ctx->pc = 0x2A1F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F4Cu;
            // 0x2a1f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9790u;
    if (runtime->hasFunction(0x2A9790u)) {
        auto targetFn = runtime->lookupFunction(0x2A9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F54u; }
        if (ctx->pc != 0x2A1F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9790_0x2a9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F54u; }
        if (ctx->pc != 0x2A1F54u) { return; }
    }
    ctx->pc = 0x2A1F54u;
label_2a1f54:
    // 0x2a1f54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a1f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f5c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2a1f5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f60: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a1f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f68: 0xc0a7190  jal         func_29C640
    ctx->pc = 0x2A1F68u;
    SET_GPR_U32(ctx, 31, 0x2A1F70u);
    ctx->pc = 0x2A1F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F68u;
            // 0x2a1f6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C640u;
    if (runtime->hasFunction(0x29C640u)) {
        auto targetFn = runtime->lookupFunction(0x29C640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F70u; }
        if (ctx->pc != 0x2A1F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C640_0x29c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1F70u; }
        if (ctx->pc != 0x2A1F70u) { return; }
    }
    ctx->pc = 0x2A1F70u;
label_2a1f70:
    // 0x2a1f70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1f74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a1f74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1f78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1f7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a1f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1f84: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1F84u;
            // 0x2a1f88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1F8Cu;
    // 0x2a1f8c: 0x0  nop
    ctx->pc = 0x2a1f8cu;
    // NOP
    ctx->pc = 0x2a1f90u;
}
