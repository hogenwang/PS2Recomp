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

// Function: sub_001F93D0
// Address: 0x1f93d0 - 0x1f9478
void sub_001F93D0_0x1f93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F93D0_0x1f93d0");
#endif

    switch (ctx->pc) {
        case 0x1f93e4u: goto label_1f93e4;
        case 0x1f942cu: goto label_1f942c;
        case 0x1f9444u: goto label_1f9444;
        default: break;
    }

    ctx->pc = 0x1f93d0u;

    // 0x1f93d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f93d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f93d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f93d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f93dc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F93DCu;
    SET_GPR_U32(ctx, 31, 0x1F93E4u);
    ctx->pc = 0x1F93E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93DCu;
    // 0x1f93e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F93DCu, 0x1F93E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93E4u;
label_1f93e4:
    // 0x1f93e4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f93e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f93e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93ec: 0x34a5013c  ori         $a1, $a1, 0x13C
    ctx->pc = 0x1f93ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)316);
    // 0x1f93f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F93F0u;
    {
        const bool branch_taken_0x1f93f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F0u;
        // 0x1f93f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f0) {
            ctx->pc = 0x1F9408u;
            goto label_1f9408;
        }
    }
    ctx->pc = 0x1F93F8u;
    // 0x1f93f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f93f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f93fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f93fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9400: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F9400u;
    ctx->pc = 0x1F9404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9400u;
    // 0x1f9404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F9408u;
label_1f9408:
    // 0x1f9408: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1f9408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f940c: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F940Cu;
    {
        const bool branch_taken_0x1f940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F940Cu;
        // 0x1f9410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f940c) {
            ctx->pc = 0x1F9468u;
            goto label_1f9468;
        }
    }
    ctx->pc = 0x1F9414u;
    // 0x1f9414: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1f9414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1f9418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f941c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1f941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9424: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1F9424u;
    SET_GPR_U32(ctx, 31, 0x1F942Cu);
    ctx->pc = 0x1F9428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9424u;
    // 0x1f9428: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1F9424u, 0x1F942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F942Cu;
label_1f942c:
    // 0x1f942c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9430: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f9430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9434: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1f9434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f943c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1F943Cu;
    SET_GPR_U32(ctx, 31, 0x1F9444u);
    ctx->pc = 0x1F9440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F943Cu;
    // 0x1f9440: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1F943Cu, 0x1F9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9444u;
label_1f9444:
    // 0x1f9444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f9448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f944c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9454: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1f9454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f945c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f945cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9460: 0x807f662  j           func_1FD988
    ctx->pc = 0x1F9460u;
    ctx->pc = 0x1F9464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9460u;
    // 0x1f9464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    sub_001FD988_0x1fd988(rdram, ctx, runtime); return;
    ctx->pc = 0x1F9468u;
label_1f9468:
    // 0x1f9468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f946c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f946cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9470: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9470u;
        // 0x1f9474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9478u;
}
