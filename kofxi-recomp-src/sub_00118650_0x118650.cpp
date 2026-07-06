#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118650
// Address: 0x118650 - 0x1186e8
void sub_00118650_0x118650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118650_0x118650");
#endif

    switch (ctx->pc) {
        case 0x118674u: goto label_118674;
        case 0x118690u: goto label_118690;
        case 0x118698u: goto label_118698;
        case 0x1186b0u: goto label_1186b0;
        case 0x1186bcu: goto label_1186bc;
        case 0x1186ccu: goto label_1186cc;
        default: break;
    }

    ctx->pc = 0x118650u;

label_118650:
    // 0x118650: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x118650u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x118654: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118654u;
    {
        const bool branch_taken_0x118654 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x118658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118654u;
            // 0x118658: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118654) {
            ctx->pc = 0x11866Cu;
            goto label_11866c;
        }
    }
    ctx->pc = 0x11865Cu;
    // 0x11865c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x118660: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x118660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x118664: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118664u;
    {
        const bool branch_taken_0x118664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x118664) {
            ctx->pc = 0x118668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118664u;
            // 0x118668: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118674u;
            goto label_118674;
        }
    }
    ctx->pc = 0x11866Cu;
label_11866c:
    // 0x11866c: 0x3e00008  jr          $ra
    ctx->pc = 0x11866Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11866Cu;
            // 0x118670: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118674u;
label_118674:
    // 0x118674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x118674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x118678: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118678u;
    {
        const bool branch_taken_0x118678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118678) {
            ctx->pc = 0x118690u;
            goto label_118690;
        }
    }
    ctx->pc = 0x118680u;
    // 0x118680: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x118680u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x118684: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x118684u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x118688: 0x3e00008  jr          $ra
    ctx->pc = 0x118688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118688u;
            // 0x11868c: 0x43102f  dsubu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118690u;
label_118690:
    // 0x118690: 0x3e00008  jr          $ra
    ctx->pc = 0x118690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118690u;
            // 0x118694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118698u;
label_118698:
    // 0x118698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11869c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1186a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1186a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1186a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1186a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1186a8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1186A8u;
    SET_GPR_U32(ctx, 31, 0x1186B0u);
    ctx->pc = 0x1186ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1186A8u;
            // 0x1186ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186B0u; }
        if (ctx->pc != 0x1186B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186B0u; }
        if (ctx->pc != 0x1186B0u) { return; }
    }
    ctx->pc = 0x1186B0u;
label_1186b0:
    // 0x1186b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1186b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186b4: 0xc046194  jal         func_118650
    ctx->pc = 0x1186B4u;
    SET_GPR_U32(ctx, 31, 0x1186BCu);
    ctx->pc = 0x1186B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1186B4u;
            // 0x1186b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118650u;
    goto label_118650;
    ctx->pc = 0x1186BCu;
label_1186bc:
    // 0x1186bc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1186BCu;
    {
        const bool branch_taken_0x1186bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186BCu;
            // 0x1186c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186bc) {
            ctx->pc = 0x1186CCu;
            goto label_1186cc;
        }
    }
    ctx->pc = 0x1186C4u;
    // 0x1186c4: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1186C4u;
    SET_GPR_U32(ctx, 31, 0x1186CCu);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186CCu; }
        if (ctx->pc != 0x1186CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186CCu; }
        if (ctx->pc != 0x1186CCu) { return; }
    }
    ctx->pc = 0x1186CCu;
label_1186cc:
    // 0x1186cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1186ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1186d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1186d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1186d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1186d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1186d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1186dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1186DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1186E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186DCu;
            // 0x1186e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1186E4u;
    // 0x1186e4: 0x0  nop
    ctx->pc = 0x1186e4u;
    // NOP
    ctx->pc = 0x1186e8u;
}
