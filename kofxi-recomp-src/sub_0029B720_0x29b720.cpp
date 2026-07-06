#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B720
// Address: 0x29b720 - 0x29b798
void sub_0029B720_0x29b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B720_0x29b720");
#endif

    switch (ctx->pc) {
        case 0x29b750u: goto label_29b750;
        case 0x29b778u: goto label_29b778;
        default: break;
    }

    ctx->pc = 0x29b720u;

    // 0x29b720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b724: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29b728: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29b72c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29b72cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b730: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b734: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29b734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b740: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29b744: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b748: 0xc0a0f70  jal         func_283DC0
    ctx->pc = 0x29B748u;
    SET_GPR_U32(ctx, 31, 0x29B750u);
    ctx->pc = 0x29B74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B748u;
            // 0x29b74c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283DC0u;
    if (runtime->hasFunction(0x283DC0u)) {
        auto targetFn = runtime->lookupFunction(0x283DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B750u; }
        if (ctx->pc != 0x29B750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283DC0_0x283dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B750u; }
        if (ctx->pc != 0x29B750u) { return; }
    }
    ctx->pc = 0x29B750u;
label_29b750:
    // 0x29b750: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B750u;
    {
        const bool branch_taken_0x29b750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b750) {
            ctx->pc = 0x29B754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B750u;
            // 0x29b754: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B758u;
            goto label_29b758;
        }
    }
    ctx->pc = 0x29B758u;
label_29b758:
    // 0x29b758: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B758u;
    {
        const bool branch_taken_0x29b758 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b758) {
            ctx->pc = 0x29B75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B758u;
            // 0x29b75c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B768u;
            goto label_29b768;
        }
    }
    ctx->pc = 0x29B760u;
    // 0x29b760: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29B760u;
    {
        const bool branch_taken_0x29b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B760u;
            // 0x29b764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b760) {
            ctx->pc = 0x29B778u;
            goto label_29b778;
        }
    }
    ctx->pc = 0x29B768u;
label_29b768:
    // 0x29b768: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b76c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29b76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b770: 0xc0a0cf2  jal         func_2833C8
    ctx->pc = 0x29B770u;
    SET_GPR_U32(ctx, 31, 0x29B778u);
    ctx->pc = 0x29B774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B770u;
            // 0x29b774: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2833C8u;
    if (runtime->hasFunction(0x2833C8u)) {
        auto targetFn = runtime->lookupFunction(0x2833C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B778u; }
        if (ctx->pc != 0x29B778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002833C8_0x2833c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B778u; }
        if (ctx->pc != 0x29B778u) { return; }
    }
    ctx->pc = 0x29B778u;
label_29b778:
    // 0x29b778: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29b778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b77c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29b77cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b780: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29b780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b784: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b78c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B78Cu;
            // 0x29b790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B794u;
    // 0x29b794: 0x0  nop
    ctx->pc = 0x29b794u;
    // NOP
    ctx->pc = 0x29b798u;
}
