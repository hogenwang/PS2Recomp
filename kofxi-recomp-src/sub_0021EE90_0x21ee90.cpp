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

// Function: sub_0021EE90
// Address: 0x21ee90 - 0x21ef30
void sub_0021EE90_0x21ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EE90_0x21ee90");
#endif

    switch (ctx->pc) {
        case 0x21eea0u: goto label_21eea0;
        case 0x21eeb0u: goto label_21eeb0;
        case 0x21eec0u: goto label_21eec0;
        case 0x21eedcu: goto label_21eedc;
        case 0x21eeecu: goto label_21eeec;
        case 0x21eef8u: goto label_21eef8;
        case 0x21ef00u: goto label_21ef00;
        case 0x21ef10u: goto label_21ef10;
        case 0x21ef18u: goto label_21ef18;
        default: break;
    }

    ctx->pc = 0x21ee90u;

    // 0x21ee90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ee94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ee98: 0xc087bea  jal         func_21EFA8
    ctx->pc = 0x21EE98u;
    SET_GPR_U32(ctx, 31, 0x21EEA0u);
    ctx->pc = 0x21EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFA8u, 0x21EE98u, 0x21EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEA0u;
label_21eea0:
    // 0x21eea0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21EEA0u;
    {
        const bool branch_taken_0x21eea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEA0u;
        // 0x21eea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eea0) {
            ctx->pc = 0x21EF24u;
            goto label_21ef24;
        }
    }
    ctx->pc = 0x21EEA8u;
    // 0x21eea8: 0xc089f68  jal         func_227DA0
    ctx->pc = 0x21EEA8u;
    SET_GPR_U32(ctx, 31, 0x21EEB0u);
    ctx->pc = 0x227DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DA0u, 0x21EEA8u, 0x21EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEB0u;
label_21eeb0:
    // 0x21eeb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EEB0u;
    {
        const bool branch_taken_0x21eeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEB0u;
        // 0x21eeb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eeb0) {
            ctx->pc = 0x21EEC8u;
            goto label_21eec8;
        }
    }
    ctx->pc = 0x21EEB8u;
    // 0x21eeb8: 0xc089f5e  jal         func_227D78
    ctx->pc = 0x21EEB8u;
    SET_GPR_U32(ctx, 31, 0x21EEC0u);
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x21EEB8u, 0x21EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEC0u;
label_21eec0:
    // 0x21eec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EEC0u;
    {
        const bool branch_taken_0x21eec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEC0u;
        // 0x21eec4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eec0) {
            ctx->pc = 0x21EED4u;
            goto label_21eed4;
        }
    }
    ctx->pc = 0x21EEC8u;
label_21eec8:
    // 0x21eec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21eec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eecc: 0x8087bee  j           func_21EFB8
    ctx->pc = 0x21EECCu;
    ctx->pc = 0x21EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EECCu;
    // 0x21eed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    sub_0021EFB8_0x21efb8(rdram, ctx, runtime); return;
    ctx->pc = 0x21EED4u;
label_21eed4:
    // 0x21eed4: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x21EED4u;
    SET_GPR_U32(ctx, 31, 0x21EEDCu);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x21EED4u, 0x21EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEDCu;
label_21eedc:
    // 0x21eedc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EEDCu;
    {
        const bool branch_taken_0x21eedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21eedc) {
            ctx->pc = 0x21EEF8u;
            goto label_21eef8;
        }
    }
    ctx->pc = 0x21EEE4u;
    // 0x21eee4: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x21EEE4u;
    SET_GPR_U32(ctx, 31, 0x21EEECu);
    ctx->pc = 0x21EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEE4u;
    // 0x21eee8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x21EEE4u, 0x21EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEECu;
label_21eeec:
    // 0x21eeec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21eeecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21eef0: 0xc089f94  jal         func_227E50
    ctx->pc = 0x21EEF0u;
    SET_GPR_U32(ctx, 31, 0x21EEF8u);
    ctx->pc = 0x227E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E50u, 0x21EEF0u, 0x21EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEF8u;
label_21eef8:
    // 0x21eef8: 0xc0899d6  jal         func_226758
    ctx->pc = 0x21EEF8u;
    SET_GPR_U32(ctx, 31, 0x21EF00u);
    ctx->pc = 0x226758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226758u, 0x21EEF8u, 0x21EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF00u;
label_21ef00:
    // 0x21ef00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EF00u;
    {
        const bool branch_taken_0x21ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF00u;
        // 0x21ef04: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef00) {
            ctx->pc = 0x21EF18u;
            goto label_21ef18;
        }
    }
    ctx->pc = 0x21EF08u;
    // 0x21ef08: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x21EF08u;
    SET_GPR_U32(ctx, 31, 0x21EF10u);
    ctx->pc = 0x21EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF08u;
    // 0x21ef0c: 0x8de4c260  lw          $a0, -0x3DA0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x21EF08u, 0x21EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF10u;
label_21ef10:
    // 0x21ef10: 0xc089f00  jal         func_227C00
    ctx->pc = 0x21EF10u;
    SET_GPR_U32(ctx, 31, 0x21EF18u);
    ctx->pc = 0x227C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C00u, 0x21EF10u, 0x21EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF18u;
label_21ef18:
    // 0x21ef18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef1c: 0x8087bea  j           func_21EFA8
    ctx->pc = 0x21EF1Cu;
    ctx->pc = 0x21EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF1Cu;
    // 0x21ef20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFA8u;
    sub_0021EFA8_0x21efa8(rdram, ctx, runtime); return;
    ctx->pc = 0x21EF24u;
label_21ef24:
    // 0x21ef24: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF24u;
        // 0x21ef28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EF2Cu;
    // 0x21ef2c: 0x0  nop
    ctx->pc = 0x21ef2cu;
    // NOP
    if (ctx->pc == 0x21ef2cu) { ctx->pc = 0x21ef30u; }
}
