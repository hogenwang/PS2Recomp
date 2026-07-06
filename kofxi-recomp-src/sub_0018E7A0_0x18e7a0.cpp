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

// Function: sub_0018E7A0
// Address: 0x18e7a0 - 0x18e810
void sub_0018E7A0_0x18e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E7A0_0x18e7a0");
#endif

    switch (ctx->pc) {
        case 0x18e7b4u: goto label_18e7b4;
        case 0x18e7c0u: goto label_18e7c0;
        default: break;
    }

    ctx->pc = 0x18e7a0u;

    // 0x18e7a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e7a4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18e7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18e7a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e7ac: 0x24a5bcc0  addiu       $a1, $a1, -0x4340
    ctx->pc = 0x18e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
    // 0x18e7b0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x18e7b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18e7b4:
    // 0x18e7b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x18e7b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e7b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18e7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e7bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18e7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e7c0:
    // 0x18e7c0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x18e7c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e7c4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E7C4u;
    {
        const bool branch_taken_0x18e7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7C4u;
        // 0x18e7c8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7c4) {
            ctx->pc = 0x18E7D0u;
            goto label_18e7d0;
        }
    }
    ctx->pc = 0x18E7CCu;
    // 0x18e7cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e7ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e7d0:
    // 0x18e7d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x18e7d4: 0x29230080  slti        $v1, $t1, 0x80
    ctx->pc = 0x18e7d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18e7d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E7D8u;
    {
        const bool branch_taken_0x18e7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e7d8) {
            ctx->pc = 0x18E7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18e7c0;
        }
    }
    ctx->pc = 0x18E7E0u;
    // 0x18e7e0: 0x51000003  beql        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E7E0u;
    {
        const bool branch_taken_0x18e7e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7e0) {
            ctx->pc = 0x18E7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E7E0u;
            // 0x18e7e4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E7F0u;
            goto label_18e7f0;
        }
    }
    ctx->pc = 0x18E7E8u;
    // 0x18e7e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E7E8u;
    {
        const bool branch_taken_0x18e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7e8) {
            ctx->pc = 0x18E804u;
            goto label_18e804;
        }
    }
    ctx->pc = 0x18E7F0u;
label_18e7f0:
    // 0x18e7f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e7f4: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x18e7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18e7f8: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18E7F8u;
    {
        const bool branch_taken_0x18e7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e7f8) {
            ctx->pc = 0x18E7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E7F8u;
            // 0x18e7fc: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E7B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18e7b4;
        }
    }
    ctx->pc = 0x18E800u;
    // 0x18e800: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18e804:
    // 0x18e804: 0x3e00008  jr          $ra
    ctx->pc = 0x18E804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E80Cu;
    // 0x18e80c: 0x0  nop
    ctx->pc = 0x18e80cu;
    // NOP
    if (ctx->pc == 0x18e80cu) { ctx->pc = 0x18e810u; }
}
