#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7778
// Address: 0x1b7778 - 0x1b77f8
void sub_001B7778_0x1b7778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7778_0x1b7778");
#endif

    switch (ctx->pc) {
        case 0x1b779cu: goto label_1b779c;
        case 0x1b77b0u: goto label_1b77b0;
        case 0x1b77c4u: goto label_1b77c4;
        default: break;
    }

    ctx->pc = 0x1b7778u;

    // 0x1b7778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b777c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b777cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b7780: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1b7784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7788: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b778c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b7790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7794: 0xc06e04e  jal         func_1B8138
    ctx->pc = 0x1B7794u;
    SET_GPR_U32(ctx, 31, 0x1B779Cu);
    ctx->pc = 0x1B7798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7794u;
            // 0x1b7798: 0x2664b41c  addiu       $a0, $s3, -0x4BE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947868));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8138u;
    if (runtime->hasFunction(0x1B8138u)) {
        auto targetFn = runtime->lookupFunction(0x1B8138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B779Cu; }
        if (ctx->pc != 0x1B779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8138_0x1b8138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B779Cu; }
        if (ctx->pc != 0x1B779Cu) { return; }
    }
    ctx->pc = 0x1B779Cu;
label_1b779c:
    // 0x1b779c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B779Cu;
    {
        const bool branch_taken_0x1b779c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B77A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B779Cu;
            // 0x1b77a0: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b779c) {
            ctx->pc = 0x1B77D8u;
            goto label_1b77d8;
        }
    }
    ctx->pc = 0x1B77A4u;
    // 0x1b77a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b77a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b77a8: 0x2450b428  addiu       $s0, $v0, -0x4BD8
    ctx->pc = 0x1b77a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947880));
    // 0x1b77ac: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x1b77acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1b77b0:
    // 0x1b77b0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b77b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b77b4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B77B4u;
    {
        const bool branch_taken_0x1b77b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1b77b4) {
            ctx->pc = 0x1B77B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77B4u;
            // 0x1b77b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B77C8u;
            goto label_1b77c8;
        }
    }
    ctx->pc = 0x1B77BCu;
    // 0x1b77bc: 0xc06dd2a  jal         func_1B74A8
    ctx->pc = 0x1B77BCu;
    SET_GPR_U32(ctx, 31, 0x1B77C4u);
    ctx->pc = 0x1B77C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77BCu;
            // 0x1b77c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A8u;
    if (runtime->hasFunction(0x1B74A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B74A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77C4u; }
        if (ctx->pc != 0x1B77C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B74A8_0x1b74a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77C4u; }
        if (ctx->pc != 0x1B77C4u) { return; }
    }
    ctx->pc = 0x1B77C4u;
label_1b77c4:
    // 0x1b77c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b77c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b77c8:
    // 0x1b77c8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B77C8u;
    {
        const bool branch_taken_0x1b77c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B77CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77C8u;
            // 0x1b77cc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77c8) {
            ctx->pc = 0x1B77B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b77b0;
        }
    }
    ctx->pc = 0x1B77D0u;
    // 0x1b77d0: 0x2662b41c  addiu       $v0, $s3, -0x4BE4
    ctx->pc = 0x1b77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947868));
    // 0x1b77d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1b77d8:
    // 0x1b77d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b77d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b77dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b77e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b77e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b77e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b77e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b77e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b77e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b77ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B77ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B77F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77ECu;
            // 0x1b77f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B77F4u;
    // 0x1b77f4: 0x0  nop
    ctx->pc = 0x1b77f4u;
    // NOP
    ctx->pc = 0x1b77f8u;
}
