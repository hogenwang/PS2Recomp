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

// Function: sub_001DFAA0
// Address: 0x1dfaa0 - 0x1dfc00
void sub_001DFAA0_0x1dfaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFAA0_0x1dfaa0");
#endif

    switch (ctx->pc) {
        case 0x1dfaecu: goto label_1dfaec;
        case 0x1dfb20u: goto label_1dfb20;
        case 0x1dfb28u: goto label_1dfb28;
        case 0x1dfb68u: goto label_1dfb68;
        case 0x1dfbb0u: goto label_1dfbb0;
        case 0x1dfbbcu: goto label_1dfbbc;
        case 0x1dfbd0u: goto label_1dfbd0;
        default: break;
    }

    ctx->pc = 0x1dfaa0u;

    // 0x1dfaa0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1dfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dfaa4: 0x8486000c  lh          $a2, 0xC($a0)
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dfaa8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1dfaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1dfaac: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x1dfaacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1dfab0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfab4: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x1dfab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x1dfab8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1dfab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1dfabc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1dfabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1dfac0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfac4: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x1dfac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x1dfac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAC8u;
        // 0x1dfacc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFAD0u;
    // 0x1dfad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dfae4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DFAE4u;
    SET_GPR_U32(ctx, 31, 0x1DFAECu);
    ctx->pc = 0x1DFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAE4u;
    // 0x1dfae8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1DFAE4u, 0x1DFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAECu;
label_1dfaec:
    // 0x1dfaec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfaf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dfaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dfaf4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFAF4u;
    {
        const bool branch_taken_0x1dfaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAF4u;
        // 0x1dfaf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaf4) {
            ctx->pc = 0x1DFB18u;
            goto label_1dfb18;
        }
    }
    ctx->pc = 0x1DFAFCu;
    // 0x1dfafc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dfafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dfb00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfb04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfb08: 0x2484cb60  addiu       $a0, $a0, -0x34A0
    ctx->pc = 0x1dfb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953824));
    // 0x1dfb0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb10: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DFB10u;
    ctx->pc = 0x1DFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB10u;
    // 0x1dfb14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DFB18u;
label_1dfb18:
    // 0x1dfb18: 0xc077ce4  jal         func_1DF390
    ctx->pc = 0x1DFB18u;
    SET_GPR_U32(ctx, 31, 0x1DFB20u);
    ctx->pc = 0x1DF390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF390u, 0x1DFB18u, 0x1DFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB20u;
label_1dfb20:
    // 0x1dfb20: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DFB20u;
    SET_GPR_U32(ctx, 31, 0x1DFB28u);
    ctx->pc = 0x1DFB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB20u;
    // 0x1dfb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1DFB20u, 0x1DFB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB28u;
label_1dfb28:
    // 0x1dfb28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dfb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfb38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb3c: 0x807e5e2  j           func_1F9788
    ctx->pc = 0x1DFB3Cu;
    ctx->pc = 0x1DFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB3Cu;
    // 0x1dfb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9788u, 0x1DFB3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DFB44u;
    // 0x1dfb44: 0x0  nop
    ctx->pc = 0x1dfb44u;
    // NOP
    // 0x1dfb48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfb4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dfb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dfb50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfb58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dfb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dfb5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dfb60: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DFB60u;
    SET_GPR_U32(ctx, 31, 0x1DFB68u);
    ctx->pc = 0x1DFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB60u;
    // 0x1dfb64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1DFB60u, 0x1DFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB68u;
label_1dfb68:
    // 0x1dfb68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfb6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dfb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfb70: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DFB70u;
    {
        const bool branch_taken_0x1dfb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB70u;
        // 0x1dfb74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb70) {
            ctx->pc = 0x1DFBA0u;
            goto label_1dfba0;
        }
    }
    ctx->pc = 0x1DFB78u;
    // 0x1dfb78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dfb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dfb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfb84: 0x2484cb88  addiu       $a0, $a0, -0x3478
    ctx->pc = 0x1dfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953864));
    // 0x1dfb88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfb88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dfb8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfb90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dfb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfb94: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DFB94u;
    ctx->pc = 0x1DFB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB94u;
    // 0x1dfb98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DFB9Cu;
    // 0x1dfb9c: 0x0  nop
    ctx->pc = 0x1dfb9cu;
    // NOP
label_1dfba0:
    // 0x1dfba0: 0x8e71007c  lw          $s1, 0x7C($s3)
    ctx->pc = 0x1dfba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x1dfba4: 0x8e700080  lw          $s0, 0x80($s3)
    ctx->pc = 0x1dfba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1dfba8: 0xc077ce4  jal         func_1DF390
    ctx->pc = 0x1DFBA8u;
    SET_GPR_U32(ctx, 31, 0x1DFBB0u);
    ctx->pc = 0x1DFBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBA8u;
    // 0x1dfbac: 0x8e720078  lw          $s2, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF390u, 0x1DFBA8u, 0x1DFBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBB0u;
label_1dfbb0:
    // 0x1dfbb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dfbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbb4: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DFBB4u;
    SET_GPR_U32(ctx, 31, 0x1DFBBCu);
    ctx->pc = 0x1DFBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFBB4u;
    // 0x1dfbb8: 0x211802a  slt         $s0, $s0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1DFBB4u, 0x1DFBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBBCu;
label_1dfbbc:
    // 0x1dfbbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dfbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbc0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFBC0u;
    {
        const bool branch_taken_0x1dfbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBC0u;
        // 0x1dfbc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbc0) {
            ctx->pc = 0x1DFBE0u;
            goto label_1dfbe0;
        }
    }
    ctx->pc = 0x1DFBC8u;
    // 0x1dfbc8: 0xc07e648  jal         func_1F9920
    ctx->pc = 0x1DFBC8u;
    SET_GPR_U32(ctx, 31, 0x1DFBD0u);
    ctx->pc = 0x1F9920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9920u, 0x1DFBC8u, 0x1DFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBD0u;
label_1dfbd0:
    // 0x1dfbd0: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1dfbd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dfbd8: 0xae63007c  sw          $v1, 0x7C($s3)
    ctx->pc = 0x1dfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 3));
    // 0x1dfbdc: 0xae630080  sw          $v1, 0x80($s3)
    ctx->pc = 0x1dfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
label_1dfbe0:
    // 0x1dfbe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfbe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfbe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfbe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfbe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfbec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dfbecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfbf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dfbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBF4u;
        // 0x1dfbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFBFCu;
    // 0x1dfbfc: 0x0  nop
    ctx->pc = 0x1dfbfcu;
    // NOP
}
