#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE8F8
// Address: 0x1fe8f8 - 0x1fe970
void sub_001FE8F8_0x1fe8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE8F8_0x1fe8f8");
#endif

    switch (ctx->pc) {
        case 0x1fe928u: goto label_1fe928;
        case 0x1fe930u: goto label_1fe930;
        case 0x1fe94cu: goto label_1fe94c;
        default: break;
    }

    ctx->pc = 0x1fe8f8u;

    // 0x1fe8f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe900: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x1fe900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fe904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe908: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe90c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe910: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fe910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe914: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fe918: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fe918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe91c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe920: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1fe920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fe924: 0x0  nop
    ctx->pc = 0x1fe924u;
    // NOP
label_1fe928:
    // 0x1fe928: 0xc07fa5c  jal         func_1FE970
    ctx->pc = 0x1FE928u;
    SET_GPR_U32(ctx, 31, 0x1FE930u);
    ctx->pc = 0x1FE92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE928u;
            // 0x1fe92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE970u;
    if (runtime->hasFunction(0x1FE970u)) {
        auto targetFn = runtime->lookupFunction(0x1FE970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE930u; }
        if (ctx->pc != 0x1FE930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE970_0x1fe970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE930u; }
        if (ctx->pc != 0x1FE930u) { return; }
    }
    ctx->pc = 0x1FE930u;
label_1fe930:
    // 0x1fe930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe934: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fe934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe938: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fe93c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fe93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe940: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1fe940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1fe944: 0xc07a9f6  jal         func_1EA7D8
    ctx->pc = 0x1FE944u;
    SET_GPR_U32(ctx, 31, 0x1FE94Cu);
    ctx->pc = 0x1FE948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE944u;
            // 0x1fe948: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA7D8u;
    if (runtime->hasFunction(0x1EA7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EA7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE94Cu; }
        if (ctx->pc != 0x1FE94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA7D8_0x1ea7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE94Cu; }
        if (ctx->pc != 0x1FE94Cu) { return; }
    }
    ctx->pc = 0x1FE94Cu;
label_1fe94c:
    // 0x1fe94c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1fe94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fe950: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FE950u;
    {
        const bool branch_taken_0x1fe950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE950u;
            // 0x1fe954: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe950) {
            ctx->pc = 0x1FE928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe928;
        }
    }
    ctx->pc = 0x1FE958u;
    // 0x1fe958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe95c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe964: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe968: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE968u;
            // 0x1fe96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE970u;
    ctx->pc = 0x1fe970u;
}
