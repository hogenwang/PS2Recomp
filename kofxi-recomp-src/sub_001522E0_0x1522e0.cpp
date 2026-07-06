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

// Function: sub_001522E0
// Address: 0x1522e0 - 0x152350
void sub_001522E0_0x1522e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001522E0_0x1522e0");
#endif

    switch (ctx->pc) {
        case 0x152308u: goto label_152308;
        case 0x152310u: goto label_152310;
        default: break;
    }

    ctx->pc = 0x1522e0u;

    // 0x1522e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1522e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1522e4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1522e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1522e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1522e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1522ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1522ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1522f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1522f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1522f4: 0x8c64f0f8  lw          $a0, -0xF08($v1)
    ctx->pc = 0x1522f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963448)));
    // 0x1522f8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1522F8u;
    {
        const bool branch_taken_0x1522f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522F8u;
        // 0x1522fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522f8) {
            ctx->pc = 0x152328u;
            goto label_152328;
        }
    }
    ctx->pc = 0x152300u;
    // 0x152300: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x152300u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x152304: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x152304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
label_152308:
    // 0x152308: 0xc0548d4  jal         func_152350
    ctx->pc = 0x152308u;
    SET_GPR_U32(ctx, 31, 0x152310u);
    ctx->pc = 0x15230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152308u;
    // 0x15230c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152350u, 0x152308u, 0x152310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152310u;
label_152310:
    // 0x152310: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152314: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x152314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x152318: 0x8c64f0f8  lw          $a0, -0xF08($v1)
    ctx->pc = 0x152318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963448)));
    // 0x15231c: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x15231cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x152320: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x152320u;
    {
        const bool branch_taken_0x152320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152320u;
        // 0x152324: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152320) {
            ctx->pc = 0x152308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152308;
        }
    }
    ctx->pc = 0x152328u;
label_152328:
    // 0x152328: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15232c: 0xac64f0f0  sw          $a0, -0xF10($v1)
    ctx->pc = 0x15232cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963440), GPR_U32(ctx, 4));
    // 0x152330: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152334: 0xac60f0f8  sw          $zero, -0xF08($v1)
    ctx->pc = 0x152334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963448), GPR_U32(ctx, 0));
    // 0x152338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15233c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15233cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152344: 0x3e00008  jr          $ra
    ctx->pc = 0x152344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152344u;
        // 0x152348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15234Cu;
    // 0x15234c: 0x0  nop
    ctx->pc = 0x15234cu;
    // NOP
    if (ctx->pc == 0x15234cu) { ctx->pc = 0x152350u; }
}
