#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5650
// Address: 0x2f5650 - 0x2f56c0
void sub_002F5650_0x2f5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5650_0x2f5650");
#endif

    switch (ctx->pc) {
        case 0x2f5670u: goto label_2f5670;
        case 0x2f5680u: goto label_2f5680;
        case 0x2f5694u: goto label_2f5694;
        case 0x2f569cu: goto label_2f569c;
        default: break;
    }

    ctx->pc = 0x2f5650u;

    // 0x2f5650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f5654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f565c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f565cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5660: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F5660u;
    {
        const bool branch_taken_0x2f5660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5660u;
            // 0x2f5664: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5660) {
            ctx->pc = 0x2F56A8u;
            goto label_2f56a8;
        }
    }
    ctx->pc = 0x2F5668u;
    // 0x2f5668: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f5668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f566c: 0x0  nop
    ctx->pc = 0x2f566cu;
    // NOP
label_2f5670:
    // 0x2f5670: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5670u;
    {
        const bool branch_taken_0x2f5670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5670u;
            // 0x2f5674: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5670) {
            ctx->pc = 0x2F5680u;
            goto label_2f5680;
        }
    }
    ctx->pc = 0x2F5678u;
    // 0x2f5678: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5678u;
    SET_GPR_U32(ctx, 31, 0x2F5680u);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5680u; }
        if (ctx->pc != 0x2F5680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5680u; }
        if (ctx->pc != 0x2F5680u) { return; }
    }
    ctx->pc = 0x2F5680u;
label_2f5680:
    // 0x2f5680: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2f5680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f5684: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5684u;
    {
        const bool branch_taken_0x2f5684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5684) {
            ctx->pc = 0x2F5694u;
            goto label_2f5694;
        }
    }
    ctx->pc = 0x2F568Cu;
    // 0x2f568c: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F568Cu;
    SET_GPR_U32(ctx, 31, 0x2F5694u);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5694u; }
        if (ctx->pc != 0x2F5694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5694u; }
        if (ctx->pc != 0x2F5694u) { return; }
    }
    ctx->pc = 0x2F5694u;
label_2f5694:
    // 0x2f5694: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5694u;
    SET_GPR_U32(ctx, 31, 0x2F569Cu);
    ctx->pc = 0x2F5698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5694u;
            // 0x2f5698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F569Cu; }
        if (ctx->pc != 0x2F569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F569Cu; }
        if (ctx->pc != 0x2F569Cu) { return; }
    }
    ctx->pc = 0x2F569Cu;
label_2f569c:
    // 0x2f569c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2f569cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56a0: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F56A0u;
    {
        const bool branch_taken_0x2f56a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f56a0) {
            ctx->pc = 0x2F56A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F56A0u;
            // 0x2f56a4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5670;
        }
    }
    ctx->pc = 0x2F56A8u;
label_2f56a8:
    // 0x2f56a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f56a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f56ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f56acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f56b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f56b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f56b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f56b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F56B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F56BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F56B8u;
            // 0x2f56bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F56C0u;
    ctx->pc = 0x2f56c0u;
}
