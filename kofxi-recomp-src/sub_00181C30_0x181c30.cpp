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

// Function: sub_00181C30
// Address: 0x181c30 - 0x182330
void sub_00181C30_0x181c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181C30_0x181c30");
#endif

    switch (ctx->pc) {
        case 0x181c44u: goto label_181c44;
        case 0x181c60u: goto label_181c60;
        case 0x181c64u: goto label_181c64;
        case 0x181c6cu: goto label_181c6c;
        case 0x181c90u: goto label_181c90;
        case 0x181c98u: goto label_181c98;
        case 0x181cf0u: goto label_181cf0;
        case 0x181d2cu: goto label_181d2c;
        case 0x1822e0u: goto label_1822e0;
        default: break;
    }

    ctx->pc = 0x181c30u;

    // 0x181c30: 0x8e23049c  lw          $v1, 0x49C($s1)
    ctx->pc = 0x181c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x181c34: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x181c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x181c38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x181c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181C3Cu;
    {
        const bool branch_taken_0x181c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C3Cu;
        // 0x181c40: 0xae22049c  sw          $v0, 0x49C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c3c) {
            ctx->pc = 0x181C60u;
            goto label_181c60;
        }
    }
    ctx->pc = 0x181C44u;
label_181c44:
    // 0x181c44: 0x24020125  addiu       $v0, $zero, 0x125
    ctx->pc = 0x181c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x181c48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181C48u;
    {
        const bool branch_taken_0x181c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181c48) {
            ctx->pc = 0x181C60u;
            goto label_181c60;
        }
    }
    ctx->pc = 0x181C50u;
    // 0x181c50: 0x8e23049c  lw          $v1, 0x49C($s1)
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x181c54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x181c58: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x181c5c: 0xae22049c  sw          $v0, 0x49C($s1)
    ctx->pc = 0x181c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1180), GPR_U32(ctx, 2));
label_181c60:
    // 0x181c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181c64:
    // 0x181c64: 0xc060438  jal         func_1810E0
    ctx->pc = 0x181C64u;
    SET_GPR_U32(ctx, 31, 0x181C6Cu);
    ctx->pc = 0x1810E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1810E0u, 0x181C64u, 0x181C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C6Cu;
label_181c6c:
    // 0x181c6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x181c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181c70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181c74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181c78: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181C78u;
    {
        const bool branch_taken_0x181c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181c78) {
            ctx->pc = 0x181C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C78u;
            // 0x181c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181C88u;
            goto label_181c88;
        }
    }
    ctx->pc = 0x181C80u;
    // 0x181c80: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x181c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181c88:
    // 0x181c88: 0xc061c18  jal         func_187060
    ctx->pc = 0x181C88u;
    SET_GPR_U32(ctx, 31, 0x181C90u);
    ctx->pc = 0x187060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187060u, 0x181C88u, 0x181C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C90u;
label_181c90:
    // 0x181c90: 0xc0601d0  jal         func_180740
    ctx->pc = 0x181C90u;
    SET_GPR_U32(ctx, 31, 0x181C98u);
    ctx->pc = 0x181C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C90u;
    // 0x181c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180740u, 0x181C90u, 0x181C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C98u;
label_181c98:
    // 0x181c98: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x181c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181c9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181c9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181ca0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181ca4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181CA4u;
    {
        const bool branch_taken_0x181ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181ca4) {
            ctx->pc = 0x181CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CA4u;
            // 0x181ca8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CB4u;
            goto label_181cb4;
        }
    }
    ctx->pc = 0x181CACu;
    // 0x181cac: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x181cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181cb4:
    // 0x181cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x181CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CC0u;
        // 0x181cc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181CC8u;
    // 0x181cc8: 0x0  nop
    ctx->pc = 0x181cc8u;
    // NOP
    // 0x181ccc: 0x0  nop
    ctx->pc = 0x181cccu;
    // NOP
    // 0x181cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x181CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CD0u;
        // 0x181cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181CD8u;
    // 0x181cd8: 0x0  nop
    ctx->pc = 0x181cd8u;
    // NOP
    // 0x181cdc: 0x0  nop
    ctx->pc = 0x181cdcu;
    // NOP
    // 0x181ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181ce8: 0xc058068  jal         func_1601A0
    ctx->pc = 0x181CE8u;
    SET_GPR_U32(ctx, 31, 0x181CF0u);
    ctx->pc = 0x181CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CE8u;
    // 0x181cec: 0x24840268  addiu       $a0, $a0, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601A0u, 0x181CE8u, 0x181CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CF0u;
label_181cf0:
    // 0x181cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181cf4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181cf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x181CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CFCu;
        // 0x181d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D04u;
    // 0x181d04: 0x0  nop
    ctx->pc = 0x181d04u;
    // NOP
    // 0x181d08: 0x0  nop
    ctx->pc = 0x181d08u;
    // NOP
    // 0x181d0c: 0x0  nop
    ctx->pc = 0x181d0cu;
    // NOP
    // 0x181d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181d18: 0x8c82051c  lw          $v0, 0x51C($a0)
    ctx->pc = 0x181d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1308)));
    // 0x181d1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x181D1Cu;
    {
        const bool branch_taken_0x181d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d1c) {
            ctx->pc = 0x181D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181D1Cu;
            // 0x181d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181D34u;
            goto label_181d34;
        }
    }
    ctx->pc = 0x181D24u;
    // 0x181d24: 0xc058068  jal         func_1601A0
    ctx->pc = 0x181D24u;
    SET_GPR_U32(ctx, 31, 0x181D2Cu);
    ctx->pc = 0x181D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D24u;
    // 0x181d28: 0x24440268  addiu       $a0, $v0, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601A0u, 0x181D24u, 0x181D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D2Cu;
label_181d2c:
    // 0x181d2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181d30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181d30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181d34:
    // 0x181d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d38: 0x3e00008  jr          $ra
    ctx->pc = 0x181D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D38u;
        // 0x181d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D40u;
    // 0x181d40: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x181d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x181d44: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x181d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x181d48: 0x3e00008  jr          $ra
    ctx->pc = 0x181D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D48u;
        // 0x181d4c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D50u;
    // 0x181d50: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x181d54: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x181d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x181d58: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x181d5c: 0xac820530  sw          $v0, 0x530($a0)
    ctx->pc = 0x181d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
    // 0x181d60: 0x8c82051c  lw          $v0, 0x51C($a0)
    ctx->pc = 0x181d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1308)));
    // 0x181d64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x181D64u;
    {
        const bool branch_taken_0x181d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181d64) {
            ctx->pc = 0x181D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181D64u;
            // 0x181d68: 0x8c420498  lw          $v0, 0x498($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181D74u;
            goto label_181d74;
        }
    }
    ctx->pc = 0x181D6Cu;
    // 0x181d6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181D6Cu;
    {
        const bool branch_taken_0x181d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D6Cu;
        // 0x181d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d6c) {
            ctx->pc = 0x181D7Cu;
            goto label_181d7c;
        }
    }
    ctx->pc = 0x181D74u;
label_181d74:
    // 0x181d74: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x181d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x181d78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x181d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_181d7c:
    // 0x181d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x181D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D84u;
    // 0x181d84: 0x0  nop
    ctx->pc = 0x181d84u;
    // NOP
    // 0x181d88: 0x0  nop
    ctx->pc = 0x181d88u;
    // NOP
    // 0x181d8c: 0x0  nop
    ctx->pc = 0x181d8cu;
    // NOP
    // 0x181d90: 0x8c850538  lw          $a1, 0x538($a0)
    ctx->pc = 0x181d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x181d94: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x181d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x181d98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x181d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x181d9c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x181d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x181da0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x181da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x181da4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181DA4u;
    {
        const bool branch_taken_0x181da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x181DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DA4u;
        // 0x181da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181da4) {
            ctx->pc = 0x181DC0u;
            goto label_181dc0;
        }
    }
    ctx->pc = 0x181DACu;
    // 0x181dac: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x181dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x181db0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181DB0u;
    {
        const bool branch_taken_0x181db0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x181db0) {
            ctx->pc = 0x181DD0u;
            goto label_181dd0;
        }
    }
    ctx->pc = 0x181DB8u;
    // 0x181db8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181DB8u;
    {
        const bool branch_taken_0x181db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DB8u;
        // 0x181dbc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181db8) {
            ctx->pc = 0x181DD0u;
            goto label_181dd0;
        }
    }
    ctx->pc = 0x181DC0u;
label_181dc0:
    // 0x181dc0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x181dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x181dc4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x181DC4u;
    {
        const bool branch_taken_0x181dc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x181dc4) {
            ctx->pc = 0x181DD0u;
            goto label_181dd0;
        }
    }
    ctx->pc = 0x181DCCu;
    // 0x181dcc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x181dccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_181dd0:
    // 0x181dd0: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x181DD0u;
    {
        const bool branch_taken_0x181dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x181dd0) {
            ctx->pc = 0x181DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181DD0u;
            // 0x181dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181E00u;
            goto label_181e00;
        }
    }
    ctx->pc = 0x181DD8u;
    // 0x181dd8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x181ddc: 0x284202a0  slti        $v0, $v0, 0x2A0
    ctx->pc = 0x181ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x181de0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181DE0u;
    {
        const bool branch_taken_0x181de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181de0) {
            ctx->pc = 0x181DFCu;
            goto label_181dfc;
        }
    }
    ctx->pc = 0x181DE8u;
    // 0x181de8: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x181de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x181dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181df0: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x181df0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x181df4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181DF4u;
    {
        const bool branch_taken_0x181df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DF4u;
        // 0x181df8: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181df4) {
            ctx->pc = 0x181E00u;
            goto label_181e00;
        }
    }
    ctx->pc = 0x181DFCu;
label_181dfc:
    // 0x181dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181e00:
    // 0x181e00: 0x3e00008  jr          $ra
    ctx->pc = 0x181E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E08u;
    // 0x181e08: 0x0  nop
    ctx->pc = 0x181e08u;
    // NOP
    // 0x181e0c: 0x0  nop
    ctx->pc = 0x181e0cu;
    // NOP
    // 0x181e10: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x181e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x181e14: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x181e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x181e18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x181e1c: 0xac820530  sw          $v0, 0x530($a0)
    ctx->pc = 0x181e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
    // 0x181e20: 0x8c83051c  lw          $v1, 0x51C($a0)
    ctx->pc = 0x181e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1308)));
    // 0x181e24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181E24u;
    {
        const bool branch_taken_0x181e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E24u;
        // 0x181e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e24) {
            ctx->pc = 0x181E34u;
            goto label_181e34;
        }
    }
    ctx->pc = 0x181E2Cu;
    // 0x181e2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x181E2Cu;
    {
        const bool branch_taken_0x181e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E2Cu;
        // 0x181e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e2c) {
            ctx->pc = 0x181E68u;
            goto label_181e68;
        }
    }
    ctx->pc = 0x181E34u;
label_181e34:
    // 0x181e34: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x181e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x181e38: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x181E38u;
    {
        const bool branch_taken_0x181e38 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x181e38) {
            ctx->pc = 0x181E44u;
            goto label_181e44;
        }
    }
    ctx->pc = 0x181E40u;
    // 0x181e40: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x181e40u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_181e44:
    // 0x181e44: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x181E44u;
    {
        const bool branch_taken_0x181e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e44) {
            ctx->pc = 0x181E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181E44u;
            // 0x181e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181E68u;
            goto label_181e68;
        }
    }
    ctx->pc = 0x181E4Cu;
    // 0x181e4c: 0x8c620490  lw          $v0, 0x490($v1)
    ctx->pc = 0x181e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
    // 0x181e50: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x181e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x181e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181E54u;
    {
        const bool branch_taken_0x181e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181e54) {
            ctx->pc = 0x181E64u;
            goto label_181e64;
        }
    }
    ctx->pc = 0x181E5Cu;
    // 0x181e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181E5Cu;
    {
        const bool branch_taken_0x181e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E5Cu;
        // 0x181e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e5c) {
            ctx->pc = 0x181E68u;
            goto label_181e68;
        }
    }
    ctx->pc = 0x181E64u;
label_181e64:
    // 0x181e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181e68:
    // 0x181e68: 0x3e00008  jr          $ra
    ctx->pc = 0x181E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E70u;
    // 0x181e70: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x181e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x181e74: 0x5ca00002  bgtzl       $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x181E74u;
    {
        const bool branch_taken_0x181e74 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x181e74) {
            ctx->pc = 0x181E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181E74u;
            // 0x181e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181E80u;
            goto label_181e80;
        }
    }
    ctx->pc = 0x181E7Cu;
    // 0x181e7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_181e80:
    // 0x181e80: 0x9083008c  lbu         $v1, 0x8C($a0)
    ctx->pc = 0x181e80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x181e84: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x181e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x181e88: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x181e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x181e8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181E8Cu;
    {
        const bool branch_taken_0x181e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E8Cu;
        // 0x181e90: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e8c) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181E94u;
    // 0x181e94: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x181e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x181e98: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181e9c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x181e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x181ea0: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x181ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x181ea4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x181ea4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_181ea8:
    // 0x181ea8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x181ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x181eac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x181EACu;
    {
        const bool branch_taken_0x181eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181eac) {
            ctx->pc = 0x181EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181EACu;
            // 0x181eb0: 0x6163c  dsll32      $v0, $a2, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181ED4u;
            goto label_181ed4;
        }
    }
    ctx->pc = 0x181EB4u;
    // 0x181eb4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x181EB4u;
    {
        const bool branch_taken_0x181eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x181eb4) {
            ctx->pc = 0x181ED0u;
            goto label_181ed0;
        }
    }
    ctx->pc = 0x181EBCu;
    // 0x181ebc: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x181ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x181ec0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181ec0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181ec4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x181ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x181ec8: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x181ec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x181ecc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x181eccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_181ed0:
    // 0x181ed0: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x181ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
label_181ed4:
    // 0x181ed4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181ed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181ed8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x181ED8u;
    {
        const bool branch_taken_0x181ed8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x181ed8) {
            ctx->pc = 0x181F08u;
            goto label_181f08;
        }
    }
    ctx->pc = 0x181EE0u;
    // 0x181ee0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x181ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x181ee4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x181ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181ee8: 0x8445db1e  lh          $a1, -0x24E2($v0)
    ctx->pc = 0x181ee8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957854)));
    // 0x181eec: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x181eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x181ef0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x181EF0u;
    {
        const bool branch_taken_0x181ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181ef0) {
            ctx->pc = 0x181EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181EF0u;
            // 0x181ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181F34u;
            goto label_181f34;
        }
    }
    ctx->pc = 0x181EF8u;
    // 0x181ef8: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x181ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x181efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x181F00u;
    {
        const bool branch_taken_0x181f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F00u;
        // 0x181f04: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f00) {
            ctx->pc = 0x181F34u;
            goto label_181f34;
        }
    }
    ctx->pc = 0x181F08u;
label_181f08:
    // 0x181f08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x181f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x181f0c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x181f0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x181f10: 0x8442db1c  lh          $v0, -0x24E4($v0)
    ctx->pc = 0x181f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957852)));
    // 0x181f14: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x181f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x181f18: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x181F18u;
    {
        const bool branch_taken_0x181f18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x181f18) {
            ctx->pc = 0x181F30u;
            goto label_181f30;
        }
    }
    ctx->pc = 0x181F20u;
    // 0x181f20: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x181f20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x181f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181F28u;
    {
        const bool branch_taken_0x181f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F28u;
        // 0x181f2c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f28) {
            ctx->pc = 0x181F34u;
            goto label_181f34;
        }
    }
    ctx->pc = 0x181F30u;
label_181f30:
    // 0x181f30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181f34:
    // 0x181f34: 0x3e00008  jr          $ra
    ctx->pc = 0x181F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181F3Cu;
    // 0x181f3c: 0x0  nop
    ctx->pc = 0x181f3cu;
    // NOP
    // 0x181f40: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x181f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x181f44: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x181f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x181f48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x181f4c: 0xac820530  sw          $v0, 0x530($a0)
    ctx->pc = 0x181f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
    // 0x181f50: 0x8c86051c  lw          $a2, 0x51C($a0)
    ctx->pc = 0x181f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1308)));
    // 0x181f54: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x181F54u;
    {
        const bool branch_taken_0x181f54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x181f54) {
            ctx->pc = 0x181F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F54u;
            // 0x181f58: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181F64u;
            goto label_181f64;
        }
    }
    ctx->pc = 0x181F5Cu;
    // 0x181f5c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x181F5Cu;
    {
        const bool branch_taken_0x181f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F5Cu;
        // 0x181f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f5c) {
            ctx->pc = 0x182014u;
            goto label_182014;
        }
    }
    ctx->pc = 0x181F64u;
label_181f64:
    // 0x181f64: 0x4830002  bgezl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x181F64u;
    {
        const bool branch_taken_0x181f64 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x181f64) {
            ctx->pc = 0x181F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F64u;
            // 0x181f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181F70u;
            goto label_181f70;
        }
    }
    ctx->pc = 0x181F6Cu;
    // 0x181f6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_181f70:
    // 0x181f70: 0x90c3008c  lbu         $v1, 0x8C($a2)
    ctx->pc = 0x181f70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x181f74: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x181f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x181f78: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x181f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x181f7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181F7Cu;
    {
        const bool branch_taken_0x181f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F7Cu;
        // 0x181f80: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f7c) {
            ctx->pc = 0x181F98u;
            goto label_181f98;
        }
    }
    ctx->pc = 0x181F84u;
    // 0x181f84: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x181f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x181f88: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181f8c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x181f90: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x181f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x181f94: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x181f94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_181f98:
    // 0x181f98: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x181f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x181f9c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x181F9Cu;
    {
        const bool branch_taken_0x181f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f9c) {
            ctx->pc = 0x181FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F9Cu;
            // 0x181fa0: 0x5163c  dsll32      $v0, $a1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181FC4u;
            goto label_181fc4;
        }
    }
    ctx->pc = 0x181FA4u;
    // 0x181fa4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181FA4u;
    {
        const bool branch_taken_0x181fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fa4) {
            ctx->pc = 0x181FC0u;
            goto label_181fc0;
        }
    }
    ctx->pc = 0x181FACu;
    // 0x181fac: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x181facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x181fb0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181fb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181fb4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x181fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x181fb8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x181fb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x181fbc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x181fbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_181fc0:
    // 0x181fc0: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x181fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_181fc4:
    // 0x181fc4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181fc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x181fc8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x181FC8u;
    {
        const bool branch_taken_0x181fc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x181fc8) {
            ctx->pc = 0x181FF0u;
            goto label_181ff0;
        }
    }
    ctx->pc = 0x181FD0u;
    // 0x181fd0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x181fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x181fd4: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x181fd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181fd8: 0x8442db1e  lh          $v0, -0x24E2($v0)
    ctx->pc = 0x181fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957854)));
    // 0x181fdc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x181fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x181fe0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x181FE0u;
    {
        const bool branch_taken_0x181fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181fe0) {
            ctx->pc = 0x181FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181FE0u;
            // 0x181fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182014u;
            goto label_182014;
        }
    }
    ctx->pc = 0x181FE8u;
    // 0x181fe8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181FE8u;
    {
        const bool branch_taken_0x181fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FE8u;
        // 0x181fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fe8) {
            ctx->pc = 0x182014u;
            goto label_182014;
        }
    }
    ctx->pc = 0x181FF0u;
label_181ff0:
    // 0x181ff0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x181ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x181ff4: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x181ff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181ff8: 0x8442db1c  lh          $v0, -0x24E4($v0)
    ctx->pc = 0x181ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957852)));
    // 0x181ffc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x181ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182000: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x182000u;
    {
        const bool branch_taken_0x182000 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x182000) {
            ctx->pc = 0x182010u;
            goto label_182010;
        }
    }
    ctx->pc = 0x182008u;
    // 0x182008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x182008u;
    {
        const bool branch_taken_0x182008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182008u;
        // 0x18200c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182008) {
            ctx->pc = 0x182014u;
            goto label_182014;
        }
    }
    ctx->pc = 0x182010u;
label_182010:
    // 0x182010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182014:
    // 0x182014: 0x3e00008  jr          $ra
    ctx->pc = 0x182014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18201Cu;
    // 0x18201c: 0x0  nop
    ctx->pc = 0x18201cu;
    // NOP
    // 0x182020: 0x8c850538  lw          $a1, 0x538($a0)
    ctx->pc = 0x182020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x182024: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x182024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x182028: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x182028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18202c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x18202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x182030: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x182034: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x182034u;
    {
        const bool branch_taken_0x182034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x182038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182034u;
        // 0x182038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182034) {
            ctx->pc = 0x182050u;
            goto label_182050;
        }
    }
    ctx->pc = 0x18203Cu;
    // 0x18203c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x18203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x182040: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182040u;
    {
        const bool branch_taken_0x182040 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x182040) {
            ctx->pc = 0x182060u;
            goto label_182060;
        }
    }
    ctx->pc = 0x182048u;
    // 0x182048: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182048u;
    {
        const bool branch_taken_0x182048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182048u;
        // 0x18204c: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182048) {
            ctx->pc = 0x182060u;
            goto label_182060;
        }
    }
    ctx->pc = 0x182050u;
label_182050:
    // 0x182050: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x182050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x182054: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x182054u;
    {
        const bool branch_taken_0x182054 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x182054) {
            ctx->pc = 0x182060u;
            goto label_182060;
        }
    }
    ctx->pc = 0x18205Cu;
    // 0x18205c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x18205cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_182060:
    // 0x182060: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x182060u;
    {
        const bool branch_taken_0x182060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x182060) {
            ctx->pc = 0x182064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182060u;
            // 0x182064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182098u;
            goto label_182098;
        }
    }
    ctx->pc = 0x182068u;
    // 0x182068: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x182068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18206c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x182070: 0x8442db18  lh          $v0, -0x24E8($v0)
    ctx->pc = 0x182070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957848)));
    // 0x182074: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x182074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182078: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182078u;
    {
        const bool branch_taken_0x182078 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x182078) {
            ctx->pc = 0x182094u;
            goto label_182094;
        }
    }
    ctx->pc = 0x182080u;
    // 0x182080: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x182080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x182084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182088: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x182088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x18208c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18208Cu;
    {
        const bool branch_taken_0x18208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18208Cu;
        // 0x182090: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18208c) {
            ctx->pc = 0x182098u;
            goto label_182098;
        }
    }
    ctx->pc = 0x182094u;
label_182094:
    // 0x182094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182098:
    // 0x182098: 0x3e00008  jr          $ra
    ctx->pc = 0x182098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1820A0u;
    // 0x1820a0: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x1820a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x1820a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1820a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1820a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1820a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1820ac: 0xac820530  sw          $v0, 0x530($a0)
    ctx->pc = 0x1820acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
    // 0x1820b0: 0x8c83051c  lw          $v1, 0x51C($a0)
    ctx->pc = 0x1820b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1308)));
    // 0x1820b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1820B4u;
    {
        const bool branch_taken_0x1820b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1820B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820B4u;
        // 0x1820b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820b4) {
            ctx->pc = 0x1820C4u;
            goto label_1820c4;
        }
    }
    ctx->pc = 0x1820BCu;
    // 0x1820bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1820BCu;
    {
        const bool branch_taken_0x1820bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820BCu;
        // 0x1820c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820bc) {
            ctx->pc = 0x182104u;
            goto label_182104;
        }
    }
    ctx->pc = 0x1820C4u;
label_1820c4:
    // 0x1820c4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1820c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1820c8: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1820C8u;
    {
        const bool branch_taken_0x1820c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1820c8) {
            ctx->pc = 0x1820D4u;
            goto label_1820d4;
        }
    }
    ctx->pc = 0x1820D0u;
    // 0x1820d0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1820d0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1820d4:
    // 0x1820d4: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1820D4u;
    {
        const bool branch_taken_0x1820d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820d4) {
            ctx->pc = 0x1820D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1820D4u;
            // 0x1820d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182104u;
            goto label_182104;
        }
    }
    ctx->pc = 0x1820DCu;
    // 0x1820dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1820dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1820e0: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x1820e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1820e4: 0x8442db18  lh          $v0, -0x24E8($v0)
    ctx->pc = 0x1820e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957848)));
    // 0x1820e8: 0x24420128  addiu       $v0, $v0, 0x128
    ctx->pc = 0x1820e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x1820ec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1820ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1820f0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1820F0u;
    {
        const bool branch_taken_0x1820f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1820f0) {
            ctx->pc = 0x182100u;
            goto label_182100;
        }
    }
    ctx->pc = 0x1820F8u;
    // 0x1820f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1820F8u;
    {
        const bool branch_taken_0x1820f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820F8u;
        // 0x1820fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820f8) {
            ctx->pc = 0x182104u;
            goto label_182104;
        }
    }
    ctx->pc = 0x182100u;
label_182100:
    // 0x182100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182104:
    // 0x182104: 0x3e00008  jr          $ra
    ctx->pc = 0x182104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18210Cu;
    // 0x18210c: 0x0  nop
    ctx->pc = 0x18210cu;
    // NOP
    // 0x182110: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x182110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x182114: 0x5ca00002  bgtzl       $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x182114u;
    {
        const bool branch_taken_0x182114 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x182114) {
            ctx->pc = 0x182118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182114u;
            // 0x182118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182120u;
            goto label_182120;
        }
    }
    ctx->pc = 0x18211Cu;
    // 0x18211c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_182120:
    // 0x182120: 0x9083008c  lbu         $v1, 0x8C($a0)
    ctx->pc = 0x182120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x182124: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x182124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x182128: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x182128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x18212c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18212Cu;
    {
        const bool branch_taken_0x18212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18212Cu;
        // 0x182130: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18212c) {
            ctx->pc = 0x182148u;
            goto label_182148;
        }
    }
    ctx->pc = 0x182134u;
    // 0x182134: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x182134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x182138: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x182138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x18213c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x18213cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x182140: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x182140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x182144: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x182144u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_182148:
    // 0x182148: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x182148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18214c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18214Cu;
    {
        const bool branch_taken_0x18214c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18214c) {
            ctx->pc = 0x182150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18214Cu;
            // 0x182150: 0x6163c  dsll32      $v0, $a2, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182174u;
            goto label_182174;
        }
    }
    ctx->pc = 0x182154u;
    // 0x182154: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x182154u;
    {
        const bool branch_taken_0x182154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x182154) {
            ctx->pc = 0x182170u;
            goto label_182170;
        }
    }
    ctx->pc = 0x18215Cu;
    // 0x18215c: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x18215cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x182160: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x182160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x182164: 0x21023  negu        $v0, $v0
    ctx->pc = 0x182164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x182168: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x182168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18216c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x18216cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_182170:
    // 0x182170: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x182170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
label_182174:
    // 0x182174: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x182174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x182178: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x182178u;
    {
        const bool branch_taken_0x182178 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x182178) {
            ctx->pc = 0x1821A8u;
            goto label_1821a8;
        }
    }
    ctx->pc = 0x182180u;
    // 0x182180: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x182180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x182184: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x182184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182188: 0x8445f11e  lh          $a1, -0xEE2($v0)
    ctx->pc = 0x182188u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963486)));
    // 0x18218c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x18218cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x182190: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x182190u;
    {
        const bool branch_taken_0x182190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182190) {
            ctx->pc = 0x182194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182190u;
            // 0x182194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1821D4u;
            goto label_1821d4;
        }
    }
    ctx->pc = 0x182198u;
    // 0x182198: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x182198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18219c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1821a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1821A0u;
    {
        const bool branch_taken_0x1821a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A0u;
        // 0x1821a4: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821a0) {
            ctx->pc = 0x1821D4u;
            goto label_1821d4;
        }
    }
    ctx->pc = 0x1821A8u;
label_1821a8:
    // 0x1821a8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1821a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1821ac: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1821acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1821b0: 0x8442f11c  lh          $v0, -0xEE4($v0)
    ctx->pc = 0x1821b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963484)));
    // 0x1821b4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1821b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1821b8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1821B8u;
    {
        const bool branch_taken_0x1821b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1821b8) {
            ctx->pc = 0x1821D0u;
            goto label_1821d0;
        }
    }
    ctx->pc = 0x1821C0u;
    // 0x1821c0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1821c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1821c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1821c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1821c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1821C8u;
    {
        const bool branch_taken_0x1821c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821C8u;
        // 0x1821cc: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821c8) {
            ctx->pc = 0x1821D4u;
            goto label_1821d4;
        }
    }
    ctx->pc = 0x1821D0u;
label_1821d0:
    // 0x1821d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1821d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1821d4:
    // 0x1821d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1821D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1821D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1821DCu;
    // 0x1821dc: 0x0  nop
    ctx->pc = 0x1821dcu;
    // NOP
    // 0x1821e0: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x1821e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x1821e4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1821e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1821e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1821ec: 0xac820530  sw          $v0, 0x530($a0)
    ctx->pc = 0x1821ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
    // 0x1821f0: 0x8c86051c  lw          $a2, 0x51C($a0)
    ctx->pc = 0x1821f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1308)));
    // 0x1821f4: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1821F4u;
    {
        const bool branch_taken_0x1821f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1821f4) {
            ctx->pc = 0x1821F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1821F4u;
            // 0x1821f8: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182204u;
            goto label_182204;
        }
    }
    ctx->pc = 0x1821FCu;
    // 0x1821fc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1821FCu;
    {
        const bool branch_taken_0x1821fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821FCu;
        // 0x182200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821fc) {
            ctx->pc = 0x1822B4u;
            goto label_1822b4;
        }
    }
    ctx->pc = 0x182204u;
label_182204:
    // 0x182204: 0x4830002  bgezl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x182204u;
    {
        const bool branch_taken_0x182204 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x182204) {
            ctx->pc = 0x182208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182204u;
            // 0x182208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182210u;
            goto label_182210;
        }
    }
    ctx->pc = 0x18220Cu;
    // 0x18220c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_182210:
    // 0x182210: 0x90c3008c  lbu         $v1, 0x8C($a2)
    ctx->pc = 0x182210u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x182214: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x182214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x182218: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x182218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x18221c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18221Cu;
    {
        const bool branch_taken_0x18221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18221Cu;
        // 0x182220: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18221c) {
            ctx->pc = 0x182238u;
            goto label_182238;
        }
    }
    ctx->pc = 0x182224u;
    // 0x182224: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x182224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x182228: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x182228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x18222c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x18222cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x182230: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x182230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x182234: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x182234u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_182238:
    // 0x182238: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x182238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18223c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18223Cu;
    {
        const bool branch_taken_0x18223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18223c) {
            ctx->pc = 0x182240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18223Cu;
            // 0x182240: 0x5163c  dsll32      $v0, $a1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182264u;
            goto label_182264;
        }
    }
    ctx->pc = 0x182244u;
    // 0x182244: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x182244u;
    {
        const bool branch_taken_0x182244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182244) {
            ctx->pc = 0x182260u;
            goto label_182260;
        }
    }
    ctx->pc = 0x18224Cu;
    // 0x18224c: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x18224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x182250: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x182250u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x182254: 0x21023  negu        $v0, $v0
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x182258: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x182258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18225c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x18225cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_182260:
    // 0x182260: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x182260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_182264:
    // 0x182264: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x182264u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x182268: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182268u;
    {
        const bool branch_taken_0x182268 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x182268) {
            ctx->pc = 0x182290u;
            goto label_182290;
        }
    }
    ctx->pc = 0x182270u;
    // 0x182270: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x182270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x182274: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182278: 0x8442f11e  lh          $v0, -0xEE2($v0)
    ctx->pc = 0x182278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963486)));
    // 0x18227c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18227cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x182280: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x182280u;
    {
        const bool branch_taken_0x182280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182280) {
            ctx->pc = 0x182284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182280u;
            // 0x182284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1822B4u;
            goto label_1822b4;
        }
    }
    ctx->pc = 0x182288u;
    // 0x182288: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x182288u;
    {
        const bool branch_taken_0x182288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182288u;
        // 0x18228c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182288) {
            ctx->pc = 0x1822B4u;
            goto label_1822b4;
        }
    }
    ctx->pc = 0x182290u;
label_182290:
    // 0x182290: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x182290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x182294: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x182294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182298: 0x8442f11c  lh          $v0, -0xEE4($v0)
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963484)));
    // 0x18229c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18229cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1822a0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1822A0u;
    {
        const bool branch_taken_0x1822a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1822a0) {
            ctx->pc = 0x1822B0u;
            goto label_1822b0;
        }
    }
    ctx->pc = 0x1822A8u;
    // 0x1822a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1822A8u;
    {
        const bool branch_taken_0x1822a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822A8u;
        // 0x1822ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822a8) {
            ctx->pc = 0x1822B4u;
            goto label_1822b4;
        }
    }
    ctx->pc = 0x1822B0u;
label_1822b0:
    // 0x1822b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1822b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1822b4:
    // 0x1822b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1822B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1822B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1822BCu;
    // 0x1822bc: 0x0  nop
    ctx->pc = 0x1822bcu;
    // NOP
    // 0x1822c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1822c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1822c4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1822c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1822c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1822cc: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x1822ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x1822d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1822d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1822d4: 0xac820530  sw          $v0, 0x530($a0)
    ctx->pc = 0x1822d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 2));
    // 0x1822d8: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x1822D8u;
    SET_GPR_U32(ctx, 31, 0x1822E0u);
    ctx->pc = 0x1822DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822D8u;
    // 0x1822dc: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F60u, 0x1822D8u, 0x1822E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822E0u;
label_1822e0:
    // 0x1822e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1822e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1822e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1822E4u;
    {
        const bool branch_taken_0x1822e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1822e4) {
            ctx->pc = 0x1822E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1822E4u;
            // 0x1822e8: 0x8c420494  lw          $v0, 0x494($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1822F4u;
            goto label_1822f4;
        }
    }
    ctx->pc = 0x1822ECu;
    // 0x1822ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1822ECu;
    {
        const bool branch_taken_0x1822ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822ECu;
        // 0x1822f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822ec) {
            ctx->pc = 0x1822FCu;
            goto label_1822fc;
        }
    }
    ctx->pc = 0x1822F4u;
label_1822f4:
    // 0x1822f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1822f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1822f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1822f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1822fc:
    // 0x1822fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1822fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182300: 0x3e00008  jr          $ra
    ctx->pc = 0x182300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182300u;
        // 0x182304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182308u;
    // 0x182308: 0x0  nop
    ctx->pc = 0x182308u;
    // NOP
    // 0x18230c: 0x0  nop
    ctx->pc = 0x18230cu;
    // NOP
    // 0x182310: 0x3e00008  jr          $ra
    ctx->pc = 0x182310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182310u;
        // 0x182314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182318u;
    // 0x182318: 0x0  nop
    ctx->pc = 0x182318u;
    // NOP
    // 0x18231c: 0x0  nop
    ctx->pc = 0x18231cu;
    // NOP
    // 0x182320: 0x3e00008  jr          $ra
    ctx->pc = 0x182320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182320u;
        // 0x182324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182328u;
    // 0x182328: 0x0  nop
    ctx->pc = 0x182328u;
    // NOP
    // 0x18232c: 0x0  nop
    ctx->pc = 0x18232cu;
    // NOP
    if (ctx->pc == 0x18232cu) { ctx->pc = 0x182330u; }
}
