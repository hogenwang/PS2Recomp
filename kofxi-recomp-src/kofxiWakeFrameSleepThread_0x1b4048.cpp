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

// Function: kofxiWakeFrameSleepThread
// Address: 0x1b4048 - 0x1b40c8
void kofxiWakeFrameSleepThread_0x1b4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWakeFrameSleepThread_0x1b4048");
#endif

    switch (ctx->pc) {
        case 0x1b4080u: goto label_1b4080;
        case 0x1b40a4u: goto label_1b40a4;
        default: break;
    }

    ctx->pc = 0x1b4048u;

    // 0x1b4048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b4048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b404c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b4050: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1b4050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1b4054: 0x2451304c  addiu       $s1, $v0, 0x304C
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12364));
    // 0x1b4058: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b4058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b405c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4060: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b4060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b4064: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4064u;
    {
        const bool branch_taken_0x1b4064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4064u;
        // 0x1b4068: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4064) {
            ctx->pc = 0x1B40B0u;
            goto label_1b40b0;
        }
    }
    ctx->pc = 0x1B406Cu;
    // 0x1b406c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b4070: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b4070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4074: 0x24503098  addiu       $s0, $v0, 0x3098
    ctx->pc = 0x1b4074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12440));
    // 0x1b4078: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x1B4078u;
    SET_GPR_U32(ctx, 31, 0x1B4080u);
    ctx->pc = 0x1B407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4078u;
    // 0x1b407c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB60u, 0x1B4078u, 0x1B4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4080u;
label_1b4080:
    // 0x1b4080: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b4080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4084: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4088: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4088u;
    {
        const bool branch_taken_0x1b4088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4088u;
        // 0x1b408c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4088) {
            ctx->pc = 0x1B4098u;
            goto label_1b4098;
        }
    }
    ctx->pc = 0x1B4090u;
    // 0x1b4090: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4090u;
    {
        const bool branch_taken_0x1b4090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b4090) {
            ctx->pc = 0x1B4094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4090u;
            // 0x1b4094: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B40B4u;
            goto label_1b40b4;
        }
    }
    ctx->pc = 0x1B4098u;
label_1b4098:
    // 0x1b4098: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b4098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b409c: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B409Cu;
    SET_GPR_U32(ctx, 31, 0x1B40A4u);
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x1B409Cu, 0x1B40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40A4u;
label_1b40a4:
    // 0x1b40a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b40a8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B40A8u;
    {
        const bool branch_taken_0x1b40a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b40a8) {
            ctx->pc = 0x1B40ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B40A8u;
            // 0x1b40ac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B40B0u;
            goto label_1b40b0;
        }
    }
    ctx->pc = 0x1B40B0u;
label_1b40b0:
    // 0x1b40b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b40b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b40b4:
    // 0x1b40b4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b40b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b40b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b40b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b40bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B40BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40BCu;
        // 0x1b40c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B40BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B40C4u;
    // 0x1b40c4: 0x0  nop
    ctx->pc = 0x1b40c4u;
    // NOP
}
