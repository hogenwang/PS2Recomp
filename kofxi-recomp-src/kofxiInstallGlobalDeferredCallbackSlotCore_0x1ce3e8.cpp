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

// Function: kofxiInstallGlobalDeferredCallbackSlotCore
// Address: 0x1ce3e8 - 0x1ce428
void kofxiInstallGlobalDeferredCallbackSlotCore_0x1ce3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiInstallGlobalDeferredCallbackSlotCore_0x1ce3e8");
#endif

    switch (ctx->pc) {
        case 0x1ce404u: goto label_1ce404;
        default: break;
    }

    ctx->pc = 0x1ce3e8u;

    // 0x1ce3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce3f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce3f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce3fc: 0xc0736d2  jal         func_1CDB48
    ctx->pc = 0x1CE3FCu;
    SET_GPR_U32(ctx, 31, 0x1CE404u);
    ctx->pc = 0x1CE400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3FCu;
    // 0x1ce400: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB48u, 0x1CE3FCu, 0x1CE404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE404u;
label_1ce404:
    // 0x1ce404: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1ce408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce40c: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x1ce40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
    // 0x1ce410: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ce410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1ce414: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1ce414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1ce418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce420: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1CE420u;
    ctx->pc = 0x1CE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE420u;
    // 0x1ce424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE428u;
}
