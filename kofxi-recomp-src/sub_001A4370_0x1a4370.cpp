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

// Function: sub_001A4370
// Address: 0x1a4370 - 0x1a43f0
void sub_001A4370_0x1a4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4370_0x1a4370");
#endif

    switch (ctx->pc) {
        case 0x1a4394u: goto label_1a4394;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43acu: goto label_1a43ac;
        default: break;
    }

    ctx->pc = 0x1a4370u;

    // 0x1a4370: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a4370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1a4374: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a4374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a437c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a4380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4384: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a4384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a4388: 0x24a56860  addiu       $a1, $a1, 0x6860
    ctx->pc = 0x1a4388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26720));
    // 0x1a438c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A438Cu;
    SET_GPR_U32(ctx, 31, 0x1A4394u);
    ctx->pc = 0x1A4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A438Cu;
    // 0x1a4390: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A438Cu, 0x1A4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4394u;
label_1a4394:
    // 0x1a4394: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x1a4398: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a4398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a439c: 0x26106de0  addiu       $s0, $s0, 0x6DE0
    ctx->pc = 0x1a439cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28128));
label_1a43a0:
    // 0x1a43a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a43a4: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A43A4u;
    SET_GPR_U32(ctx, 31, 0x1A43ACu);
    ctx->pc = 0x1A43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43A4u;
    // 0x1a43a8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A43A4u, 0x1A43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43ACu;
label_1a43ac:
    // 0x1a43ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A43ACu;
    {
        const bool branch_taken_0x1a43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a43ac) {
            ctx->pc = 0x1A43B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A43ACu;
            // 0x1a43b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A43C8u;
            goto label_1a43c8;
        }
    }
    ctx->pc = 0x1A43B4u;
    // 0x1a43b4: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x1a43b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a43b8: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1a43b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1a43bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a43bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a43c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A43C0u;
    {
        const bool branch_taken_0x1a43c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C0u;
        // 0x1a43c4: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43c0) {
            ctx->pc = 0x1A43D8u;
            goto label_1a43d8;
        }
    }
    ctx->pc = 0x1A43C8u;
label_1a43c8:
    // 0x1a43c8: 0x2a220398  slti        $v0, $s1, 0x398
    ctx->pc = 0x1a43c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)920) ? 1 : 0);
    // 0x1a43cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A43CCu;
    {
        const bool branch_taken_0x1a43cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43CCu;
        // 0x1a43d0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43cc) {
            ctx->pc = 0x1A43A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a43a0;
        }
    }
    ctx->pc = 0x1A43D4u;
    // 0x1a43d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a43d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a43d8:
    // 0x1a43d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a43d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a43dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a43dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a43e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a43e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a43e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A43E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43E4u;
        // 0x1a43e8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A43ECu;
    // 0x1a43ec: 0x0  nop
    ctx->pc = 0x1a43ecu;
    // NOP
}
