#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC368
// Address: 0x1ec368 - 0x1ec3e8
void sub_001EC368_0x1ec368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC368_0x1ec368");
#endif

    switch (ctx->pc) {
        case 0x1ec388u: goto label_1ec388;
        case 0x1ec3bcu: goto label_1ec3bc;
        case 0x1ec3c4u: goto label_1ec3c4;
        default: break;
    }

    ctx->pc = 0x1ec368u;

    // 0x1ec368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec36c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ec36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ec370: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ec370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec374: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ec374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ec378: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ec378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ec37c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ec37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ec380: 0xc076244  jal         func_1D8910
    ctx->pc = 0x1EC380u;
    SET_GPR_U32(ctx, 31, 0x1EC388u);
    ctx->pc = 0x1EC384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC380u;
            // 0x1ec384: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8910u;
    if (runtime->hasFunction(0x1D8910u)) {
        auto targetFn = runtime->lookupFunction(0x1D8910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC388u; }
        if (ctx->pc != 0x1EC388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8910_0x1d8910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC388u; }
        if (ctx->pc != 0x1EC388u) { return; }
    }
    ctx->pc = 0x1EC388u;
label_1ec388:
    // 0x1ec388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec38c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1ec38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ec390: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ec390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ec394: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ec394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec398: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x1ec398u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x1ec39c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ec39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ec3a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3a4: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1ec3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ec3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3ac: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC3ACu;
    {
        const bool branch_taken_0x1ec3ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3ACu;
            // 0x1ec3b0: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3ac) {
            ctx->pc = 0x1EC3CCu;
            goto label_1ec3cc;
        }
    }
    ctx->pc = 0x1EC3B4u;
    // 0x1ec3b4: 0xc075982  jal         func_1D6608
    ctx->pc = 0x1EC3B4u;
    SET_GPR_U32(ctx, 31, 0x1EC3BCu);
    ctx->pc = 0x1D6608u;
    if (runtime->hasFunction(0x1D6608u)) {
        auto targetFn = runtime->lookupFunction(0x1D6608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3BCu; }
        if (ctx->pc != 0x1EC3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6608_0x1d6608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3BCu; }
        if (ctx->pc != 0x1EC3BCu) { return; }
    }
    ctx->pc = 0x1EC3BCu;
label_1ec3bc:
    // 0x1ec3bc: 0xc0762ac  jal         func_1D8AB0
    ctx->pc = 0x1EC3BCu;
    SET_GPR_U32(ctx, 31, 0x1EC3C4u);
    ctx->pc = 0x1EC3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3BCu;
            // 0x1ec3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AB0u;
    if (runtime->hasFunction(0x1D8AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3C4u; }
        if (ctx->pc != 0x1EC3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AB0_0x1d8ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3C4u; }
        if (ctx->pc != 0x1EC3C4u) { return; }
    }
    ctx->pc = 0x1EC3C4u;
label_1ec3c4:
    // 0x1ec3c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ec3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec3c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ec3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1ec3cc:
    // 0x1ec3cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ec3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec3d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ec3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec3d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ec3d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec3d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ec3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3DCu;
            // 0x1ec3e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC3E4u;
    // 0x1ec3e4: 0x0  nop
    ctx->pc = 0x1ec3e4u;
    // NOP
    ctx->pc = 0x1ec3e8u;
}
