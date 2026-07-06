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

// Function: sub_001F63E8
// Address: 0x1f63e8 - 0x1f6440
void sub_001F63E8_0x1f63e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F63E8_0x1f63e8");
#endif

    switch (ctx->pc) {
        case 0x1f6400u: goto label_1f6400;
        case 0x1f642cu: goto label_1f642c;
        default: break;
    }

    ctx->pc = 0x1f63e8u;

    // 0x1f63e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f63e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f63ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f63ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f63f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f63f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f63f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f63f8: 0xc07d672  jal         func_1F59C8
    ctx->pc = 0x1F63F8u;
    SET_GPR_U32(ctx, 31, 0x1F6400u);
    ctx->pc = 0x1F63FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63F8u;
    // 0x1f63fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F59C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F59C8u, 0x1F63F8u, 0x1F6400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6400u;
label_1f6400:
    // 0x1f6400: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f6400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6404: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f6404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f6408: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f6408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f640c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1f640cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1f6410: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1f6410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x1f6414: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1f6414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x1f6418: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f6418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f641c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f641cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f6420: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f6420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f6424: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1F6424u;
    SET_GPR_U32(ctx, 31, 0x1F642Cu);
    ctx->pc = 0x1F6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6424u;
    // 0x1f6428: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1F6424u, 0x1F642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F642Cu;
label_1f642c:
    // 0x1f642c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f6434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6438: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6438u;
        // 0x1f643c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6440u;
}
