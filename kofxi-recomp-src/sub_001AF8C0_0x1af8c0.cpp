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

// Function: sub_001AF8C0
// Address: 0x1af8c0 - 0x1af940
void sub_001AF8C0_0x1af8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF8C0_0x1af8c0");
#endif

    switch (ctx->pc) {
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af908u: goto label_1af908;
        default: break;
    }

    ctx->pc = 0x1af8c0u;

    // 0x1af8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af8c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af8c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af8cc: 0x245101c8  addiu       $s1, $v0, 0x1C8
    ctx->pc = 0x1af8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x1af8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af8d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1af8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1af8dc: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AF8DCu;
    {
        const bool branch_taken_0x1af8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8DCu;
        // 0x1af8e0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8dc) {
            ctx->pc = 0x1AF928u;
            goto label_1af928;
        }
    }
    ctx->pc = 0x1AF8E4u;
    // 0x1af8e4: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x1af8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x1af8e8: 0x4620010  bltzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AF8E8u;
    {
        const bool branch_taken_0x1af8e8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1af8e8) {
            ctx->pc = 0x1AF8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF8E8u;
            // 0x1af8ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF92Cu;
            goto label_1af92c;
        }
    }
    ctx->pc = 0x1AF8F0u;
    // 0x1af8f0: 0xc06c4d8  jal         func_1B1360
    ctx->pc = 0x1AF8F0u;
    SET_GPR_U32(ctx, 31, 0x1AF8F8u);
    ctx->pc = 0x1AF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8F0u;
    // 0x1af8f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1360u, 0x1AF8F0u, 0x1AF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8F8u;
label_1af8f8:
    // 0x1af8f8: 0x50500004  beql        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF8F8u;
    {
        const bool branch_taken_0x1af8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1af8f8) {
            ctx->pc = 0x1AF8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF8F8u;
            // 0x1af8fc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF90Cu;
            goto label_1af90c;
        }
    }
    ctx->pc = 0x1AF900u;
    // 0x1af900: 0xc06c2cc  jal         func_1B0B30
    ctx->pc = 0x1AF900u;
    SET_GPR_U32(ctx, 31, 0x1AF908u);
    ctx->pc = 0x1AF904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF900u;
    // 0x1af904: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B30u, 0x1AF900u, 0x1AF908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF908u;
label_1af908:
    // 0x1af908: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af90c:
    // 0x1af90c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af910: 0xac5001d0  sw          $s0, 0x1D0($v0)
    ctx->pc = 0x1af910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 16));
    // 0x1af914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af91c: 0x806be16  j           func_1AF858
    ctx->pc = 0x1AF91Cu;
    ctx->pc = 0x1AF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF91Cu;
    // 0x1af920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF858u;
    kofxiFinalizeAsyncResourceLoad_0x1af858(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF924u;
    // 0x1af924: 0x0  nop
    ctx->pc = 0x1af924u;
    // NOP
label_1af928:
    // 0x1af928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af92c:
    // 0x1af92c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af934: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF934u;
        // 0x1af938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF93Cu;
    // 0x1af93c: 0x0  nop
    ctx->pc = 0x1af93cu;
    // NOP
}
