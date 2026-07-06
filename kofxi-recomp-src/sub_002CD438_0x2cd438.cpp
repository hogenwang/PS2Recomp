#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD438
// Address: 0x2cd438 - 0x2cd498
void sub_002CD438_0x2cd438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD438_0x2cd438");
#endif

    switch (ctx->pc) {
        case 0x2cd460u: goto label_2cd460;
        case 0x2cd464u: goto label_2cd464;
        default: break;
    }

    ctx->pc = 0x2cd438u;

    // 0x2cd438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd43c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2cd43cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd440: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cd440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cd444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd448: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2cd448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd44c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x2cd44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2cd450: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2cd450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2cd454: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cd454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cd458: 0xc0b372a  jal         func_2CDCA8
    ctx->pc = 0x2CD458u;
    SET_GPR_U32(ctx, 31, 0x2CD460u);
    ctx->pc = 0x2CD45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD458u;
            // 0x2cd45c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDCA8u;
    if (runtime->hasFunction(0x2CDCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2CDCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD460u; }
        if (ctx->pc != 0x2CD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDCA8_0x2cdca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD460u; }
        if (ctx->pc != 0x2CD460u) { return; }
    }
    ctx->pc = 0x2CD460u;
label_2cd460:
    // 0x2cd460: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2cd464:
    if (ctx->pc == 0x2CD464u) {
        ctx->pc = 0x2CD464u;
            // 0x2cd464: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2CD468u;
        goto label_fallthrough_0x2cd460;
    }
    ctx->pc = 0x2CD460u;
    {
        const bool branch_taken_0x2cd460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd460) {
            ctx->pc = 0x2CD464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD460u;
            // 0x2cd464: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD488u;
            goto label_2cd488;
        }
    }
label_fallthrough_0x2cd460:
    ctx->pc = 0x2CD468u;
    // 0x2cd468: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2cd468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cd46c: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD46Cu;
    {
        const bool branch_taken_0x2cd46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2cd46c) {
            ctx->pc = 0x2CD470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD46Cu;
            // 0x2cd470: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD484u;
            goto label_2cd484;
        }
    }
    ctx->pc = 0x2CD474u;
    // 0x2cd474: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2cd474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd478: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD478u;
    {
        const bool branch_taken_0x2cd478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD478u;
            // 0x2cd47c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd478) {
            ctx->pc = 0x2CD488u;
            goto label_2cd488;
        }
    }
    ctx->pc = 0x2CD480u;
    // 0x2cd480: 0x24020801  addiu       $v0, $zero, 0x801
    ctx->pc = 0x2cd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
label_2cd484:
    // 0x2cd484: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cd484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd488:
    // 0x2cd488: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cd488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd48c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD48Cu;
            // 0x2cd490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD494u;
    // 0x2cd494: 0x0  nop
    ctx->pc = 0x2cd494u;
    // NOP
    ctx->pc = 0x2cd498u;
}
