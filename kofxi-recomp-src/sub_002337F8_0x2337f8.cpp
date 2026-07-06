#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002337F8
// Address: 0x2337f8 - 0x233860
void sub_002337F8_0x2337f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002337F8_0x2337f8");
#endif

    switch (ctx->pc) {
        case 0x233810u: goto label_233810;
        case 0x233828u: goto label_233828;
        case 0x233838u: goto label_233838;
        default: break;
    }

    ctx->pc = 0x2337f8u;

    // 0x2337f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2337f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2337fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2337fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x233804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233808: 0xc098552  jal         func_261548
    ctx->pc = 0x233808u;
    SET_GPR_U32(ctx, 31, 0x233810u);
    ctx->pc = 0x23380Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233808u;
            // 0x23380c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233810u; }
        if (ctx->pc != 0x233810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233810u; }
        if (ctx->pc != 0x233810u) { return; }
    }
    ctx->pc = 0x233810u;
label_233810:
    // 0x233810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233810u;
    {
        const bool branch_taken_0x233810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233810u;
            // 0x233814: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233810) {
            ctx->pc = 0x233820u;
            goto label_233820;
        }
    }
    ctx->pc = 0x233818u;
    // 0x233818: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x233818u;
    {
        const bool branch_taken_0x233818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233818u;
            // 0x23381c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233818) {
            ctx->pc = 0x23384Cu;
            goto label_23384c;
        }
    }
    ctx->pc = 0x233820u;
label_233820:
    // 0x233820: 0xc098552  jal         func_261548
    ctx->pc = 0x233820u;
    SET_GPR_U32(ctx, 31, 0x233828u);
    ctx->pc = 0x233824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233820u;
            // 0x233824: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233828u; }
        if (ctx->pc != 0x233828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233828u; }
        if (ctx->pc != 0x233828u) { return; }
    }
    ctx->pc = 0x233828u;
label_233828:
    // 0x233828: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233828u;
    {
        const bool branch_taken_0x233828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233828u;
            // 0x23382c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233828) {
            ctx->pc = 0x233840u;
            goto label_233840;
        }
    }
    ctx->pc = 0x233830u;
    // 0x233830: 0xc098560  jal         func_261580
    ctx->pc = 0x233830u;
    SET_GPR_U32(ctx, 31, 0x233838u);
    ctx->pc = 0x233834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233830u;
            // 0x233834: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233838u; }
        if (ctx->pc != 0x233838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233838u; }
        if (ctx->pc != 0x233838u) { return; }
    }
    ctx->pc = 0x233838u;
label_233838:
    // 0x233838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x233838u;
    {
        const bool branch_taken_0x233838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23383Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233838u;
            // 0x23383c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233838) {
            ctx->pc = 0x23384Cu;
            goto label_23384c;
        }
    }
    ctx->pc = 0x233840u;
label_233840:
    // 0x233840: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x233840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x233844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233848: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x233848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_23384c:
    // 0x23384c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233854: 0x3e00008  jr          $ra
    ctx->pc = 0x233854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233854u;
            // 0x233858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23385Cu;
    // 0x23385c: 0x0  nop
    ctx->pc = 0x23385cu;
    // NOP
    ctx->pc = 0x233860u;
}
