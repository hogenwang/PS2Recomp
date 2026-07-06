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

// Function: sub_0013B360
// Address: 0x13b360 - 0x13b420
void sub_0013B360_0x13b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B360_0x13b360");
#endif

    switch (ctx->pc) {
        case 0x13b388u: goto label_13b388;
        case 0x13b3acu: goto label_13b3ac;
        case 0x13b3e0u: goto label_13b3e0;
        default: break;
    }

    ctx->pc = 0x13b360u;

    // 0x13b360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13b360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b364: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b36c: 0x90425bf0  lbu         $v0, 0x5BF0($v0)
    ctx->pc = 0x13b36cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23536)));
    // 0x13b370: 0x2c42002f  sltiu       $v0, $v0, 0x2F
    ctx->pc = 0x13b370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x13b374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B374u;
    {
        const bool branch_taken_0x13b374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b374) {
            ctx->pc = 0x13B388u;
            goto label_13b388;
        }
    }
    ctx->pc = 0x13B37Cu;
    // 0x13b37c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b380: 0xc04eca4  jal         func_13B290
    ctx->pc = 0x13B380u;
    SET_GPR_U32(ctx, 31, 0x13B388u);
    ctx->pc = 0x13B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B380u;
    // 0x13b384: 0xa0405bf0  sb          $zero, 0x5BF0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 23536), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B290u, 0x13B380u, 0x13B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B388u;
label_13b388:
    // 0x13b388: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b38c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x13b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x13b390: 0x90435bf0  lbu         $v1, 0x5BF0($v0)
    ctx->pc = 0x13b390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23536)));
    // 0x13b394: 0x24845bc0  addiu       $a0, $a0, 0x5BC0
    ctx->pc = 0x13b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23488));
    // 0x13b398: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x13b398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13b39c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13b3a0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13b3a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b3a4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13B3A4u;
    {
        const bool branch_taken_0x13b3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13b3a4) {
            ctx->pc = 0x13B3F8u;
            goto label_13b3f8;
        }
    }
    ctx->pc = 0x13B3ACu;
label_13b3ac:
    // 0x13b3ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b3b0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13b3b4: 0x90445bf0  lbu         $a0, 0x5BF0($v0)
    ctx->pc = 0x13b3b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23536)));
    // 0x13b3b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13b3bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b3c0: 0xa0645bf0  sb          $a0, 0x5BF0($v1)
    ctx->pc = 0x13b3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23536), (uint8_t)GPR_U32(ctx, 4));
    // 0x13b3c4: 0x90425bf0  lbu         $v0, 0x5BF0($v0)
    ctx->pc = 0x13b3c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23536)));
    // 0x13b3c8: 0x2c42002f  sltiu       $v0, $v0, 0x2F
    ctx->pc = 0x13b3c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x13b3cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B3CCu;
    {
        const bool branch_taken_0x13b3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3CCu;
        // 0x13b3d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3cc) {
            ctx->pc = 0x13B3E8u;
            goto label_13b3e8;
        }
    }
    ctx->pc = 0x13B3D4u;
    // 0x13b3d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b3d8: 0xc04eca4  jal         func_13B290
    ctx->pc = 0x13B3D8u;
    SET_GPR_U32(ctx, 31, 0x13B3E0u);
    ctx->pc = 0x13B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3D8u;
    // 0x13b3dc: 0xa0405bf0  sb          $zero, 0x5BF0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 23536), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B290u, 0x13B3D8u, 0x13B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3E0u;
label_13b3e0:
    // 0x13b3e0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x13b3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x13b3e4: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x13b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
label_13b3e8:
    // 0x13b3e8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13b3e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b3ec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13b3f0: 0x1062ffee  beq         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x13B3F0u;
    {
        const bool branch_taken_0x13b3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13b3f0) {
            ctx->pc = 0x13B3ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13b3ac;
        }
    }
    ctx->pc = 0x13B3F8u;
label_13b3f8:
    // 0x13b3f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x13b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x13b3fc: 0x90845bf0  lbu         $a0, 0x5BF0($a0)
    ctx->pc = 0x13b3fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23536)));
    // 0x13b400: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13b400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13b404: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x13b404u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b408: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13b408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13b40c: 0xa0645bf0  sb          $a0, 0x5BF0($v1)
    ctx->pc = 0x13b40cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23536), (uint8_t)GPR_U32(ctx, 4));
    // 0x13b410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b414: 0x3e00008  jr          $ra
    ctx->pc = 0x13B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B414u;
        // 0x13b418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B41Cu;
    // 0x13b41c: 0x0  nop
    ctx->pc = 0x13b41cu;
    // NOP
}
