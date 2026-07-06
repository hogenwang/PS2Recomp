#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F808
// Address: 0x10f808 - 0x10f858
void sub_0010F808_0x10f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F808_0x10f808");
#endif

    switch (ctx->pc) {
        case 0x10f834u: goto label_10f834;
        default: break;
    }

    ctx->pc = 0x10f808u;

    // 0x10f808: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10f808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10f80c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f810: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x10f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x10f814: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10f814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f81c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x10f81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10f820: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x10f820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10f824: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x10f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x10f828: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x10f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x10f82c: 0xc043a92  jal         func_10EA48
    ctx->pc = 0x10F82Cu;
    SET_GPR_U32(ctx, 31, 0x10F834u);
    ctx->pc = 0x10F830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F82Cu;
            // 0x10f830: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EA48u;
    if (runtime->hasFunction(0x10EA48u)) {
        auto targetFn = runtime->lookupFunction(0x10EA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F834u; }
        if (ctx->pc != 0x10F834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EA48_0x10ea48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F834u; }
        if (ctx->pc != 0x10F834u) { return; }
    }
    ctx->pc = 0x10F834u;
label_10f834:
    // 0x10f834: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10f834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10f838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f840: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10f844: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x10f844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x10f848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f84c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F84Cu;
            // 0x10f850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F854u;
    // 0x10f854: 0x0  nop
    ctx->pc = 0x10f854u;
    // NOP
    ctx->pc = 0x10f858u;
}
