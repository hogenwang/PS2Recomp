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

// Function: sub_0014E350
// Address: 0x14e350 - 0x14e3f0
void sub_0014E350_0x14e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E350_0x14e350");
#endif

    switch (ctx->pc) {
        case 0x14e368u: goto label_14e368;
        case 0x14e380u: goto label_14e380;
        case 0x14e3a0u: goto label_14e3a0;
        case 0x14e3bcu: goto label_14e3bc;
        case 0x14e3d4u: goto label_14e3d4;
        default: break;
    }

    ctx->pc = 0x14e350u;

    // 0x14e350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e354: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e360: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x14E360u;
    SET_GPR_U32(ctx, 31, 0x14E368u);
    ctx->pc = 0x14E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E360u;
    // 0x14e364: 0x8c44e4c0  lw          $a0, -0x1B40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x14E360u, 0x14E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E368u;
label_14e368:
    // 0x14e368: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e36c: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14E36Cu;
    {
        const bool branch_taken_0x14e36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14e36c) {
            ctx->pc = 0x14E3C4u;
            goto label_14e3c4;
        }
    }
    ctx->pc = 0x14E374u;
    // 0x14e374: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e378: 0xc06e84e  jal         func_1BA138
    ctx->pc = 0x14E378u;
    SET_GPR_U32(ctx, 31, 0x14E380u);
    ctx->pc = 0x14E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E378u;
    // 0x14e37c: 0x8c44e4c0  lw          $a0, -0x1B40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA138u, 0x14E378u, 0x14E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E380u;
label_14e380:
    // 0x14e380: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x14e380u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14e384: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e388: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x14e388u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x14e38c: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14e390: 0x6602fffb  daddiu      $v0, $s0, -0x5
    ctx->pc = 0x14e390u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967291);
    // 0x14e394: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x14e394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14e398: 0xc06e822  jal         func_1BA088
    ctx->pc = 0x14E398u;
    SET_GPR_U32(ctx, 31, 0x14E3A0u);
    ctx->pc = 0x14E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E398u;
    // 0x14e39c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x14E398u, 0x14E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3A0u;
label_14e3a0:
    // 0x14e3a0: 0x2a01fce0  slti        $at, $s0, -0x320
    ctx->pc = 0x14e3a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294966496) ? 1 : 0);
    // 0x14e3a4: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14E3A4u;
    {
        const bool branch_taken_0x14e3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e3a4) {
            ctx->pc = 0x14E3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E3A4u;
            // 0x14e3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E3D8u;
            goto label_14e3d8;
        }
    }
    ctx->pc = 0x14E3ACu;
    // 0x14e3ac: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e3b0: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14e3b4: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14E3B4u;
    SET_GPR_U32(ctx, 31, 0x14E3BCu);
    ctx->pc = 0x14E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3B4u;
    // 0x14e3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB010u, 0x14E3B4u, 0x14E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3BCu;
label_14e3bc:
    // 0x14e3bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E3BCu;
    {
        const bool branch_taken_0x14e3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3BCu;
        // 0x14e3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3bc) {
            ctx->pc = 0x14E3D8u;
            goto label_14e3d8;
        }
    }
    ctx->pc = 0x14E3C4u;
label_14e3c4:
    // 0x14e3c4: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14e3c8: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14e3cc: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14E3CCu;
    SET_GPR_U32(ctx, 31, 0x14E3D4u);
    ctx->pc = 0x14E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3CCu;
    // 0x14e3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB010u, 0x14E3CCu, 0x14E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3D4u;
label_14e3d4:
    // 0x14e3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e3d8:
    // 0x14e3d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e3dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3E0u;
        // 0x14e3e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E3E8u;
    // 0x14e3e8: 0x0  nop
    ctx->pc = 0x14e3e8u;
    // NOP
    // 0x14e3ec: 0x0  nop
    ctx->pc = 0x14e3ecu;
    // NOP
}
