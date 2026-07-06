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

// Function: sub_001B8080
// Address: 0x1b8080 - 0x1b8108
void sub_001B8080_0x1b8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8080_0x1b8080");
#endif

    switch (ctx->pc) {
        case 0x1b80c8u: goto label_1b80c8;
        case 0x1b80d0u: goto label_1b80d0;
        case 0x1b80e0u: goto label_1b80e0;
        default: break;
    }

    ctx->pc = 0x1b8080u;

    // 0x1b8080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b808c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b8094: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b8098: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1b8098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b809c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B809Cu;
    {
        const bool branch_taken_0x1b809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b809c) {
            ctx->pc = 0x1B80A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B809Cu;
            // 0x1b80a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B80F4u;
            goto label_1b80f4;
        }
    }
    ctx->pc = 0x1B80A4u;
    // 0x1b80a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b80a8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B80A8u;
    {
        const bool branch_taken_0x1b80a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b80a8) {
            ctx->pc = 0x1B80ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B80A8u;
            // 0x1b80ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B80F4u;
            goto label_1b80f4;
        }
    }
    ctx->pc = 0x1B80B0u;
    // 0x1b80b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b80b4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b80b8: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x1b80b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b80bc: 0x2471b41c  addiu       $s1, $v1, -0x4BE4
    ctx->pc = 0x1b80bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947868));
    // 0x1b80c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b80c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b80c4: 0x0  nop
    ctx->pc = 0x1b80c4u;
    // NOP
label_1b80c8:
    // 0x1b80c8: 0xc06e04e  jal         func_1B8138
    ctx->pc = 0x1B80C8u;
    SET_GPR_U32(ctx, 31, 0x1B80D0u);
    ctx->pc = 0x1B80CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80C8u;
    // 0x1b80cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8138u, 0x1B80C8u, 0x1B80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80D0u;
label_1b80d0:
    // 0x1b80d0: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B80D0u;
    {
        const bool branch_taken_0x1b80d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1B80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80D0u;
        // 0x1b80d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80d0) {
            ctx->pc = 0x1B80E4u;
            goto label_1b80e4;
        }
    }
    ctx->pc = 0x1B80D8u;
    // 0x1b80d8: 0xc06dd2a  jal         func_1B74A8
    ctx->pc = 0x1B80D8u;
    SET_GPR_U32(ctx, 31, 0x1B80E0u);
    ctx->pc = 0x1B74A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A8u, 0x1B80D8u, 0x1B80E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80E0u;
label_1b80e0:
    // 0x1b80e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1b80e4:
    // 0x1b80e4: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x1b80e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1b80e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B80E8u;
    {
        const bool branch_taken_0x1b80e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b80e8) {
            ctx->pc = 0x1B80C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b80c8;
        }
    }
    ctx->pc = 0x1B80F0u;
    // 0x1b80f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b80f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b80f4:
    // 0x1b80f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b80f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b80f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b80f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b80fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b80fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8100: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8100u;
        // 0x1b8104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8108u;
}
