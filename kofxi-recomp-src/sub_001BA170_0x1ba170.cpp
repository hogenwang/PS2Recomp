#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA170
// Address: 0x1ba170 - 0x1ba1d8
void sub_001BA170_0x1ba170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA170_0x1ba170");
#endif

    switch (ctx->pc) {
        case 0x1ba188u: goto label_1ba188;
        case 0x1ba1a0u: goto label_1ba1a0;
        case 0x1ba1b4u: goto label_1ba1b4;
        case 0x1ba1bcu: goto label_1ba1bc;
        case 0x1ba1c4u: goto label_1ba1c4;
        default: break;
    }

    ctx->pc = 0x1ba170u;

    // 0x1ba170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba174: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA174u;
    {
        const bool branch_taken_0x1ba174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA174u;
            // 0x1ba178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba174) {
            ctx->pc = 0x1BA190u;
            goto label_1ba190;
        }
    }
    ctx->pc = 0x1BA17Cu;
    // 0x1ba17c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ba180: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BA180u;
    SET_GPR_U32(ctx, 31, 0x1BA188u);
    ctx->pc = 0x1BA184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA180u;
            // 0x1ba184: 0x24848358  addiu       $a0, $a0, -0x7CA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA188u; }
        if (ctx->pc != 0x1BA188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA188u; }
        if (ctx->pc != 0x1BA188u) { return; }
    }
    ctx->pc = 0x1BA188u;
label_1ba188:
    // 0x1ba188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA188u;
    {
        const bool branch_taken_0x1ba188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA188u;
            // 0x1ba18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba188) {
            ctx->pc = 0x1BA194u;
            goto label_1ba194;
        }
    }
    ctx->pc = 0x1BA190u;
label_1ba190:
    // 0x1ba190: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x1ba190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
label_1ba194:
    // 0x1ba194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba198: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA198u;
            // 0x1ba19c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA1A0u;
label_1ba1a0:
    // 0x1ba1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba1a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ba1ac: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA1ACu;
    SET_GPR_U32(ctx, 31, 0x1BA1B4u);
    ctx->pc = 0x1BA1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1ACu;
            // 0x1ba1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1B4u; }
        if (ctx->pc != 0x1BA1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1B4u; }
        if (ctx->pc != 0x1BA1B4u) { return; }
    }
    ctx->pc = 0x1BA1B4u;
label_1ba1b4:
    // 0x1ba1b4: 0xc06e876  jal         func_1BA1D8
    ctx->pc = 0x1BA1B4u;
    SET_GPR_U32(ctx, 31, 0x1BA1BCu);
    ctx->pc = 0x1BA1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1B4u;
            // 0x1ba1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA1D8u;
    if (runtime->hasFunction(0x1BA1D8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1BCu; }
        if (ctx->pc != 0x1BA1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA1D8_0x1ba1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1BCu; }
        if (ctx->pc != 0x1BA1BCu) { return; }
    }
    ctx->pc = 0x1BA1BCu;
label_1ba1bc:
    // 0x1ba1bc: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BA1BCu;
    SET_GPR_U32(ctx, 31, 0x1BA1C4u);
    ctx->pc = 0x1BA1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1BCu;
            // 0x1ba1c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1C4u; }
        if (ctx->pc != 0x1BA1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1C4u; }
        if (ctx->pc != 0x1BA1C4u) { return; }
    }
    ctx->pc = 0x1BA1C4u;
label_1ba1c4:
    // 0x1ba1c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba1c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1D0u;
            // 0x1ba1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA1D8u;
    ctx->pc = 0x1ba1d8u;
}
