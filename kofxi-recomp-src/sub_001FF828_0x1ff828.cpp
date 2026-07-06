#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF828
// Address: 0x1ff828 - 0x1ff878
void sub_001FF828_0x1ff828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF828_0x1ff828");
#endif

    switch (ctx->pc) {
        case 0x1ff84cu: goto label_1ff84c;
        default: break;
    }

    ctx->pc = 0x1ff828u;

    // 0x1ff828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff82c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff83c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff840: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff844: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF844u;
    SET_GPR_U32(ctx, 31, 0x1FF84Cu);
    ctx->pc = 0x1FF848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF844u;
            // 0x1ff848: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (runtime->hasFunction(0x1FEFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF84Cu; }
        if (ctx->pc != 0x1FF84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFA8_0x1fefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF84Cu; }
        if (ctx->pc != 0x1FF84Cu) { return; }
    }
    ctx->pc = 0x1FF84Cu;
label_1ff84c:
    // 0x1ff84c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF84Cu;
    {
        const bool branch_taken_0x1ff84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff84c) {
            ctx->pc = 0x1FF850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF84Cu;
            // 0x1ff850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF864u;
            goto label_1ff864;
        }
    }
    ctx->pc = 0x1FF854u;
    // 0x1ff854: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1ff854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1ff858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff85c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff864:
    // 0x1ff864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff86c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF86Cu;
            // 0x1ff870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF874u;
    // 0x1ff874: 0x0  nop
    ctx->pc = 0x1ff874u;
    // NOP
    ctx->pc = 0x1ff878u;
}
