#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286C30
// Address: 0x286c30 - 0x286c70
void sub_00286C30_0x286c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286C30_0x286c30");
#endif

    switch (ctx->pc) {
        case 0x286c44u: goto label_286c44;
        case 0x286c5cu: goto label_286c5c;
        default: break;
    }

    ctx->pc = 0x286c30u;

    // 0x286c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286c3c: 0xc0a1a8c  jal         func_286A30
    ctx->pc = 0x286C3Cu;
    SET_GPR_U32(ctx, 31, 0x286C44u);
    ctx->pc = 0x286C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286C3Cu;
            // 0x286c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A30u;
    if (runtime->hasFunction(0x286A30u)) {
        auto targetFn = runtime->lookupFunction(0x286A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C44u; }
        if (ctx->pc != 0x286C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A30_0x286a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C44u; }
        if (ctx->pc != 0x286C44u) { return; }
    }
    ctx->pc = 0x286C44u;
label_286c44:
    // 0x286c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286C44u;
    {
        const bool branch_taken_0x286c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C44u;
            // 0x286c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c44) {
            ctx->pc = 0x286C54u;
            goto label_286c54;
        }
    }
    ctx->pc = 0x286C4Cu;
    // 0x286c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286C4Cu;
    {
        const bool branch_taken_0x286c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C4Cu;
            // 0x286c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c4c) {
            ctx->pc = 0x286C5Cu;
            goto label_286c5c;
        }
    }
    ctx->pc = 0x286C54u;
label_286c54:
    // 0x286c54: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x286C54u;
    SET_GPR_U32(ctx, 31, 0x286C5Cu);
    ctx->pc = 0x286C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286C54u;
            // 0x286c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (runtime->hasFunction(0x286C70u)) {
        auto targetFn = runtime->lookupFunction(0x286C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C5Cu; }
        if (ctx->pc != 0x286C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C70_0x286c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C5Cu; }
        if (ctx->pc != 0x286C5Cu) { return; }
    }
    ctx->pc = 0x286C5Cu;
label_286c5c:
    // 0x286c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286c64: 0x3e00008  jr          $ra
    ctx->pc = 0x286C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C64u;
            // 0x286c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286C6Cu;
    // 0x286c6c: 0x0  nop
    ctx->pc = 0x286c6cu;
    // NOP
    ctx->pc = 0x286c70u;
}
