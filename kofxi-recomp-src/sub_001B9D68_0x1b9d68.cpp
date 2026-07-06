#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9D68
// Address: 0x1b9d68 - 0x1b9db8
void sub_001B9D68_0x1b9d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9D68_0x1b9d68");
#endif

    switch (ctx->pc) {
        case 0x1b9d8cu: goto label_1b9d8c;
        case 0x1b9d9cu: goto label_1b9d9c;
        default: break;
    }

    ctx->pc = 0x1b9d68u;

    // 0x1b9d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9d78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9d80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b9d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b9d84: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B9D84u;
    SET_GPR_U32(ctx, 31, 0x1B9D8Cu);
    ctx->pc = 0x1B9D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D84u;
            // 0x1b9d88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D8Cu; }
        if (ctx->pc != 0x1B9D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D8Cu; }
        if (ctx->pc != 0x1B9D8Cu) { return; }
    }
    ctx->pc = 0x1B9D8Cu;
label_1b9d8c:
    // 0x1b9d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d94: 0xc06e76e  jal         func_1B9DB8
    ctx->pc = 0x1B9D94u;
    SET_GPR_U32(ctx, 31, 0x1B9D9Cu);
    ctx->pc = 0x1B9D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D94u;
            // 0x1b9d98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9DB8u;
    if (runtime->hasFunction(0x1B9DB8u)) {
        auto targetFn = runtime->lookupFunction(0x1B9DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D9Cu; }
        if (ctx->pc != 0x1B9D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9DB8_0x1b9db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D9Cu; }
        if (ctx->pc != 0x1B9D9Cu) { return; }
    }
    ctx->pc = 0x1B9D9Cu;
label_1b9d9c:
    // 0x1b9d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9da0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9da4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9da8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b9da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9dac: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B9DACu;
    ctx->pc = 0x1B9DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9DACu;
            // 0x1b9db0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9DB4u;
    // 0x1b9db4: 0x0  nop
    ctx->pc = 0x1b9db4u;
    // NOP
    ctx->pc = 0x1b9db8u;
}
