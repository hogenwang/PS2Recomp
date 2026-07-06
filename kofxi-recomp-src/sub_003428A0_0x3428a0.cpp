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

// Function: sub_003428A0
// Address: 0x3428a0 - 0x342940
void sub_003428A0_0x3428a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003428A0_0x3428a0");
#endif

    switch (ctx->pc) {
        case 0x3428b8u: goto label_3428b8;
        case 0x342900u: goto label_342900;
        default: break;
    }

    ctx->pc = 0x3428a0u;

    // 0x3428a0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x3428a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x3428a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3428a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428a8: 0x24e7ec90  addiu       $a3, $a3, -0x1370
    ctx->pc = 0x3428a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962320));
    // 0x3428ac: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x3428acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x3428b0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3428b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3428b4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3428b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3428b8:
    // 0x3428b8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3428b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3428bc: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3428BCu;
    {
        const bool branch_taken_0x3428bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x3428bc) {
            ctx->pc = 0x3428D8u;
            goto label_3428d8;
        }
    }
    ctx->pc = 0x3428C4u;
    // 0x3428c4: 0x94859718  lhu         $a1, -0x68E8($a0)
    ctx->pc = 0x3428c4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294940440)));
    // 0x3428c8: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x3428c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3428cc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x3428ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x3428d0: 0xa4659718  sh          $a1, -0x68E8($v1)
    ctx->pc = 0x3428d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294940440), (uint16_t)GPR_U32(ctx, 5));
    // 0x3428d4: 0x0  nop
    ctx->pc = 0x3428d4u;
    // NOP
label_3428d8:
    // 0x3428d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3428d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3428dc: 0x29050028  slti        $a1, $t0, 0x28
    ctx->pc = 0x3428dcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3428e0: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3428E0u;
    {
        const bool branch_taken_0x3428e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3428E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428E0u;
        // 0x3428e4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428e0) {
            ctx->pc = 0x3428B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3428b8;
        }
    }
    ctx->pc = 0x3428E8u;
    // 0x3428e8: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x3428e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x3428ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3428ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428f0: 0x2508ec90  addiu       $t0, $t0, -0x1370
    ctx->pc = 0x3428f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962320));
    // 0x3428f4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x3428f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x3428f8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3428f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3428fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3428fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_342900:
    // 0x342900: 0x91050028  lbu         $a1, 0x28($t0)
    ctx->pc = 0x342900u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x342904: 0x10a60006  beq         $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x342904u;
    {
        const bool branch_taken_0x342904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x342904) {
            ctx->pc = 0x342920u;
            goto label_342920;
        }
    }
    ctx->pc = 0x34290Cu;
    // 0x34290c: 0x94859718  lhu         $a1, -0x68E8($a0)
    ctx->pc = 0x34290cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294940440)));
    // 0x342910: 0xa1060028  sb          $a2, 0x28($t0)
    ctx->pc = 0x342910u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x342914: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x342914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x342918: 0xa4659718  sh          $a1, -0x68E8($v1)
    ctx->pc = 0x342918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294940440), (uint16_t)GPR_U32(ctx, 5));
    // 0x34291c: 0x0  nop
    ctx->pc = 0x34291cu;
    // NOP
label_342920:
    // 0x342920: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x342920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x342924: 0x28e50022  slti        $a1, $a3, 0x22
    ctx->pc = 0x342924u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x342928: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x342928u;
    {
        const bool branch_taken_0x342928 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342928u;
        // 0x34292c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342928) {
            ctx->pc = 0x342900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342900;
        }
    }
    ctx->pc = 0x342930u;
    // 0x342930: 0x3e00008  jr          $ra
    ctx->pc = 0x342930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342938u;
    // 0x342938: 0x0  nop
    ctx->pc = 0x342938u;
    // NOP
    // 0x34293c: 0x0  nop
    ctx->pc = 0x34293cu;
    // NOP
}
