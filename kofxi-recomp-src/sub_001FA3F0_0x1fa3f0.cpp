#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA3F0
// Address: 0x1fa3f0 - 0x1fa470
void sub_001FA3F0_0x1fa3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA3F0_0x1fa3f0");
#endif

    switch (ctx->pc) {
        case 0x1fa418u: goto label_1fa418;
        case 0x1fa42cu: goto label_1fa42c;
        default: break;
    }

    ctx->pc = 0x1fa3f0u;

    // 0x1fa3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa3f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa3f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fa3f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fa3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa408: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fa408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa40c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fa40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fa410: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1FA410u;
    SET_GPR_U32(ctx, 31, 0x1FA418u);
    ctx->pc = 0x1FA414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA410u;
            // 0x1fa414: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA38u;
    if (runtime->hasFunction(0x1FDA38u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA418u; }
        if (ctx->pc != 0x1FA418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA38_0x1fda38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA418u; }
        if (ctx->pc != 0x1FA418u) { return; }
    }
    ctx->pc = 0x1FA418u;
label_1fa418:
    // 0x1fa418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa41c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA41Cu;
    {
        const bool branch_taken_0x1fa41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA41Cu;
            // 0x1fa420: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa41c) {
            ctx->pc = 0x1FA450u;
            goto label_1fa450;
        }
    }
    ctx->pc = 0x1FA424u;
    // 0x1fa424: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FA424u;
    SET_GPR_U32(ctx, 31, 0x1FA42Cu);
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA42Cu; }
        if (ctx->pc != 0x1FA42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA42Cu; }
        if (ctx->pc != 0x1FA42Cu) { return; }
    }
    ctx->pc = 0x1FA42Cu;
label_1fa42c:
    // 0x1fa42c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fa42cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa434: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA434u;
    {
        const bool branch_taken_0x1fa434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fa434) {
            ctx->pc = 0x1FA438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA434u;
            // 0x1fa438: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA454u;
            goto label_1fa454;
        }
    }
    ctx->pc = 0x1FA43Cu;
    // 0x1fa43c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fa43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1fa440: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fa444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA444u;
    {
        const bool branch_taken_0x1fa444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA444u;
            // 0x1fa448: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa444) {
            ctx->pc = 0x1FA458u;
            goto label_1fa458;
        }
    }
    ctx->pc = 0x1FA44Cu;
    // 0x1fa44c: 0x0  nop
    ctx->pc = 0x1fa44cu;
    // NOP
label_1fa450:
    // 0x1fa450: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1fa450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1fa454:
    // 0x1fa454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa458:
    // 0x1fa458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa45c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa464: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fa464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa468: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA468u;
            // 0x1fa46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA470u;
    ctx->pc = 0x1fa470u;
}
