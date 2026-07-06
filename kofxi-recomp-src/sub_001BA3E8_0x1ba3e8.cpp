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

// Function: sub_001BA3E8
// Address: 0x1ba3e8 - 0x1ba440
void sub_001BA3E8_0x1ba3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA3E8_0x1ba3e8");
#endif

    switch (ctx->pc) {
        case 0x1ba400u: goto label_1ba400;
        case 0x1ba41cu: goto label_1ba41c;
        case 0x1ba428u: goto label_1ba428;
        default: break;
    }

    ctx->pc = 0x1ba3e8u;

    // 0x1ba3e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ba3ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1ba3f0: 0xac44c36c  sw          $a0, -0x3C94($v0)
    ctx->pc = 0x1ba3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951788), GPR_U32(ctx, 4));
    // 0x1ba3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3F4u;
        // 0x1ba3f8: 0xac64c370  sw          $a0, -0x3C90($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951792), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA3FCu;
    // 0x1ba3fc: 0x0  nop
    ctx->pc = 0x1ba3fcu;
    // NOP
label_1ba400:
    // 0x1ba400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba40c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba414: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA414u;
    SET_GPR_U32(ctx, 31, 0x1BA41Cu);
    ctx->pc = 0x1BA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA414u;
    // 0x1ba418: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA414u, 0x1BA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA41Cu;
label_1ba41c:
    // 0x1ba41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba420: 0xc06e910  jal         func_1BA440
    ctx->pc = 0x1BA420u;
    SET_GPR_U32(ctx, 31, 0x1BA428u);
    ctx->pc = 0x1BA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA420u;
    // 0x1ba424: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA440u, 0x1BA420u, 0x1BA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA428u;
label_1ba428:
    // 0x1ba428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba42c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba434: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BA434u;
    ctx->pc = 0x1BA438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA434u;
    // 0x1ba438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA43Cu;
    // 0x1ba43c: 0x0  nop
    ctx->pc = 0x1ba43cu;
    // NOP
    if (ctx->pc == 0x1ba43cu) { ctx->pc = 0x1ba440u; }
}
