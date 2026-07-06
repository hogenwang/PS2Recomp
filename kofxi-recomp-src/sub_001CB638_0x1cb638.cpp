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

// Function: sub_001CB638
// Address: 0x1cb638 - 0x1cb6b0
void sub_001CB638_0x1cb638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB638_0x1cb638");
#endif

    switch (ctx->pc) {
        case 0x1cb694u: goto label_1cb694;
        case 0x1cb69cu: goto label_1cb69c;
        default: break;
    }

    ctx->pc = 0x1cb638u;

    // 0x1cb638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb63c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB63Cu;
    {
        const bool branch_taken_0x1cb63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB63Cu;
        // 0x1cb640: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb63c) {
            ctx->pc = 0x1CB64Cu;
            goto label_1cb64c;
        }
    }
    ctx->pc = 0x1CB644u;
    // 0x1cb644: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB644u;
    {
        const bool branch_taken_0x1cb644 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB644u;
        // 0x1cb648: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb644) {
            ctx->pc = 0x1CB668u;
            goto label_1cb668;
        }
    }
    ctx->pc = 0x1CB64Cu;
label_1cb64c:
    // 0x1cb64c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cb650: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cb654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb658: 0x2484ba18  addiu       $a0, $a0, -0x45E8
    ctx->pc = 0x1cb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949400));
    // 0x1cb65c: 0x24a5b9c8  addiu       $a1, $a1, -0x4638
    ctx->pc = 0x1cb65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
    // 0x1cb660: 0x8072c9a  j           func_1CB268
    ctx->pc = 0x1CB660u;
    ctx->pc = 0x1CB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB660u;
    // 0x1cb664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB668u;
label_1cb668:
    // 0x1cb668: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x1cb668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x1cb66c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x1cb66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x1cb670: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1cb670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x1cb674: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB674u;
        // 0x1cb678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB67Cu;
    // 0x1cb67c: 0x0  nop
    ctx->pc = 0x1cb67cu;
    // NOP
    // 0x1cb680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb688: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb68c: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CB68Cu;
    SET_GPR_U32(ctx, 31, 0x1CB694u);
    ctx->pc = 0x1CB690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB68Cu;
    // 0x1cb690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CB68Cu, 0x1CB694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB694u;
label_1cb694:
    // 0x1cb694: 0xc072dac  jal         func_1CB6B0
    ctx->pc = 0x1CB694u;
    SET_GPR_U32(ctx, 31, 0x1CB69Cu);
    ctx->pc = 0x1CB698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB694u;
    // 0x1cb698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6B0u, 0x1CB694u, 0x1CB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB69Cu;
label_1cb69c:
    // 0x1cb69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb6a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb6a4: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CB6A4u;
    ctx->pc = 0x1CB6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6A4u;
    // 0x1cb6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB6ACu;
    // 0x1cb6ac: 0x0  nop
    ctx->pc = 0x1cb6acu;
    // NOP
}
