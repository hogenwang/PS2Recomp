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

// Function: sub_00350530
// Address: 0x350530 - 0x3505c0
void sub_00350530_0x350530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350530_0x350530");
#endif

    switch (ctx->pc) {
        case 0x350544u: goto label_350544;
        case 0x350560u: goto label_350560;
        case 0x350568u: goto label_350568;
        case 0x35058cu: goto label_35058c;
        case 0x350598u: goto label_350598;
        case 0x3505a0u: goto label_3505a0;
        case 0x3505a8u: goto label_3505a8;
        default: break;
    }

    ctx->pc = 0x350530u;

    // 0x350530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350534: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35053c: 0xc055684  jal         func_155A10
    ctx->pc = 0x35053Cu;
    SET_GPR_U32(ctx, 31, 0x350544u);
    ctx->pc = 0x350540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35053Cu;
    // 0x350540: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x35053Cu, 0x350544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350544u;
label_350544:
    // 0x350544: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x350544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350548: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35054c: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x35054cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x350550: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x350550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350554: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x350554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x350558: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x350558u;
    SET_GPR_U32(ctx, 31, 0x350560u);
    ctx->pc = 0x35055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350558u;
    // 0x35055c: 0xac40beb8  sw          $zero, -0x4148($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x350558u, 0x350560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350560u;
label_350560:
    // 0x350560: 0xc053318  jal         func_14CC60
    ctx->pc = 0x350560u;
    SET_GPR_U32(ctx, 31, 0x350568u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x350560u, 0x350568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350568u;
label_350568:
    // 0x350568: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x350568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x35056c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x35056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x350570: 0x9045dae0  lbu         $a1, -0x2520($v0)
    ctx->pc = 0x350570u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
    // 0x350574: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x350574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x350578: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35057c: 0xa0449780  sb          $a0, -0x6880($v0)
    ctx->pc = 0x35057cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 4));
    // 0x350580: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x350580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x350584: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x350584u;
    SET_GPR_U32(ctx, 31, 0x35058Cu);
    ctx->pc = 0x350588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350584u;
    // 0x350588: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x350584u, 0x35058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35058Cu;
label_35058c:
    // 0x35058c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350590: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x350590u;
    SET_GPR_U32(ctx, 31, 0x350598u);
    ctx->pc = 0x350594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350590u;
    // 0x350594: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x350590u, 0x350598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350598u;
label_350598:
    // 0x350598: 0xc0c0624  jal         func_301890
    ctx->pc = 0x350598u;
    SET_GPR_U32(ctx, 31, 0x3505A0u);
    ctx->pc = 0x301890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301890u, 0x350598u, 0x3505A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505A0u;
label_3505a0:
    // 0x3505a0: 0xc0d40d8  jal         func_350360
    ctx->pc = 0x3505A0u;
    SET_GPR_U32(ctx, 31, 0x3505A8u);
    ctx->pc = 0x3505A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3505A0u;
    // 0x3505a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350360u, 0x3505A0u, 0x3505A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505A8u;
label_3505a8:
    // 0x3505a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3505a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3505ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3505ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3505B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505ACu;
        // 0x3505b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3505ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3505B4u;
    // 0x3505b4: 0x0  nop
    ctx->pc = 0x3505b4u;
    // NOP
    // 0x3505b8: 0x0  nop
    ctx->pc = 0x3505b8u;
    // NOP
    // 0x3505bc: 0x0  nop
    ctx->pc = 0x3505bcu;
    // NOP
}
