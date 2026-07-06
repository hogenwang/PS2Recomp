#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261740
// Address: 0x261740 - 0x2617f8
void sub_00261740_0x261740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261740_0x261740");
#endif

    switch (ctx->pc) {
        case 0x261788u: goto label_261788;
        case 0x2617a8u: goto label_2617a8;
        case 0x2617bcu: goto label_2617bc;
        case 0x2617d0u: goto label_2617d0;
        default: break;
    }

    ctx->pc = 0x261740u;

    // 0x261740: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x261740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x261744: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x261744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x261748: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x261748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26174c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26174cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261750: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x261750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x261754: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x261754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x261758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26175c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x26175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x261760: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x261760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x261764: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x261764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x261768: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x261768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26176c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x26176cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261770: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x261770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261774: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x261774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x261778: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x261778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26177c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261780: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x261780u;
    SET_GPR_U32(ctx, 31, 0x261788u);
    ctx->pc = 0x261784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261780u;
            // 0x261784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261788u; }
        if (ctx->pc != 0x261788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261788u; }
        if (ctx->pc != 0x261788u) { return; }
    }
    ctx->pc = 0x261788u;
label_261788:
    // 0x261788: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x261788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x26178c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261790: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x261790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x261794: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x261794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x261798: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x261798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x26179c: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x26179cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x2617a0: 0xc043298  jal         func_10CA60
    ctx->pc = 0x2617A0u;
    SET_GPR_U32(ctx, 31, 0x2617A8u);
    ctx->pc = 0x2617A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2617A0u;
            // 0x2617a4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617A8u; }
        if (ctx->pc != 0x2617A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateThreadWrapper_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617A8u; }
        if (ctx->pc != 0x2617A8u) { return; }
    }
    ctx->pc = 0x2617A8u;
label_2617a8:
    // 0x2617a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2617a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2617ac: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2617ACu;
    {
        const bool branch_taken_0x2617ac = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2617B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2617ACu;
            // 0x2617b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617ac) {
            ctx->pc = 0x2617D4u;
            goto label_2617d4;
        }
    }
    ctx->pc = 0x2617B4u;
    // 0x2617b4: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x2617B4u;
    SET_GPR_U32(ctx, 31, 0x2617BCu);
    ctx->pc = 0x2617B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2617B4u;
            // 0x2617b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (runtime->hasFunction(0x10DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617BCu; }
        if (ctx->pc != 0x2617BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadStartWithContextInit_0x10dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617BCu; }
        if (ctx->pc != 0x2617BCu) { return; }
    }
    ctx->pc = 0x2617BCu;
label_2617bc:
    // 0x2617bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2617bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2617c0: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2617C0u;
    {
        const bool branch_taken_0x2617c0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2617C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2617C0u;
            // 0x2617c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617c0) {
            ctx->pc = 0x2617D4u;
            goto label_2617d4;
        }
    }
    ctx->pc = 0x2617C8u;
    // 0x2617c8: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2617C8u;
    SET_GPR_U32(ctx, 31, 0x2617D0u);
    ctx->pc = 0x2617CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2617C8u;
            // 0x2617cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617D0u; }
        if (ctx->pc != 0x2617D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2617D0u; }
        if (ctx->pc != 0x2617D0u) { return; }
    }
    ctx->pc = 0x2617D0u;
label_2617d0:
    // 0x2617d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2617d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2617d4:
    // 0x2617d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2617d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2617d8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2617d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2617dc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2617dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2617e0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2617e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2617e4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2617e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2617e8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2617e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2617ec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2617ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2617f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2617F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2617F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2617F0u;
            // 0x2617f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2617F8u;
    ctx->pc = 0x2617f8u;
}
