#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306FE0
// Address: 0x306fe0 - 0x307040
void sub_00306FE0_0x306fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306FE0_0x306fe0");
#endif

    switch (ctx->pc) {
        case 0x306ff4u: goto label_306ff4;
        case 0x306ff8u: goto label_306ff8;
        default: break;
    }

    ctx->pc = 0x306fe0u;

    // 0x306fe0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x306fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x306fe4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x306fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x306fe8: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x306fe8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x306fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ff0: 0x24a54658  addiu       $a1, $a1, 0x4658
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18008));
label_306ff4:
    // 0x306ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306ff8:
    // 0x306ff8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x306ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x306ffc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x306ffcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307000: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x307000u;
    {
        const bool branch_taken_0x307000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x307000) {
            ctx->pc = 0x307004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307000u;
            // 0x307004: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30701Cu;
            goto label_30701c;
        }
    }
    ctx->pc = 0x307008u;
    // 0x307008: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x307008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x30700c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x30700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x307010: 0xac86e800  sw          $a2, -0x1800($a0)
    ctx->pc = 0x307010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961152), GPR_U32(ctx, 6));
    // 0x307014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x307014u;
    {
        const bool branch_taken_0x307014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307014u;
            // 0x307018: 0xac67e7f8  sw          $a3, -0x1808($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307014) {
            ctx->pc = 0x307038u;
            goto label_307038;
        }
    }
    ctx->pc = 0x30701Cu;
label_30701c:
    // 0x30701c: 0x28c30006  slti        $v1, $a2, 0x6
    ctx->pc = 0x30701cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x307020: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x307020u;
    {
        const bool branch_taken_0x307020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307020) {
            ctx->pc = 0x306FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_306ff8;
        }
    }
    ctx->pc = 0x307028u;
    // 0x307028: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x307028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30702c: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x30702cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x307030: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x307030u;
    {
        const bool branch_taken_0x307030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307030u;
            // 0x307034: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307030) {
            ctx->pc = 0x306FF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_306ff4;
        }
    }
    ctx->pc = 0x307038u;
label_307038:
    // 0x307038: 0x3e00008  jr          $ra
    ctx->pc = 0x307038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307040u;
    ctx->pc = 0x307040u;
}
