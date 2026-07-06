#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102810
// Address: 0x102810 - 0x102878
void sub_00102810_0x102810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102810_0x102810");
#endif

    switch (ctx->pc) {
        case 0x10282cu: goto label_10282c;
        case 0x102838u: goto label_102838;
        default: break;
    }

    ctx->pc = 0x102810u;

    // 0x102810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10281c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102820: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102824: 0xc040920  jal         func_102480
    ctx->pc = 0x102824u;
    SET_GPR_U32(ctx, 31, 0x10282Cu);
    ctx->pc = 0x102828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102824u;
            // 0x102828: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102480u;
    if (runtime->hasFunction(0x102480u)) {
        auto targetFn = runtime->lookupFunction(0x102480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10282Cu; }
        if (ctx->pc != 0x10282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102480_0x102480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10282Cu; }
        if (ctx->pc != 0x10282Cu) { return; }
    }
    ctx->pc = 0x10282Cu;
label_10282c:
    // 0x10282c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10282cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102830: 0xc0408e2  jal         func_102388
    ctx->pc = 0x102830u;
    SET_GPR_U32(ctx, 31, 0x102838u);
    ctx->pc = 0x102834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102830u;
            // 0x102834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102388u;
    if (runtime->hasFunction(0x102388u)) {
        auto targetFn = runtime->lookupFunction(0x102388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102838u; }
        if (ctx->pc != 0x102838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102388_0x102388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102838u; }
        if (ctx->pc != 0x102838u) { return; }
    }
    ctx->pc = 0x102838u;
label_102838:
    // 0x102838: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10283c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x10283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x102840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x102844: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x102844u;
    {
        const bool branch_taken_0x102844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102844) {
            ctx->pc = 0x102848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102844u;
            // 0x102848: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10284Cu;
            goto label_10284c;
        }
    }
    ctx->pc = 0x10284Cu;
label_10284c:
    // 0x10284c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102850: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x102850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x102854: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x102854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x102858: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10285c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102860: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x102860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x102864: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102868: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x102868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10286c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10286cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102870: 0x3e00008  jr          $ra
    ctx->pc = 0x102870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102870u;
            // 0x102874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102878u;
    ctx->pc = 0x102878u;
}
