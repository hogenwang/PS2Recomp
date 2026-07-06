#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343020
// Address: 0x343020 - 0x343080
void sub_00343020_0x343020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343020_0x343020");
#endif

    switch (ctx->pc) {
        case 0x343028u: goto label_343028;
        default: break;
    }

    ctx->pc = 0x343020u;

    // 0x343020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x343020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343024: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x343024u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_343028:
    // 0x343028: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x343028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34302c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x343030: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343030u;
    {
        const bool branch_taken_0x343030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x343034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343030u;
            // 0x343034: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343030) {
            ctx->pc = 0x343040u;
            goto label_343040;
        }
    }
    ctx->pc = 0x343038u;
    // 0x343038: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x343038u;
    {
        const bool branch_taken_0x343038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343038u;
            // 0x34303c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343038) {
            ctx->pc = 0x343074u;
            goto label_343074;
        }
    }
    ctx->pc = 0x343040u;
label_343040:
    // 0x343040: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x343040u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x343044: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x343044u;
    {
        const bool branch_taken_0x343044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343044) {
            ctx->pc = 0x343048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343044u;
            // 0x343048: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343064u;
            goto label_343064;
        }
    }
    ctx->pc = 0x34304Cu;
    // 0x34304c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x34304cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x343050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343050u;
    {
        const bool branch_taken_0x343050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343050) {
            ctx->pc = 0x343060u;
            goto label_343060;
        }
    }
    ctx->pc = 0x343058u;
    // 0x343058: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x343058u;
    {
        const bool branch_taken_0x343058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343058u;
            // 0x34305c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343058) {
            ctx->pc = 0x343074u;
            goto label_343074;
        }
    }
    ctx->pc = 0x343060u;
label_343060:
    // 0x343060: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x343060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_343064:
    // 0x343064: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x343064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x343068: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x343068u;
    {
        const bool branch_taken_0x343068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343068) {
            ctx->pc = 0x34306Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343068u;
            // 0x34306c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343028;
        }
    }
    ctx->pc = 0x343070u;
    // 0x343070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343074:
    // 0x343074: 0x3e00008  jr          $ra
    ctx->pc = 0x343074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34307Cu;
    // 0x34307c: 0x0  nop
    ctx->pc = 0x34307cu;
    // NOP
    ctx->pc = 0x343080u;
}
