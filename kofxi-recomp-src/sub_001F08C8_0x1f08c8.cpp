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

// Function: sub_001F08C8
// Address: 0x1f08c8 - 0x1f0958
void sub_001F08C8_0x1f08c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F08C8_0x1f08c8");
#endif

    switch (ctx->pc) {
        case 0x1f08e8u: goto label_1f08e8;
        case 0x1f0900u: goto label_1f0900;
        case 0x1f0920u: goto label_1f0920;
        case 0x1f093cu: goto label_1f093c;
        default: break;
    }

    ctx->pc = 0x1f08c8u;

    // 0x1f08c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f08c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f08cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f08ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f08d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f08d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f08d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f08d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f08d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f08dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f08dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08e0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f08e4: 0x0  nop
    ctx->pc = 0x1f08e4u;
    // NOP
label_1f08e8:
    // 0x1f08e8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F08E8u;
    {
        const bool branch_taken_0x1f08e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08E8u;
        // 0x1f08ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08e8) {
            ctx->pc = 0x1F0934u;
            goto label_1f0934;
        }
    }
    ctx->pc = 0x1F08F0u;
    // 0x1f08f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f08f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08f4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f08f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f08f8: 0xc07c256  jal         func_1F0958
    ctx->pc = 0x1F08F8u;
    SET_GPR_U32(ctx, 31, 0x1F0900u);
    ctx->pc = 0x1F08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08F8u;
    // 0x1f08fc: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0958u, 0x1F08F8u, 0x1F0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0900u;
label_1f0900:
    // 0x1f0900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0904: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0908: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0908u;
    {
        const bool branch_taken_0x1f0908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0908u;
        // 0x1f090c: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0908) {
            ctx->pc = 0x1F0934u;
            goto label_1f0934;
        }
    }
    ctx->pc = 0x1F0910u;
    // 0x1f0910: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0914: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1f0914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f0918: 0xc07c442  jal         func_1F1108
    ctx->pc = 0x1F0918u;
    SET_GPR_U32(ctx, 31, 0x1F0920u);
    ctx->pc = 0x1F091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0918u;
    // 0x1f091c: 0x8fa70008  lw          $a3, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1108u, 0x1F0918u, 0x1F0920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0920u;
label_1f0920:
    // 0x1f0920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0924: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0924u;
    {
        const bool branch_taken_0x1f0924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0924u;
        // 0x1f0928: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0924) {
            ctx->pc = 0x1F0934u;
            goto label_1f0934;
        }
    }
    ctx->pc = 0x1F092Cu;
    // 0x1f092c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1F092Cu;
    {
        const bool branch_taken_0x1f092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f092c) {
            ctx->pc = 0x1F0930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F092Cu;
            // 0x1f0930: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F08E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f08e8;
        }
    }
    ctx->pc = 0x1F0934u;
label_1f0934:
    // 0x1f0934: 0xc07d096  jal         func_1F4258
    ctx->pc = 0x1F0934u;
    SET_GPR_U32(ctx, 31, 0x1F093Cu);
    ctx->pc = 0x1F0938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0934u;
    // 0x1f0938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4258u, 0x1F0934u, 0x1F093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F093Cu;
label_1f093c:
    // 0x1f093c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f093cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0940: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f0940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0944: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f0944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f094c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F094Cu;
        // 0x1f0950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F094Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0954u;
    // 0x1f0954: 0x0  nop
    ctx->pc = 0x1f0954u;
    // NOP
    if (ctx->pc == 0x1f0954u) { ctx->pc = 0x1f0958u; }
}
