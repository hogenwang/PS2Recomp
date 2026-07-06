#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1758
// Address: 0x1b1758 - 0x1b17b8
void sub_001B1758_0x1b1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1758_0x1b1758");
#endif

    switch (ctx->pc) {
        case 0x1b1770u: goto label_1b1770;
        case 0x1b178cu: goto label_1b178c;
        case 0x1b1798u: goto label_1b1798;
        case 0x1b17a0u: goto label_1b17a0;
        default: break;
    }

    ctx->pc = 0x1b1758u;

    // 0x1b1758: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b1758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b175c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b175cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1764: 0x8c63fc98  lw          $v1, -0x368($v1)
    ctx->pc = 0x1b1764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966424)));
    // 0x1b1768: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1768u;
            // 0x1b176c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1770u;
label_1b1770:
    // 0x1b1770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b177c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1784: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B1784u;
    SET_GPR_U32(ctx, 31, 0x1B178Cu);
    ctx->pc = 0x1B1788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1784u;
            // 0x1b1788: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B178Cu; }
        if (ctx->pc != 0x1B178Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B178Cu; }
        if (ctx->pc != 0x1B178Cu) { return; }
    }
    ctx->pc = 0x1B178Cu;
label_1b178c:
    // 0x1b178c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1790: 0xc06c5ee  jal         func_1B17B8
    ctx->pc = 0x1B1790u;
    SET_GPR_U32(ctx, 31, 0x1B1798u);
    ctx->pc = 0x1B1794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1790u;
            // 0x1b1794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B17B8u;
    if (runtime->hasFunction(0x1B17B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B17B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1798u; }
        if (ctx->pc != 0x1B1798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B17B8_0x1b17b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1798u; }
        if (ctx->pc != 0x1B1798u) { return; }
    }
    ctx->pc = 0x1B1798u;
label_1b1798:
    // 0x1b1798: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1798u;
    SET_GPR_U32(ctx, 31, 0x1B17A0u);
    ctx->pc = 0x1B179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1798u;
            // 0x1b179c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17A0u; }
        if (ctx->pc != 0x1B17A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17A0u; }
        if (ctx->pc != 0x1B17A0u) { return; }
    }
    ctx->pc = 0x1B17A0u;
label_1b17a0:
    // 0x1b17a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b17a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b17a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b17a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b17a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b17ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b17acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b17b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B17B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B17B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17B0u;
            // 0x1b17b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B17B8u;
    ctx->pc = 0x1b17b8u;
}
