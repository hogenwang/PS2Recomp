#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7380
// Address: 0x1e7380 - 0x1e7498
void sub_001E7380_0x1e7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7380_0x1e7380");
#endif

    switch (ctx->pc) {
        case 0x1e73dcu: goto label_1e73dc;
        case 0x1e73e8u: goto label_1e73e8;
        case 0x1e7408u: goto label_1e7408;
        case 0x1e7428u: goto label_1e7428;
        case 0x1e746cu: goto label_1e746c;
        default: break;
    }

    ctx->pc = 0x1e7380u;

label_1e7380:
    // 0x1e7380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7384: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e7384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e7388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e738c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e738cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e7390: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7394: 0x24a51510  addiu       $a1, $a1, 0x1510
    ctx->pc = 0x1e7394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5392));
    // 0x1e7398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e739c: 0x24c61514  addiu       $a2, $a2, 0x1514
    ctx->pc = 0x1e739cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5396));
    // 0x1e73a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e73a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e73a4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e73a8: 0x2492ec14  addiu       $s2, $a0, -0x13EC
    ctx->pc = 0x1e73a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962196));
    // 0x1e73ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e73b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e73b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e73b8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1e73b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e73bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e73c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e73c4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e73c8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e73c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e73cc: 0x56240010  bnel        $s1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E73CCu;
    {
        const bool branch_taken_0x1e73cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e73cc) {
            ctx->pc = 0x1E73D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73CCu;
            // 0x1e73d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7410u;
            goto label_1e7410;
        }
    }
    ctx->pc = 0x1E73D4u;
    // 0x1e73d4: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E73D4u;
    SET_GPR_U32(ctx, 31, 0x1E73DCu);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73DCu; }
        if (ctx->pc != 0x1E73DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73DCu; }
        if (ctx->pc != 0x1E73DCu) { return; }
    }
    ctx->pc = 0x1E73DCu;
label_1e73dc:
    // 0x1e73dc: 0x2450005c  addiu       $s0, $v0, 0x5C
    ctx->pc = 0x1e73dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x1e73e0: 0xc079af4  jal         func_1E6BD0
    ctx->pc = 0x1E73E0u;
    SET_GPR_U32(ctx, 31, 0x1E73E8u);
    ctx->pc = 0x1E73E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73E0u;
            // 0x1e73e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BD0u;
    if (runtime->hasFunction(0x1E6BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73E8u; }
        if (ctx->pc != 0x1E73E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BD0_0x1e6bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73E8u; }
        if (ctx->pc != 0x1E73E8u) { return; }
    }
    ctx->pc = 0x1E73E8u;
label_1e73e8:
    // 0x1e73e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e73e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73ec: 0x54710008  bnel        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E73ECu;
    {
        const bool branch_taken_0x1e73ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1e73ec) {
            ctx->pc = 0x1E73F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73ECu;
            // 0x1e73f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7410u;
            goto label_1e7410;
        }
    }
    ctx->pc = 0x1E73F4u;
    // 0x1e73f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e73f8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E73F8u;
    {
        const bool branch_taken_0x1e73f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e73f8) {
            ctx->pc = 0x1E73FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73F8u;
            // 0x1e73fc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E740Cu;
            goto label_1e740c;
        }
    }
    ctx->pc = 0x1E7400u;
    // 0x1e7400: 0xc07dd32  jal         func_1F74C8
    ctx->pc = 0x1E7400u;
    SET_GPR_U32(ctx, 31, 0x1E7408u);
    ctx->pc = 0x1F74C8u;
    if (runtime->hasFunction(0x1F74C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F74C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7408u; }
        if (ctx->pc != 0x1E7408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F74C8_0x1f74c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7408u; }
        if (ctx->pc != 0x1E7408u) { return; }
    }
    ctx->pc = 0x1E7408u;
label_1e7408:
    // 0x1e7408: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1e7408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1e740c:
    // 0x1e740c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e740cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7410:
    // 0x1e7410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7418: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e7418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e741c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E741Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E741Cu;
            // 0x1e7420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7424u;
    // 0x1e7424: 0x0  nop
    ctx->pc = 0x1e7424u;
    // NOP
label_1e7428:
    // 0x1e7428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e742c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e742cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7434: 0x8079ce0  j           func_1E7380
    ctx->pc = 0x1E7434u;
    ctx->pc = 0x1E7438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7434u;
            // 0x1e7438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7380u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1e7380;
    ctx->pc = 0x1E743Cu;
    // 0x1e743c: 0x0  nop
    ctx->pc = 0x1e743cu;
    // NOP
    // 0x1e7440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7448: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e7448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e744c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7454: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7458: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e745c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e7460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7464: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7464u;
    SET_GPR_U32(ctx, 31, 0x1E746Cu);
    ctx->pc = 0x1E7468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7464u;
            // 0x1e7468: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E746Cu; }
        if (ctx->pc != 0x1E746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E746Cu; }
        if (ctx->pc != 0x1E746Cu) { return; }
    }
    ctx->pc = 0x1E746Cu;
label_1e746c:
    // 0x1e746c: 0xac50004c  sw          $s0, 0x4C($v0)
    ctx->pc = 0x1e746cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
    // 0x1e7470: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x1e7470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    // 0x1e7474: 0xac520044  sw          $s2, 0x44($v0)
    ctx->pc = 0x1e7474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 18));
    // 0x1e7478: 0xac530048  sw          $s3, 0x48($v0)
    ctx->pc = 0x1e7478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 19));
    // 0x1e747c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e747cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7488: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e7488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e748c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e748cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7490: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7490u;
            // 0x1e7494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7498u;
    ctx->pc = 0x1e7498u;
}
