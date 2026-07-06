#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200570
// Address: 0x200570 - 0x2005c8
void sub_00200570_0x200570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200570_0x200570");
#endif

    switch (ctx->pc) {
        case 0x200584u: goto label_200584;
        case 0x200598u: goto label_200598;
        default: break;
    }

    ctx->pc = 0x200570u;

    // 0x200570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20057c: 0xc080172  jal         func_2005C8
    ctx->pc = 0x20057Cu;
    SET_GPR_U32(ctx, 31, 0x200584u);
    ctx->pc = 0x2005C8u;
    if (runtime->hasFunction(0x2005C8u)) {
        auto targetFn = runtime->lookupFunction(0x2005C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200584u; }
        if (ctx->pc != 0x200584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002005C8_0x2005c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200584u; }
        if (ctx->pc != 0x200584u) { return; }
    }
    ctx->pc = 0x200584u;
label_200584:
    // 0x200584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200588: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x200588u;
    {
        const bool branch_taken_0x200588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200588u;
            // 0x20058c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200588) {
            ctx->pc = 0x2005B8u;
            goto label_2005b8;
        }
    }
    ctx->pc = 0x200590u;
    // 0x200590: 0xc080186  jal         func_200618
    ctx->pc = 0x200590u;
    SET_GPR_U32(ctx, 31, 0x200598u);
    ctx->pc = 0x200618u;
    if (runtime->hasFunction(0x200618u)) {
        auto targetFn = runtime->lookupFunction(0x200618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200598u; }
        if (ctx->pc != 0x200598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200618_0x200618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200598u; }
        if (ctx->pc != 0x200598u) { return; }
    }
    ctx->pc = 0x200598u;
label_200598:
    // 0x200598: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20059c: 0x246317c8  addiu       $v1, $v1, 0x17C8
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6088));
    // 0x2005a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2005a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2005a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2005a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2005a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2005acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2005b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2005b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2005b4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2005b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2005b8:
    // 0x2005b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2005b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2005bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2005bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2005c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2005C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2005C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2005C0u;
            // 0x2005c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2005C8u;
    ctx->pc = 0x2005c8u;
}
