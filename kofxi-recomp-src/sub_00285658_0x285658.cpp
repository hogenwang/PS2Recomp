#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285658
// Address: 0x285658 - 0x2856d8
void sub_00285658_0x285658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285658_0x285658");
#endif

    switch (ctx->pc) {
        case 0x285688u: goto label_285688;
        case 0x2856c4u: goto label_2856c4;
        default: break;
    }

    ctx->pc = 0x285658u;

    // 0x285658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28565c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285664: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285664u;
    {
        const bool branch_taken_0x285664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x285668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285664u;
            // 0x285668: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285664) {
            ctx->pc = 0x285674u;
            goto label_285674;
        }
    }
    ctx->pc = 0x28566Cu;
    // 0x28566c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28566Cu;
    {
        const bool branch_taken_0x28566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28566Cu;
            // 0x285670: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28566c) {
            ctx->pc = 0x2856C8u;
            goto label_2856c8;
        }
    }
    ctx->pc = 0x285674u;
label_285674:
    // 0x285674: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x285674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x285678: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x285678u;
    {
        const bool branch_taken_0x285678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28567Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285678u;
            // 0x28567c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285678) {
            ctx->pc = 0x2856A4u;
            goto label_2856a4;
        }
    }
    ctx->pc = 0x285680u;
    // 0x285680: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x285680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285684: 0x0  nop
    ctx->pc = 0x285684u;
    // NOP
label_285688:
    // 0x285688: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x285688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28568c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x28568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x285690: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x285690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285694: 0x0  nop
    ctx->pc = 0x285694u;
    // NOP
    // 0x285698: 0x0  nop
    ctx->pc = 0x285698u;
    // NOP
    // 0x28569c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28569Cu;
    {
        const bool branch_taken_0x28569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28569c) {
            ctx->pc = 0x285688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285688;
        }
    }
    ctx->pc = 0x2856A4u;
label_2856a4:
    // 0x2856a4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2856A4u;
    {
        const bool branch_taken_0x2856a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856A4u;
            // 0x2856a8: 0xac850024  sw          $a1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856a4) {
            ctx->pc = 0x2856B0u;
            goto label_2856b0;
        }
    }
    ctx->pc = 0x2856ACu;
    // 0x2856ac: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x2856acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
label_2856b0:
    // 0x2856b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2856b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2856b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2856b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2856b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856bc: 0xc0a1558  jal         func_285560
    ctx->pc = 0x2856BCu;
    SET_GPR_U32(ctx, 31, 0x2856C4u);
    ctx->pc = 0x2856C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2856BCu;
            // 0x2856c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2856C4u; }
        if (ctx->pc != 0x2856C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2856C4u; }
        if (ctx->pc != 0x2856C4u) { return; }
    }
    ctx->pc = 0x2856C4u;
label_2856c4:
    // 0x2856c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2856c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2856c8:
    // 0x2856c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2856c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2856cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2856ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2856d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2856D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2856D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856D0u;
            // 0x2856d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2856D8u;
    ctx->pc = 0x2856d8u;
}
