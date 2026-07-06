#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025C908
// Address: 0x25c908 - 0x25c970
void sub_0025C908_0x25c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C908_0x25c908");
#endif

    switch (ctx->pc) {
        case 0x25c930u: goto label_25c930;
        case 0x25c938u: goto label_25c938;
        case 0x25c954u: goto label_25c954;
        default: break;
    }

    ctx->pc = 0x25c908u;

    // 0x25c908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c90c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25c910: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25c914: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x25c914u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x25c918: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c920: 0x8e441750  lw          $a0, 0x1750($s2)
    ctx->pc = 0x25c920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
    // 0x25c924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25c928: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25C928u;
    SET_GPR_U32(ctx, 31, 0x25C930u);
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C930u; }
        if (ctx->pc != 0x25C930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C930u; }
        if (ctx->pc != 0x25C930u) { return; }
    }
    ctx->pc = 0x25C930u;
label_25c930:
    // 0x25c930: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25c930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25c934: 0x8c70ae90  lw          $s0, -0x5170($v1)
    ctx->pc = 0x25c934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946448)));
label_25c938:
    // 0x25c938: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C938u;
    {
        const bool branch_taken_0x25c938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c938) {
            ctx->pc = 0x25C94Cu;
            goto label_25c94c;
        }
    }
    ctx->pc = 0x25C940u;
    // 0x25c940: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x25c940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25c944: 0x5451fffc  bnel        $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x25C944u;
    {
        const bool branch_taken_0x25c944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x25c944) {
            ctx->pc = 0x25C948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25C944u;
            // 0x25c948: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25C938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c938;
        }
    }
    ctx->pc = 0x25C94Cu;
label_25c94c:
    // 0x25c94c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25C94Cu;
    SET_GPR_U32(ctx, 31, 0x25C954u);
    ctx->pc = 0x25C950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C94Cu;
            // 0x25c950: 0x8e441750  lw          $a0, 0x1750($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C954u; }
        if (ctx->pc != 0x25C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C954u; }
        if (ctx->pc != 0x25C954u) { return; }
    }
    ctx->pc = 0x25C954u;
label_25c954:
    // 0x25c954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c958: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25c958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c95c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25c95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c960: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25c960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25c964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c968: 0x3e00008  jr          $ra
    ctx->pc = 0x25C968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C968u;
            // 0x25c96c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C970u;
    ctx->pc = 0x25c970u;
}
