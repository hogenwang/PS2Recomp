#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F6510
// Address: 0x2f6510 - 0x2f6570
void sub_002F6510_0x2f6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6510_0x2f6510");
#endif

    switch (ctx->pc) {
        case 0x2f6530u: goto label_2f6530;
        case 0x2f6538u: goto label_2f6538;
        case 0x2f6554u: goto label_2f6554;
        default: break;
    }

    ctx->pc = 0x2f6510u;

    // 0x2f6510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f6514: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f651c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f651cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6520: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6520u;
    {
        const bool branch_taken_0x2f6520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6520u;
            // 0x2f6524: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6520) {
            ctx->pc = 0x2F6544u;
            goto label_2f6544;
        }
    }
    ctx->pc = 0x2F6528u;
    // 0x2f6528: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F6528u;
    SET_GPR_U32(ctx, 31, 0x2F6530u);
    ctx->pc = 0x2F652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6528u;
            // 0x2f652c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6530u; }
        if (ctx->pc != 0x2F6530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6530u; }
        if (ctx->pc != 0x2F6530u) { return; }
    }
    ctx->pc = 0x2F6530u;
label_2f6530:
    // 0x2f6530: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F6530u;
    SET_GPR_U32(ctx, 31, 0x2F6538u);
    ctx->pc = 0x2F6534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6530u;
            // 0x2f6534: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (runtime->hasFunction(0x2F9140u)) {
        auto targetFn = runtime->lookupFunction(0x2F9140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6538u; }
        if (ctx->pc != 0x2F6538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9140_0x2f9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6538u; }
        if (ctx->pc != 0x2F6538u) { return; }
    }
    ctx->pc = 0x2F6538u;
label_2f6538:
    // 0x2f6538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f653c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F653Cu;
    {
        const bool branch_taken_0x2f653c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F653Cu;
            // 0x2f6540: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f653c) {
            ctx->pc = 0x2F654Cu;
            goto label_2f654c;
        }
    }
    ctx->pc = 0x2F6544u;
label_2f6544:
    // 0x2f6544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6544u;
    {
        const bool branch_taken_0x2f6544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6544u;
            // 0x2f6548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6544) {
            ctx->pc = 0x2F6558u;
            goto label_2f6558;
        }
    }
    ctx->pc = 0x2F654Cu;
label_2f654c:
    // 0x2f654c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x2F654Cu;
    SET_GPR_U32(ctx, 31, 0x2F6554u);
    ctx->pc = 0x2F6550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F654Cu;
            // 0x2f6550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6554u; }
        if (ctx->pc != 0x2F6554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6554u; }
        if (ctx->pc != 0x2F6554u) { return; }
    }
    ctx->pc = 0x2F6554u;
label_2f6554:
    // 0x2f6554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f6554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6558:
    // 0x2f6558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f655c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f655cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6564: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6564u;
            // 0x2f6568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F656Cu;
    // 0x2f656c: 0x0  nop
    ctx->pc = 0x2f656cu;
    // NOP
    ctx->pc = 0x2f6570u;
}
