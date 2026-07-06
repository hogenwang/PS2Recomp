#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343510
// Address: 0x343510 - 0x343580
void sub_00343510_0x343510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343510_0x343510");
#endif

    switch (ctx->pc) {
        case 0x343570u: goto label_343570;
        default: break;
    }

    ctx->pc = 0x343510u;

    // 0x343510: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x343510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x343514: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343518: 0xac434348  sw          $v1, 0x4348($v0)
    ctx->pc = 0x343518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17224), GPR_U32(ctx, 3));
    // 0x34351c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34351cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343520: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x343520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x343524: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x343524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x343528: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x343528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34352c: 0x24843480  addiu       $a0, $a0, 0x3480
    ctx->pc = 0x34352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    // 0x343530: 0x80558d4  j           func_156350
    ctx->pc = 0x343530u;
    ctx->pc = 0x343534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343530u;
    // 0x343534: 0xac43d9c0  sw          $v1, -0x2640($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x343538u;
    // 0x343538: 0x0  nop
    ctx->pc = 0x343538u;
    // NOP
    // 0x34353c: 0x0  nop
    ctx->pc = 0x34353cu;
    // NOP
    // 0x343540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343544: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34354c: 0x8c644348  lw          $a0, 0x4348($v1)
    ctx->pc = 0x34354cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x343550: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x343550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x343554: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343558: 0x2881ffd9  slti        $at, $a0, -0x27
    ctx->pc = 0x343558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967257) ? 1 : 0);
    // 0x34355c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34355Cu;
    {
        const bool branch_taken_0x34355c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x343560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34355Cu;
        // 0x343560: 0xac644348  sw          $a0, 0x4348($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34355c) {
            ctx->pc = 0x343570u;
            goto label_343570;
        }
    }
    ctx->pc = 0x343564u;
    // 0x343564: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x343564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x343568: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343568u;
    SET_GPR_U32(ctx, 31, 0x343570u);
    ctx->pc = 0x34356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343568u;
    // 0x34356c: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x343568u, 0x343570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343570u;
label_343570:
    // 0x343570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343574: 0x3e00008  jr          $ra
    ctx->pc = 0x343574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343574u;
        // 0x343578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34357Cu;
    // 0x34357c: 0x0  nop
    ctx->pc = 0x34357cu;
    // NOP
    if (ctx->pc == 0x34357cu) { ctx->pc = 0x343580u; }
}
