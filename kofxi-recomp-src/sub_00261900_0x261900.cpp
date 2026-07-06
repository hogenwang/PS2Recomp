#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261900
// Address: 0x261900 - 0x261970
void sub_00261900_0x261900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261900_0x261900");
#endif

    switch (ctx->pc) {
        case 0x261920u: goto label_261920;
        case 0x261930u: goto label_261930;
        case 0x261964u: goto label_261964;
        default: break;
    }

    ctx->pc = 0x261900u;

    // 0x261900: 0x53827  nor         $a3, $zero, $a1
    ctx->pc = 0x261900u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x261904: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x261904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x261908: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x261908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x26190c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26190cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x261910: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x261910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x261914: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x261914u;
    {
        const bool branch_taken_0x261914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261914u;
            // 0x261918: 0x3c0801c1  lui         $t0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261914) {
            ctx->pc = 0x26195Cu;
            goto label_26195c;
        }
    }
    ctx->pc = 0x26191Cu;
    // 0x26191c: 0x8d02d770  lw          $v0, -0x2890($t0)
    ctx->pc = 0x26191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294956912)));
label_261920:
    // 0x261920: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x261920u;
    {
        const bool branch_taken_0x261920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261920u;
            // 0x261924: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261920) {
            ctx->pc = 0x261964u;
            goto label_261964;
        }
    }
    ctx->pc = 0x261928u;
    // 0x261928: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x261928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x26192c: 0x0  nop
    ctx->pc = 0x26192cu;
    // NOP
label_261930:
    // 0x261930: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x261930u;
    {
        const bool branch_taken_0x261930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x261930) {
            ctx->pc = 0x261934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x261930u;
            // 0x261934: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26194Cu;
            goto label_26194c;
        }
    }
    ctx->pc = 0x261938u;
    // 0x261938: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x261938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26193c: 0x5460fffc  bnel        $v1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x26193Cu;
    {
        const bool branch_taken_0x26193c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26193c) {
            ctx->pc = 0x261940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26193Cu;
            // 0x261940: 0x8c6200b0  lw          $v0, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x261930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261930;
        }
    }
    ctx->pc = 0x261944u;
    // 0x261944: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x261944u;
    {
        const bool branch_taken_0x261944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261944u;
            // 0x261948: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261944) {
            ctx->pc = 0x261968u;
            goto label_261968;
        }
    }
    ctx->pc = 0x26194Cu;
label_26194c:
    // 0x26194c: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x26194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x261950: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x261950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x261954: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x261954u;
    {
        const bool branch_taken_0x261954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261954u;
            // 0x261958: 0x8d02d770  lw          $v0, -0x2890($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294956912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261954) {
            ctx->pc = 0x261920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261920;
        }
    }
    ctx->pc = 0x26195Cu;
label_26195c:
    // 0x26195c: 0x3e00008  jr          $ra
    ctx->pc = 0x26195Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26195Cu;
            // 0x261960: 0x2402ffe5  addiu       $v0, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261964u;
label_261964:
    // 0x261964: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x261964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_261968:
    // 0x261968: 0x3e00008  jr          $ra
    ctx->pc = 0x261968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261968u;
            // 0x26196c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261970u;
    ctx->pc = 0x261970u;
}
