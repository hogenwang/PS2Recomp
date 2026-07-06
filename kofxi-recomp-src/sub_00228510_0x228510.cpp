#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228510
// Address: 0x228510 - 0x228580
void sub_00228510_0x228510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228510_0x228510");
#endif

    switch (ctx->pc) {
        case 0x228524u: goto label_228524;
        case 0x228548u: goto label_228548;
        default: break;
    }

    ctx->pc = 0x228510u;

    // 0x228510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x228510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x228514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22851c: 0xc08a136  jal         func_2284D8
    ctx->pc = 0x22851Cu;
    SET_GPR_U32(ctx, 31, 0x228524u);
    ctx->pc = 0x228520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22851Cu;
            // 0x228520: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2284D8u;
    if (runtime->hasFunction(0x2284D8u)) {
        auto targetFn = runtime->lookupFunction(0x2284D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228524u; }
        if (ctx->pc != 0x228524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002284D8_0x2284d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228524u; }
        if (ctx->pc != 0x228524u) { return; }
    }
    ctx->pc = 0x228524u;
label_228524:
    // 0x228524: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x228524u;
    {
        const bool branch_taken_0x228524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228524) {
            ctx->pc = 0x228528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228524u;
            // 0x228528: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228534u;
            goto label_228534;
        }
    }
    ctx->pc = 0x22852Cu;
    // 0x22852c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22852Cu;
    {
        const bool branch_taken_0x22852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22852Cu;
            // 0x228530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22852c) {
            ctx->pc = 0x22856Cu;
            goto label_22856c;
        }
    }
    ctx->pc = 0x228534u;
label_228534:
    // 0x228534: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x228534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228538: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x228538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22853c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22853Cu;
    {
        const bool branch_taken_0x22853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22853Cu;
            // 0x228540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22853c) {
            ctx->pc = 0x22856Cu;
            goto label_22856c;
        }
    }
    ctx->pc = 0x228544u;
    // 0x228544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_228548:
    // 0x228548: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228548u;
    {
        const bool branch_taken_0x228548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228548) {
            ctx->pc = 0x22854Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228548u;
            // 0x22854c: 0x24630034  addiu       $v1, $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22855Cu;
            goto label_22855c;
        }
    }
    ctx->pc = 0x228550u;
    // 0x228550: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228550u;
    {
        const bool branch_taken_0x228550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x228554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228550u;
            // 0x228554: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228550) {
            ctx->pc = 0x22856Cu;
            goto label_22856c;
        }
    }
    ctx->pc = 0x228558u;
    // 0x228558: 0x24630034  addiu       $v1, $v1, 0x34
    ctx->pc = 0x228558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_22855c:
    // 0x22855c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x22855cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x228560: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x228560u;
    {
        const bool branch_taken_0x228560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228560) {
            ctx->pc = 0x228564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228560u;
            // 0x228564: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228548;
        }
    }
    ctx->pc = 0x228568u;
    // 0x228568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22856c:
    // 0x22856c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228574: 0x3e00008  jr          $ra
    ctx->pc = 0x228574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228574u;
            // 0x228578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22857Cu;
    // 0x22857c: 0x0  nop
    ctx->pc = 0x22857cu;
    // NOP
    ctx->pc = 0x228580u;
}
