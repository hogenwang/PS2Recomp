#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F600
// Address: 0x13f600 - 0x13f680
void sub_0013F600_0x13f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F600_0x13f600");
#endif

    switch (ctx->pc) {
        case 0x13f628u: goto label_13f628;
        default: break;
    }

    ctx->pc = 0x13f600u;

    // 0x13f600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f60c: 0x8ca30238  lw          $v1, 0x238($a1)
    ctx->pc = 0x13f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 568)));
    // 0x13f610: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x13f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x13f614: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F614u;
    {
        const bool branch_taken_0x13f614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F614u;
            // 0x13f618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f614) {
            ctx->pc = 0x13F63Cu;
            goto label_13f63c;
        }
    }
    ctx->pc = 0x13F61Cu;
    // 0x13f61c: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x13f61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x13f620: 0xc04f910  jal         func_13E440
    ctx->pc = 0x13F620u;
    SET_GPR_U32(ctx, 31, 0x13F628u);
    ctx->pc = 0x13F624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F620u;
            // 0x13f624: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E440u;
    if (runtime->hasFunction(0x13E440u)) {
        auto targetFn = runtime->lookupFunction(0x13E440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F628u; }
        if (ctx->pc != 0x13F628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E440_0x13e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F628u; }
        if (ctx->pc != 0x13F628u) { return; }
    }
    ctx->pc = 0x13F628u;
label_13f628:
    // 0x13f628: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x13f628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13f62c: 0x8602022c  lh          $v0, 0x22C($s0)
    ctx->pc = 0x13f62cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x13f630: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13f630u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13f634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f638: 0xa602022c  sh          $v0, 0x22C($s0)
    ctx->pc = 0x13f638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 2));
label_13f63c:
    // 0x13f63c: 0x8603022c  lh          $v1, 0x22C($s0)
    ctx->pc = 0x13f63cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x13f640: 0x86020228  lh          $v0, 0x228($s0)
    ctx->pc = 0x13f640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x13f644: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13f644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13f648: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F648u;
    {
        const bool branch_taken_0x13f648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f648) {
            ctx->pc = 0x13F64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F648u;
            // 0x13f64c: 0x8e040238  lw          $a0, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F658u;
            goto label_13f658;
        }
    }
    ctx->pc = 0x13F650u;
    // 0x13f650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13F650u;
    {
        const bool branch_taken_0x13f650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F650u;
            // 0x13f654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f650) {
            ctx->pc = 0x13F668u;
            goto label_13f668;
        }
    }
    ctx->pc = 0x13F658u;
label_13f658:
    // 0x13f658: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x13f658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x13f65c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13f65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f660: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f664: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x13f664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
label_13f668:
    // 0x13f668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f670: 0x3e00008  jr          $ra
    ctx->pc = 0x13F670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F670u;
            // 0x13f674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F678u;
    // 0x13f678: 0x0  nop
    ctx->pc = 0x13f678u;
    // NOP
    // 0x13f67c: 0x0  nop
    ctx->pc = 0x13f67cu;
    // NOP
    ctx->pc = 0x13f680u;
}
