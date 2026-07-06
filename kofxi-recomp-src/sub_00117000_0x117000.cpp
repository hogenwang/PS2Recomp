#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117000
// Address: 0x117000 - 0x117048
void sub_00117000_0x117000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117000_0x117000");
#endif

    switch (ctx->pc) {
        case 0x117010u: goto label_117010;
        case 0x117034u: goto label_117034;
        default: break;
    }

    ctx->pc = 0x117000u;

    // 0x117000: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x117000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x117004: 0xc  syscall     0
    ctx->pc = 0x117004u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x117008: 0x3e00008  jr          $ra
    ctx->pc = 0x117008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117010u;
label_117010:
    // 0x117010: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x117010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x117014: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117018: 0x8c458db8  lw          $a1, -0x7248($v0)
    ctx->pc = 0x117018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938040)));
    // 0x11701c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11701cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x117020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117028: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x117028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11702c: 0xc045bde  jal         func_116F78
    ctx->pc = 0x11702Cu;
    SET_GPR_U32(ctx, 31, 0x117034u);
    ctx->pc = 0x117030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11702Cu;
            // 0x117030: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116F78u;
    if (runtime->hasFunction(0x116F78u)) {
        auto targetFn = runtime->lookupFunction(0x116F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117034u; }
        if (ctx->pc != 0x117034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116F78_0x116f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117034u; }
        if (ctx->pc != 0x117034u) { return; }
    }
    ctx->pc = 0x117034u;
label_117034:
    // 0x117034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11703c: 0x3e00008  jr          $ra
    ctx->pc = 0x11703Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11703Cu;
            // 0x117040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117044u;
    // 0x117044: 0x0  nop
    ctx->pc = 0x117044u;
    // NOP
    ctx->pc = 0x117048u;
}
