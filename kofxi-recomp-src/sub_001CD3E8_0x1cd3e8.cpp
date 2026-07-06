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

// Function: sub_001CD3E8
// Address: 0x1cd3e8 - 0x1cd4a0
void sub_001CD3E8_0x1cd3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD3E8_0x1cd3e8");
#endif

    switch (ctx->pc) {
        case 0x1cd424u: goto label_1cd424;
        case 0x1cd480u: goto label_1cd480;
        default: break;
    }

    ctx->pc = 0x1cd3e8u;

    // 0x1cd3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd3ec: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd3f4: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1cd3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1cd3f8: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd3fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd400: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x1cd400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x1cd404: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd408: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd410: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd414: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1cd414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1cd418: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cd418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd41c: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD41Cu;
    SET_GPR_U32(ctx, 31, 0x1CD424u);
    ctx->pc = 0x1CD420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD41Cu;
    // 0x1cd420: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1CD41Cu, 0x1CD424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD424u;
label_1cd424:
    // 0x1cd424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd428: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd430: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD430u;
        // 0x1cd434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD438u;
    // 0x1cd438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd43c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1cd440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd444: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1cd444u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1cd448: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x1cd448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x1cd44c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd454: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x1cd454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x1cd458: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1cd458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1cd45c: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1cd45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1cd460: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1cd460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1cd464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd468: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1cd468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1cd46c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cd46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd470: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cd470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd474: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cd474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd478: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1CD478u;
    SET_GPR_U32(ctx, 31, 0x1CD480u);
    ctx->pc = 0x1CD47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD478u;
    // 0x1cd47c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1CD478u, 0x1CD480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD480u;
label_1cd480:
    // 0x1cd480: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cd484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd488: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1cd488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1cd48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cd494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd498: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD498u;
        // 0x1cd49c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4A0u;
}
