#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE838
// Address: 0x1fe838 - 0x1fe8b8
void sub_001FE838_0x1fe838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE838_0x1fe838");
#endif

    switch (ctx->pc) {
        case 0x1fe858u: goto label_1fe858;
        case 0x1fe868u: goto label_1fe868;
        case 0x1fe878u: goto label_1fe878;
        case 0x1fe8a0u: goto label_1fe8a0;
        default: break;
    }

    ctx->pc = 0x1fe838u;

    // 0x1fe838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe83c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fe83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fe840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe84c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fe850: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x1FE850u;
    SET_GPR_U32(ctx, 31, 0x1FE858u);
    ctx->pc = 0x1FE854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE850u;
            // 0x1fe854: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9F0u;
    if (runtime->hasFunction(0x1FD9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE858u; }
        if (ctx->pc != 0x1FE858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD9F0_0x1fd9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE858u; }
        if (ctx->pc != 0x1FE858u) { return; }
    }
    ctx->pc = 0x1FE858u;
label_1fe858:
    // 0x1fe858: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE858u;
    {
        const bool branch_taken_0x1fe858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1FE85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE858u;
            // 0x1fe85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe858) {
            ctx->pc = 0x1FE8A0u;
            goto label_1fe8a0;
        }
    }
    ctx->pc = 0x1FE860u;
    // 0x1fe860: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1FE860u;
    SET_GPR_U32(ctx, 31, 0x1FE868u);
    ctx->pc = 0x1FE864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE860u;
            // 0x1fe864: 0x8e0521b8  lw          $a1, 0x21B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8632)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (runtime->hasFunction(0x1EB570u)) {
        auto targetFn = runtime->lookupFunction(0x1EB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE868u; }
        if (ctx->pc != 0x1FE868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB570_0x1eb570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE868u; }
        if (ctx->pc != 0x1FE868u) { return; }
    }
    ctx->pc = 0x1FE868u;
label_1fe868:
    // 0x1fe868: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE868u;
    {
        const bool branch_taken_0x1fe868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1FE86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE868u;
            // 0x1fe86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe868) {
            ctx->pc = 0x1FE8A0u;
            goto label_1fe8a0;
        }
    }
    ctx->pc = 0x1FE870u;
    // 0x1fe870: 0xc07fa2e  jal         func_1FE8B8
    ctx->pc = 0x1FE870u;
    SET_GPR_U32(ctx, 31, 0x1FE878u);
    ctx->pc = 0x1FE8B8u;
    if (runtime->hasFunction(0x1FE8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FE8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE878u; }
        if (ctx->pc != 0x1FE878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE8B8_0x1fe8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE878u; }
        if (ctx->pc != 0x1FE878u) { return; }
    }
    ctx->pc = 0x1FE878u;
label_1fe878:
    // 0x1fe878: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE878u;
    {
        const bool branch_taken_0x1fe878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE878u;
            // 0x1fe87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe878) {
            ctx->pc = 0x1FE8A0u;
            goto label_1fe8a0;
        }
    }
    ctx->pc = 0x1FE880u;
    // 0x1fe880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe888: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fe888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fe88c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe890: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fe890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe894: 0x807f676  j           func_1FD9D8
    ctx->pc = 0x1FE894u;
    ctx->pc = 0x1FE898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE894u;
            // 0x1fe898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    {
        auto targetFn = runtime->lookupFunction(0x1FD9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1FE89Cu;
    // 0x1fe89c: 0x0  nop
    ctx->pc = 0x1fe89cu;
    // NOP
label_1fe8a0:
    // 0x1fe8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe8a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8ACu;
            // 0x1fe8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE8B4u;
    // 0x1fe8b4: 0x0  nop
    ctx->pc = 0x1fe8b4u;
    // NOP
    ctx->pc = 0x1fe8b8u;
}
