#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9568
// Address: 0x1f9568 - 0x1f9618
void sub_001F9568_0x1f9568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9568_0x1f9568");
#endif

    switch (ctx->pc) {
        case 0x1f9584u: goto label_1f9584;
        case 0x1f95b0u: goto label_1f95b0;
        case 0x1f95c0u: goto label_1f95c0;
        case 0x1f95d8u: goto label_1f95d8;
        case 0x1f95f8u: goto label_1f95f8;
        case 0x1f9608u: goto label_1f9608;
        default: break;
    }

    ctx->pc = 0x1f9568u;

    // 0x1f9568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f956c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9574: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f9574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9578: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f9578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f957c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F957Cu;
    SET_GPR_U32(ctx, 31, 0x1F9584u);
    ctx->pc = 0x1F9580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F957Cu;
            // 0x1f9580: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9584u; }
        if (ctx->pc != 0x1F9584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9584u; }
        if (ctx->pc != 0x1F9584u) { return; }
    }
    ctx->pc = 0x1F9584u;
label_1f9584:
    // 0x1f9584: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f9584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f9588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f958c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F958Cu;
    {
        const bool branch_taken_0x1f958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F958Cu;
            // 0x1f9590: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f958c) {
            ctx->pc = 0x1F95B0u;
            goto label_1f95b0;
        }
    }
    ctx->pc = 0x1F9594u;
    // 0x1f9594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9598: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f959c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f959cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f95a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f95a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f95a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f95a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f95a8: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F95A8u;
    ctx->pc = 0x1F95ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95A8u;
            // 0x1f95ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F95B0u;
label_1f95b0:
    // 0x1f95b0: 0x8e301f9c  lw          $s0, 0x1F9C($s1)
    ctx->pc = 0x1f95b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8092)));
    // 0x1f95b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f95b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f95b8: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1F95B8u;
    SET_GPR_U32(ctx, 31, 0x1F95C0u);
    ctx->pc = 0x1F95BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95B8u;
            // 0x1f95bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (runtime->hasFunction(0x1EB5D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EB5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F95C0u; }
        if (ctx->pc != 0x1F95C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB5D8_0x1eb5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F95C0u; }
        if (ctx->pc != 0x1F95C0u) { return; }
    }
    ctx->pc = 0x1F95C0u;
label_1f95c0:
    // 0x1f95c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f95c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f95c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95c8: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F95C8u;
    {
        const bool branch_taken_0x1f95c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1F95CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95C8u;
            // 0x1f95cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95c8) {
            ctx->pc = 0x1F95DCu;
            goto label_1f95dc;
        }
    }
    ctx->pc = 0x1F95D0u;
    // 0x1f95d0: 0xc07ad6a  jal         func_1EB5A8
    ctx->pc = 0x1F95D0u;
    SET_GPR_U32(ctx, 31, 0x1F95D8u);
    ctx->pc = 0x1EB5A8u;
    if (runtime->hasFunction(0x1EB5A8u)) {
        auto targetFn = runtime->lookupFunction(0x1EB5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F95D8u; }
        if (ctx->pc != 0x1F95D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB5A8_0x1eb5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F95D8u; }
        if (ctx->pc != 0x1F95D8u) { return; }
    }
    ctx->pc = 0x1F95D8u;
label_1f95d8:
    // 0x1f95d8: 0xae320044  sw          $s2, 0x44($s1)
    ctx->pc = 0x1f95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
label_1f95dc:
    // 0x1f95dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f95dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f95e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f95e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f95e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f95e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f95e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f95ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f95ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f95f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F95F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F95F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F95F0u;
            // 0x1f95f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F95F8u;
label_1f95f8:
    // 0x1f95f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f95f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f95fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f95fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9600: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1F9600u;
    SET_GPR_U32(ctx, 31, 0x1F9608u);
    ctx->pc = 0x1F9604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9600u;
            // 0x1f9604: 0x8c851f9c  lw          $a1, 0x1F9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8092)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (runtime->hasFunction(0x1EB5D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EB5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9608u; }
        if (ctx->pc != 0x1F9608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB5D8_0x1eb5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9608u; }
        if (ctx->pc != 0x1F9608u) { return; }
    }
    ctx->pc = 0x1F9608u;
label_1f9608:
    // 0x1f9608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f960c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f960cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f9610: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9610u;
            // 0x1f9614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9618u;
    ctx->pc = 0x1f9618u;
}
