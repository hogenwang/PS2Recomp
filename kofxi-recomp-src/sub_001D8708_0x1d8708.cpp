#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8708
// Address: 0x1d8708 - 0x1d8768
void sub_001D8708_0x1d8708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8708_0x1d8708");
#endif

    switch (ctx->pc) {
        case 0x1d8718u: goto label_1d8718;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8750u: goto label_1d8750;
        default: break;
    }

    ctx->pc = 0x1d8708u;

    // 0x1d8708: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d8708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d870c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d870cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d8710: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8710u;
            // 0x1d8714: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8718u;
label_1d8718:
    // 0x1d8718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d871c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d871cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8724: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d8724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d872c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D872Cu;
    {
        const bool branch_taken_0x1d872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D872Cu;
            // 0x1d8730: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d872c) {
            ctx->pc = 0x1D8748u;
            goto label_1d8748;
        }
    }
    ctx->pc = 0x1D8734u;
    // 0x1d8734: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8738: 0xc0761da  jal         func_1D8768
    ctx->pc = 0x1D8738u;
    SET_GPR_U32(ctx, 31, 0x1D8740u);
    ctx->pc = 0x1D873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8738u;
            // 0x1d873c: 0x8c44e6a8  lw          $a0, -0x1958($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960808)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8768u;
    if (runtime->hasFunction(0x1D8768u)) {
        auto targetFn = runtime->lookupFunction(0x1D8768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8740u; }
        if (ctx->pc != 0x1D8740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8768_0x1d8768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8740u; }
        if (ctx->pc != 0x1D8740u) { return; }
    }
    ctx->pc = 0x1D8740u;
label_1d8740:
    // 0x1d8740: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8740u;
    {
        const bool branch_taken_0x1d8740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8740u;
            // 0x1d8744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8740) {
            ctx->pc = 0x1D8754u;
            goto label_1d8754;
        }
    }
    ctx->pc = 0x1D8748u;
label_1d8748:
    // 0x1d8748: 0xc0761da  jal         func_1D8768
    ctx->pc = 0x1D8748u;
    SET_GPR_U32(ctx, 31, 0x1D8750u);
    ctx->pc = 0x1D8768u;
    if (runtime->hasFunction(0x1D8768u)) {
        auto targetFn = runtime->lookupFunction(0x1D8768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8750u; }
        if (ctx->pc != 0x1D8750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8768_0x1d8768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8750u; }
        if (ctx->pc != 0x1D8750u) { return; }
    }
    ctx->pc = 0x1D8750u;
label_1d8750:
    // 0x1d8750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8754:
    // 0x1d8754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8758: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d875c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D875Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D875Cu;
            // 0x1d8760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8764u;
    // 0x1d8764: 0x0  nop
    ctx->pc = 0x1d8764u;
    // NOP
    ctx->pc = 0x1d8768u;
}
