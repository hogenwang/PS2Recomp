#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF860
// Address: 0x2cf860 - 0x2cf8b8
void sub_002CF860_0x2cf860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF860_0x2cf860");
#endif

    switch (ctx->pc) {
        case 0x2cf888u: goto label_2cf888;
        case 0x2cf89cu: goto label_2cf89c;
        default: break;
    }

    ctx->pc = 0x2cf860u;

    // 0x2cf860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf868: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2cf868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf86c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf870: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cf870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf874: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cf874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf878: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf87c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cf87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cf880: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2CF880u;
    SET_GPR_U32(ctx, 31, 0x2CF888u);
    ctx->pc = 0x2CF884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF880u;
            // 0x2cf884: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF888u; }
        if (ctx->pc != 0x2CF888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF888u; }
        if (ctx->pc != 0x2CF888u) { return; }
    }
    ctx->pc = 0x2CF888u;
label_2cf888:
    // 0x2cf888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cf888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf88c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF88Cu;
    {
        const bool branch_taken_0x2cf88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF88Cu;
            // 0x2cf890: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf88c) {
            ctx->pc = 0x2CF8A0u;
            goto label_2cf8a0;
        }
    }
    ctx->pc = 0x2CF894u;
    // 0x2cf894: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CF894u;
    SET_GPR_U32(ctx, 31, 0x2CF89Cu);
    ctx->pc = 0x2CF898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF894u;
            // 0x2cf898: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF89Cu; }
        if (ctx->pc != 0x2CF89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF89Cu; }
        if (ctx->pc != 0x2CF89Cu) { return; }
    }
    ctx->pc = 0x2CF89Cu;
label_2cf89c:
    // 0x2cf89c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf8a0:
    // 0x2cf8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf8a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf8ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF8B0u;
            // 0x2cf8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF8B8u;
    ctx->pc = 0x2cf8b8u;
}
