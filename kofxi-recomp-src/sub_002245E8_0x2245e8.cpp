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

// Function: sub_002245E8
// Address: 0x2245e8 - 0x224630
void sub_002245E8_0x2245e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002245E8_0x2245e8");
#endif

    ctx->pc = 0x2245e8u;

    // 0x2245e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2245e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2245ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2245ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2245f0: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2245F0u;
    {
        const bool branch_taken_0x2245f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2245f0) {
            ctx->pc = 0x2245F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2245F0u;
            // 0x2245f4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224620u;
            goto label_224620;
        }
    }
    ctx->pc = 0x2245F8u;
    // 0x2245f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2245fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2245fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224600: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224600u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x224604: 0x24843508  addiu       $a0, $a0, 0x3508
    ctx->pc = 0x224604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13576));
    // 0x224608: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x224608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
    // 0x22460c: 0x240501a8  addiu       $a1, $zero, 0x1A8
    ctx->pc = 0x22460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x224610: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x224610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224614: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x224614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x224618: 0x8089794  j           func_225E50
    ctx->pc = 0x224618u;
    ctx->pc = 0x22461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224618u;
    // 0x22461c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x224620u;
label_224620:
    // 0x224620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224624: 0x3e00008  jr          $ra
    ctx->pc = 0x224624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224624u;
        // 0x224628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22462Cu;
    // 0x22462c: 0x0  nop
    ctx->pc = 0x22462cu;
    // NOP
    if (ctx->pc == 0x22462cu) { ctx->pc = 0x224630u; }
}
