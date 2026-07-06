#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286A78
// Address: 0x286a78 - 0x286ac0
void sub_00286A78_0x286a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286A78_0x286a78");
#endif

    switch (ctx->pc) {
        case 0x286a8cu: goto label_286a8c;
        case 0x286aa0u: goto label_286aa0;
        default: break;
    }

    ctx->pc = 0x286a78u;

    // 0x286a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286a84: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x286A84u;
    SET_GPR_U32(ctx, 31, 0x286A8Cu);
    ctx->pc = 0x286A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286A84u;
            // 0x286a88: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A8Cu; }
        if (ctx->pc != 0x286A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A8Cu; }
        if (ctx->pc != 0x286A8Cu) { return; }
    }
    ctx->pc = 0x286A8Cu;
label_286a8c:
    // 0x286a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a90: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286A90u;
    {
        const bool branch_taken_0x286a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A90u;
            // 0x286a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a90) {
            ctx->pc = 0x286AACu;
            goto label_286aac;
        }
    }
    ctx->pc = 0x286A98u;
    // 0x286a98: 0xc0a1ab0  jal         func_286AC0
    ctx->pc = 0x286A98u;
    SET_GPR_U32(ctx, 31, 0x286AA0u);
    ctx->pc = 0x286A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286A98u;
            // 0x286a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286AC0u;
    if (runtime->hasFunction(0x286AC0u)) {
        auto targetFn = runtime->lookupFunction(0x286AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286AA0u; }
        if (ctx->pc != 0x286AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286AC0_0x286ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286AA0u; }
        if (ctx->pc != 0x286AA0u) { return; }
    }
    ctx->pc = 0x286AA0u;
label_286aa0:
    // 0x286aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286aa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286aa8: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x286aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
label_286aac:
    // 0x286aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x286AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AB4u;
            // 0x286ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286ABCu;
    // 0x286abc: 0x0  nop
    ctx->pc = 0x286abcu;
    // NOP
    ctx->pc = 0x286ac0u;
}
