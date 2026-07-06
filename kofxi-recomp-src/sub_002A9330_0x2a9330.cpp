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

// Function: sub_002A9330
// Address: 0x2a9330 - 0x2a9400
void sub_002A9330_0x2a9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9330_0x2a9330");
#endif

    switch (ctx->pc) {
        case 0x2a9370u: goto label_2a9370;
        case 0x2a9390u: goto label_2a9390;
        case 0x2a93a4u: goto label_2a93a4;
        case 0x2a93c8u: goto label_2a93c8;
        default: break;
    }

    ctx->pc = 0x2a9330u;

    // 0x2a9330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9334: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a9334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a9338: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a9338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a933c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a933cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9340: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a9340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a9344: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a9344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9348: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a9348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a934c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a934cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9350: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a9354: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9354u;
    {
        const bool branch_taken_0x2a9354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9354u;
        // 0x2a9358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9354) {
            ctx->pc = 0x2A9360u;
            goto label_2a9360;
        }
    }
    ctx->pc = 0x2A935Cu;
    // 0x2a935c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2a935cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9360:
    // 0x2a9360: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9360u;
    {
        const bool branch_taken_0x2a9360 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9360) {
            ctx->pc = 0x2A9364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9360u;
            // 0x2a9364: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9380u;
            goto label_2a9380;
        }
    }
    ctx->pc = 0x2A9368u;
    // 0x2a9368: 0xc0aa35a  jal         func_2A8D68
    ctx->pc = 0x2A9368u;
    SET_GPR_U32(ctx, 31, 0x2A9370u);
    ctx->pc = 0x2A8D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D68u, 0x2A9368u, 0x2A9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9370u;
label_2a9370:
    // 0x2a9370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9374: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A9374u;
    {
        const bool branch_taken_0x2a9374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9374) {
            ctx->pc = 0x2A93CCu;
            goto label_2a93cc;
        }
    }
    ctx->pc = 0x2A937Cu;
    // 0x2a937c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a937cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a9380:
    // 0x2a9380: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a9380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9384: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a9384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9388: 0xc0a87ca  jal         func_2A1F28
    ctx->pc = 0x2A9388u;
    SET_GPR_U32(ctx, 31, 0x2A9390u);
    ctx->pc = 0x2A938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9388u;
    // 0x2a938c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F28u, 0x2A9388u, 0x2A9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9390u;
label_2a9390:
    // 0x2a9390: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9390u;
    {
        const bool branch_taken_0x2a9390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9390) {
            ctx->pc = 0x2A93ACu;
            goto label_2a93ac;
        }
    }
    ctx->pc = 0x2A9398u;
    // 0x2a9398: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a9398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a939c: 0xc0a89ec  jal         func_2A27B0
    ctx->pc = 0x2A939Cu;
    SET_GPR_U32(ctx, 31, 0x2A93A4u);
    ctx->pc = 0x2A93A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A939Cu;
    // 0x2a93a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A27B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A27B0u, 0x2A939Cu, 0x2A93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93A4u;
label_2a93a4:
    // 0x2a93a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A93A4u;
    {
        const bool branch_taken_0x2a93a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a93a4) {
            ctx->pc = 0x2A93CCu;
            goto label_2a93cc;
        }
    }
    ctx->pc = 0x2A93ACu;
label_2a93ac:
    // 0x2a93ac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A93ACu;
    {
        const bool branch_taken_0x2a93ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a93ac) {
            ctx->pc = 0x2A93C0u;
            goto label_2a93c0;
        }
    }
    ctx->pc = 0x2A93B4u;
    // 0x2a93b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a93b8: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A93B8u;
    {
        const bool branch_taken_0x2a93b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a93b8) {
            ctx->pc = 0x2A93BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A93B8u;
            // 0x2a93bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A93CCu;
            goto label_2a93cc;
        }
    }
    ctx->pc = 0x2A93C0u;
label_2a93c0:
    // 0x2a93c0: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2A93C0u;
    SET_GPR_U32(ctx, 31, 0x2A93C8u);
    ctx->pc = 0x2A93C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A93C0u;
    // 0x2a93c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8CD0u, 0x2A93C0u, 0x2A93C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93C8u;
label_2a93c8:
    // 0x2a93c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a93c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a93cc:
    // 0x2a93cc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A93CCu;
    {
        const bool branch_taken_0x2a93cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93CCu;
        // 0x2a93d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93cc) {
            ctx->pc = 0x2A93E0u;
            goto label_2a93e0;
        }
    }
    ctx->pc = 0x2A93D4u;
    // 0x2a93d4: 0x56000002  bnel        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A93D4u;
    {
        const bool branch_taken_0x2a93d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a93d4) {
            ctx->pc = 0x2A93D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A93D4u;
            // 0x2a93d8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A93E0u;
            goto label_2a93e0;
        }
    }
    ctx->pc = 0x2A93DCu;
    // 0x2a93dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a93dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a93e0:
    // 0x2a93e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a93e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a93e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a93e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a93e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a93e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a93ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a93ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a93f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a93f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a93f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A93F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93F4u;
        // 0x2a93f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A93F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A93FCu;
    // 0x2a93fc: 0x0  nop
    ctx->pc = 0x2a93fcu;
    // NOP
}
