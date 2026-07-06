#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237850
// Address: 0x237850 - 0x237978
void sub_00237850_0x237850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237850_0x237850");
#endif

    switch (ctx->pc) {
        case 0x237888u: goto label_237888;
        case 0x23788cu: goto label_23788c;
        case 0x237898u: goto label_237898;
        case 0x2378a0u: goto label_2378a0;
        case 0x2378a8u: goto label_2378a8;
        case 0x2378dcu: goto label_2378dc;
        case 0x2378f0u: goto label_2378f0;
        case 0x2378f8u: goto label_2378f8;
        case 0x237900u: goto label_237900;
        case 0x237934u: goto label_237934;
        default: break;
    }

    ctx->pc = 0x237850u;

    // 0x237850: 0x808de16  j           func_237858
    ctx->pc = 0x237850u;
    ctx->pc = 0x237858u;
    goto label_237858;
    ctx->pc = 0x237858u;
label_237858:
    // 0x237858: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x237858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23785c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x237860: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x237860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x237864: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x237868: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x237868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x23786c: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x23786cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x237870: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x237874: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x237874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x237878: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x237878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23787c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237884: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x237884u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_237888:
    // 0x237888: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x237888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23788c:
    // 0x23788c: 0x2651fe30  addiu       $s1, $s2, -0x1D0
    ctx->pc = 0x23788cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966832));
    // 0x237890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x237890u;
    {
        const bool branch_taken_0x237890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237890u;
            // 0x237894: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237890) {
            ctx->pc = 0x2378A0u;
            goto label_2378a0;
        }
    }
    ctx->pc = 0x237898u;
label_237898:
    // 0x237898: 0xc08dfe4  jal         func_237F90
    ctx->pc = 0x237898u;
    SET_GPR_U32(ctx, 31, 0x2378A0u);
    ctx->pc = 0x23789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237898u;
            // 0x23789c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237F90u;
    if (runtime->hasFunction(0x237F90u)) {
        auto targetFn = runtime->lookupFunction(0x237F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378A0u; }
        if (ctx->pc != 0x2378A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237F90_0x237f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378A0u; }
        if (ctx->pc != 0x2378A0u) { return; }
    }
    ctx->pc = 0x2378A0u;
label_2378a0:
    // 0x2378a0: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2378A0u;
    SET_GPR_U32(ctx, 31, 0x2378A8u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378A8u; }
        if (ctx->pc != 0x2378A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378A8u; }
        if (ctx->pc != 0x2378A8u) { return; }
    }
    ctx->pc = 0x2378A8u;
label_2378a8:
    // 0x2378a8: 0x8e50fe30  lw          $s0, -0x1D0($s2)
    ctx->pc = 0x2378a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966832)));
    // 0x2378ac: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2378ACu;
    {
        const bool branch_taken_0x2378ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378ACu;
            // 0x2378b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378ac) {
            ctx->pc = 0x2378D4u;
            goto label_2378d4;
        }
    }
    ctx->pc = 0x2378B4u;
    // 0x2378b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2378b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2378b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2378B8u;
    {
        const bool branch_taken_0x2378b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2378BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378B8u;
            // 0x2378bc: 0xaec2fe30  sw          $v0, -0x1D0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294966832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378b8) {
            ctx->pc = 0x2378C4u;
            goto label_2378c4;
        }
    }
    ctx->pc = 0x2378C0u;
    // 0x2378c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2378c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2378c4:
    // 0x2378c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2378c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2378c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2378cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2378ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2378d0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2378d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2378d4:
    // 0x2378d4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2378D4u;
    SET_GPR_U32(ctx, 31, 0x2378DCu);
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378DCu; }
        if (ctx->pc != 0x2378DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378DCu; }
        if (ctx->pc != 0x2378DCu) { return; }
    }
    ctx->pc = 0x2378DCu;
label_2378dc:
    // 0x2378dc: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2378DCu;
    {
        const bool branch_taken_0x2378dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2378E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378DCu;
            // 0x2378e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378dc) {
            ctx->pc = 0x237898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237898;
        }
    }
    ctx->pc = 0x2378E4u;
    // 0x2378e4: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2378e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x2378e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2378E8u;
    {
        const bool branch_taken_0x2378e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2378E8u;
            // 0x2378ec: 0x2651fe48  addiu       $s1, $s2, -0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378e8) {
            ctx->pc = 0x2378F8u;
            goto label_2378f8;
        }
    }
    ctx->pc = 0x2378F0u;
label_2378f0:
    // 0x2378f0: 0xc08dff8  jal         func_237FE0
    ctx->pc = 0x2378F0u;
    SET_GPR_U32(ctx, 31, 0x2378F8u);
    ctx->pc = 0x2378F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2378F0u;
            // 0x2378f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237FE0u;
    if (runtime->hasFunction(0x237FE0u)) {
        auto targetFn = runtime->lookupFunction(0x237FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378F8u; }
        if (ctx->pc != 0x2378F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237FE0_0x237fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2378F8u; }
        if (ctx->pc != 0x2378F8u) { return; }
    }
    ctx->pc = 0x2378F8u;
label_2378f8:
    // 0x2378f8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2378F8u;
    SET_GPR_U32(ctx, 31, 0x237900u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237900u; }
        if (ctx->pc != 0x237900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237900u; }
        if (ctx->pc != 0x237900u) { return; }
    }
    ctx->pc = 0x237900u;
label_237900:
    // 0x237900: 0x8e50fe48  lw          $s0, -0x1B8($s2)
    ctx->pc = 0x237900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966856)));
    // 0x237904: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x237904u;
    {
        const bool branch_taken_0x237904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237904u;
            // 0x237908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237904) {
            ctx->pc = 0x23792Cu;
            goto label_23792c;
        }
    }
    ctx->pc = 0x23790Cu;
    // 0x23790c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x237910: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237910u;
    {
        const bool branch_taken_0x237910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237910u;
            // 0x237914: 0xaea2fe48  sw          $v0, -0x1B8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294966856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237910) {
            ctx->pc = 0x23791Cu;
            goto label_23791c;
        }
    }
    ctx->pc = 0x237918u;
    // 0x237918: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x237918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_23791c:
    // 0x23791c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23791cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x237920: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x237920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x237924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x237924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x237928: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x237928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_23792c:
    // 0x23792c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x23792Cu;
    SET_GPR_U32(ctx, 31, 0x237934u);
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237934u; }
        if (ctx->pc != 0x237934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237934u; }
        if (ctx->pc != 0x237934u) { return; }
    }
    ctx->pc = 0x237934u;
label_237934:
    // 0x237934: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x237934u;
    {
        const bool branch_taken_0x237934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x237938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237934u;
            // 0x237938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237934) {
            ctx->pc = 0x2378F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2378f0;
        }
    }
    ctx->pc = 0x23793Cu;
    // 0x23793c: 0x1680ffd2  bnez        $s4, . + 4 + (-0x2E << 2)
    ctx->pc = 0x23793Cu;
    {
        const bool branch_taken_0x23793c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x237940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23793Cu;
            // 0x237940: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23793c) {
            ctx->pc = 0x237888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237888;
        }
    }
    ctx->pc = 0x237944u;
    // 0x237944: 0x1660ffd1  bnez        $s3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x237944u;
    {
        const bool branch_taken_0x237944 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x237948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237944u;
            // 0x237948: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237944) {
            ctx->pc = 0x23788Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23788c;
        }
    }
    ctx->pc = 0x23794Cu;
    // 0x23794c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x237950: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x237950u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237954: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x237954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237958: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x237958u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23795c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23795cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237960: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237964: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23796c: 0x3e00008  jr          $ra
    ctx->pc = 0x23796Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23796Cu;
            // 0x237970: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x237974u;
    // 0x237974: 0x0  nop
    ctx->pc = 0x237974u;
    // NOP
    ctx->pc = 0x237978u;
}
