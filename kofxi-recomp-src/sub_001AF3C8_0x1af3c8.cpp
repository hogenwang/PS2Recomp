#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF3C8
// Address: 0x1af3c8 - 0x1af490
void sub_001AF3C8_0x1af3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF3C8_0x1af3c8");
#endif

    switch (ctx->pc) {
        case 0x1af3f8u: goto label_1af3f8;
        case 0x1af408u: goto label_1af408;
        case 0x1af444u: goto label_1af444;
        case 0x1af460u: goto label_1af460;
        case 0x1af468u: goto label_1af468;
        default: break;
    }

    ctx->pc = 0x1af3c8u;

    // 0x1af3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af3cc: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x1af3d0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1af3d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1af3d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3d8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1af3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1af3dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3e0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1af3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1af3e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af3e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af3e8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1af3e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1af3ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af3f0: 0xc06bd6a  jal         func_1AF5A8
    ctx->pc = 0x1AF3F0u;
    SET_GPR_U32(ctx, 31, 0x1AF3F8u);
    ctx->pc = 0x1AF3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3F0u;
            // 0x1af3f4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF5A8u;
    if (runtime->hasFunction(0x1AF5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3F8u; }
        if (ctx->pc != 0x1AF3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5A8_0x1af5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF3F8u; }
        if (ctx->pc != 0x1AF3F8u) { return; }
    }
    ctx->pc = 0x1AF3F8u;
label_1af3f8:
    // 0x1af3f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF3FCu;
            // 0x1af400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF404u;
    // 0x1af404: 0x0  nop
    ctx->pc = 0x1af404u;
    // NOP
label_1af408:
    // 0x1af408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af41c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af420: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1af420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af424: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af428: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1af428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af42c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1af42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1af430: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1af430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af434: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1af434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1af438: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af43c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF43Cu;
    SET_GPR_U32(ctx, 31, 0x1AF444u);
    ctx->pc = 0x1AF440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF43Cu;
            // 0x1af440: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF444u; }
        if (ctx->pc != 0x1AF444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF444u; }
        if (ctx->pc != 0x1AF444u) { return; }
    }
    ctx->pc = 0x1AF444u;
label_1af444:
    // 0x1af444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af44c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1af44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af450: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1af450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af454: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1af454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af458: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1AF458u;
    SET_GPR_U32(ctx, 31, 0x1AF460u);
    ctx->pc = 0x1AF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF458u;
            // 0x1af45c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (runtime->hasFunction(0x1AF490u)) {
        auto targetFn = runtime->lookupFunction(0x1AF490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF460u; }
        if (ctx->pc != 0x1AF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF490_0x1af490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF460u; }
        if (ctx->pc != 0x1AF460u) { return; }
    }
    ctx->pc = 0x1AF460u;
label_1af460:
    // 0x1af460: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF460u;
    SET_GPR_U32(ctx, 31, 0x1AF468u);
    ctx->pc = 0x1AF464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF460u;
            // 0x1af464: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF468u; }
        if (ctx->pc != 0x1AF468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF468u; }
        if (ctx->pc != 0x1AF468u) { return; }
    }
    ctx->pc = 0x1AF468u;
label_1af468:
    // 0x1af468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af46c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af470: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af47c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1af47cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af480: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1af480u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af484: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af488: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF488u;
            // 0x1af48c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF490u;
    ctx->pc = 0x1af490u;
}
