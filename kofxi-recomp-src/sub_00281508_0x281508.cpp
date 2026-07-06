#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281508
// Address: 0x281508 - 0x281550
void sub_00281508_0x281508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281508_0x281508");
#endif

    switch (ctx->pc) {
        case 0x281518u: goto label_281518;
        case 0x281548u: goto label_281548;
        default: break;
    }

    ctx->pc = 0x281508u;

    // 0x281508: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281508u;
    {
        const bool branch_taken_0x281508 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281508u;
            // 0x28150c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281508) {
            ctx->pc = 0x281518u;
            goto label_281518;
        }
    }
    ctx->pc = 0x281510u;
    // 0x281510: 0x3e00008  jr          $ra
    ctx->pc = 0x281510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281510u;
            // 0x281514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281518u;
label_281518:
    // 0x281518: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281518u;
    {
        const bool branch_taken_0x281518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281518) {
            ctx->pc = 0x281548u;
            goto label_281548;
        }
    }
    ctx->pc = 0x281520u;
    // 0x281520: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x281520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281524: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x281524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281528: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x281528u;
    {
        const bool branch_taken_0x281528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281528) {
            ctx->pc = 0x281548u;
            goto label_281548;
        }
    }
    ctx->pc = 0x281530u;
    // 0x281530: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x281530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x281534: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281534u;
    {
        const bool branch_taken_0x281534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281534u;
            // 0x281538: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281534) {
            ctx->pc = 0x281548u;
            goto label_281548;
        }
    }
    ctx->pc = 0x28153Cu;
    // 0x28153c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281540: 0x3e00008  jr          $ra
    ctx->pc = 0x281540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281540u;
            // 0x281544: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281548u;
label_281548:
    // 0x281548: 0x3e00008  jr          $ra
    ctx->pc = 0x281548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281548u;
            // 0x28154c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281550u;
    ctx->pc = 0x281550u;
}
