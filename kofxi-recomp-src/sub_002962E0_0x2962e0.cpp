#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002962E0
// Address: 0x2962e0 - 0x296360
void sub_002962E0_0x2962e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002962E0_0x2962e0");
#endif

    switch (ctx->pc) {
        case 0x2962f4u: goto label_2962f4;
        case 0x29631cu: goto label_29631c;
        case 0x296334u: goto label_296334;
        case 0x29634cu: goto label_29634c;
        default: break;
    }

    ctx->pc = 0x2962e0u;

    // 0x2962e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2962e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2962e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2962e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2962e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2962e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2962ec: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2962ECu;
    SET_GPR_U32(ctx, 31, 0x2962F4u);
    ctx->pc = 0x2962F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2962ECu;
            // 0x2962f0: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962F4u; }
        if (ctx->pc != 0x2962F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962F4u; }
        if (ctx->pc != 0x2962F4u) { return; }
    }
    ctx->pc = 0x2962F4u;
label_2962f4:
    // 0x2962f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2962f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962f8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2962F8u;
    {
        const bool branch_taken_0x2962f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2962F8u;
            // 0x2962fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962f8) {
            ctx->pc = 0x296334u;
            goto label_296334;
        }
    }
    ctx->pc = 0x296300u;
    // 0x296300: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x296300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x296304: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x296304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x296308: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x296308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x29630c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x29630cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x296310: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x296310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x296314: 0xc0a587a  jal         func_2961E8
    ctx->pc = 0x296314u;
    SET_GPR_U32(ctx, 31, 0x29631Cu);
    ctx->pc = 0x296318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296314u;
            // 0x296318: 0xfe000088  sd          $zero, 0x88($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2961E8u;
    if (runtime->hasFunction(0x2961E8u)) {
        auto targetFn = runtime->lookupFunction(0x2961E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29631Cu; }
        if (ctx->pc != 0x29631Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002961E8_0x2961e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29631Cu; }
        if (ctx->pc != 0x29631Cu) { return; }
    }
    ctx->pc = 0x29631Cu;
label_29631c:
    // 0x29631c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29631Cu;
    {
        const bool branch_taken_0x29631c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29631Cu;
            // 0x296320: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29631c) {
            ctx->pc = 0x296350u;
            goto label_296350;
        }
    }
    ctx->pc = 0x296324u;
    // 0x296324: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296324u;
    {
        const bool branch_taken_0x296324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x296328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296324u;
            // 0x296328: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296324) {
            ctx->pc = 0x296338u;
            goto label_296338;
        }
    }
    ctx->pc = 0x29632Cu;
    // 0x29632c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29632Cu;
    SET_GPR_U32(ctx, 31, 0x296334u);
    ctx->pc = 0x296330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29632Cu;
            // 0x296330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296334u; }
        if (ctx->pc != 0x296334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296334u; }
        if (ctx->pc != 0x296334u) { return; }
    }
    ctx->pc = 0x296334u;
label_296334:
    // 0x296334: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x296334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_296338:
    // 0x296338: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x296338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29633c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x29633cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x296340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296344: 0xc0a5648  jal         func_295920
    ctx->pc = 0x296344u;
    SET_GPR_U32(ctx, 31, 0x29634Cu);
    ctx->pc = 0x296348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296344u;
            // 0x296348: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29634Cu; }
        if (ctx->pc != 0x29634Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29634Cu; }
        if (ctx->pc != 0x29634Cu) { return; }
    }
    ctx->pc = 0x29634Cu;
label_29634c:
    // 0x29634c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29634cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296350:
    // 0x296350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296358: 0x3e00008  jr          $ra
    ctx->pc = 0x296358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29635Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296358u;
            // 0x29635c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296360u;
    ctx->pc = 0x296360u;
}
