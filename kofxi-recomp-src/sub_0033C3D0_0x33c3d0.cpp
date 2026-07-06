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

// Function: sub_0033C3D0
// Address: 0x33c3d0 - 0x33c460
void sub_0033C3D0_0x33c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C3D0_0x33c3d0");
#endif

    ctx->pc = 0x33c3d0u;

    // 0x33c3d0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x33c3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33c3d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C3D4u;
    {
        const bool branch_taken_0x33c3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3D4u;
        // 0x33c3d8: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3d4) {
            ctx->pc = 0x33C3F0u;
            goto label_33c3f0;
        }
    }
    ctx->pc = 0x33C3DCu;
    // 0x33c3dc: 0x30623f00  andi        $v0, $v1, 0x3F00
    ctx->pc = 0x33c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
    // 0x33c3e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C3E0u;
    {
        const bool branch_taken_0x33c3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c3e0) {
            ctx->pc = 0x33C3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C3E0u;
            // 0x33c3e4: 0x30633f00  andi        $v1, $v1, 0x3F00 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C3F4u;
            goto label_33c3f4;
        }
    }
    ctx->pc = 0x33C3E8u;
    // 0x33c3e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33C3E8u;
    {
        const bool branch_taken_0x33c3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3E8u;
        // 0x33c3ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3e8) {
            ctx->pc = 0x33C44Cu;
            goto label_33c44c;
        }
    }
    ctx->pc = 0x33C3F0u;
label_33c3f0:
    // 0x33c3f0: 0x30633f00  andi        $v1, $v1, 0x3F00
    ctx->pc = 0x33c3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16128);
label_33c3f4:
    // 0x33c3f4: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x33C3F4u;
    {
        const bool branch_taken_0x33c3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c3f4) {
            ctx->pc = 0x33C3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C3F4u;
            // 0x33c3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C44Cu;
            goto label_33c44c;
        }
    }
    ctx->pc = 0x33C3FCu;
    // 0x33c3fc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x33c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x33c400: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33C400u;
    {
        const bool branch_taken_0x33c400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c400) {
            ctx->pc = 0x33C404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C400u;
            // 0x33c404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C44Cu;
            goto label_33c44c;
        }
    }
    ctx->pc = 0x33C408u;
    // 0x33c408: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x33c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x33c40c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33C40Cu;
    {
        const bool branch_taken_0x33c40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c40c) {
            ctx->pc = 0x33C440u;
            goto label_33c440;
        }
    }
    ctx->pc = 0x33C414u;
    // 0x33c414: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x33c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x33c418: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C418u;
    {
        const bool branch_taken_0x33c418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c418) {
            ctx->pc = 0x33C440u;
            goto label_33c440;
        }
    }
    ctx->pc = 0x33C420u;
    // 0x33c420: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x33c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x33c424: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C424u;
    {
        const bool branch_taken_0x33c424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c424) {
            ctx->pc = 0x33C440u;
            goto label_33c440;
        }
    }
    ctx->pc = 0x33C42Cu;
    // 0x33c42c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x33c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33c430: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C430u;
    {
        const bool branch_taken_0x33c430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c430) {
            ctx->pc = 0x33C440u;
            goto label_33c440;
        }
    }
    ctx->pc = 0x33C438u;
    // 0x33c438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33C438u;
    {
        const bool branch_taken_0x33c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C438u;
        // 0x33c43c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c438) {
            ctx->pc = 0x33C44Cu;
            goto label_33c44c;
        }
    }
    ctx->pc = 0x33C440u;
label_33c440:
    // 0x33c440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33c440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c444: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x33C444u;
    {
        const bool branch_taken_0x33c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c444) {
            ctx->pc = 0x33C44Cu;
            goto label_33c44c;
        }
    }
    ctx->pc = 0x33C44Cu;
label_33c44c:
    // 0x33c44c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C454u;
    // 0x33c454: 0x0  nop
    ctx->pc = 0x33c454u;
    // NOP
    // 0x33c458: 0x0  nop
    ctx->pc = 0x33c458u;
    // NOP
    // 0x33c45c: 0x0  nop
    ctx->pc = 0x33c45cu;
    // NOP
}
