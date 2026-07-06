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

// Function: sub_002D9190
// Address: 0x2d9190 - 0x2d91f8
void sub_002D9190_0x2d9190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9190_0x2d9190");
#endif

    switch (ctx->pc) {
        case 0x2d91c0u: goto label_2d91c0;
        default: break;
    }

    ctx->pc = 0x2d9190u;

    // 0x2d9190: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d9190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9198: 0x61703  sra         $v0, $a2, 28
    ctx->pc = 0x2d9198u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 28));
    // 0x2d919c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2d919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d91a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D91A0u;
    {
        const bool branch_taken_0x2d91a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91A0u;
        // 0x2d91a4: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91a0) {
            ctx->pc = 0x2D91B8u;
            goto label_2d91b8;
        }
    }
    ctx->pc = 0x2D91A8u;
    // 0x2d91a8: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2d91a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2d91ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D91ACu;
    {
        const bool branch_taken_0x2d91ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91ACu;
        // 0x2d91b0: 0x824023  subu        $t0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91ac) {
            ctx->pc = 0x2D91BCu;
            goto label_2d91bc;
        }
    }
    ctx->pc = 0x2D91B4u;
    // 0x2d91b4: 0x0  nop
    ctx->pc = 0x2d91b4u;
    // NOP
label_2d91b8:
    // 0x2d91b8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2d91b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d91bc:
    // 0x2d91bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d91bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d91c0:
    // 0x2d91c0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d91c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d91c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d91c8: 0x461807  srav        $v1, $a2, $v0
    ctx->pc = 0x2d91c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d91cc: 0x28a40007  slti        $a0, $a1, 0x7
    ctx->pc = 0x2d91ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2d91d0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2d91d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2d91d4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2d91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d91d8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D91D8u;
    {
        const bool branch_taken_0x2d91d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91D8u;
        // 0x2d91dc: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91d8) {
            ctx->pc = 0x2D91C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d91c0;
        }
    }
    ctx->pc = 0x2D91E0u;
    // 0x2d91e0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2d91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2d91e4: 0x81f00  sll         $v1, $t0, 28
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 28));
    // 0x2d91e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d91e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d91ec: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2d91ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2d91f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D91F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91F0u;
        // 0x2d91f4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D91F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D91F8u;
}
