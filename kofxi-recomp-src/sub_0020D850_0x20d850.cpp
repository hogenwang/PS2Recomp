#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020D850
// Address: 0x20d850 - 0x20d910
void sub_0020D850_0x20d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D850_0x20d850");
#endif

    switch (ctx->pc) {
        case 0x20d85cu: goto label_20d85c;
        case 0x20d8b0u: goto label_20d8b0;
        default: break;
    }

    ctx->pc = 0x20d850u;

    // 0x20d850: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d854: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D854u;
    {
        const bool branch_taken_0x20d854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D854u;
        // 0x20d858: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d854) {
            ctx->pc = 0x20D878u;
            goto label_20d878;
        }
    }
    ctx->pc = 0x20D85Cu;
label_20d85c:
    // 0x20d85c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x20d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x20d860: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20d860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20d864: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x20d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x20d868: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x20d868u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20d86c: 0xa8082b  sltu        $at, $a1, $t0
    ctx->pc = 0x20d86cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20d870: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20D870u;
    {
        const bool branch_taken_0x20d870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d870) {
            ctx->pc = 0x20D85Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d85c;
        }
    }
    ctx->pc = 0x20D878u;
label_20d878:
    // 0x20d878: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D878u;
    {
        const bool branch_taken_0x20d878 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d878) {
            ctx->pc = 0x20D87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D878u;
            // 0x20d87c: 0x3c036666  lui         $v1, 0x6666 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D888u;
            goto label_20d888;
        }
    }
    ctx->pc = 0x20D880u;
    // 0x20d880: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20D880u;
    {
        const bool branch_taken_0x20d880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D880u;
        // 0x20d884: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d880) {
            ctx->pc = 0x20D8A0u;
            goto label_20d8a0;
        }
    }
    ctx->pc = 0x20D888u;
label_20d888:
    // 0x20d888: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x20d888u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x20d88c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x20d88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x20d890: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x20d890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20d894: 0x1810  mfhi        $v1
    ctx->pc = 0x20d894u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20d898: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x20d898u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x20d89c: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x20d89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_20d8a0:
    // 0x20d8a0: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20D8A0u;
    {
        const bool branch_taken_0x20d8a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d8a0) {
            ctx->pc = 0x20D8F8u;
            goto label_20d8f8;
        }
    }
    ctx->pc = 0x20D8A8u;
    // 0x20d8a8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x20d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x20d8ac: 0x34676667  ori         $a3, $v1, 0x6667
    ctx->pc = 0x20d8acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_20d8b0:
    // 0x20d8b0: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D8B0u;
    {
        const bool branch_taken_0x20d8b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8B0u;
        // 0x20d8b4: 0xa8001b  divu        $zero, $a1, $t0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8b0) {
            ctx->pc = 0x20D8BCu;
            goto label_20d8bc;
        }
    }
    ctx->pc = 0x20D8B8u;
    // 0x20d8b8: 0x1cd  break       0, 7
    ctx->pc = 0x20d8b8u;
    runtime->handleBreak(rdram, ctx);
label_20d8bc:
    // 0x20d8bc: 0x1812  mflo        $v1
    ctx->pc = 0x20d8bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x20d8c0: 0xa8001b  divu        $zero, $a1, $t0
    ctx->pc = 0x20d8c0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x20d8c4: 0x24630104  addiu       $v1, $v1, 0x104
    ctx->pc = 0x20d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x20d8c8: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D8C8u;
    {
        const bool branch_taken_0x20d8c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C8u;
        // 0x20d8cc: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8c8) {
            ctx->pc = 0x20D8D4u;
            goto label_20d8d4;
        }
    }
    ctx->pc = 0x20D8D0u;
    // 0x20d8d0: 0x1cd  break       0, 7
    ctx->pc = 0x20d8d0u;
    runtime->handleBreak(rdram, ctx);
label_20d8d4:
    // 0x20d8d4: 0x2810  mfhi        $a1
    ctx->pc = 0x20d8d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x20d8d8: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x20d8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x20d8dc: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x20d8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20d8e0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x20d8e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x20d8e4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x20d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20d8e8: 0x1810  mfhi        $v1
    ctx->pc = 0x20d8e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20d8ec: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x20d8ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x20d8f0: 0x1520ffef  bnez        $t1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20D8F0u;
    {
        const bool branch_taken_0x20d8f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8F0u;
        // 0x20d8f4: 0x664021  addu        $t0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8f0) {
            ctx->pc = 0x20D8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d8b0;
        }
    }
    ctx->pc = 0x20D8F8u;
label_20d8f8:
    // 0x20d8f8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20d8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x20D8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8FCu;
        // 0x20d900: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D904u;
    // 0x20d904: 0x0  nop
    ctx->pc = 0x20d904u;
    // NOP
    // 0x20d908: 0x0  nop
    ctx->pc = 0x20d908u;
    // NOP
    // 0x20d90c: 0x0  nop
    ctx->pc = 0x20d90cu;
    // NOP
}
