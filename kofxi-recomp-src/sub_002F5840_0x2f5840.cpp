#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5840
// Address: 0x2f5840 - 0x2f58a0
void sub_002F5840_0x2f5840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5840_0x2f5840");
#endif

    switch (ctx->pc) {
        case 0x2f5860u: goto label_2f5860;
        case 0x2f5868u: goto label_2f5868;
        default: break;
    }

    ctx->pc = 0x2f5840u;

    // 0x2f5840: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f5840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f5844: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f5844u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f5848: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F5848u;
    {
        const bool branch_taken_0x2f5848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5848) {
            ctx->pc = 0x2F584Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5848u;
            // 0x2f584c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5850u;
            goto label_2f5850;
        }
    }
    ctx->pc = 0x2F5850u;
label_2f5850:
    // 0x2f5850: 0x2012  mflo        $a0
    ctx->pc = 0x2f5850u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2f5854: 0x1810  mfhi        $v1
    ctx->pc = 0x2f5854u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f5858: 0x1c800003  bgtz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5858u;
    {
        const bool branch_taken_0x2f5858 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2F585Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5858u;
            // 0x2f585c: 0x2c820006  sltiu       $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5858) {
            ctx->pc = 0x2F5868u;
            goto label_2f5868;
        }
    }
    ctx->pc = 0x2F5860u;
label_2f5860:
    // 0x2f5860: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5860u;
            // 0x2f5864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5868u;
label_2f5868:
    // 0x2f5868: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2F5868u;
    {
        const bool branch_taken_0x2f5868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5868u;
            // 0x2f586c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5868) {
            ctx->pc = 0x2F5860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5860;
        }
    }
    ctx->pc = 0x2F5870u;
    // 0x2f5870: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f5870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f5874: 0x244204c0  addiu       $v0, $v0, 0x4C0
    ctx->pc = 0x2f5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    // 0x2f5878: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2f5878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f587c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2f587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f5880: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f5880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5884: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F5884u;
    {
        const bool branch_taken_0x2f5884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5884) {
            ctx->pc = 0x2F5888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5884u;
            // 0x2f5888: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F588Cu;
            goto label_2f588c;
        }
    }
    ctx->pc = 0x2F588Cu;
label_2f588c:
    // 0x2f588c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f588cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5890: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f5890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f5894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f5898: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F589Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5898u;
            // 0x2f589c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F58A0u;
    ctx->pc = 0x2f58a0u;
}
