#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED700
// Address: 0x1ed700 - 0x1ed770
void sub_001ED700_0x1ed700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED700_0x1ed700");
#endif

    switch (ctx->pc) {
        case 0x1ed734u: goto label_1ed734;
        case 0x1ed748u: goto label_1ed748;
        default: break;
    }

    ctx->pc = 0x1ed700u;

    // 0x1ed700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed70c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ed70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed718: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED718u;
    {
        const bool branch_taken_0x1ed718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED718u;
            // 0x1ed71c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed718) {
            ctx->pc = 0x1ED75Cu;
            goto label_1ed75c;
        }
    }
    ctx->pc = 0x1ED720u;
    // 0x1ed720: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED720u;
    {
        const bool branch_taken_0x1ed720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed720) {
            ctx->pc = 0x1ED740u;
            goto label_1ed740;
        }
    }
    ctx->pc = 0x1ED728u;
    // 0x1ed728: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ed72c: 0xc07b5dc  jal         func_1ED770
    ctx->pc = 0x1ED72Cu;
    SET_GPR_U32(ctx, 31, 0x1ED734u);
    ctx->pc = 0x1ED730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED72Cu;
            // 0x1ed730: 0x248416dc  addiu       $a0, $a0, 0x16DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5852));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED770u;
    if (runtime->hasFunction(0x1ED770u)) {
        auto targetFn = runtime->lookupFunction(0x1ED770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED734u; }
        if (ctx->pc != 0x1ED734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED770_0x1ed770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED734u; }
        if (ctx->pc != 0x1ED734u) { return; }
    }
    ctx->pc = 0x1ED734u;
label_1ed734:
    // 0x1ed734: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED734u;
    {
        const bool branch_taken_0x1ed734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED734u;
            // 0x1ed738: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed734) {
            ctx->pc = 0x1ED75Cu;
            goto label_1ed75c;
        }
    }
    ctx->pc = 0x1ED73Cu;
    // 0x1ed73c: 0x0  nop
    ctx->pc = 0x1ed73cu;
    // NOP
label_1ed740:
    // 0x1ed740: 0xc07b5dc  jal         func_1ED770
    ctx->pc = 0x1ED740u;
    SET_GPR_U32(ctx, 31, 0x1ED748u);
    ctx->pc = 0x1ED744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED740u;
            // 0x1ed744: 0x260409f8  addiu       $a0, $s0, 0x9F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED770u;
    if (runtime->hasFunction(0x1ED770u)) {
        auto targetFn = runtime->lookupFunction(0x1ED770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED748u; }
        if (ctx->pc != 0x1ED748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED770_0x1ed770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED748u; }
        if (ctx->pc != 0x1ED748u) { return; }
    }
    ctx->pc = 0x1ED748u;
label_1ed748:
    // 0x1ed748: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1ed748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1ed74c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED74Cu;
    {
        const bool branch_taken_0x1ed74c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ED750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED74Cu;
            // 0x1ed750: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed74c) {
            ctx->pc = 0x1ED758u;
            goto label_1ed758;
        }
    }
    ctx->pc = 0x1ED754u;
    // 0x1ed754: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1ed754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1ed758:
    // 0x1ed758: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ed758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed75c:
    // 0x1ed75c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed768: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED768u;
            // 0x1ed76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED770u;
    ctx->pc = 0x1ed770u;
}
