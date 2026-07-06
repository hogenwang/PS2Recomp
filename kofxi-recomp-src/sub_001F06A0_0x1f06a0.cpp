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

// Function: sub_001F06A0
// Address: 0x1f06a0 - 0x1f07b0
void sub_001F06A0_0x1f06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F06A0_0x1f06a0");
#endif

    switch (ctx->pc) {
        case 0x1f06ccu: goto label_1f06cc;
        case 0x1f06fcu: goto label_1f06fc;
        case 0x1f0720u: goto label_1f0720;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f0760u: goto label_1f0760;
        case 0x1f0788u: goto label_1f0788;
        default: break;
    }

    ctx->pc = 0x1f06a0u;

    // 0x1f06a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f06a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f06a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f06a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f06ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f06acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f06b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f06b4: 0x26500078  addiu       $s0, $s2, 0x78
    ctx->pc = 0x1f06b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x1f06b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f06bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f06bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f06c0: 0x8e532018  lw          $s3, 0x2018($s2)
    ctx->pc = 0x1f06c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8216)));
    // 0x1f06c4: 0xc07c616  jal         func_1F1858
    ctx->pc = 0x1F06C4u;
    SET_GPR_U32(ctx, 31, 0x1F06CCu);
    ctx->pc = 0x1F06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06C4u;
    // 0x1f06c8: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1858u, 0x1F06C4u, 0x1F06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06CCu;
label_1f06cc:
    // 0x1f06cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f06d0: 0x50430026  beql        $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F06D0u;
    {
        const bool branch_taken_0x1f06d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f06d0) {
            ctx->pc = 0x1F06D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F06D0u;
            // 0x1f06d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F076Cu;
            goto label_1f076c;
        }
    }
    ctx->pc = 0x1F06D8u;
    // 0x1f06d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f06dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F06DCu;
    {
        const bool branch_taken_0x1f06dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06DCu;
        // 0x1f06e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06dc) {
            ctx->pc = 0x1F06F4u;
            goto label_1f06f4;
        }
    }
    ctx->pc = 0x1F06E4u;
    // 0x1f06e4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1f06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1f06e8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F06E8u;
    {
        const bool branch_taken_0x1f06e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06E8u;
        // 0x1f06ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06e8) {
            ctx->pc = 0x1F0768u;
            goto label_1f0768;
        }
    }
    ctx->pc = 0x1F06F0u;
    // 0x1f06f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f06f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f06f4:
    // 0x1f06f4: 0xc07678e  jal         func_1D9E38
    ctx->pc = 0x1F06F4u;
    SET_GPR_U32(ctx, 31, 0x1F06FCu);
    ctx->pc = 0x1F06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06F4u;
    // 0x1f06f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E38u, 0x1F06F4u, 0x1F06FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06FCu;
label_1f06fc:
    // 0x1f06fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f06fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0700: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1f0700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1f0704: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1f0704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0708: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f0708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f070c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0710: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0710u;
    {
        const bool branch_taken_0x1f0710 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0710u;
        // 0x1f0714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0710) {
            ctx->pc = 0x1F0768u;
            goto label_1f0768;
        }
    }
    ctx->pc = 0x1F0718u;
    // 0x1f0718: 0xc07ab78  jal         func_1EADE0
    ctx->pc = 0x1F0718u;
    SET_GPR_U32(ctx, 31, 0x1F0720u);
    ctx->pc = 0x1EADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADE0u, 0x1F0718u, 0x1F0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0720u;
label_1f0720:
    // 0x1f0720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0724: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x1f0724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x1f0728: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f072c: 0x43302a  slt         $a2, $v0, $v1
    ctx->pc = 0x1f072cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f0730: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0730u;
    {
        const bool branch_taken_0x1f0730 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0730u;
        // 0x1f0734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0730) {
            ctx->pc = 0x1F0768u;
            goto label_1f0768;
        }
    }
    ctx->pc = 0x1F0738u;
    // 0x1f0738: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1F0738u;
    SET_GPR_U32(ctx, 31, 0x1F0740u);
    ctx->pc = 0x1FDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA38u, 0x1F0738u, 0x1F0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0740u;
label_1f0740:
    // 0x1f0740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0744: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1f0744u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f0748: 0xc07ab78  jal         func_1EADE0
    ctx->pc = 0x1F0748u;
    SET_GPR_U32(ctx, 31, 0x1F0750u);
    ctx->pc = 0x1F074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0748u;
    // 0x1f074c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADE0u, 0x1F0748u, 0x1F0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0750u;
label_1f0750:
    // 0x1f0750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f0754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0758: 0xc07ab68  jal         func_1EADA0
    ctx->pc = 0x1F0758u;
    SET_GPR_U32(ctx, 31, 0x1F0760u);
    ctx->pc = 0x1F075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0758u;
    // 0x1f075c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADA0u, 0x1F0758u, 0x1F0760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0760u;
label_1f0760:
    // 0x1f0760: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x1f0760u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f0764: 0x2e020001  sltiu       $v0, $s0, 0x1
    ctx->pc = 0x1f0764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f0768:
    // 0x1f0768: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f0768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f076c:
    // 0x1f076c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f076cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0770: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f0770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0774: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f0774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0778: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f0778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f077c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F077Cu;
        // 0x1f0780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0784u;
    // 0x1f0784: 0x0  nop
    ctx->pc = 0x1f0784u;
    // NOP
label_1f0788:
    // 0x1f0788: 0x24840ea0  addiu       $a0, $a0, 0xEA0
    ctx->pc = 0x1f0788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3744));
    // 0x1f078c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1f078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1f0790: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1f0790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1f0794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f0794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f0798: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0798u;
    {
        const bool branch_taken_0x1f0798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0798u;
        // 0x1f079c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0798) {
            ctx->pc = 0x1F07A4u;
            goto label_1f07a4;
        }
    }
    ctx->pc = 0x1F07A0u;
    // 0x1f07a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f07a4:
    // 0x1f07a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F07A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F07A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F07ACu;
    // 0x1f07ac: 0x0  nop
    ctx->pc = 0x1f07acu;
    // NOP
}
