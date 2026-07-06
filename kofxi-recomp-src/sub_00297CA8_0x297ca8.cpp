#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297CA8
// Address: 0x297ca8 - 0x297d18
void sub_00297CA8_0x297ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297CA8_0x297ca8");
#endif

    switch (ctx->pc) {
        case 0x297cccu: goto label_297ccc;
        case 0x297ce0u: goto label_297ce0;
        case 0x297cf4u: goto label_297cf4;
        case 0x297d04u: goto label_297d04;
        default: break;
    }

    ctx->pc = 0x297ca8u;

    // 0x297ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x297cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297cbc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297CBCu;
    {
        const bool branch_taken_0x297cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297cbc) {
            ctx->pc = 0x297CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297CBCu;
            // 0x297cc0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297CD0u;
            goto label_297cd0;
        }
    }
    ctx->pc = 0x297CC4u;
    // 0x297cc4: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x297CC4u;
    SET_GPR_U32(ctx, 31, 0x297CCCu);
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CCCu; }
        if (ctx->pc != 0x297CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CCCu; }
        if (ctx->pc != 0x297CCCu) { return; }
    }
    ctx->pc = 0x297CCCu;
label_297ccc:
    // 0x297ccc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x297cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_297cd0:
    // 0x297cd0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297CD0u;
    {
        const bool branch_taken_0x297cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297cd0) {
            ctx->pc = 0x297CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297CD0u;
            // 0x297cd4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297CE4u;
            goto label_297ce4;
        }
    }
    ctx->pc = 0x297CD8u;
    // 0x297cd8: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x297CD8u;
    SET_GPR_U32(ctx, 31, 0x297CE0u);
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CE0u; }
        if (ctx->pc != 0x297CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CE0u; }
        if (ctx->pc != 0x297CE0u) { return; }
    }
    ctx->pc = 0x297CE0u;
label_297ce0:
    // 0x297ce0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x297ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_297ce4:
    // 0x297ce4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297CE4u;
    {
        const bool branch_taken_0x297ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297ce4) {
            ctx->pc = 0x297CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297CE4u;
            // 0x297ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297CF8u;
            goto label_297cf8;
        }
    }
    ctx->pc = 0x297CECu;
    // 0x297cec: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x297CECu;
    SET_GPR_U32(ctx, 31, 0x297CF4u);
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CF4u; }
        if (ctx->pc != 0x297CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CF4u; }
        if (ctx->pc != 0x297CF4u) { return; }
    }
    ctx->pc = 0x297CF4u;
label_297cf4:
    // 0x297cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297cf8:
    // 0x297cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297cfc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x297CFCu;
    SET_GPR_U32(ctx, 31, 0x297D04u);
    ctx->pc = 0x297D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297CFCu;
            // 0x297d00: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D04u; }
        if (ctx->pc != 0x297D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D04u; }
        if (ctx->pc != 0x297D04u) { return; }
    }
    ctx->pc = 0x297D04u;
label_297d04:
    // 0x297d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297d10: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x297D10u;
    ctx->pc = 0x297D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297D10u;
            // 0x297d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x297D18u;
    ctx->pc = 0x297d18u;
}
