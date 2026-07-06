#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF608
// Address: 0x1df608 - 0x1df6a0
void sub_001DF608_0x1df608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF608_0x1df608");
#endif

    switch (ctx->pc) {
        case 0x1df640u: goto label_1df640;
        default: break;
    }

    ctx->pc = 0x1df608u;

    // 0x1df608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df60c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df610: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1df610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df614: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1df614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1df618: 0x24930364  addiu       $s3, $a0, 0x364
    ctx->pc = 0x1df618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 868));
    // 0x1df61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df624: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1df624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1df628: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1df628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1df62c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1df62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1df630: 0x8c94037c  lw          $s4, 0x37C($a0)
    ctx->pc = 0x1df630u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 892)));
    // 0x1df634: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1df634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1df638: 0xc0782a4  jal         func_1E0A90
    ctx->pc = 0x1DF638u;
    SET_GPR_U32(ctx, 31, 0x1DF640u);
    ctx->pc = 0x1DF63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF638u;
            // 0x1df63c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A90u;
    if (runtime->hasFunction(0x1E0A90u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF640u; }
        if (ctx->pc != 0x1DF640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A90_0x1e0a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF640u; }
        if (ctx->pc != 0x1DF640u) { return; }
    }
    ctx->pc = 0x1DF640u;
label_1df640:
    // 0x1df640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df644: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF644u;
    {
        const bool branch_taken_0x1df644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1df644) {
            ctx->pc = 0x1DF648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF644u;
            // 0x1df648: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF658u;
            goto label_1df658;
        }
    }
    ctx->pc = 0x1DF64Cu;
    // 0x1df64c: 0x16930004  bne         $s4, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF64Cu;
    {
        const bool branch_taken_0x1df64c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x1df64c) {
            ctx->pc = 0x1DF660u;
            goto label_1df660;
        }
    }
    ctx->pc = 0x1DF654u;
    // 0x1df654: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1df654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_1df658:
    // 0x1df658: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF658u;
    {
        const bool branch_taken_0x1df658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF658u;
            // 0x1df65c: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df658) {
            ctx->pc = 0x1DF680u;
            goto label_1df680;
        }
    }
    ctx->pc = 0x1DF660u;
label_1df660:
    // 0x1df660: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF660u;
    {
        const bool branch_taken_0x1df660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF660u;
            // 0x1df664: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df660) {
            ctx->pc = 0x1DF678u;
            goto label_1df678;
        }
    }
    ctx->pc = 0x1DF668u;
    // 0x1df668: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF668u;
    {
        const bool branch_taken_0x1df668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df668) {
            ctx->pc = 0x1DF66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF668u;
            // 0x1df66c: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF67Cu;
            goto label_1df67c;
        }
    }
    ctx->pc = 0x1DF670u;
    // 0x1df670: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1df674: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1df674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_1df678:
    // 0x1df678: 0xae510048  sw          $s1, 0x48($s2)
    ctx->pc = 0x1df678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
label_1df67c:
    // 0x1df67c: 0xae500044  sw          $s0, 0x44($s2)
    ctx->pc = 0x1df67cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 16));
label_1df680:
    // 0x1df680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df688: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df68c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1df68cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df690: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1df690u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df694: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1df694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df698: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF698u;
            // 0x1df69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF6A0u;
    ctx->pc = 0x1df6a0u;
}
