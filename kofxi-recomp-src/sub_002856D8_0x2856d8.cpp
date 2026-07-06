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

// Function: sub_002856D8
// Address: 0x2856d8 - 0x285750
void sub_002856D8_0x2856d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002856D8_0x2856d8");
#endif

    switch (ctx->pc) {
        case 0x285738u: goto label_285738;
        default: break;
    }

    ctx->pc = 0x2856d8u;

    // 0x2856d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2856d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2856dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2856dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2856e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2856e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2856E4u;
    {
        const bool branch_taken_0x2856e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856E4u;
        // 0x2856e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856e4) {
            ctx->pc = 0x2856F4u;
            goto label_2856f4;
        }
    }
    ctx->pc = 0x2856ECu;
    // 0x2856ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2856ECu;
    {
        const bool branch_taken_0x2856ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856ECu;
        // 0x2856f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856ec) {
            ctx->pc = 0x28573Cu;
            goto label_28573c;
        }
    }
    ctx->pc = 0x2856F4u;
label_2856f4:
    // 0x2856f4: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x2856f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2856f8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2856f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2856fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2856FCu;
    {
        const bool branch_taken_0x2856fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856FCu;
        // 0x285700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856fc) {
            ctx->pc = 0x28570Cu;
            goto label_28570c;
        }
    }
    ctx->pc = 0x285704u;
    // 0x285704: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x285704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
    // 0x285708: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x285708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_28570c:
    // 0x28570c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28570Cu;
    {
        const bool branch_taken_0x28570c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28570c) {
            ctx->pc = 0x285710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28570Cu;
            // 0x285710: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285720u;
            goto label_285720;
        }
    }
    ctx->pc = 0x285714u;
    // 0x285714: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x285714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x285718: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x285718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x28571c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x28571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_285720:
    // 0x285720: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x285720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x285724: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x285724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x285728: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x285728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28572c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285730: 0xc0a1558  jal         func_285560
    ctx->pc = 0x285730u;
    SET_GPR_U32(ctx, 31, 0x285738u);
    ctx->pc = 0x285734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285730u;
    // 0x285734: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x285730u, 0x285738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285738u;
label_285738:
    // 0x285738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x285738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28573c:
    // 0x28573c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28573cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285744: 0x3e00008  jr          $ra
    ctx->pc = 0x285744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285744u;
        // 0x285748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28574Cu;
    // 0x28574c: 0x0  nop
    ctx->pc = 0x28574cu;
    // NOP
    if (ctx->pc == 0x28574cu) { ctx->pc = 0x285750u; }
}
