#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002857A8
// Address: 0x2857a8 - 0x2857e8
void sub_002857A8_0x2857a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002857A8_0x2857a8");
#endif

    switch (ctx->pc) {
        case 0x2857c0u: goto label_2857c0;
        case 0x2857ccu: goto label_2857cc;
        case 0x2857d4u: goto label_2857d4;
        default: break;
    }

    ctx->pc = 0x2857a8u;

    // 0x2857a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2857a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2857ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2857acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2857b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2857b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2857b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2857b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2857b8: 0xc0a13b2  jal         func_284EC8
    ctx->pc = 0x2857B8u;
    SET_GPR_U32(ctx, 31, 0x2857C0u);
    ctx->pc = 0x2857BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2857B8u;
            // 0x2857bc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EC8u;
    if (runtime->hasFunction(0x284EC8u)) {
        auto targetFn = runtime->lookupFunction(0x284EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857C0u; }
        if (ctx->pc != 0x2857C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EC8_0x284ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857C0u; }
        if (ctx->pc != 0x2857C0u) { return; }
    }
    ctx->pc = 0x2857C0u;
label_2857c0:
    // 0x2857c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2857c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2857c4: 0xc0a1394  jal         func_284E50
    ctx->pc = 0x2857C4u;
    SET_GPR_U32(ctx, 31, 0x2857CCu);
    ctx->pc = 0x2857C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2857C4u;
            // 0x2857c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284E50u;
    if (runtime->hasFunction(0x284E50u)) {
        auto targetFn = runtime->lookupFunction(0x284E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857CCu; }
        if (ctx->pc != 0x2857CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284E50_0x284e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857CCu; }
        if (ctx->pc != 0x2857CCu) { return; }
    }
    ctx->pc = 0x2857CCu;
label_2857cc:
    // 0x2857cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2857ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2857d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2857d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2857d4:
    // 0x2857d4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2857d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2857d8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2857d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2857dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2857dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2857e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2857E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2857E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857E0u;
            // 0x2857e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2857E8u;
    ctx->pc = 0x2857e8u;
}
