#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D73C8
// Address: 0x2d73c8 - 0x2d7490
void sub_002D73C8_0x2d73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D73C8_0x2d73c8");
#endif

    switch (ctx->pc) {
        case 0x2d73f0u: goto label_2d73f0;
        case 0x2d7414u: goto label_2d7414;
        case 0x2d7428u: goto label_2d7428;
        case 0x2d7448u: goto label_2d7448;
        case 0x2d7464u: goto label_2d7464;
        case 0x2d7478u: goto label_2d7478;
        default: break;
    }

    ctx->pc = 0x2d73c8u;

label_2d73c8:
    // 0x2d73c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d73cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d73ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d73d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d73d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d73d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d73d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d73d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d73dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d73e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d73e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d73e8: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D73E8u;
    SET_GPR_U32(ctx, 31, 0x2D73F0u);
    ctx->pc = 0x2D73ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D73E8u;
            // 0x2d73ec: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73F0u; }
        if (ctx->pc != 0x2D73F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D73F0u; }
        if (ctx->pc != 0x2D73F0u) { return; }
    }
    ctx->pc = 0x2D73F0u;
label_2d73f0:
    // 0x2d73f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d73f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d73f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73f8: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2d73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2d73fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d73fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7400: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2d7400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7404: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7404u;
    {
        const bool branch_taken_0x2d7404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7404u;
            // 0x2d7408: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7404) {
            ctx->pc = 0x2D742Cu;
            goto label_2d742c;
        }
    }
    ctx->pc = 0x2D740Cu;
    // 0x2d740c: 0xc0b5d3a  jal         func_2D74E8
    ctx->pc = 0x2D740Cu;
    SET_GPR_U32(ctx, 31, 0x2D7414u);
    ctx->pc = 0x2D74E8u;
    if (runtime->hasFunction(0x2D74E8u)) {
        auto targetFn = runtime->lookupFunction(0x2D74E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7414u; }
        if (ctx->pc != 0x2D7414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D74E8_0x2d74e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7414u; }
        if (ctx->pc != 0x2D7414u) { return; }
    }
    ctx->pc = 0x2D7414u;
label_2d7414:
    // 0x2d7414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7418: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7418u;
    {
        const bool branch_taken_0x2d7418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7418) {
            ctx->pc = 0x2D741Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7418u;
            // 0x2d741c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D742Cu;
            goto label_2d742c;
        }
    }
    ctx->pc = 0x2D7420u;
    // 0x2d7420: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D7420u;
    SET_GPR_U32(ctx, 31, 0x2D7428u);
    ctx->pc = 0x2D7424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7420u;
            // 0x2d7424: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7428u; }
        if (ctx->pc != 0x2D7428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7428u; }
        if (ctx->pc != 0x2D7428u) { return; }
    }
    ctx->pc = 0x2D7428u;
label_2d7428:
    // 0x2d7428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d7428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d742c:
    // 0x2d742c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d742cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7434: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7438: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d7438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d743c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D743Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D743Cu;
            // 0x2d7440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7444u;
    // 0x2d7444: 0x0  nop
    ctx->pc = 0x2d7444u;
    // NOP
label_2d7448:
    // 0x2d7448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d744c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7450: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d7450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d7458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d745c: 0xc0b5cf2  jal         func_2D73C8
    ctx->pc = 0x2D745Cu;
    SET_GPR_U32(ctx, 31, 0x2D7464u);
    ctx->pc = 0x2D7460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D745Cu;
            // 0x2d7460: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D73C8u;
    goto label_2d73c8;
    ctx->pc = 0x2D7464u;
label_2d7464:
    // 0x2d7464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7468: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7468u;
    {
        const bool branch_taken_0x2d7468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7468u;
            // 0x2d746c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7468) {
            ctx->pc = 0x2D747Cu;
            goto label_2d747c;
        }
    }
    ctx->pc = 0x2D7470u;
    // 0x2d7470: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D7470u;
    SET_GPR_U32(ctx, 31, 0x2D7478u);
    ctx->pc = 0x2D7474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7470u;
            // 0x2d7474: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7478u; }
        if (ctx->pc != 0x2D7478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7478u; }
        if (ctx->pc != 0x2D7478u) { return; }
    }
    ctx->pc = 0x2D7478u;
label_2d7478:
    // 0x2d7478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d747c:
    // 0x2d747c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d747cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7488: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7488u;
            // 0x2d748c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7490u;
    ctx->pc = 0x2d7490u;
}
