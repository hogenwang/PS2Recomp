#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166240
// Address: 0x166240 - 0x1662c0
void sub_00166240_0x166240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166240_0x166240");
#endif

    switch (ctx->pc) {
        case 0x166284u: goto label_166284;
        case 0x166294u: goto label_166294;
        case 0x1662a4u: goto label_1662a4;
        case 0x1662b4u: goto label_1662b4;
        default: break;
    }

    ctx->pc = 0x166240u;

    // 0x166240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166244: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x166244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x166248: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16624c: 0x10650017  beq         $v1, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x16624Cu;
    {
        const bool branch_taken_0x16624c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x166250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16624Cu;
            // 0x166250: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16624c) {
            ctx->pc = 0x1662ACu;
            goto label_1662ac;
        }
    }
    ctx->pc = 0x166254u;
    // 0x166254: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x166254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166258: 0x50650010  beql        $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x166258u;
    {
        const bool branch_taken_0x166258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x166258) {
            ctx->pc = 0x16625Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166258u;
            // 0x16625c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16629Cu;
            goto label_16629c;
        }
    }
    ctx->pc = 0x166260u;
    // 0x166260: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166264: 0x50650009  beql        $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x166264u;
    {
        const bool branch_taken_0x166264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x166264) {
            ctx->pc = 0x166268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166264u;
            // 0x166268: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16628Cu;
            goto label_16628c;
        }
    }
    ctx->pc = 0x16626Cu;
    // 0x16626c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16626Cu;
    {
        const bool branch_taken_0x16626c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16626c) {
            ctx->pc = 0x166270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16626Cu;
            // 0x166270: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16627Cu;
            goto label_16627c;
        }
    }
    ctx->pc = 0x166274u;
    // 0x166274: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x166274u;
    {
        const bool branch_taken_0x166274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166274u;
            // 0x166278: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166274) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x16627Cu;
label_16627c:
    // 0x16627c: 0xc063768  jal         func_18DDA0
    ctx->pc = 0x16627Cu;
    SET_GPR_U32(ctx, 31, 0x166284u);
    ctx->pc = 0x166280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16627Cu;
            // 0x166280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DDA0u;
    if (runtime->hasFunction(0x18DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166284u; }
        if (ctx->pc != 0x166284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDA0_0x18dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166284u; }
        if (ctx->pc != 0x166284u) { return; }
    }
    ctx->pc = 0x166284u;
label_166284:
    // 0x166284: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x166284u;
    {
        const bool branch_taken_0x166284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166284) {
            ctx->pc = 0x1662B4u;
            goto label_1662b4;
        }
    }
    ctx->pc = 0x16628Cu;
label_16628c:
    // 0x16628c: 0xc063768  jal         func_18DDA0
    ctx->pc = 0x16628Cu;
    SET_GPR_U32(ctx, 31, 0x166294u);
    ctx->pc = 0x18DDA0u;
    if (runtime->hasFunction(0x18DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166294u; }
        if (ctx->pc != 0x166294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDA0_0x18dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166294u; }
        if (ctx->pc != 0x166294u) { return; }
    }
    ctx->pc = 0x166294u;
label_166294:
    // 0x166294: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x166294u;
    {
        const bool branch_taken_0x166294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166294) {
            ctx->pc = 0x1662B4u;
            goto label_1662b4;
        }
    }
    ctx->pc = 0x16629Cu;
label_16629c:
    // 0x16629c: 0xc063768  jal         func_18DDA0
    ctx->pc = 0x16629Cu;
    SET_GPR_U32(ctx, 31, 0x1662A4u);
    ctx->pc = 0x18DDA0u;
    if (runtime->hasFunction(0x18DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662A4u; }
        if (ctx->pc != 0x1662A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDA0_0x18dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662A4u; }
        if (ctx->pc != 0x1662A4u) { return; }
    }
    ctx->pc = 0x1662A4u;
label_1662a4:
    // 0x1662a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1662A4u;
    {
        const bool branch_taken_0x1662a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1662a4) {
            ctx->pc = 0x1662B4u;
            goto label_1662b4;
        }
    }
    ctx->pc = 0x1662ACu;
label_1662ac:
    // 0x1662ac: 0xc063768  jal         func_18DDA0
    ctx->pc = 0x1662ACu;
    SET_GPR_U32(ctx, 31, 0x1662B4u);
    ctx->pc = 0x1662B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662ACu;
            // 0x1662b0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DDA0u;
    if (runtime->hasFunction(0x18DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662B4u; }
        if (ctx->pc != 0x1662B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDA0_0x18dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662B4u; }
        if (ctx->pc != 0x1662B4u) { return; }
    }
    ctx->pc = 0x1662B4u;
label_1662b4:
    // 0x1662b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1662b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1662b8:
    // 0x1662b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1662B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1662BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1662B8u;
            // 0x1662bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1662C0u;
    ctx->pc = 0x1662c0u;
}
