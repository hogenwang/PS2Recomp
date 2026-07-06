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

// Function: sub_0027F3C8
// Address: 0x27f3c8 - 0x27f450
void sub_0027F3C8_0x27f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F3C8_0x27f3c8");
#endif

    switch (ctx->pc) {
        case 0x27f3f4u: goto label_27f3f4;
        case 0x27f41cu: goto label_27f41c;
        default: break;
    }

    ctx->pc = 0x27f3c8u;

    // 0x27f3c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f3cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27f3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f3d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27f3d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27f3d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27f3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27f3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27f3e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27f3e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27f3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3ec: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x27F3ECu;
    SET_GPR_U32(ctx, 31, 0x27F3F4u);
    ctx->pc = 0x27F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F3ECu;
    // 0x27f3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x27F3ECu, 0x27F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3F4u;
label_27f3f4:
    // 0x27f3f4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x27F3F4u;
    {
        const bool branch_taken_0x27f3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F3F4u;
        // 0x27f3f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3f4) {
            ctx->pc = 0x27F434u;
            goto label_27f434;
        }
    }
    ctx->pc = 0x27F3FCu;
    // 0x27f3fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f400: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27f408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f40c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27f410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27f410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f414: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x27F414u;
    SET_GPR_U32(ctx, 31, 0x27F41Cu);
    ctx->pc = 0x27F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F414u;
    // 0x27f418: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x27F414u, 0x27F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F41Cu;
label_27f41c:
    // 0x27f41c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27f420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f424: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x27f424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x27f428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27f428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f42c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x27f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x27f430: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x27f430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_27f434:
    // 0x27f434: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27f434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f438: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27f438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f43c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27f43cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f440: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27f440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f444: 0x3e00008  jr          $ra
    ctx->pc = 0x27F444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F444u;
        // 0x27f448: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F44Cu;
    // 0x27f44c: 0x0  nop
    ctx->pc = 0x27f44cu;
    // NOP
    if (ctx->pc == 0x27f44cu) { ctx->pc = 0x27f450u; }
}
