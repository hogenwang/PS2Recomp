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

// Function: sub_00239ED0
// Address: 0x239ed0 - 0x23a008
void sub_00239ED0_0x239ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239ED0_0x239ed0");
#endif

    switch (ctx->pc) {
        case 0x239eecu: goto label_239eec;
        case 0x239f24u: goto label_239f24;
        case 0x239f8cu: goto label_239f8c;
        case 0x239fc0u: goto label_239fc0;
        case 0x239ff0u: goto label_239ff0;
        default: break;
    }

    ctx->pc = 0x239ed0u;

    // 0x239ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239ed8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x239ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x239edc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x239edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x239ee0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x239ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x239ee4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x239EE4u;
    SET_GPR_U32(ctx, 31, 0x239EECu);
    ctx->pc = 0x239EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EE4u;
    // 0x239ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x239EE4u, 0x239EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EECu;
label_239eec:
    // 0x239eec: 0x8e110114  lw          $s1, 0x114($s0)
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x239ef0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x239EF0u;
    {
        const bool branch_taken_0x239ef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF0u;
        // 0x239ef4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef0) {
            ctx->pc = 0x239F1Cu;
            goto label_239f1c;
        }
    }
    ctx->pc = 0x239EF8u;
    // 0x239ef8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x239ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x239efc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239EFCu;
    {
        const bool branch_taken_0x239efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EFCu;
        // 0x239f00: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239efc) {
            ctx->pc = 0x239F08u;
            goto label_239f08;
        }
    }
    ctx->pc = 0x239F04u;
    // 0x239f04: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x239f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_239f08:
    // 0x239f08: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x239f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x239f0c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x239f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x239f10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239f14: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x239F14u;
    {
        const bool branch_taken_0x239f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F14u;
        // 0x239f18: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f14) {
            ctx->pc = 0x239F84u;
            goto label_239f84;
        }
    }
    ctx->pc = 0x239F1Cu;
label_239f1c:
    // 0x239f1c: 0xc08f4fc  jal         func_23D3F0
    ctx->pc = 0x239F1Cu;
    SET_GPR_U32(ctx, 31, 0x239F24u);
    ctx->pc = 0x239F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F1Cu;
    // 0x239f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F0u, 0x239F1Cu, 0x239F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F24u;
label_239f24:
    // 0x239f24: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x239F24u;
    {
        const bool branch_taken_0x239f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f24) {
            ctx->pc = 0x239F84u;
            goto label_239f84;
        }
    }
    ctx->pc = 0x239F2Cu;
    // 0x239f2c: 0x8e110100  lw          $s1, 0x100($s0)
    ctx->pc = 0x239f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x239f30: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x239F30u;
    {
        const bool branch_taken_0x239f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f30) {
            ctx->pc = 0x239F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F30u;
            // 0x239f34: 0x8e1100dc  lw          $s1, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F5Cu;
            goto label_239f5c;
        }
    }
    ctx->pc = 0x239F38u;
    // 0x239f38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x239f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x239f3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239F3Cu;
    {
        const bool branch_taken_0x239f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F3Cu;
        // 0x239f40: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f3c) {
            ctx->pc = 0x239F48u;
            goto label_239f48;
        }
    }
    ctx->pc = 0x239F44u;
    // 0x239f44: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x239f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_239f48:
    // 0x239f48: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x239f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x239f4c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x239f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x239f50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239f54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239F54u;
    {
        const bool branch_taken_0x239f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F54u;
        // 0x239f58: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f54) {
            ctx->pc = 0x239F84u;
            goto label_239f84;
        }
    }
    ctx->pc = 0x239F5Cu;
label_239f5c:
    // 0x239f5c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x239F5Cu;
    {
        const bool branch_taken_0x239f5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f5c) {
            ctx->pc = 0x239F84u;
            goto label_239f84;
        }
    }
    ctx->pc = 0x239F64u;
    // 0x239f64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x239f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x239f68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239F68u;
    {
        const bool branch_taken_0x239f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F68u;
        // 0x239f6c: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f68) {
            ctx->pc = 0x239F74u;
            goto label_239f74;
        }
    }
    ctx->pc = 0x239F70u;
    // 0x239f70: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x239f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_239f74:
    // 0x239f74: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x239f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x239f78: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x239f7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239f80: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x239f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_239f84:
    // 0x239f84: 0xc08c698  jal         func_231A60
    ctx->pc = 0x239F84u;
    SET_GPR_U32(ctx, 31, 0x239F8Cu);
    ctx->pc = 0x239F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F84u;
    // 0x239f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x239F84u, 0x239F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F8Cu;
label_239f8c:
    // 0x239f8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x239f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x239f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239f94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239f98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x239FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FA0u;
        // 0x239fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239FA8u;
    // 0x239fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239fac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x239facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x239fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x239fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x239fb8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x239FB8u;
    SET_GPR_U32(ctx, 31, 0x239FC0u);
    ctx->pc = 0x239FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FB8u;
    // 0x239fbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x239FB8u, 0x239FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FC0u;
label_239fc0:
    // 0x239fc0: 0x8e300114  lw          $s0, 0x114($s1)
    ctx->pc = 0x239fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x239fc4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x239FC4u;
    {
        const bool branch_taken_0x239fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x239FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FC4u;
        // 0x239fc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fc4) {
            ctx->pc = 0x239FE8u;
            goto label_239fe8;
        }
    }
    ctx->pc = 0x239FCCu;
    // 0x239fcc: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x239fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x239fd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x239fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239fd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239FD4u;
    {
        const bool branch_taken_0x239fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239fd4) {
            ctx->pc = 0x239FE8u;
            goto label_239fe8;
        }
    }
    ctx->pc = 0x239FDCu;
    // 0x239fdc: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x239fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x239fe0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239FE0u;
    {
        const bool branch_taken_0x239fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x239fe0) {
            ctx->pc = 0x239FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239FE0u;
            // 0x239fe4: 0x8e3000dc  lw          $s0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239FE8u;
            goto label_239fe8;
        }
    }
    ctx->pc = 0x239FE8u;
label_239fe8:
    // 0x239fe8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x239FE8u;
    SET_GPR_U32(ctx, 31, 0x239FF0u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x239FE8u, 0x239FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FF0u;
label_239ff0:
    // 0x239ff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x239ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239ff8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a000: 0x3e00008  jr          $ra
    ctx->pc = 0x23A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A000u;
        // 0x23a004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A008u;
}
