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

// Function: sub_0027BE68
// Address: 0x27be68 - 0x27c488
void sub_0027BE68_0x27be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BE68_0x27be68");
#endif

    switch (ctx->pc) {
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf28u: goto label_27bf28;
        case 0x27bf30u: goto label_27bf30;
        case 0x27bf90u: goto label_27bf90;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27c004u: goto label_27c004;
        case 0x27c030u: goto label_27c030;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c418u: goto label_27c418;
        case 0x27c458u: goto label_27c458;
        case 0x27c460u: goto label_27c460;
        default: break;
    }

    ctx->pc = 0x27be68u;

    // 0x27be68: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27be68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27be6c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27be70: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x27be70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x27be74: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x27be74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x27be78: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27be78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27be7c: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27be7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x27be80: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x27be80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
    // 0x27be84: 0x3c0b0028  lui         $t3, 0x28
    ctx->pc = 0x27be84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)40 << 16));
    // 0x27be88: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27be8c: 0x2463bee0  addiu       $v1, $v1, -0x4120
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950624));
    // 0x27be90: 0x2442d950  addiu       $v0, $v0, -0x26B0
    ctx->pc = 0x27be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
    // 0x27be94: 0x24a5c708  addiu       $a1, $a1, -0x38F8
    ctx->pc = 0x27be94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
    // 0x27be98: 0x24c6cd50  addiu       $a2, $a2, -0x32B0
    ctx->pc = 0x27be98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954320));
    // 0x27be9c: 0x24e7cf90  addiu       $a3, $a3, -0x3070
    ctx->pc = 0x27be9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954896));
    // 0x27bea0: 0x2508d028  addiu       $t0, $t0, -0x2FD8
    ctx->pc = 0x27bea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955048));
    // 0x27bea4: 0x2529d0d0  addiu       $t1, $t1, -0x2F30
    ctx->pc = 0x27bea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955216));
    // 0x27bea8: 0x254ad248  addiu       $t2, $t2, -0x2DB8
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955592));
    // 0x27beac: 0x256bd3a8  addiu       $t3, $t3, -0x2C58
    ctx->pc = 0x27beacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955944));
    // 0x27beb0: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x27beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x27beb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27beb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27beb8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x27beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x27bebc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x27bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x27bec0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x27bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x27bec4: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x27bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x27bec8: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x27bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x27becc: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x27beccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x27bed0: 0xac8a0018  sw          $t2, 0x18($a0)
    ctx->pc = 0x27bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 10));
    // 0x27bed4: 0x3e00008  jr          $ra
    ctx->pc = 0x27BED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BED4u;
        // 0x27bed8: 0xac8b001c  sw          $t3, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BEDCu;
    // 0x27bedc: 0x0  nop
    ctx->pc = 0x27bedcu;
    // NOP
    // 0x27bee0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x27bee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x27bee4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27bee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27bee8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27beec: 0x24c6a000  addiu       $a2, $a2, -0x6000
    ctx->pc = 0x27beecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942720));
    // 0x27bef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bef8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27bef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27befc: 0x2412fd8f  addiu       $s2, $zero, -0x271
    ctx->pc = 0x27befcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966671));
    // 0x27bf00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27bf04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x27bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27bf08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x27bf0c: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x27BF0Cu;
    SET_GPR_U32(ctx, 31, 0x27BF14u);
    ctx->pc = 0x27BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF0Cu;
    // 0x27bf10: 0xac403540  sw          $zero, 0x3540($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 13632), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x27BF0Cu, 0x27BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF14u;
label_27bf14:
    // 0x27bf14: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27bf18: 0x4400153  bltz        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x27BF18u;
    {
        const bool branch_taken_0x27bf18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27bf18) {
            ctx->pc = 0x27C468u;
            goto label_27c468;
        }
    }
    ctx->pc = 0x27BF20u;
    // 0x27bf20: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x27BF20u;
    SET_GPR_U32(ctx, 31, 0x27BF28u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x27BF20u, 0x27BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF28u;
label_27bf28:
    // 0x27bf28: 0xc0bf146  jal         func_2FC518
    ctx->pc = 0x27BF28u;
    SET_GPR_U32(ctx, 31, 0x27BF30u);
    ctx->pc = 0x27BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF28u;
    // 0x27bf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC518u, 0x27BF28u, 0x27BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF30u;
label_27bf30:
    // 0x27bf30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27bf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf34: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BF34u;
    {
        const bool branch_taken_0x27bf34 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x27BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF34u;
        // 0x27bf38: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf34) {
            ctx->pc = 0x27BF48u;
            goto label_27bf48;
        }
    }
    ctx->pc = 0x27BF3Cu;
    // 0x27bf3c: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x27BF3Cu;
    {
        const bool branch_taken_0x27bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF3Cu;
        // 0x27bf40: 0x2412fd8f  addiu       $s2, $zero, -0x271 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966671));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf3c) {
            ctx->pc = 0x27C468u;
            goto label_27c468;
        }
    }
    ctx->pc = 0x27BF44u;
    // 0x27bf44: 0x0  nop
    ctx->pc = 0x27bf44u;
    // NOP
label_27bf48:
    // 0x27bf48: 0x8c433550  lw          $v1, 0x3550($v0)
    ctx->pc = 0x27bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13648)));
    // 0x27bf4c: 0x10600142  beqz        $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x27BF4Cu;
    {
        const bool branch_taken_0x27bf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF4Cu;
        // 0x27bf50: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf4c) {
            ctx->pc = 0x27C458u;
            goto label_27c458;
        }
    }
    ctx->pc = 0x27BF54u;
    // 0x27bf54: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27bf58: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x27bf58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x27bf5c: 0x2463b8f8  addiu       $v1, $v1, -0x4708
    ctx->pc = 0x27bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949112));
    // 0x27bf60: 0x24e7b758  addiu       $a3, $a3, -0x48A8
    ctx->pc = 0x27bf60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948696));
    // 0x27bf64: 0x2442b420  addiu       $v0, $v0, -0x4BE0
    ctx->pc = 0x27bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947872));
    // 0x27bf68: 0x3c0801c9  lui         $t0, 0x1C9
    ctx->pc = 0x27bf68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)457 << 16));
    // 0x27bf6c: 0x3c0901c9  lui         $t1, 0x1C9
    ctx->pc = 0x27bf6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)457 << 16));
    // 0x27bf70: 0x3c0a01c9  lui         $t2, 0x1C9
    ctx->pc = 0x27bf70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)457 << 16));
    // 0x27bf74: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf78: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x27bf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bf80: 0xad023c40  sw          $v0, 0x3C40($t0)
    ctx->pc = 0x27bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 15424), GPR_U32(ctx, 2));
    // 0x27bf84: 0xad233c44  sw          $v1, 0x3C44($t1)
    ctx->pc = 0x27bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 15428), GPR_U32(ctx, 3));
    // 0x27bf88: 0xc0a8bac  jal         func_2A2EB0
    ctx->pc = 0x27BF88u;
    SET_GPR_U32(ctx, 31, 0x27BF90u);
    ctx->pc = 0x27BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BF88u;
    // 0x27bf8c: 0xad473c48  sw          $a3, 0x3C48($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 15432), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2EB0u, 0x27BF88u, 0x27BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF90u;
label_27bf90:
    // 0x27bf90: 0xc0aeb46  jal         func_2BAD18
    ctx->pc = 0x27BF90u;
    SET_GPR_U32(ctx, 31, 0x27BF98u);
    ctx->pc = 0x2BAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAD18u, 0x27BF90u, 0x27BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF98u;
label_27bf98:
    // 0x27bf98: 0xc0abdc6  jal         func_2AF718
    ctx->pc = 0x27BF98u;
    SET_GPR_U32(ctx, 31, 0x27BFA0u);
    ctx->pc = 0x2AF718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF718u, 0x27BF98u, 0x27BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFA0u;
label_27bfa0:
    // 0x27bfa0: 0xc0aa604  jal         func_2A9810
    ctx->pc = 0x27BFA0u;
    SET_GPR_U32(ctx, 31, 0x27BFA8u);
    ctx->pc = 0x2A9810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9810u, 0x27BFA0u, 0x27BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFA8u;
label_27bfa8:
    // 0x27bfa8: 0xc0ac27c  jal         func_2B09F0
    ctx->pc = 0x27BFA8u;
    SET_GPR_U32(ctx, 31, 0x27BFB0u);
    ctx->pc = 0x27BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFA8u;
    // 0x27bfac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B09F0u, 0x27BFA8u, 0x27BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFB0u;
label_27bfb0:
    // 0x27bfb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27bfb8: 0x24503554  addiu       $s0, $v0, 0x3554
    ctx->pc = 0x27bfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13652));
    // 0x27bfbc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BFBCu;
    {
        const bool branch_taken_0x27bfbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFBCu;
        // 0x27bfc0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfbc) {
            ctx->pc = 0x27BFD0u;
            goto label_27bfd0;
        }
    }
    ctx->pc = 0x27BFC4u;
    // 0x27bfc4: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x27BFC4u;
    {
        const bool branch_taken_0x27bfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFC4u;
        // 0x27bfc8: 0x2412fd9e  addiu       $s2, $zero, -0x262 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966686));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfc4) {
            ctx->pc = 0x27C468u;
            goto label_27c468;
        }
    }
    ctx->pc = 0x27BFCCu;
    // 0x27bfcc: 0x0  nop
    ctx->pc = 0x27bfccu;
    // NOP
label_27bfd0:
    // 0x27bfd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27bfd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfd4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27bfd8: 0xc0ac13a  jal         func_2B04E8
    ctx->pc = 0x27BFD8u;
    SET_GPR_U32(ctx, 31, 0x27BFE0u);
    ctx->pc = 0x27BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFD8u;
    // 0x27bfdc: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04E8u, 0x27BFD8u, 0x27BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFE0u;
label_27bfe0:
    // 0x27bfe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bfe4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x27bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27bfe8: 0xc0ac37a  jal         func_2B0DE8
label_27bfec:
    if (ctx->pc == 0x27BFECu) {
        ctx->pc = 0x27BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFE8u;
        // 0x27bfec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFF0u;
        goto label_27bff0;
    }
    ctx->pc = 0x27BFE8u;
    SET_GPR_U32(ctx, 31, 0x27BFF0u);
    ctx->pc = 0x27BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFE8u;
    // 0x27bfec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0DE8u, 0x27BFE8u, 0x27BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFF0u;
label_27bff0:
    // 0x27bff0: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27bff4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27bff8: 0x24a5e750  addiu       $a1, $a1, -0x18B0
    ctx->pc = 0x27bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
    // 0x27bffc: 0xc0ac376  jal         func_2B0DD8
    ctx->pc = 0x27BFFCu;
    SET_GPR_U32(ctx, 31, 0x27C004u);
    ctx->pc = 0x27C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFFCu;
    // 0x27c000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0DD8u, 0x27BFFCu, 0x27C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C004u;
label_27c004:
    // 0x27c004: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c008: 0x2463c050  addiu       $v1, $v1, -0x3FB0
    ctx->pc = 0x27c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950992));
    // 0x27c00c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c010: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C010u;
    {
        const bool branch_taken_0x27c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c010) {
            ctx->pc = 0x27C030u;
            goto label_27c030;
        }
    }
    ctx->pc = 0x27C018u;
    // 0x27c018: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27c018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27c01c: 0x2484c064  addiu       $a0, $a0, -0x3F9C
    ctx->pc = 0x27c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951012));
    // 0x27c020: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27c020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27c024: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27c024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27c028: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27C028u;
    SET_GPR_U32(ctx, 31, 0x27C030u);
    ctx->pc = 0x27C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C028u;
    // 0x27c02c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27C028u, 0x27C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C030u;
label_27c030:
    // 0x27c030: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C030u;
    {
        const bool branch_taken_0x27c030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c030) {
            ctx->pc = 0x27C064u;
            goto label_27c064;
        }
    }
    ctx->pc = 0x27C038u;
    // 0x27c038: 0x8df62fc5  lw          $s6, 0x2FC5($t7)
    ctx->pc = 0x27c038u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12229)));
    // 0x27c03c: 0xdd50d797  ld          $s0, -0x2869($t2)
    ctx->pc = 0x27c03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 10), 4294956951)));
    // 0x27c040: 0xa3f15c61  sb          $s1, 0x5C61($ra)
    ctx->pc = 0x27c040u;
    WRITE8(ADD32(GPR_U32(ctx, 31), 23649), (uint8_t)GPR_U32(ctx, 17));
    // 0x27c044: 0x8eaf5a85  lw          $t7, 0x5A85($s5)
    ctx->pc = 0x27c044u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23173)));
    // 0x27c048: 0x39c6020  add         $t4, $gp, $gp
    ctx->pc = 0x27c048u;
    {     int32_t rs_val = GPR_S32(ctx, 28);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x27c04c: 0xa2a24d99  sb          $v0, 0x4D99($s5)
    ctx->pc = 0x27c04cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19865), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c050: 0x0  nop
    ctx->pc = 0x27c050u;
    // NOP
    // 0x27c054: 0xcef87c85  pref        0x18, 0x7C85($s7)
    ctx->pc = 0x27c054u;
    // PREF instruction (ignored)
    // 0x27c058: 0x980b2a98  lwr         $t3, 0x2A98($zero)
    ctx->pc = 0x27c058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10904); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x27c05c: 0xcef87f21  pref        0x18, 0x7F21($s7)
    ctx->pc = 0x27c05cu;
    // PREF instruction (ignored)
    // 0x27c060: 0x0  nop
    ctx->pc = 0x27c060u;
    // NOP
label_27c064:
    // 0x27c064: 0xb5671332  sdr         $a3, 0x1332($t3)
    ctx->pc = 0x27c064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4914); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c068: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c068u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C068 raw=0xF567B32A");
    // 0x27c06c: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c06cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C06C raw=0xF567B32A");
    // 0x27c070: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c070u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C070 raw=0xF567B32A");
    // 0x27c074: 0x3363758a  andi        $v1, $k1, 0x758A
    ctx->pc = 0x27c074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 27) & (uint64_t)(uint16_t)30090);
    // 0x27c078: 0xeda39306  .word       0xEDA39306                   # INVALID     $t5, $v1, -0x6CFA # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c078u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C078 raw=0xEDA39306");
    // 0x27c07c: 0xec37a726  .word       0xEC37A726                   # INVALID     $at, $s7, -0x58DA # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c07cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C07C raw=0xEC37A726");
    // 0x27c080: 0xb56ffa07  sdr         $t7, -0x5F9($t3)
    ctx->pc = 0x27c080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294965767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c084: 0xc5476bee  lwc1        $f7, 0x6BEE($t2)
    ctx->pc = 0x27c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 27630)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27c088: 0xe573be72  swc1        $f19, -0x418E($t3)
    ctx->pc = 0x27c088u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294950514), bits); }
    // 0x27c08c: 0xa5339f2b  sh          $s3, -0x60D5($t1)
    ctx->pc = 0x27c08cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294942507), (uint16_t)GPR_U32(ctx, 19));
    // 0x27c090: 0x48c21ed7  .word       0x48C21ED7                   # ctc2.i      $v0, $vi3 # 000006D6 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x27c090u;
    ctx->vu0_r = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x27c094: 0xb1277fee  sdl         $a3, 0x7FEE($t1)
    ctx->pc = 0x27c094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c098: 0xe573be72  swc1        $f19, -0x418E($t3)
    ctx->pc = 0x27c098u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294950514), bits); }
    // 0x27c09c: 0x1d2fbf16  .word       0x1D2FBF16                   # bgtz        $t1, . + 4 + (-0x40EA << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27C09Cu;
    {
        const bool branch_taken_0x27c09c = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x27C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C09Cu;
        // 0x27c0a0: 0x70de969f  .word       0x70DE969F                   # INVALID     $a2, $fp, -0x6961 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x27C0A0 raw=0x70DE969F");
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c09c) {
            ctx->pc = 0x26BCF8u;
            return;
        }
    }
    ctx->pc = 0x27C0A4u;
    // 0x27c0a4: 0x58d26f9b  .word       0x58D26F9B                   # blezl       $a2, . + 4 + (0x6F9B << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27C0A4u;
    {
        const bool branch_taken_0x27c0a4 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x27c0a4) {
            ctx->pc = 0x27C0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C0A4u;
            // 0x27c0a8: 0x35a2779e  ori         $v0, $t5, 0x779E (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)30622);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297F14u;
            return;
        }
    }
    ctx->pc = 0x27C0ACu;
    // 0x27c0ac: 0xa16b2b37  sb          $t3, 0x2B37($t3)
    ctx->pc = 0x27c0acu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 11063), (uint8_t)GPR_U32(ctx, 11));
    // 0x27c0b0: 0x754bbb7a  .word       0x754BBB7A                   # INVALID     $t2, $t3, -0x4486 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c0b0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C0B0 raw=0x754BBB7A");
    // 0x27c0b4: 0x10deee87  beq         $a2, $fp, . + 4 + (-0x1179 << 2)
    ctx->pc = 0x27C0B4u;
    {
        const bool branch_taken_0x27c0b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 30));
        ctx->pc = 0x27C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0B4u;
        // 0x27c0b8: 0x407b3e8b  .word       0x407B3E8B                   # INVALID     $v1, $k1, 0x3E8B # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x27C0B8 raw=0x407B3E8B");
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0b4) {
            ctx->pc = 0x277AD4u;
            return;
        }
    }
    ctx->pc = 0x27C0BCu;
    // 0x27c0bc: 0x60b666eb  daddi       $s6, $a1, 0x66EB
    ctx->pc = 0x27c0bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)26347; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x27c0c0: 0x4df27223  .word       0x4DF27223                   # INVALID     $t7, $s2, 0x7223 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c0c0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27C0C0 raw=0x4DF27223");
    // 0x27c0c4: 0x24ee66fb  addiu       $t6, $a3, 0x66FB
    ctx->pc = 0x27c0c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 26363));
    // 0x27c0c8: 0x40de368f  .word       0x40DE368F                   # ctc0        $fp, Wired # 0000068F <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c0c8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x27C0C8 raw=0x40DE368F");
    // 0x27c0cc: 0x74d62afe  .word       0x74D62AFE                   # INVALID     $a2, $s6, 0x2AFE # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c0ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C0CC raw=0x74D62AFE");
    // 0x27c0d0: 0x4cca8aae  .word       0x4CCA8AAE                   # INVALID     $a2, $t2, -0x7552 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c0d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27C0D0 raw=0x4CCA8AAE");
    // 0x27c0d4: 0xd94767ee  lqc2        $vf7, 0x67EE($t2)
    ctx->pc = 0x27c0d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 26606)));
    // 0x27c0d8: 0xe573be72  swc1        $f19, -0x418E($t3)
    ctx->pc = 0x27c0d8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294950514), bits); }
    // 0x27c0dc: 0xe5379f27  swc1        $f23, -0x60D9($t1)
    ctx->pc = 0x27c0dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294942503), bits); }
    // 0x27c0e0: 0x306a9672  andi        $t2, $v1, 0x9672
    ctx->pc = 0x27c0e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)38514);
    // 0x27c0e4: 0xedbff30a  .word       0xEDBFF30A                   # INVALID     $t5, $ra, -0xCF6 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c0e4u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C0E4 raw=0xEDBFF30A");
    // 0x27c0e8: 0xf837a726  sqc2        $vf23, -0x58DA($at)
    ctx->pc = 0x27c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294944550), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27c0ec: 0xcd77ee27  pref        0x17, -0x11D9($t3)
    ctx->pc = 0x27c0ecu;
    // PREF instruction (ignored)
    // 0x27c0f0: 0xf826bfaf  sqc2        $vf6, -0x4051($at)
    ctx->pc = 0x27c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294950831), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x27c0f4: 0x35a2b78e  ori         $v0, $t5, 0xB78E
    ctx->pc = 0x27c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)46990);
    // 0x27c0f8: 0x5d632b16  .word       0x5D632B16                   # bgtzl       $t3, . + 4 + (0x2B16 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27C0F8u;
    {
        const bool branch_taken_0x27c0f8 = (GPR_S32(ctx, 11) > 0);
        if (branch_taken_0x27c0f8) {
            ctx->pc = 0x27C0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C0F8u;
            // 0x27c0fc: 0x285db131  slti        $sp, $v0, -0x4ECF (Delay Slot)
            SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294947121) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x286D54u;
            return;
        }
    }
    ctx->pc = 0x27C100u;
    // 0x27c100: 0xf163971e  scd         $v1, -0x68E2($t3)
    ctx->pc = 0x27c100u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x27C100 raw=0xF163971E");
    // 0x27c104: 0x110bfaf3  beq         $t0, $t3, . + 4 + (-0x50D << 2)
    ctx->pc = 0x27C104u;
    {
        const bool branch_taken_0x27c104 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x27C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C104u;
        // 0x27c108: 0x40b262a7  .word       0x40B262A7                   # dmtc0       $s2, Status # 000002A7 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x27C108 raw=0x40B262A7");
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c104) {
            ctx->pc = 0x27ACD4u;
            return;
        }
    }
    ctx->pc = 0x27C10Cu;
    // 0x27c10c: 0x646f72e3  daddiu      $t7, $v1, 0x72E3
    ctx->pc = 0x27c10cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29411);
    // 0x27c110: 0x60ab1eb3  daddi       $t3, $a1, 0x1EB3
    ctx->pc = 0x27c110u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)7859; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x27c114: 0x49ca0aef  .word       0x49CA0AEF                   # INVALID     $t6, $t2, 0xAEF # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x27c114u;
    throw std::runtime_error("Unhandled COP2 format: 0xE at 0x27C114 raw=0x49CA0AEF");
    // 0x27c118: 0x789e1793  lq          $fp, 0x1793($a0)
    ctx->pc = 0x27c118u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 6035)));
    // 0x27c11c: 0x35ce0a97  ori         $t6, $t6, 0xA97
    ctx->pc = 0x27c11cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2711);
    // 0x27c120: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c120u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C120 raw=0xF567B32A");
    // 0x27c124: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c128: 0x2463c074  addiu       $v1, $v1, -0x3F8C
    ctx->pc = 0x27c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951028));
    // 0x27c12c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27c130: 0x244234c0  addiu       $v0, $v0, 0x34C0
    ctx->pc = 0x27c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x27c134: 0x456bb228  .word       0x456BB228                   # INVALID     $t3, $t3, -0x4DD8 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27c134u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x28 at 0x27C134 raw=0x456BB228");
    // 0x27c138: 0xb567f336  sdr         $a3, -0xCCA($t3)
    ctx->pc = 0x27c138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294964022); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c13c: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c13cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C13C raw=0xF567B32A");
    // 0x27c140: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c140u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C140 raw=0xF567B32A");
    // 0x27c144: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c144u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C144 raw=0xF567B32A");
    // 0x27c148: 0xd84363ea  lqc2        $vf3, 0x63EA($v0)
    ctx->pc = 0x27c148u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 25578)));
    // 0x27c14c: 0xf95f772a  sqc2        $vf31, 0x772A($t2)
    ctx->pc = 0x27c14cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 30506), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c150: 0xb97ee33e  swr         $fp, -0x1CC2($t3)
    ctx->pc = 0x27c150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294959934); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c154: 0x3073b662  andi        $s3, $v1, 0xB662
    ctx->pc = 0x27c154u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)46690);
    // 0x27c158: 0xeda7d342  .word       0xEDA7D342                   # INVALID     $t5, $a3, -0x2CBE # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c158u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C158 raw=0xEDA7D342");
    // 0x27c15c: 0xdc37a726  ld          $s7, -0x58DA($at)
    ctx->pc = 0x27c15cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 1), 4294944550)));
    // 0x27c160: 0xe137f667  sc          $s7, -0x999($t1)
    ctx->pc = 0x27c160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294964839); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27c164: 0xc826e3a7  lwc2        $6, -0x1C59($at)
    ctx->pc = 0x27c164u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x27C164 raw=0xC826E3A7");
    // 0x27c168: 0xcc62ee23  pref        0x02, -0x11DD($v1)
    ctx->pc = 0x27c168u;
    // PREF instruction (ignored)
    // 0x27c16c: 0xa4029a2f  sh          $v0, -0x65D1($zero)
    ctx->pc = 0x27c16cu;
    WRITE16(ADD32(GPR_U32(ctx, 0), 4294941231), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c170: 0x305e8e0e  andi        $fp, $v0, 0x8E0E
    ctx->pc = 0x27c170u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)36366);
    // 0x27c174: 0xedbb334e  .word       0xEDBB334E                   # INVALID     $t5, $k1, 0x334E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c174u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C174 raw=0xEDBB334E");
    // 0x27c178: 0xf837a726  sqc2        $vf23, -0x58DA($at)
    ctx->pc = 0x27c178u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294944550), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x27c17c: 0xc90ff267  lwc2        $15, -0xD99($t0)
    ctx->pc = 0x27c17cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x27C17C raw=0xC90FF267");
    // 0x27c180: 0xa42683b7  sh          $a2, -0x7C49($at)
    ctx->pc = 0x27c180u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935479), (uint16_t)GPR_U32(ctx, 6));
    // 0x27c184: 0x7436be7e  .word       0x7436BE7E                   # INVALID     $at, $s6, -0x4182 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c184u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C184 raw=0x7436BE7E");
    // 0x27c188: 0xa46ea667  sh          $t6, -0x5999($v1)
    ctx->pc = 0x27c188u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944359), (uint16_t)GPR_U32(ctx, 14));
    // 0x27c18c: 0x49cf32eb  .word       0x49CF32EB                   # INVALID     $t6, $t7, 0x32EB # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x27c18cu;
    throw std::runtime_error("Unhandled COP2 format: 0xE at 0x27C18C raw=0x49CF32EB");
    // 0x27c190: 0x30b203f6  andi        $s2, $a1, 0x3F6
    ctx->pc = 0x27c190u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1014);
    // 0x27c194: 0xf5c77722  sdc1        $f7, 0x7722($t6)
    ctx->pc = 0x27c194u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C194 raw=0xF5C77722");
    // 0x27c198: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c198u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C198 raw=0xF567B32A");
    // 0x27c19c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c1a0: 0x2463c148  addiu       $v1, $v1, -0x3EB8
    ctx->pc = 0x27c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951240));
    // 0x27c1a4: 0x456bf238  .word       0x456BF238                   # INVALID     $t3, $t3, -0xDC8 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27c1a4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x38 at 0x27C1A4 raw=0x456BF238");
    // 0x27c1a8: 0xb567d33e  sdr         $a3, -0x2CC2($t3)
    ctx->pc = 0x27c1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294955838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c1ac: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c1acu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C1AC raw=0xF567B32A");
    // 0x27c1b0: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c1b0u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C1B0 raw=0xF567B32A");
    // 0x27c1b4: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c1b4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C1B4 raw=0xF567B32A");
    // 0x27c1b8: 0xd8036fea  lqc2        $vf3, 0x6FEA($zero)
    ctx->pc = 0x27c1b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 28650)));
    // 0x27c1bc: 0xf95f772a  sqc2        $vf31, 0x772A($t2)
    ctx->pc = 0x27c1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 30506), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c1c0: 0xb97ee33e  swr         $fp, -0x1CC2($t3)
    ctx->pc = 0x27c1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294959934); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c1c4: 0x302ba662  andi        $t3, $at, 0xA662
    ctx->pc = 0x27c1c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)42594);
    // 0x27c1c8: 0xedb3f376  .word       0xEDB3F376                   # INVALID     $t5, $s3, -0xC8A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c1c8u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C1C8 raw=0xEDB3F376");
    // 0x27c1cc: 0xdc37a726  ld          $s7, -0x58DA($at)
    ctx->pc = 0x27c1ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 1), 4294944550)));
    // 0x27c1d0: 0x615fea67  daddi       $ra, $t2, -0x1599
    ctx->pc = 0x27c1d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)4294961767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x27c1d4: 0x50ca7663  beql        $a2, $t2, . + 4 + (0x7663 << 2)
    ctx->pc = 0x27C1D4u;
    {
        const bool branch_taken_0x27c1d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x27c1d4) {
            ctx->pc = 0x27C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C1D4u;
            // 0x27c1d8: 0x74d62b96  .word       0x74D62B96                   # INVALID     $a2, $s6, 0x2B96 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C1D8 raw=0x74D62B96");
            ctx->in_delay_slot = false;
            ctx->pc = 0x299B64u;
            return;
        }
    }
    ctx->pc = 0x27C1DCu;
    // 0x27c1dc: 0x4cca8aae  .word       0x4CCA8AAE                   # INVALID     $a2, $t2, -0x7552 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c1dcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27C1DC raw=0x4CCA8AAE");
    // 0x27c1e0: 0x21a76fee  addi        $a3, $t5, 0x6FEE
    ctx->pc = 0x27c1e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)28654, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x27c1e4: 0xe573be72  swc1        $f19, -0x418E($t3)
    ctx->pc = 0x27c1e4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294950514), bits); }
    // 0x27c1e8: 0xf93f9f87  sqc2        $vf31, -0x6079($t1)
    ctx->pc = 0x27c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 4294942599), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c1ec: 0x38ea16fb  xori        $t2, $a3, 0x16FB
    ctx->pc = 0x27c1ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)5883);
    // 0x27c1f0: 0xb5a737ab  sdr         $a3, 0x37AB($t5)
    ctx->pc = 0x27c1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 14251); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c1f4: 0x50f67a9f  beql        $a3, $s6, . + 4 + (0x7A9F << 2)
    ctx->pc = 0x27C1F4u;
    {
        const bool branch_taken_0x27c1f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x27c1f4) {
            ctx->pc = 0x27C1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C1F4u;
            // 0x27c1f8: 0x3de63267  .word       0x3DE63267                   # lui         $a2, 0x3267 # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12903 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AC74u;
            return;
        }
    }
    ctx->pc = 0x27C1FCu;
    // 0x27c1fc: 0x3cc206af  .word       0x3CC206AF                   # lui         $v0, 0x6AF # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1711 << 16));
    // 0x27c200: 0x61ea522f  daddi       $t2, $t7, 0x522F
    ctx->pc = 0x27c200u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)21039; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
    // 0x27c204: 0x6ca26283  ldr         $v0, 0x6283($a1)
    ctx->pc = 0x27c204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 25219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27c208: 0x24e21eaf  addiu       $v0, $a3, 0x1EAF
    ctx->pc = 0x27c208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7855));
    // 0x27c20c: 0x74de0e8e  .word       0x74DE0E8E                   # INVALID     $a2, $fp, 0xE8E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c20cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C20C raw=0x74DE0E8E");
    // 0x27c210: 0x54b6a6ef  bnel        $a1, $s6, . + 4 + (-0x5911 << 2)
    ctx->pc = 0x27C210u;
    {
        const bool branch_taken_0x27c210 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x27c210) {
            ctx->pc = 0x27C214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C210u;
            // 0x27c214: 0x24a21a97  addiu       $v0, $a1, 0x1A97 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6807));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265DD0u;
            return;
        }
    }
    ctx->pc = 0x27C218u;
    // 0x27c218: 0xf566532e  sdc1        $f6, 0x532E($t3)
    ctx->pc = 0x27c218u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C218 raw=0xF566532E");
    // 0x27c21c: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c21cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C21C raw=0xF567B32A");
    // 0x27c220: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c220u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C220 raw=0xF567B32A");
    // 0x27c224: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c228: 0x2463c1b8  addiu       $v1, $v1, -0x3E48
    ctx->pc = 0x27c228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951352));
    // 0x27c22c: 0x456b1228  .word       0x456B1228                   # INVALID     $t3, $t3, 0x1228 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27c22cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x28 at 0x27C22C raw=0x456B1228");
    // 0x27c230: 0xb567d33e  sdr         $a3, -0x2CC2($t3)
    ctx->pc = 0x27c230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294955838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c234: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c234u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C234 raw=0xF567B32A");
    // 0x27c238: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c238u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C238 raw=0xF567B32A");
    // 0x27c23c: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c23cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C23C raw=0xF567B32A");
    // 0x27c240: 0xd8036fea  lqc2        $vf3, 0x6FEA($zero)
    ctx->pc = 0x27c240u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 28650)));
    // 0x27c244: 0xf95f772a  sqc2        $vf31, 0x772A($t2)
    ctx->pc = 0x27c244u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 30506), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c248: 0xb97ee33e  swr         $fp, -0x1CC2($t3)
    ctx->pc = 0x27c248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294959934); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c24c: 0x302ba662  andi        $t3, $at, 0xA662
    ctx->pc = 0x27c24cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)42594);
    // 0x27c250: 0xedb3f376  .word       0xEDB3F376                   # INVALID     $t5, $s3, -0xC8A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c250u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C250 raw=0xEDB3F376");
    // 0x27c254: 0xdc37a726  ld          $s7, -0x58DA($at)
    ctx->pc = 0x27c254u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 1), 4294944550)));
    // 0x27c258: 0x615fea67  daddi       $ra, $t2, -0x1599
    ctx->pc = 0x27c258u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)4294961767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x27c25c: 0x50ca7663  beql        $a2, $t2, . + 4 + (0x7663 << 2)
    ctx->pc = 0x27C25Cu;
    {
        const bool branch_taken_0x27c25c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x27c25c) {
            ctx->pc = 0x27C260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C25Cu;
            // 0x27c260: 0x74d62b96  .word       0x74D62B96                   # INVALID     $a2, $s6, 0x2B96 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C260 raw=0x74D62B96");
            ctx->in_delay_slot = false;
            ctx->pc = 0x299BECu;
            return;
        }
    }
    ctx->pc = 0x27C264u;
    // 0x27c264: 0x4cca8aae  .word       0x4CCA8AAE                   # INVALID     $a2, $t2, -0x7552 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c264u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27C264 raw=0x4CCA8AAE");
    // 0x27c268: 0x21a76fee  addi        $a3, $t5, 0x6FEE
    ctx->pc = 0x27c268u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)28654, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x27c26c: 0xe573be72  swc1        $f19, -0x418E($t3)
    ctx->pc = 0x27c26cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294950514), bits); }
    // 0x27c270: 0xf93f9f87  sqc2        $vf31, -0x6079($t1)
    ctx->pc = 0x27c270u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 4294942599), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c274: 0x38ea16fb  xori        $t2, $a3, 0x16FB
    ctx->pc = 0x27c274u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)5883);
    // 0x27c278: 0xb5a73bab  sdr         $a3, 0x3BAB($t5)
    ctx->pc = 0x27c278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c27c: 0x50f67a9f  beql        $a3, $s6, . + 4 + (0x7A9F << 2)
    ctx->pc = 0x27C27Cu;
    {
        const bool branch_taken_0x27c27c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x27c27c) {
            ctx->pc = 0x27C280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C27Cu;
            // 0x27c280: 0x3de63267  .word       0x3DE63267                   # lui         $a2, 0x3267 # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12903 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ACFCu;
            return;
        }
    }
    ctx->pc = 0x27C284u;
    // 0x27c284: 0x3cc206af  .word       0x3CC206AF                   # lui         $v0, 0x6AF # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1711 << 16));
    // 0x27c288: 0x61ea522f  daddi       $t2, $t7, 0x522F
    ctx->pc = 0x27c288u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)21039; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
    // 0x27c28c: 0x6ca26283  ldr         $v0, 0x6283($a1)
    ctx->pc = 0x27c28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 25219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27c290: 0x24e21eaf  addiu       $v0, $a3, 0x1EAF
    ctx->pc = 0x27c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7855));
    // 0x27c294: 0x74de0e8e  .word       0x74DE0E8E                   # INVALID     $a2, $fp, 0xE8E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c294u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C294 raw=0x74DE0E8E");
    // 0x27c298: 0x54b6a6ef  bnel        $a1, $s6, . + 4 + (-0x5911 << 2)
    ctx->pc = 0x27C298u;
    {
        const bool branch_taken_0x27c298 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x27c298) {
            ctx->pc = 0x27C29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C298u;
            // 0x27c29c: 0x24a21a97  addiu       $v0, $a1, 0x1A97 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6807));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E58u;
            return;
        }
    }
    ctx->pc = 0x27C2A0u;
    // 0x27c2a0: 0xf566532e  sdc1        $f6, 0x532E($t3)
    ctx->pc = 0x27c2a0u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C2A0 raw=0xF566532E");
    // 0x27c2a4: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c2a4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C2A4 raw=0xF567B32A");
    // 0x27c2a8: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c2a8u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C2A8 raw=0xF567B32A");
    // 0x27c2ac: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c2b0: 0x2463c240  addiu       $v1, $v1, -0x3DC0
    ctx->pc = 0x27c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951488));
    // 0x27c2b4: 0x456b5238  .word       0x456B5238                   # INVALID     $t3, $t3, 0x5238 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27c2b4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x38 at 0x27C2B4 raw=0x456B5238");
    // 0x27c2b8: 0xb567d33e  sdr         $a3, -0x2CC2($t3)
    ctx->pc = 0x27c2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294955838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c2bc: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c2bcu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C2BC raw=0xF567B32A");
    // 0x27c2c0: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c2c0u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C2C0 raw=0xF567B32A");
    // 0x27c2c4: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c2c4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C2C4 raw=0xF567B32A");
    // 0x27c2c8: 0xd8036fea  lqc2        $vf3, 0x6FEA($zero)
    ctx->pc = 0x27c2c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 28650)));
    // 0x27c2cc: 0xf95f772a  sqc2        $vf31, 0x772A($t2)
    ctx->pc = 0x27c2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 30506), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c2d0: 0xb97ee33e  swr         $fp, -0x1CC2($t3)
    ctx->pc = 0x27c2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294959934); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c2d4: 0x302ba662  andi        $t3, $at, 0xA662
    ctx->pc = 0x27c2d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)42594);
    // 0x27c2d8: 0xedb3f376  .word       0xEDB3F376                   # INVALID     $t5, $s3, -0xC8A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c2d8u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C2D8 raw=0xEDB3F376");
    // 0x27c2dc: 0xdc37a726  ld          $s7, -0x58DA($at)
    ctx->pc = 0x27c2dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 1), 4294944550)));
    // 0x27c2e0: 0x615fea67  daddi       $ra, $t2, -0x1599
    ctx->pc = 0x27c2e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)4294961767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x27c2e4: 0x50ca7663  beql        $a2, $t2, . + 4 + (0x7663 << 2)
    ctx->pc = 0x27C2E4u;
    {
        const bool branch_taken_0x27c2e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x27c2e4) {
            ctx->pc = 0x27C2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C2E4u;
            // 0x27c2e8: 0x74d62b96  .word       0x74D62B96                   # INVALID     $a2, $s6, 0x2B96 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C2E8 raw=0x74D62B96");
            ctx->in_delay_slot = false;
            ctx->pc = 0x299C74u;
            return;
        }
    }
    ctx->pc = 0x27C2ECu;
    // 0x27c2ec: 0x4cca8aae  .word       0x4CCA8AAE                   # INVALID     $a2, $t2, -0x7552 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c2ecu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27C2EC raw=0x4CCA8AAE");
    // 0x27c2f0: 0x21a76fee  addi        $a3, $t5, 0x6FEE
    ctx->pc = 0x27c2f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)28654, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x27c2f4: 0xe573be72  swc1        $f19, -0x418E($t3)
    ctx->pc = 0x27c2f4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294950514), bits); }
    // 0x27c2f8: 0xf93f9f87  sqc2        $vf31, -0x6079($t1)
    ctx->pc = 0x27c2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 4294942599), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c2fc: 0x38ea16fb  xori        $t2, $a3, 0x16FB
    ctx->pc = 0x27c2fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)5883);
    // 0x27c300: 0xb5a73fab  sdr         $a3, 0x3FAB($t5)
    ctx->pc = 0x27c300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c304: 0x50f67a9f  beql        $a3, $s6, . + 4 + (0x7A9F << 2)
    ctx->pc = 0x27C304u;
    {
        const bool branch_taken_0x27c304 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x27c304) {
            ctx->pc = 0x27C308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C304u;
            // 0x27c308: 0x3de63267  .word       0x3DE63267                   # lui         $a2, 0x3267 # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12903 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AD84u;
            return;
        }
    }
    ctx->pc = 0x27C30Cu;
    // 0x27c30c: 0x3cc206af  .word       0x3CC206AF                   # lui         $v0, 0x6AF # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1711 << 16));
    // 0x27c310: 0x61ea522f  daddi       $t2, $t7, 0x522F
    ctx->pc = 0x27c310u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)21039; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
    // 0x27c314: 0x6ca26283  ldr         $v0, 0x6283($a1)
    ctx->pc = 0x27c314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 25219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27c318: 0x24e21eaf  addiu       $v0, $a3, 0x1EAF
    ctx->pc = 0x27c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7855));
    // 0x27c31c: 0x74de0e8e  .word       0x74DE0E8E                   # INVALID     $a2, $fp, 0xE8E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c31cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C31C raw=0x74DE0E8E");
    // 0x27c320: 0x54b6a6ef  bnel        $a1, $s6, . + 4 + (-0x5911 << 2)
    ctx->pc = 0x27C320u;
    {
        const bool branch_taken_0x27c320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x27c320) {
            ctx->pc = 0x27C324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C320u;
            // 0x27c324: 0x24a21a97  addiu       $v0, $a1, 0x1A97 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6807));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265EE0u;
            return;
        }
    }
    ctx->pc = 0x27C328u;
    // 0x27c328: 0xf566532e  sdc1        $f6, 0x532E($t3)
    ctx->pc = 0x27c328u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C328 raw=0xF566532E");
    // 0x27c32c: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c32cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C32C raw=0xF567B32A");
    // 0x27c330: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c330u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C330 raw=0xF567B32A");
    // 0x27c334: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c338: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x27c338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x27c33c: 0x456af228  .word       0x456AF228                   # INVALID     $t3, $t2, -0xDD8 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27c33cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x28 at 0x27C33C raw=0x456AF228");
    // 0x27c340: 0xb567d33e  sdr         $a3, -0x2CC2($t3)
    ctx->pc = 0x27c340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294955838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c344: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c344u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C344 raw=0xF567B32A");
    // 0x27c348: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c348u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C348 raw=0xF567B32A");
    // 0x27c34c: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c34cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C34C raw=0xF567B32A");
    // 0x27c350: 0xd8036fea  lqc2        $vf3, 0x6FEA($zero)
    ctx->pc = 0x27c350u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 28650)));
    // 0x27c354: 0xf95f772a  sqc2        $vf31, 0x772A($t2)
    ctx->pc = 0x27c354u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 30506), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x27c358: 0xb97ee33e  swr         $fp, -0x1CC2($t3)
    ctx->pc = 0x27c358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294959934); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c35c: 0x302ba662  andi        $t3, $at, 0xA662
    ctx->pc = 0x27c35cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)42594);
    // 0x27c360: 0xedbf334a  .word       0xEDBF334A                   # INVALID     $t5, $ra, 0x334A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c360u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x27C360 raw=0xEDBF334A");
    // 0x27c364: 0xdc37a726  ld          $s7, -0x58DA($at)
    ctx->pc = 0x27c364u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 1), 4294944550)));
    // 0x27c368: 0xb92fee67  swr         $t7, -0x1199($t1)
    ctx->pc = 0x27c368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294962791); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c36c: 0x71f6b22f  .word       0x71F6B22F                   # INVALID     $t7, $s6, -0x4DD1 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27c36cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x27C36C raw=0x71F6B22F");
    // 0x27c370: 0xb8e677bb  swr         $a2, 0x77BB($a3)
    ctx->pc = 0x27c370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 30651); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c374: 0x3cf23eff  .word       0x3CF23EFF                   # lui         $s2, 0x3EFF # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c374u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16127 << 16));
    // 0x27c378: 0x44a202ce  .word       0x44A202CE                   # dmtc1       $v0, $f0 # 000002CE <InstrIdType: R5900_COP1>
    ctx->pc = 0x27c378u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0xE at 0x27C378 raw=0x44A202CE");
    // 0x27c37c: 0x785f368b  lq          $ra, 0x368B($v0)
    ctx->pc = 0x27c37cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 2), 13963)));
    // 0x27c380: 0x35bf1792  ori         $ra, $t5, 0x1792
    ctx->pc = 0x27c380u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)6034);
    // 0x27c384: 0xa16b0b3b  sb          $t3, 0xB3B($t3)
    ctx->pc = 0x27c384u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2875), (uint8_t)GPR_U32(ctx, 11));
    // 0x27c388: 0x614bbf7a  daddi       $t3, $t2, -0x4086
    ctx->pc = 0x27c388u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)4294950778; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, res); }
    // 0x27c38c: 0x20eae6a7  addi        $t2, $a3, -0x1959
    ctx->pc = 0x27c38cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294960807, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x27c390: 0xb8e667a3  swr         $a2, 0x67A3($a3)
    ctx->pc = 0x27c390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 26531); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27c394: 0x60be3aff  daddi       $fp, $a1, 0x3AFF
    ctx->pc = 0x27c394u;
    { int64_t src = (int64_t)GPR_S64(ctx, 5); int64_t imm = (int64_t)(int32_t)15103; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, res); }
    // 0x27c398: 0x61ea7223  daddi       $t2, $t7, 0x7223
    ctx->pc = 0x27c398u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)29219; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
    // 0x27c39c: 0x6ca26283  ldr         $v0, 0x6283($a1)
    ctx->pc = 0x27c39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 25219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27c3a0: 0x24e21eaf  addiu       $v0, $a3, 0x1EAF
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7855));
    // 0x27c3a4: 0x74de0e8e  .word       0x74DE0E8E                   # INVALID     $a2, $fp, 0xE8E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c3a4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27C3A4 raw=0x74DE0E8E");
    // 0x27c3a8: 0x54b6a6ef  bnel        $a1, $s6, . + 4 + (-0x5911 << 2)
    ctx->pc = 0x27C3A8u;
    {
        const bool branch_taken_0x27c3a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x27c3a8) {
            ctx->pc = 0x27C3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C3A8u;
            // 0x27c3ac: 0x24a21a97  addiu       $v0, $a1, 0x1A97 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6807));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F68u;
            return;
        }
    }
    ctx->pc = 0x27C3B0u;
    // 0x27c3b0: 0xf566532e  sdc1        $f6, 0x532E($t3)
    ctx->pc = 0x27c3b0u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C3B0 raw=0xF566532E");
    // 0x27c3b4: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c3b4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C3B4 raw=0xF567B32A");
    // 0x27c3b8: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c3b8u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C3B8 raw=0xF567B32A");
    // 0x27c3bc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c3c0: 0x2463c350  addiu       $v1, $v1, -0x3CB0
    ctx->pc = 0x27c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951760));
    // 0x27c3c4: 0x456a3238  .word       0x456A3238                   # INVALID     $t3, $t2, 0x3238 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27c3c4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x38 at 0x27C3C4 raw=0x456A3238");
    // 0x27c3c8: 0xf767123e  sdc1        $f7, 0x123E($k1)
    ctx->pc = 0x27c3c8u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C3C8 raw=0xF767123E");
    // 0x27c3cc: 0xf747133e  sdc1        $f7, 0x133E($k0)
    ctx->pc = 0x27c3ccu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C3CC raw=0xF747133E");
    // 0x27c3d0: 0xcd6fb328  pref        0x0F, -0x4CD8($t3)
    ctx->pc = 0x27c3d0u;
    // PREF instruction (ignored)
    // 0x27c3d4: 0xf567b32a  sdc1        $f7, -0x4CD6($t3)
    ctx->pc = 0x27c3d4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C3D4 raw=0xF567B32A");
    // 0x27c3d8: 0xf5e7133e  sdc1        $f7, 0x133E($t7)
    ctx->pc = 0x27c3d8u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27C3D8 raw=0xF5E7133E");
    // 0x27c3dc: 0xcd7fb338  pref        0x1F, -0x4CC8($t3)
    ctx->pc = 0x27c3dcu;
    // PREF instruction (ignored)
    // 0x27c3e0: 0xf9c711be  sqc2        $vf7, 0x11BE($t6)
    ctx->pc = 0x27c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 4542), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x27c3e4: 0xc0a3a9c  jal         func_28EA70
    ctx->pc = 0x27C3E4u;
    SET_GPR_U32(ctx, 31, 0x27C3ECu);
    ctx->pc = 0x27C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3E4u;
    // 0x27c3e8: 0x496fb1a8  .word       0x496FB1A8                   # INVALID     $t3, $t7, -0x4E58 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x27C3E8 raw=0x496FB1A8");
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA70u, 0x27C3E4u, 0x27C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3ECu;
label_27c3ec:
    // 0x27c3ec: 0x4d6ff328  .word       0x4D6FF328                   # INVALID     $t3, $t7, -0xCD8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c3ecu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27C3EC raw=0x4D6FF328");
    // 0x27c3f0: 0xb6846a3a  sdr         $a0, 0x6A3A($s4)
    ctx->pc = 0x27c3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 27194); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27c3f4: 0x6d67f37a  ldr         $a3, -0xC86($t3)
    ctx->pc = 0x27c3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294964090); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27c3f8: 0x6d63b3ee  ldr         $v1, -0x4C12($t3)
    ctx->pc = 0x27c3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294947822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27c3fc: 0x4d6fb3b2  .word       0x4D6FB3B2                   # INVALID     $t3, $t7, -0x4C4E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27c3fcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27C3FC raw=0x4D6FB3B2");
    // 0x27c400: 0xa6846e3f  sh          $a0, 0x6E3F($s4)
    ctx->pc = 0x27c400u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 28223), (uint16_t)GPR_U32(ctx, 4));
    // 0x27c404: 0xcd6fb328  pref        0x0F, -0x4CD8($t3)
    ctx->pc = 0x27c404u;
    // PREF instruction (ignored)
    // 0x27c408: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27C408u;
    {
        const bool branch_taken_0x27c408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c408) {
            ctx->pc = 0x27C438u;
            goto label_27c438;
        }
    }
    ctx->pc = 0x27C410u;
    // 0x27c410: 0xcfd5ffb  jal         func_3F57FEC
    ctx->pc = 0x27C410u;
    SET_GPR_U32(ctx, 31, 0x27C418u);
    ctx->pc = 0x27C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C410u;
    // 0x27c414: 0xa1bdb281  sb          $sp, -0x4D7F($t5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294947457), (uint8_t)GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F57FECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F57FECu, 0x27C410u, 0x27C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C418u;
label_27c418:
    // 0x27c418: 0xdfd547cf  ld          $s5, 0x47CF($fp)
    ctx->pc = 0x27c418u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 30), 18383)));
    // 0x27c41c: 0x8fc266f5  lw          $v0, 0x66F5($fp)
    ctx->pc = 0x27c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 26357)));
    // 0x27c420: 0x26ac5788  addiu       $t4, $s5, 0x5788
    ctx->pc = 0x27c420u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 22408));
    // 0x27c424: 0xfdae0e72  sd          $t6, 0xE72($t5)
    ctx->pc = 0x27c424u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 3698), GPR_U64(ctx, 14));
    // 0x27c428: 0xcef858c7  pref        0x18, 0x58C7($s7)
    ctx->pc = 0x27c428u;
    // PREF instruction (ignored)
    // 0x27c42c: 0x980b2a99  lwr         $t3, 0x2A99($zero)
    ctx->pc = 0x27c42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10905); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x27c430: 0xcef85b63  pref        0x18, 0x5B63($s7)
    ctx->pc = 0x27c430u;
    // PREF instruction (ignored)
    // 0x27c434: 0x0  nop
    ctx->pc = 0x27c434u;
    // NOP
label_27c438:
    // 0x27c438: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27c438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27c43c: 0x2442c428  addiu       $v0, $v0, -0x3BD8
    ctx->pc = 0x27c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951976));
    // 0x27c440: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27c440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27c444: 0x2484c408  addiu       $a0, $a0, -0x3BF8
    ctx->pc = 0x27c444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951944));
    // 0x27c448: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27c448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27c44c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27c450: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27C450u;
    SET_GPR_U32(ctx, 31, 0x27C458u);
    ctx->pc = 0x27C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C450u;
    // 0x27c454: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27C450u, 0x27C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C458u;
label_27c458:
    // 0x27c458: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x27C458u;
    SET_GPR_U32(ctx, 31, 0x27C460u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x27C458u, 0x27C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C460u;
label_27c460:
    // 0x27c460: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27c464: 0xac623544  sw          $v0, 0x3544($v1)
    ctx->pc = 0x27c464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13636), GPR_U32(ctx, 2));
label_27c468:
    // 0x27c468: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27c468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c46c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27c46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c470: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27c470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27c474: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c478: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27c478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27c47c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C47Cu;
        // 0x27c480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C484u;
    // 0x27c484: 0x0  nop
    ctx->pc = 0x27c484u;
    // NOP
    if (ctx->pc == 0x27c484u) { ctx->pc = 0x27c488u; }
}
