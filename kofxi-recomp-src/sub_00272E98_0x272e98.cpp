#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00272E98
// Address: 0x272e98 - 0x272ef8
void sub_00272E98_0x272e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272E98_0x272e98");
#endif

    switch (ctx->pc) {
        case 0x272ec8u: goto label_272ec8;
        case 0x272edcu: goto label_272edc;
        default: break;
    }

    ctx->pc = 0x272e98u;

    // 0x272e98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x272e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x272e9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x272e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x272ea0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x272ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ea4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x272ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x272ea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x272ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x272eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x272eb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x272eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eb8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x272eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x272ebc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x272ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x272ec0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x272EC0u;
    SET_GPR_U32(ctx, 31, 0x272EC8u);
    ctx->pc = 0x272EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272EC0u;
            // 0x272ec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EC8u; }
        if (ctx->pc != 0x272EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EC8u; }
        if (ctx->pc != 0x272EC8u) { return; }
    }
    ctx->pc = 0x272EC8u;
label_272ec8:
    // 0x272ec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ecc: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x272eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x272ed0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x272ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x272ed4: 0xc043318  jal         func_10CC60
    ctx->pc = 0x272ED4u;
    SET_GPR_U32(ctx, 31, 0x272EDCu);
    ctx->pc = 0x272ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272ED4u;
            // 0x272ed8: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EDCu; }
        if (ctx->pc != 0x272EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EDCu; }
        if (ctx->pc != 0x272EDCu) { return; }
    }
    ctx->pc = 0x272EDCu;
label_272edc:
    // 0x272edc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x272edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272ee0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x272ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x272ee4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x272ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272ee8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x272ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x272eec: 0x3e00008  jr          $ra
    ctx->pc = 0x272EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272EECu;
            // 0x272ef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272EF4u;
    // 0x272ef4: 0x0  nop
    ctx->pc = 0x272ef4u;
    // NOP
    ctx->pc = 0x272ef8u;
}
