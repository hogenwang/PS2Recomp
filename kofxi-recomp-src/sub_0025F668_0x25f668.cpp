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

// Function: sub_0025F668
// Address: 0x25f668 - 0x25f6e0
void sub_0025F668_0x25f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F668_0x25f668");
#endif

    switch (ctx->pc) {
        case 0x25f68cu: goto label_25f68c;
        case 0x25f698u: goto label_25f698;
        case 0x25f6acu: goto label_25f6ac;
        case 0x25f6c0u: goto label_25f6c0;
        default: break;
    }

    ctx->pc = 0x25f668u;

    // 0x25f668: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25f668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25f66c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25f670: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25f674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25f674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f678: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f67c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f680: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25f680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25f684: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25F684u;
    SET_GPR_U32(ctx, 31, 0x25F68Cu);
    ctx->pc = 0x25F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F684u;
    // 0x25f688: 0x2411ffe4  addiu       $s1, $zero, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25F684u, 0x25F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F68Cu;
label_25f68c:
    // 0x25f68c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25f68cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f690: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25f694: 0x8c50fcd0  lw          $s0, -0x330($v0)
    ctx->pc = 0x25f694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
label_25f698:
    // 0x25f698: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25F698u;
    {
        const bool branch_taken_0x25f698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F698u;
        // 0x25f69c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f698) {
            ctx->pc = 0x25F6B8u;
            goto label_25f6b8;
        }
    }
    ctx->pc = 0x25F6A0u;
    // 0x25f6a0: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x25f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x25f6a4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x25F6A4u;
    SET_GPR_U32(ctx, 31, 0x25F6ACu);
    ctx->pc = 0x25F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6A4u;
    // 0x25f6a8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x25F6A4u, 0x25F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6ACu;
label_25f6ac:
    // 0x25f6ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25F6ACu;
    {
        const bool branch_taken_0x25f6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f6ac) {
            ctx->pc = 0x25F6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F6ACu;
            // 0x25f6b0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f698;
        }
    }
    ctx->pc = 0x25F6B4u;
    // 0x25f6b4: 0x9611002c  lhu         $s1, 0x2C($s0)
    ctx->pc = 0x25f6b4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_25f6b8:
    // 0x25f6b8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25F6B8u;
    SET_GPR_U32(ctx, 31, 0x25F6C0u);
    ctx->pc = 0x25F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6B8u;
    // 0x25f6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25F6B8u, 0x25F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6C0u;
label_25f6c0:
    // 0x25f6c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25f6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25f6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f6c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25f6c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f6cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25f6ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f6d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25f6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6D8u;
        // 0x25f6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F6E0u;
}
