#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC020
// Address: 0x1ec020 - 0x1ec0b8
void sub_001EC020_0x1ec020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC020_0x1ec020");
#endif

    switch (ctx->pc) {
        case 0x1ec048u: goto label_1ec048;
        case 0x1ec06cu: goto label_1ec06c;
        case 0x1ec08cu: goto label_1ec08c;
        case 0x1ec094u: goto label_1ec094;
        default: break;
    }

    ctx->pc = 0x1ec020u;

    // 0x1ec020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ec020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ec024: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ec024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ec028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec02c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ec02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ec030: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ec030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec034: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ec034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ec038: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ec038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ec03c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ec03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ec040: 0xc076244  jal         func_1D8910
    ctx->pc = 0x1EC040u;
    SET_GPR_U32(ctx, 31, 0x1EC048u);
    ctx->pc = 0x1EC044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC040u;
            // 0x1ec044: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8910u;
    if (runtime->hasFunction(0x1D8910u)) {
        auto targetFn = runtime->lookupFunction(0x1D8910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC048u; }
        if (ctx->pc != 0x1EC048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8910_0x1d8910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC048u; }
        if (ctx->pc != 0x1EC048u) { return; }
    }
    ctx->pc = 0x1EC048u;
label_1ec048:
    // 0x1ec048: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ec048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec04c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1ec04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ec050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec054: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ec054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec05c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1EC05Cu;
    {
        const bool branch_taken_0x1ec05c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC05Cu;
            // 0x1ec060: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec05c) {
            ctx->pc = 0x1EC09Cu;
            goto label_1ec09c;
        }
    }
    ctx->pc = 0x1EC064u;
    // 0x1ec064: 0xc075982  jal         func_1D6608
    ctx->pc = 0x1EC064u;
    SET_GPR_U32(ctx, 31, 0x1EC06Cu);
    ctx->pc = 0x1D6608u;
    if (runtime->hasFunction(0x1D6608u)) {
        auto targetFn = runtime->lookupFunction(0x1D6608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC06Cu; }
        if (ctx->pc != 0x1EC06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6608_0x1d6608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC06Cu; }
        if (ctx->pc != 0x1EC06Cu) { return; }
    }
    ctx->pc = 0x1EC06Cu;
label_1ec06c:
    // 0x1ec06c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ec070: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ec070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ec074: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ec074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec078: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ec078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ec07c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC07Cu;
    {
        const bool branch_taken_0x1ec07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC07Cu;
            // 0x1ec080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec07c) {
            ctx->pc = 0x1EC09Cu;
            goto label_1ec09c;
        }
    }
    ctx->pc = 0x1EC084u;
    // 0x1ec084: 0xc0760d8  jal         func_1D8360
    ctx->pc = 0x1EC084u;
    SET_GPR_U32(ctx, 31, 0x1EC08Cu);
    ctx->pc = 0x1D8360u;
    if (runtime->hasFunction(0x1D8360u)) {
        auto targetFn = runtime->lookupFunction(0x1D8360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC08Cu; }
        if (ctx->pc != 0x1EC08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8360_0x1d8360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC08Cu; }
        if (ctx->pc != 0x1EC08Cu) { return; }
    }
    ctx->pc = 0x1EC08Cu;
label_1ec08c:
    // 0x1ec08c: 0xc0762ac  jal         func_1D8AB0
    ctx->pc = 0x1EC08Cu;
    SET_GPR_U32(ctx, 31, 0x1EC094u);
    ctx->pc = 0x1EC090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC08Cu;
            // 0x1ec090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AB0u;
    if (runtime->hasFunction(0x1D8AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC094u; }
        if (ctx->pc != 0x1EC094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AB0_0x1d8ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC094u; }
        if (ctx->pc != 0x1EC094u) { return; }
    }
    ctx->pc = 0x1EC094u;
label_1ec094:
    // 0x1ec094: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ec094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ec098: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ec098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ec09c:
    // 0x1ec09c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ec09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec0a0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ec0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec0a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ec0a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec0a8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ec0a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ec0ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ec0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0B0u;
            // 0x1ec0b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC0B8u;
    ctx->pc = 0x1ec0b8u;
}
