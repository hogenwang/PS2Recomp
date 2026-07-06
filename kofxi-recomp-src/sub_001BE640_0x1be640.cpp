#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE640
// Address: 0x1be640 - 0x1be6c0
void sub_001BE640_0x1be640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE640_0x1be640");
#endif

    switch (ctx->pc) {
        case 0x1be670u: goto label_1be670;
        case 0x1be680u: goto label_1be680;
        default: break;
    }

    ctx->pc = 0x1be640u;

    // 0x1be640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be644: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1be644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1be648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1be64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be650: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1be650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be658: 0x24515594  addiu       $s1, $v0, 0x5594
    ctx->pc = 0x1be658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21908));
    // 0x1be65c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be660: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1be660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be664: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1be664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1be668: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1be668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be66c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be670:
    // 0x1be670: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1be670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1be674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be678: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1BE678u;
    SET_GPR_U32(ctx, 31, 0x1BE680u);
    ctx->pc = 0x1BE67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE678u;
            // 0x1be67c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE680u; }
        if (ctx->pc != 0x1BE680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE680u; }
        if (ctx->pc != 0x1BE680u) { return; }
    }
    ctx->pc = 0x1BE680u;
label_1be680:
    // 0x1be680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE680u;
    {
        const bool branch_taken_0x1be680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE680u;
            // 0x1be684: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be680) {
            ctx->pc = 0x1BE690u;
            goto label_1be690;
        }
    }
    ctx->pc = 0x1BE688u;
    // 0x1be688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE688u;
    {
        const bool branch_taken_0x1be688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE688u;
            // 0x1be68c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be688) {
            ctx->pc = 0x1BE6A0u;
            goto label_1be6a0;
        }
    }
    ctx->pc = 0x1BE690u;
label_1be690:
    // 0x1be690: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1be690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1be694: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BE694u;
    {
        const bool branch_taken_0x1be694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE694u;
            // 0x1be698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be694) {
            ctx->pc = 0x1BE670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be670;
        }
    }
    ctx->pc = 0x1BE69Cu;
    // 0x1be69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be6a0:
    // 0x1be6a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be6a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be6a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be6a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be6a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be6a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be6ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be6acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be6b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6B4u;
            // 0x1be6b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE6BCu;
    // 0x1be6bc: 0x0  nop
    ctx->pc = 0x1be6bcu;
    // NOP
    ctx->pc = 0x1be6c0u;
}
