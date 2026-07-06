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

// Function: sub_0011B270
// Address: 0x11b270 - 0x11b310
void sub_0011B270_0x11b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B270_0x11b270");
#endif

    switch (ctx->pc) {
        case 0x11b2a0u: goto label_11b2a0;
        case 0x11b2b8u: goto label_11b2b8;
        case 0x11b2c4u: goto label_11b2c4;
        case 0x11b2d0u: goto label_11b2d0;
        case 0x11b2d8u: goto label_11b2d8;
        case 0x11b2e0u: goto label_11b2e0;
        case 0x11b2f0u: goto label_11b2f0;
        default: break;
    }

    ctx->pc = 0x11b270u;

    // 0x11b270: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b278: 0x8c439dd4  lw          $v1, -0x622C($v0)
    ctx->pc = 0x11b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942164)));
    // 0x11b27c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b280: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B280u;
    {
        const bool branch_taken_0x11b280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B280u;
        // 0x11b284: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b280) {
            ctx->pc = 0x11B2A8u;
            goto label_11b2a8;
        }
    }
    ctx->pc = 0x11B288u;
    // 0x11b288: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11b288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11b28c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b290: 0xac629e20  sw          $v0, -0x61E0($v1)
    ctx->pc = 0x11b290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942240), GPR_U32(ctx, 2));
    // 0x11b294: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11b294u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11b298: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11B298u;
    SET_GPR_U32(ctx, 31, 0x11B2A0u);
    ctx->pc = 0x11B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B298u;
    // 0x11b29c: 0x8e049de0  lw          $a0, -0x6220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11B298u, 0x11B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2A0u;
label_11b2a0:
    // 0x11b2a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B2A0u;
    {
        const bool branch_taken_0x11b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2A0u;
        // 0x11b2a4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2a0) {
            ctx->pc = 0x11B2B0u;
            goto label_11b2b0;
        }
    }
    ctx->pc = 0x11B2A8u;
label_11b2a8:
    // 0x11b2a8: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11b2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11b2ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11b2b0:
    // 0x11b2b0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11B2B0u;
    SET_GPR_U32(ctx, 31, 0x11B2B8u);
    ctx->pc = 0x11B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2B0u;
    // 0x11b2b4: 0x8c449de8  lw          $a0, -0x6218($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11B2B0u, 0x11B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2B8u;
label_11b2b8:
    // 0x11b2b8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11b2bc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11B2BCu;
    SET_GPR_U32(ctx, 31, 0x11B2C4u);
    ctx->pc = 0x11B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2BCu;
    // 0x11b2c0: 0x8c649dec  lw          $a0, -0x6214($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11B2BCu, 0x11B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2C4u;
label_11b2c4:
    // 0x11b2c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11b2c8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11B2C8u;
    SET_GPR_U32(ctx, 31, 0x11B2D0u);
    ctx->pc = 0x11B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2C8u;
    // 0x11b2cc: 0x8c649df0  lw          $a0, -0x6210($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11B2C8u, 0x11B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2D0u;
label_11b2d0:
    // 0x11b2d0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11B2D0u;
    SET_GPR_U32(ctx, 31, 0x11B2D8u);
    ctx->pc = 0x11B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2D0u;
    // 0x11b2d4: 0x8e049de0  lw          $a0, -0x6220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11B2D0u, 0x11B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2D8u;
label_11b2d8:
    // 0x11b2d8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11B2D8u;
    SET_GPR_U32(ctx, 31, 0x11B2E0u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x11B2D8u, 0x11B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2E0u;
label_11b2e0:
    // 0x11b2e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11b2e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2e8: 0xc043fea  jal         func_10FFA8
    ctx->pc = 0x11B2E8u;
    SET_GPR_U32(ctx, 31, 0x11B2F0u);
    ctx->pc = 0x11B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2E8u;
    // 0x11b2ec: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFA8u, 0x11B2E8u, 0x11B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2F0u;
label_11b2f0:
    // 0x11b2f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B2F0u;
    {
        const bool branch_taken_0x11b2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2F0u;
        // 0x11b2f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2f0) {
            ctx->pc = 0x11B304u;
            goto label_11b304;
        }
    }
    ctx->pc = 0x11B2F8u;
    // 0x11b2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b2fc: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x11B2FCu;
    ctx->pc = 0x11B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2FCu;
    // 0x11b300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x11B304u;
label_11b304:
    // 0x11b304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b308: 0x3e00008  jr          $ra
    ctx->pc = 0x11B308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B308u;
        // 0x11b30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B310u;
}
