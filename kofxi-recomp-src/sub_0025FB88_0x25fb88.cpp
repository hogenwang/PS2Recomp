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

// Function: sub_0025FB88
// Address: 0x25fb88 - 0x25fbf8
void sub_0025FB88_0x25fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FB88_0x25fb88");
#endif

    switch (ctx->pc) {
        case 0x25fba4u: goto label_25fba4;
        case 0x25fbd4u: goto label_25fbd4;
        default: break;
    }

    ctx->pc = 0x25fb88u;

    // 0x25fb88: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25fb8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fb90: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x25fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x25fb94: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25fb98: 0x24a417c0  addiu       $a0, $a1, 0x17C0
    ctx->pc = 0x25fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
    // 0x25fb9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fba0: 0xfc40ceb0  sd          $zero, -0x3150($v0)
    ctx->pc = 0x25fba0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954672), GPR_U64(ctx, 0));
label_25fba4:
    // 0x25fba4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25fba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25fba8: 0xfc6017d0  sd          $zero, 0x17D0($v1)
    ctx->pc = 0x25fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 6096), GPR_U64(ctx, 0));
    // 0x25fbac: 0x24e817b0  addiu       $t0, $a3, 0x17B0
    ctx->pc = 0x25fbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 6064));
    // 0x25fbb0: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x25fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x25fbb4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x25fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x25fbb8: 0xfca017c0  sd          $zero, 0x17C0($a1)
    ctx->pc = 0x25fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 6080), GPR_U64(ctx, 0));
    // 0x25fbbc: 0x24c67198  addiu       $a2, $a2, 0x7198
    ctx->pc = 0x25fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29080));
    // 0x25fbc0: 0xfd000008  sd          $zero, 0x8($t0)
    ctx->pc = 0x25fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 0));
    // 0x25fbc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbc8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x25fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25fbcc: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x25FBCCu;
    SET_GPR_U32(ctx, 31, 0x25FBD4u);
    ctx->pc = 0x25FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBCCu;
    // 0x25fbd0: 0xfce017b0  sd          $zero, 0x17B0($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 6064), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x25FBCCu, 0x25FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBD4u;
label_25fbd4:
    // 0x25fbd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25fbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25fbdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25fbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fbe4: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25fbe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25fbe8: 0xac8517a8  sw          $a1, 0x17A8($a0)
    ctx->pc = 0x25fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6056), GPR_U32(ctx, 5));
    // 0x25fbec: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x25fbecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x25fbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25FBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBF0u;
        // 0x25fbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FBF8u;
}
