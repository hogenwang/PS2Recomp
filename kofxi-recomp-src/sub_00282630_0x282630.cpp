#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282630
// Address: 0x282630 - 0x282678
void sub_00282630_0x282630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282630_0x282630");
#endif

    switch (ctx->pc) {
        case 0x28264cu: goto label_28264c;
        case 0x282654u: goto label_282654;
        case 0x282668u: goto label_282668;
        default: break;
    }

    ctx->pc = 0x282630u;

    // 0x282630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28263c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x28263Cu;
    {
        const bool branch_taken_0x28263c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28263Cu;
            // 0x282640: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28263c) {
            ctx->pc = 0x282668u;
            goto label_282668;
        }
    }
    ctx->pc = 0x282644u;
    // 0x282644: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x282644u;
    SET_GPR_U32(ctx, 31, 0x28264Cu);
    ctx->pc = 0x282648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282644u;
            // 0x282648: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28264Cu; }
        if (ctx->pc != 0x28264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28264Cu; }
        if (ctx->pc != 0x28264Cu) { return; }
    }
    ctx->pc = 0x28264Cu;
label_28264c:
    // 0x28264c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x28264Cu;
    SET_GPR_U32(ctx, 31, 0x282654u);
    ctx->pc = 0x282650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28264Cu;
            // 0x282650: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282654u; }
        if (ctx->pc != 0x282654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282654u; }
        if (ctx->pc != 0x282654u) { return; }
    }
    ctx->pc = 0x282654u;
label_282654:
    // 0x282654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282660: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x282660u;
    ctx->pc = 0x282664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282660u;
            // 0x282664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x282668u;
label_282668:
    // 0x282668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28266c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28266cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282670: 0x3e00008  jr          $ra
    ctx->pc = 0x282670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282670u;
            // 0x282674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282678u;
    ctx->pc = 0x282678u;
}
