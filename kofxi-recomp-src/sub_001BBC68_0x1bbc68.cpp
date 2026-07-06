#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBC68
// Address: 0x1bbc68 - 0x1bbcc8
void sub_001BBC68_0x1bbc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC68_0x1bbc68");
#endif

    switch (ctx->pc) {
        case 0x1bbc88u: goto label_1bbc88;
        case 0x1bbc98u: goto label_1bbc98;
        case 0x1bbcacu: goto label_1bbcac;
        case 0x1bbcb4u: goto label_1bbcb4;
        default: break;
    }

    ctx->pc = 0x1bbc68u;

    // 0x1bbc68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbc6c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBC6Cu;
    {
        const bool branch_taken_0x1bbc6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC6Cu;
            // 0x1bbc70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc6c) {
            ctx->pc = 0x1BBC88u;
            goto label_1bbc88;
        }
    }
    ctx->pc = 0x1BBC74u;
    // 0x1bbc74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bbc78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc7c: 0x24848788  addiu       $a0, $a0, -0x7878
    ctx->pc = 0x1bbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936456));
    // 0x1bbc80: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BBC80u;
    ctx->pc = 0x1BBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC80u;
            // 0x1bbc84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BBC88u;
label_1bbc88:
    // 0x1bbc88: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc90: 0x806d840  j           func_1B6100
    ctx->pc = 0x1BBC90u;
    ctx->pc = 0x1BBC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC90u;
            // 0x1bbc94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6100u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BBC98u;
label_1bbc98:
    // 0x1bbc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbc9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbca0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbca4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBCA4u;
    SET_GPR_U32(ctx, 31, 0x1BBCACu);
    ctx->pc = 0x1BBCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCA4u;
            // 0x1bbca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCACu; }
        if (ctx->pc != 0x1BBCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCACu; }
        if (ctx->pc != 0x1BBCACu) { return; }
    }
    ctx->pc = 0x1BBCACu;
label_1bbcac:
    // 0x1bbcac: 0xc06ef32  jal         func_1BBCC8
    ctx->pc = 0x1BBCACu;
    SET_GPR_U32(ctx, 31, 0x1BBCB4u);
    ctx->pc = 0x1BBCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCACu;
            // 0x1bbcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCC8u;
    if (runtime->hasFunction(0x1BBCC8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCB4u; }
        if (ctx->pc != 0x1BBCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCC8_0x1bbcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCB4u; }
        if (ctx->pc != 0x1BBCB4u) { return; }
    }
    ctx->pc = 0x1BBCB4u;
label_1bbcb4:
    // 0x1bbcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbcb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbcbc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BBCBCu;
    ctx->pc = 0x1BBCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCBCu;
            // 0x1bbcc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BBCC4u;
    // 0x1bbcc4: 0x0  nop
    ctx->pc = 0x1bbcc4u;
    // NOP
    ctx->pc = 0x1bbcc8u;
}
