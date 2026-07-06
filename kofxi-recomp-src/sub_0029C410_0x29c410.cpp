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

// Function: sub_0029C410
// Address: 0x29c410 - 0x29c4f0
void sub_0029C410_0x29c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C410_0x29c410");
#endif

    switch (ctx->pc) {
        case 0x29c428u: goto label_29c428;
        case 0x29c4a4u: goto label_29c4a4;
        case 0x29c4ccu: goto label_29c4cc;
        default: break;
    }

    ctx->pc = 0x29c410u;

label_29c410:
    // 0x29c410: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x29c410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c414: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x29c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x29c418: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29C418u;
    {
        const bool branch_taken_0x29c418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C418u;
        // 0x29c41c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c418) {
            ctx->pc = 0x29C474u;
            goto label_29c474;
        }
    }
    ctx->pc = 0x29C420u;
    // 0x29c420: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x29C420u;
    {
        const bool branch_taken_0x29c420 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x29C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C420u;
        // 0x29c424: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c420) {
            ctx->pc = 0x29C46Cu;
            goto label_29c46c;
        }
    }
    ctx->pc = 0x29C428u;
label_29c428:
    // 0x29c428: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x29c428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29c42c: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x29c42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x29c430: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29C430u;
    {
        const bool branch_taken_0x29c430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C430u;
        // 0x29c434: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c430) {
            ctx->pc = 0x29C460u;
            goto label_29c460;
        }
    }
    ctx->pc = 0x29C438u;
    // 0x29c438: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x29c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x29c43c: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x29c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x29c440: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x29c440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x29c444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c448: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x29c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x29c44c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29c450: 0xace30030  sw          $v1, 0x30($a3)
    ctx->pc = 0x29c450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 3));
    // 0x29c454: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29c458: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x29c458u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29c45c: 0xfc830048  sd          $v1, 0x48($a0)
    ctx->pc = 0x29c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 3));
label_29c460:
    // 0x29c460: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29c460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29c464: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29C464u;
    {
        const bool branch_taken_0x29c464 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C464u;
        // 0x29c468: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c464) {
            ctx->pc = 0x29C428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c428;
        }
    }
    ctx->pc = 0x29C46Cu;
label_29c46c:
    // 0x29c46c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C46Cu;
        // 0x29c470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C474u;
label_29c474:
    // 0x29c474: 0x3e00008  jr          $ra
    ctx->pc = 0x29C474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C47Cu;
    // 0x29c47c: 0x0  nop
    ctx->pc = 0x29c47cu;
    // NOP
    // 0x29c480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29c488: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x29c488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x29c48c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x29c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x29c490: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C490u;
    {
        const bool branch_taken_0x29c490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C490u;
        // 0x29c494: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c490) {
            ctx->pc = 0x29C4B4u;
            goto label_29c4b4;
        }
    }
    ctx->pc = 0x29C498u;
    // 0x29c498: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29c498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c49c: 0xc0a70c8  jal         func_29C320
    ctx->pc = 0x29C49Cu;
    SET_GPR_U32(ctx, 31, 0x29C4A4u);
    ctx->pc = 0x29C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C49Cu;
    // 0x29c4a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C320u, 0x29C49Cu, 0x29C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4A4u;
label_29c4a4:
    // 0x29c4a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29C4A4u;
    {
        const bool branch_taken_0x29c4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4A4u;
        // 0x29c4a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4a4) {
            ctx->pc = 0x29C4D4u;
            goto label_29c4d4;
        }
    }
    ctx->pc = 0x29C4ACu;
    // 0x29c4ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29C4ACu;
    {
        const bool branch_taken_0x29c4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4ac) {
            ctx->pc = 0x29C4DCu;
            goto label_29c4dc;
        }
    }
    ctx->pc = 0x29C4B4u;
label_29c4b4:
    // 0x29c4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c4b8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29C4B8u;
    {
        const bool branch_taken_0x29c4b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4B8u;
        // 0x29c4bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4b8) {
            ctx->pc = 0x29C4D8u;
            goto label_29c4d8;
        }
    }
    ctx->pc = 0x29C4C0u;
    // 0x29c4c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29c4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4c4: 0xc0a7104  jal         func_29C410
    ctx->pc = 0x29C4C4u;
    SET_GPR_U32(ctx, 31, 0x29C4CCu);
    ctx->pc = 0x29C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4C4u;
    // 0x29c4c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C410u;
    goto label_29c410;
    ctx->pc = 0x29C4CCu;
label_29c4cc:
    // 0x29c4cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C4CCu;
    {
        const bool branch_taken_0x29c4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4CCu;
        // 0x29c4d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4cc) {
            ctx->pc = 0x29C4DCu;
            goto label_29c4dc;
        }
    }
    ctx->pc = 0x29C4D4u;
label_29c4d4:
    // 0x29c4d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c4d8:
    // 0x29c4d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c4dc:
    // 0x29c4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4DCu;
        // 0x29c4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C4E4u;
    // 0x29c4e4: 0x0  nop
    ctx->pc = 0x29c4e4u;
    // NOP
    // 0x29c4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4E8u;
        // 0x29c4ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C4F0u;
}
