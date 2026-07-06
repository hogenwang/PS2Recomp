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

// Function: sub_00238CD0
// Address: 0x238cd0 - 0x238d28
void sub_00238CD0_0x238cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238CD0_0x238cd0");
#endif

    switch (ctx->pc) {
        case 0x238cd0u: goto label_238cd0;
        case 0x238cd4u: goto label_238cd4;
        case 0x238cd8u: goto label_238cd8;
        case 0x238cdcu: goto label_238cdc;
        case 0x238ce0u: goto label_238ce0;
        case 0x238ce4u: goto label_238ce4;
        case 0x238ce8u: goto label_238ce8;
        case 0x238cecu: goto label_238cec;
        case 0x238cf0u: goto label_238cf0;
        case 0x238cf4u: goto label_238cf4;
        case 0x238cf8u: goto label_238cf8;
        case 0x238cfcu: goto label_238cfc;
        case 0x238d00u: goto label_238d00;
        case 0x238d04u: goto label_238d04;
        case 0x238d08u: goto label_238d08;
        case 0x238d0cu: goto label_238d0c;
        case 0x238d10u: goto label_238d10;
        case 0x238d14u: goto label_238d14;
        case 0x238d18u: goto label_238d18;
        case 0x238d1cu: goto label_238d1c;
        case 0x238d20u: goto label_238d20;
        case 0x238d24u: goto label_238d24;
        default: break;
    }

    ctx->pc = 0x238cd0u;

label_238cd0:
    // 0x238cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238cd4:
    // 0x238cd4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x238cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_238cd8:
    // 0x238cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238cdc:
    // 0x238cdc: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8
    ctx->pc = 0x238cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
label_238ce0:
    // 0x238ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238ce4:
    // 0x238ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238ce8:
    // 0x238ce8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x238ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_238cec:
    // 0x238cec: 0xc08b5ac  jal         func_22D6B0
label_238cf0:
    if (ctx->pc == 0x238CF0u) {
        ctx->pc = 0x238CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CECu;
        // 0x238cf0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238CF4u;
        goto label_238cf4;
    }
    ctx->pc = 0x238CECu;
    SET_GPR_U32(ctx, 31, 0x238CF4u);
    ctx->pc = 0x238CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238CECu;
    // 0x238cf0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x238CECu, 0x238CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238CF4u;
label_238cf4:
    // 0x238cf4: 0xae004e3c  sw          $zero, 0x4E3C($s0)
    ctx->pc = 0x238cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20028), GPR_U32(ctx, 0));
label_238cf8:
    // 0x238cf8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x238cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_238cfc:
    // 0x238cfc: 0x26044e40  addiu       $a0, $s0, 0x4E40
    ctx->pc = 0x238cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20032));
label_238d00:
    // 0x238d00: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x238d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
label_238d04:
    // 0x238d04: 0xc08b538  jal         func_22D4E0
label_238d08:
    if (ctx->pc == 0x238D08u) {
        ctx->pc = 0x238D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D04u;
        // 0x238d08: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D0Cu;
        goto label_238d0c;
    }
    ctx->pc = 0x238D04u;
    SET_GPR_U32(ctx, 31, 0x238D0Cu);
    ctx->pc = 0x238D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D04u;
    // 0x238d08: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x238D04u, 0x238D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D0Cu;
label_238d0c:
    // 0x238d0c: 0x8e034e14  lw          $v1, 0x4E14($s0)
    ctx->pc = 0x238d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19988)));
label_238d10:
    // 0x238d10: 0x60f809  jalr        $v1
label_238d14:
    if (ctx->pc == 0x238D14u) {
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D18u;
        goto label_238d18;
    }
    ctx->pc = 0x238D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x238D18u);
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238D10u, 0x238D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238D18u;
label_238d18:
    // 0x238d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238d1c:
    // 0x238d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238d20:
    // 0x238d20: 0x3e00008  jr          $ra
label_238d24:
    if (ctx->pc == 0x238D24u) {
        ctx->pc = 0x238D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D20u;
        // 0x238d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238D28u;
        goto label_fallthrough_0x238d20;
    }
    ctx->pc = 0x238D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D20u;
        // 0x238d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x238d20:
    ctx->pc = 0x238D28u;
}
