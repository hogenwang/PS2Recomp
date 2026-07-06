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

// Function: sub_00155940
// Address: 0x155940 - 0x1559e0
void sub_00155940_0x155940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155940_0x155940");
#endif

    switch (ctx->pc) {
        case 0x155958u: goto label_155958;
        case 0x155960u: goto label_155960;
        case 0x155968u: goto label_155968;
        case 0x155970u: goto label_155970;
        case 0x155978u: goto label_155978;
        case 0x155980u: goto label_155980;
        case 0x1559a8u: goto label_1559a8;
        case 0x1559b0u: goto label_1559b0;
        case 0x1559b8u: goto label_1559b8;
        case 0x1559c0u: goto label_1559c0;
        case 0x1559c8u: goto label_1559c8;
        default: break;
    }

    ctx->pc = 0x155940u;

    // 0x155940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15594c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15594cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155950: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x155950u;
    SET_GPR_U32(ctx, 31, 0x155958u);
    ctx->pc = 0x155954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155950u;
    // 0x155954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x155950u, 0x155958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155958u;
label_155958:
    // 0x155958: 0xc055684  jal         func_155A10
    ctx->pc = 0x155958u;
    SET_GPR_U32(ctx, 31, 0x155960u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x155958u, 0x155960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155960u;
label_155960:
    // 0x155960: 0xc053318  jal         func_14CC60
    ctx->pc = 0x155960u;
    SET_GPR_U32(ctx, 31, 0x155968u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x155960u, 0x155968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155968u;
label_155968:
    // 0x155968: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x155968u;
    SET_GPR_U32(ctx, 31, 0x155970u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x155968u, 0x155970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155970u;
label_155970:
    // 0x155970: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x155970u;
    SET_GPR_U32(ctx, 31, 0x155978u);
    ctx->pc = 0x197F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197F80u, 0x155970u, 0x155978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155978u;
label_155978:
    // 0x155978: 0xc067d50  jal         func_19F540
    ctx->pc = 0x155978u;
    SET_GPR_U32(ctx, 31, 0x155980u);
    ctx->pc = 0x19F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F540u, 0x155978u, 0x155980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155980u;
label_155980:
    // 0x155980: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x155980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155984: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155988: 0xa060d9a8  sb          $zero, -0x2658($v1)
    ctx->pc = 0x155988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957480), (uint8_t)GPR_U32(ctx, 0));
    // 0x15598c: 0xa040d3a8  sb          $zero, -0x2C58($v0)
    ctx->pc = 0x15598cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294955944), (uint8_t)GPR_U32(ctx, 0));
    // 0x155990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155994: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x155994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x155998: 0xac4363c0  sw          $v1, 0x63C0($v0)
    ctx->pc = 0x155998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25536), GPR_U32(ctx, 3));
    // 0x15599c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1559a0: 0xc0c0d90  jal         func_303640
    ctx->pc = 0x1559A0u;
    SET_GPR_U32(ctx, 31, 0x1559A8u);
    ctx->pc = 0x303640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303640u, 0x1559A0u, 0x1559A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559A8u;
label_1559a8:
    // 0x1559a8: 0xc0c0db0  jal         func_3036C0
    ctx->pc = 0x1559A8u;
    SET_GPR_U32(ctx, 31, 0x1559B0u);
    ctx->pc = 0x3036C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036C0u, 0x1559A8u, 0x1559B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559B0u;
label_1559b0:
    // 0x1559b0: 0xc0c0db8  jal         func_3036E0
    ctx->pc = 0x1559B0u;
    SET_GPR_U32(ctx, 31, 0x1559B8u);
    ctx->pc = 0x3036E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036E0u, 0x1559B0u, 0x1559B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559B8u;
label_1559b8:
    // 0x1559b8: 0xc04bd9c  jal         func_12F670
    ctx->pc = 0x1559B8u;
    SET_GPR_U32(ctx, 31, 0x1559C0u);
    ctx->pc = 0x12F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F670u, 0x1559B8u, 0x1559C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559C0u;
label_1559c0:
    // 0x1559c0: 0xc0c0dd4  jal         func_303750
    ctx->pc = 0x1559C0u;
    SET_GPR_U32(ctx, 31, 0x1559C8u);
    ctx->pc = 0x303750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303750u, 0x1559C0u, 0x1559C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559C8u;
label_1559c8:
    // 0x1559c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1559c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1559cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1559CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1559D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559CCu;
        // 0x1559d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1559CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1559D4u;
    // 0x1559d4: 0x0  nop
    ctx->pc = 0x1559d4u;
    // NOP
    // 0x1559d8: 0x0  nop
    ctx->pc = 0x1559d8u;
    // NOP
    // 0x1559dc: 0x0  nop
    ctx->pc = 0x1559dcu;
    // NOP
}
