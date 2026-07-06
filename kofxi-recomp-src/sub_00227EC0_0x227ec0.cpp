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

// Function: sub_00227EC0
// Address: 0x227ec0 - 0x227f00
void sub_00227EC0_0x227ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227EC0_0x227ec0");
#endif

    switch (ctx->pc) {
        case 0x227ec0u: goto label_227ec0;
        case 0x227ec4u: goto label_227ec4;
        case 0x227ec8u: goto label_227ec8;
        case 0x227eccu: goto label_227ecc;
        case 0x227ed0u: goto label_227ed0;
        case 0x227ed4u: goto label_227ed4;
        case 0x227ed8u: goto label_227ed8;
        case 0x227edcu: goto label_227edc;
        case 0x227ee0u: goto label_227ee0;
        case 0x227ee4u: goto label_227ee4;
        case 0x227ee8u: goto label_227ee8;
        case 0x227eecu: goto label_227eec;
        case 0x227ef0u: goto label_227ef0;
        case 0x227ef4u: goto label_227ef4;
        case 0x227ef8u: goto label_227ef8;
        case 0x227efcu: goto label_227efc;
        default: break;
    }

    ctx->pc = 0x227ec0u;

label_227ec0:
    // 0x227ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227ec4:
    // 0x227ec4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_227ec8:
    // 0x227ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_227ecc:
    // 0x227ecc: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x227eccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227ed0:
    // 0x227ed0: 0x8deef200  lw          $t6, -0xE00($t7)
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
label_227ed4:
    // 0x227ed4: 0x8dcf0320  lw          $t7, 0x320($t6)
    ctx->pc = 0x227ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 800)));
label_227ed8:
    // 0x227ed8: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
label_227edc:
    if (ctx->pc == 0x227EDCu) {
        ctx->pc = 0x227EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227ED8u;
        // 0x227edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EE0u;
        goto label_227ee0;
    }
    ctx->pc = 0x227ED8u;
    {
        const bool branch_taken_0x227ed8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227ED8u;
        // 0x227edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ed8) {
            ctx->pc = 0x227EF0u;
            goto label_227ef0;
        }
    }
    ctx->pc = 0x227EE0u;
label_227ee0:
    // 0x227ee0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x227ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_227ee4:
    // 0x227ee4: 0x1e0f809  jalr        $t7
label_227ee8:
    if (ctx->pc == 0x227EE8u) {
        ctx->pc = 0x227EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE4u;
        // 0x227ee8: 0xd200b  movn        $a0, $zero, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EECu;
        goto label_227eec;
    }
    ctx->pc = 0x227EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x227EECu);
        ctx->pc = 0x227EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE4u;
        // 0x227ee8: 0xd200b  movn        $a0, $zero, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EE4u, 0x227EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227EECu;
label_227eec:
    // 0x227eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227ef0:
    // 0x227ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227ef4:
    // 0x227ef4: 0x3e00008  jr          $ra
label_227ef8:
    if (ctx->pc == 0x227EF8u) {
        ctx->pc = 0x227EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EF4u;
        // 0x227ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EFCu;
        goto label_227efc;
    }
    ctx->pc = 0x227EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EF4u;
        // 0x227ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227EFCu;
label_227efc:
    // 0x227efc: 0x0  nop
    ctx->pc = 0x227efcu;
    // NOP
    if (ctx->pc == 0x227efcu) { ctx->pc = 0x227f00u; }
}
