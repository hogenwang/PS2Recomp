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

// Function: sub_0014E0E0
// Address: 0x14e0e0 - 0x14e130
void sub_0014E0E0_0x14e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E0E0_0x14e0e0");
#endif

    switch (ctx->pc) {
        case 0x14e110u: goto label_14e110;
        default: break;
    }

    ctx->pc = 0x14e0e0u;

    // 0x14e0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e0e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14e0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e0ec: 0x2404013f  addiu       $a0, $zero, 0x13F
    ctx->pc = 0x14e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
    // 0x14e0f0: 0x90435cd8  lbu         $v1, 0x5CD8($v0)
    ctx->pc = 0x14e0f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23768)));
    // 0x14e0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14e0fc: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x14e0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14e100: 0xa0455cd8  sb          $a1, 0x5CD8($v0)
    ctx->pc = 0x14e100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23768), (uint8_t)GPR_U32(ctx, 5));
    // 0x14e104: 0x24a20016  addiu       $v0, $a1, 0x16
    ctx->pc = 0x14e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x14e108: 0xc0537ec  jal         func_14DFB0
    ctx->pc = 0x14E108u;
    SET_GPR_U32(ctx, 31, 0x14E110u);
    ctx->pc = 0x14E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E108u;
    // 0x14e10c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DFB0u, 0x14E108u, 0x14E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E110u;
label_14e110:
    // 0x14e110: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14e110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14e114: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14e114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14e118: 0x90845cd8  lbu         $a0, 0x5CD8($a0)
    ctx->pc = 0x14e118u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23768)));
    // 0x14e11c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x14e11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e120: 0xa0655cd8  sb          $a1, 0x5CD8($v1)
    ctx->pc = 0x14e120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23768), (uint8_t)GPR_U32(ctx, 5));
    // 0x14e124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e128: 0x3e00008  jr          $ra
    ctx->pc = 0x14E128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E128u;
        // 0x14e12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E130u;
}
