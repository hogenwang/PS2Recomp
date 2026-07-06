#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8678
// Address: 0x1d8678 - 0x1d86f0
void sub_001D8678_0x1d8678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8678_0x1d8678");
#endif

    switch (ctx->pc) {
        case 0x1d86b0u: goto label_1d86b0;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86d8u: goto label_1d86d8;
        default: break;
    }

    ctx->pc = 0x1d8678u;

    // 0x1d8678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d867c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8680: 0x8c43e6a8  lw          $v1, -0x1958($v0)
    ctx->pc = 0x1d8680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960808)));
    // 0x1d8684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d868c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d8690: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d8690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d8694: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1d8694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d8698: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8698u;
    {
        const bool branch_taken_0x1d8698 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D869Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8698u;
            // 0x1d869c: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8698) {
            ctx->pc = 0x1D86D0u;
            goto label_1d86d0;
        }
    }
    ctx->pc = 0x1D86A0u;
    // 0x1d86a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d86a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d86a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d86a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d86ac: 0x0  nop
    ctx->pc = 0x1d86acu;
    // NOP
label_1d86b0:
    // 0x1d86b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d86b4: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D86B4u;
    {
        const bool branch_taken_0x1d86b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1d86b4) {
            ctx->pc = 0x1D86B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86B4u;
            // 0x1d86b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D86C8u;
            goto label_1d86c8;
        }
    }
    ctx->pc = 0x1D86BCu;
    // 0x1d86bc: 0xc0762ac  jal         func_1D8AB0
    ctx->pc = 0x1D86BCu;
    SET_GPR_U32(ctx, 31, 0x1D86C4u);
    ctx->pc = 0x1D86C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86BCu;
            // 0x1d86c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AB0u;
    if (runtime->hasFunction(0x1D8AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86C4u; }
        if (ctx->pc != 0x1D86C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AB0_0x1d8ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86C4u; }
        if (ctx->pc != 0x1D86C4u) { return; }
    }
    ctx->pc = 0x1D86C4u;
label_1d86c4:
    // 0x1d86c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d86c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1d86c8:
    // 0x1d86c8: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D86C8u;
    {
        const bool branch_taken_0x1d86c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D86CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86C8u;
            // 0x1d86cc: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86c8) {
            ctx->pc = 0x1D86B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d86b0;
        }
    }
    ctx->pc = 0x1D86D0u;
label_1d86d0:
    // 0x1d86d0: 0xc07592e  jal         func_1D64B8
    ctx->pc = 0x1D86D0u;
    SET_GPR_U32(ctx, 31, 0x1D86D8u);
    ctx->pc = 0x1D64B8u;
    if (runtime->hasFunction(0x1D64B8u)) {
        auto targetFn = runtime->lookupFunction(0x1D64B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86D8u; }
        if (ctx->pc != 0x1D86D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D64B8_0x1d64b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86D8u; }
        if (ctx->pc != 0x1D86D8u) { return; }
    }
    ctx->pc = 0x1D86D8u;
label_1d86d8:
    // 0x1d86d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d86d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d86dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d86dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d86e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d86e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d86e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d86e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d86e8: 0x80760d6  j           func_1D8358
    ctx->pc = 0x1D86E8u;
    ctx->pc = 0x1D86ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86E8u;
            // 0x1d86ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8358u;
    {
        auto targetFn = runtime->lookupFunction(0x1D8358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D86F0u;
    ctx->pc = 0x1d86f0u;
}
