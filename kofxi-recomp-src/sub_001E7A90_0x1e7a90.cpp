#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7A90
// Address: 0x1e7a90 - 0x1e7b00
void sub_001E7A90_0x1e7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A90_0x1e7a90");
#endif

    switch (ctx->pc) {
        case 0x1e7ab8u: goto label_1e7ab8;
        case 0x1e7ac0u: goto label_1e7ac0;
        case 0x1e7ad0u: goto label_1e7ad0;
        case 0x1e7ae0u: goto label_1e7ae0;
        default: break;
    }

    ctx->pc = 0x1e7a90u;

    // 0x1e7a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7a94: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e7a98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7aa0: 0x8c51ec14  lw          $s1, -0x13EC($v0)
    ctx->pc = 0x1e7aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962196)));
    // 0x1e7aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7aa8: 0x16230010  bne         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E7AA8u;
    {
        const bool branch_taken_0x1e7aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E7AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AA8u;
            // 0x1e7aac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7aa8) {
            ctx->pc = 0x1E7AECu;
            goto label_1e7aec;
        }
    }
    ctx->pc = 0x1E7AB0u;
    // 0x1e7ab0: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7AB0u;
    SET_GPR_U32(ctx, 31, 0x1E7AB8u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AB8u; }
        if (ctx->pc != 0x1E7AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AB8u; }
        if (ctx->pc != 0x1E7AB8u) { return; }
    }
    ctx->pc = 0x1E7AB8u;
label_1e7ab8:
    // 0x1e7ab8: 0xc079e9c  jal         func_1E7A70
    ctx->pc = 0x1E7AB8u;
    SET_GPR_U32(ctx, 31, 0x1E7AC0u);
    ctx->pc = 0x1E7ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AB8u;
            // 0x1e7abc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A70u;
    if (runtime->hasFunction(0x1E7A70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AC0u; }
        if (ctx->pc != 0x1E7AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7A70_0x1e7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AC0u; }
        if (ctx->pc != 0x1E7AC0u) { return; }
    }
    ctx->pc = 0x1E7AC0u;
label_1e7ac0:
    // 0x1e7ac0: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7AC0u;
    {
        const bool branch_taken_0x1e7ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E7AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AC0u;
            // 0x1e7ac4: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ac0) {
            ctx->pc = 0x1E7AECu;
            goto label_1e7aec;
        }
    }
    ctx->pc = 0x1E7AC8u;
    // 0x1e7ac8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1e7ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e7acc: 0x0  nop
    ctx->pc = 0x1e7accu;
    // NOP
label_1e7ad0:
    // 0x1e7ad0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7AD0u;
    {
        const bool branch_taken_0x1e7ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ad0) {
            ctx->pc = 0x1E7AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AD0u;
            // 0x1e7ad4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E7AE4u;
            goto label_1e7ae4;
        }
    }
    ctx->pc = 0x1E7AD8u;
    // 0x1e7ad8: 0xc0796e6  jal         func_1E5B98
    ctx->pc = 0x1E7AD8u;
    SET_GPR_U32(ctx, 31, 0x1E7AE0u);
    ctx->pc = 0x1E7ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AD8u;
            // 0x1e7adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B98u;
    if (runtime->hasFunction(0x1E5B98u)) {
        auto targetFn = runtime->lookupFunction(0x1E5B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AE0u; }
        if (ctx->pc != 0x1E7AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5B98_0x1e5b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AE0u; }
        if (ctx->pc != 0x1E7AE0u) { return; }
    }
    ctx->pc = 0x1E7AE0u;
label_1e7ae0:
    // 0x1e7ae0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e7ae4:
    // 0x1e7ae4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E7AE4u;
    {
        const bool branch_taken_0x1e7ae4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1E7AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AE4u;
            // 0x1e7ae8: 0x2610050c  addiu       $s0, $s0, 0x50C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ae4) {
            ctx->pc = 0x1E7AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7ad0;
        }
    }
    ctx->pc = 0x1E7AECu;
label_1e7aec:
    // 0x1e7aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AF8u;
            // 0x1e7afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7B00u;
    ctx->pc = 0x1e7b00u;
}
