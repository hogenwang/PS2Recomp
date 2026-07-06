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

// Function: sub_0018F880
// Address: 0x18f880 - 0x18f8d0
void sub_0018F880_0x18f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F880_0x18f880");
#endif

    switch (ctx->pc) {
        case 0x18f8b4u: goto label_18f8b4;
        case 0x18f8bcu: goto label_18f8bc;
        default: break;
    }

    ctx->pc = 0x18f880u;

    // 0x18f880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f884: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18f888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f88c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f890: 0xac40cee0  sw          $zero, -0x3120($v0)
    ctx->pc = 0x18f890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954720), GPR_U32(ctx, 0));
    // 0x18f894: 0x24844290  addiu       $a0, $a0, 0x4290
    ctx->pc = 0x18f894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    // 0x18f898: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f89c: 0xac40cee4  sw          $zero, -0x311C($v0)
    ctx->pc = 0x18f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954724), GPR_U32(ctx, 0));
    // 0x18f8a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f8a4: 0xac40cee8  sw          $zero, -0x3118($v0)
    ctx->pc = 0x18f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954728), GPR_U32(ctx, 0));
    // 0x18f8a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f8ac: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x18F8ACu;
    SET_GPR_U32(ctx, 31, 0x18F8B4u);
    ctx->pc = 0x18F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8ACu;
    // 0x18f8b0: 0xac40ceec  sw          $zero, -0x3114($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x18F8ACu, 0x18F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F8B4u;
label_18f8b4:
    // 0x18f8b4: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x18F8B4u;
    SET_GPR_U32(ctx, 31, 0x18F8BCu);
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x18F8B4u, 0x18F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F8BCu;
label_18f8bc:
    // 0x18f8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8C0u;
        // 0x18f8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F8C8u;
    // 0x18f8c8: 0x0  nop
    ctx->pc = 0x18f8c8u;
    // NOP
    // 0x18f8cc: 0x0  nop
    ctx->pc = 0x18f8ccu;
    // NOP
}
