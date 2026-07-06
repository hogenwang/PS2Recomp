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

// Function: sub_002A9400
// Address: 0x2a9400 - 0x2a94d0
void sub_002A9400_0x2a9400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9400_0x2a9400");
#endif

    switch (ctx->pc) {
        case 0x2a9440u: goto label_2a9440;
        case 0x2a9460u: goto label_2a9460;
        case 0x2a9474u: goto label_2a9474;
        case 0x2a9498u: goto label_2a9498;
        default: break;
    }

    ctx->pc = 0x2a9400u;

    // 0x2a9400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9404: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a9404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a9408: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a940c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a940cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9410: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a9410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a9414: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a9414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9418: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a9418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a941c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a941cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9420: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a9424: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9424u;
    {
        const bool branch_taken_0x2a9424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9424u;
        // 0x2a9428: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9424) {
            ctx->pc = 0x2A9430u;
            goto label_2a9430;
        }
    }
    ctx->pc = 0x2A942Cu;
    // 0x2a942c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2a942cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9430:
    // 0x2a9430: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9430u;
    {
        const bool branch_taken_0x2a9430 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9430) {
            ctx->pc = 0x2A9434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9430u;
            // 0x2a9434: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9450u;
            goto label_2a9450;
        }
    }
    ctx->pc = 0x2A9438u;
    // 0x2a9438: 0xc0aa35a  jal         func_2A8D68
    ctx->pc = 0x2A9438u;
    SET_GPR_U32(ctx, 31, 0x2A9440u);
    ctx->pc = 0x2A8D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D68u, 0x2A9438u, 0x2A9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9440u;
label_2a9440:
    // 0x2a9440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9444: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A9444u;
    {
        const bool branch_taken_0x2a9444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9444u;
        // 0x2a9448: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9444) {
            ctx->pc = 0x2A94B0u;
            goto label_2a94b0;
        }
    }
    ctx->pc = 0x2A944Cu;
    // 0x2a944c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a944cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a9450:
    // 0x2a9450: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a9450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9454: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a9454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9458: 0xc0a87e4  jal         func_2A1F90
    ctx->pc = 0x2A9458u;
    SET_GPR_U32(ctx, 31, 0x2A9460u);
    ctx->pc = 0x2A945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9458u;
    // 0x2a945c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1F90u, 0x2A9458u, 0x2A9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9460u;
label_2a9460:
    // 0x2a9460: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9460u;
    {
        const bool branch_taken_0x2a9460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9460) {
            ctx->pc = 0x2A947Cu;
            goto label_2a947c;
        }
    }
    ctx->pc = 0x2A9468u;
    // 0x2a9468: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a9468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a946c: 0xc0a89ec  jal         func_2A27B0
    ctx->pc = 0x2A946Cu;
    SET_GPR_U32(ctx, 31, 0x2A9474u);
    ctx->pc = 0x2A9470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A946Cu;
    // 0x2a9470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A27B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A27B0u, 0x2A946Cu, 0x2A9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9474u;
label_2a9474:
    // 0x2a9474: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A9474u;
    {
        const bool branch_taken_0x2a9474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9474) {
            ctx->pc = 0x2A949Cu;
            goto label_2a949c;
        }
    }
    ctx->pc = 0x2A947Cu;
label_2a947c:
    // 0x2a947c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A947Cu;
    {
        const bool branch_taken_0x2a947c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a947c) {
            ctx->pc = 0x2A9490u;
            goto label_2a9490;
        }
    }
    ctx->pc = 0x2A9484u;
    // 0x2a9484: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a9488: 0x50500004  beql        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9488u;
    {
        const bool branch_taken_0x2a9488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a9488) {
            ctx->pc = 0x2A948Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9488u;
            // 0x2a948c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A949Cu;
            goto label_2a949c;
        }
    }
    ctx->pc = 0x2A9490u;
label_2a9490:
    // 0x2a9490: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2A9490u;
    SET_GPR_U32(ctx, 31, 0x2A9498u);
    ctx->pc = 0x2A9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9490u;
    // 0x2a9494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8CD0u, 0x2A9490u, 0x2A9498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9498u;
label_2a9498:
    // 0x2a9498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a9498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a949c:
    // 0x2a949c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A949Cu;
    {
        const bool branch_taken_0x2a949c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A949Cu;
        // 0x2a94a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a949c) {
            ctx->pc = 0x2A94B0u;
            goto label_2a94b0;
        }
    }
    ctx->pc = 0x2A94A4u;
    // 0x2a94a4: 0x56200002  bnel        $s1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A94A4u;
    {
        const bool branch_taken_0x2a94a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a94a4) {
            ctx->pc = 0x2A94A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A94A4u;
            // 0x2a94a8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94B0u;
            goto label_2a94b0;
        }
    }
    ctx->pc = 0x2A94ACu;
    // 0x2a94ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a94acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a94b0:
    // 0x2a94b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a94b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a94b4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a94b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a94b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a94b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a94bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a94bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a94c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a94c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a94c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A94C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94C4u;
        // 0x2a94c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A94C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A94CCu;
    // 0x2a94cc: 0x0  nop
    ctx->pc = 0x2a94ccu;
    // NOP
}
