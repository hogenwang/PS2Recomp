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

// Function: sub_0011EA88
// Address: 0x11ea88 - 0x11eba0
void sub_0011EA88_0x11ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EA88_0x11ea88");
#endif

    switch (ctx->pc) {
        case 0x11eadcu: goto label_11eadc;
        case 0x11eb14u: goto label_11eb14;
        case 0x11eb20u: goto label_11eb20;
        case 0x11eb50u: goto label_11eb50;
        case 0x11eb60u: goto label_11eb60;
        default: break;
    }

    ctx->pc = 0x11ea88u;

    // 0x11ea88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11ea88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11ea8c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11ea90: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11ea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11ea94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11ea98: 0x2455de00  addiu       $s5, $v0, -0x2200
    ctx->pc = 0x11ea98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11ea9c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11ea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11eaa0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11eaa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eaa4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11eaa8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11eaa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eaac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11eab0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11eab4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11eab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11eab8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11eab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11eabc: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x11eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x11eac0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EAC0u;
    {
        const bool branch_taken_0x11eac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAC0u;
        // 0x11eac4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eac0) {
            ctx->pc = 0x11EAD0u;
            goto label_11ead0;
        }
    }
    ctx->pc = 0x11EAC8u;
    // 0x11eac8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11EAC8u;
    {
        const bool branch_taken_0x11eac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAC8u;
        // 0x11eacc: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eac8) {
            ctx->pc = 0x11EB74u;
            goto label_11eb74;
        }
    }
    ctx->pc = 0x11EAD0u;
label_11ead0:
    // 0x11ead0: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x11ead0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x11ead4: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11EAD4u;
    SET_GPR_U32(ctx, 31, 0x11EADCu);
    ctx->pc = 0x11EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAD4u;
    // 0x11ead8: 0x8ec4b9dc  lw          $a0, -0x4624($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11EAD4u, 0x11EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EADCu;
label_11eadc:
    // 0x11eadc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EADCu;
    {
        const bool branch_taken_0x11eadc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EADCu;
        // 0x11eae0: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eadc) {
            ctx->pc = 0x11EAECu;
            goto label_11eaec;
        }
    }
    ctx->pc = 0x11EAE4u;
    // 0x11eae4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x11EAE4u;
    {
        const bool branch_taken_0x11eae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAE4u;
        // 0x11eae8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eae4) {
            ctx->pc = 0x11EB74u;
            goto label_11eb74;
        }
    }
    ctx->pc = 0x11EAECu;
label_11eaec:
    // 0x11eaec: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11eaecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11eaf0: 0x2451de80  addiu       $s1, $v0, -0x2180
    ctx->pc = 0x11eaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958720));
    // 0x11eaf4: 0x2610e300  addiu       $s0, $s0, -0x1D00
    ctx->pc = 0x11eaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959872));
    // 0x11eaf8: 0xac54de80  sw          $s4, -0x2180($v0)
    ctx->pc = 0x11eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958720), GPR_U32(ctx, 20));
    // 0x11eafc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11eb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb04: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x11eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x11eb08: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x11eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x11eb0c: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11EB0Cu;
    SET_GPR_U32(ctx, 31, 0x11EB14u);
    ctx->pc = 0x11EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB0Cu;
    // 0x11eb10: 0xae30001c  sw          $s0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11EB0Cu, 0x11EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB14u;
label_11eb14:
    // 0x11eb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb18: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11EB18u;
    SET_GPR_U32(ctx, 31, 0x11EB20u);
    ctx->pc = 0x11EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB18u;
    // 0x11eb1c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11EB18u, 0x11EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB20u;
label_11eb20:
    // 0x11eb20: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11eb20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11eb24: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11eb24u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11eb28: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x11eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x11eb2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11eb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11eb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb34: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11eb34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11eb38: 0x256be9d8  addiu       $t3, $t3, -0x1628
    ctx->pc = 0x11eb38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961624));
    // 0x11eb3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11eb40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb44: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11eb44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11eb48: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11EB48u;
    SET_GPR_U32(ctx, 31, 0x11EB50u);
    ctx->pc = 0x11EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB48u;
    // 0x11eb4c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11EB48u, 0x11EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB50u;
label_11eb50:
    // 0x11eb50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB50u;
    {
        const bool branch_taken_0x11eb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB50u;
        // 0x11eb54: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb50) {
            ctx->pc = 0x11EB68u;
            goto label_11eb68;
        }
    }
    ctx->pc = 0x11EB58u;
    // 0x11eb58: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11EB58u;
    SET_GPR_U32(ctx, 31, 0x11EB60u);
    ctx->pc = 0x11EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB58u;
    // 0x11eb5c: 0x8ec4b9dc  lw          $a0, -0x4624($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11EB58u, 0x11EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB60u;
label_11eb60:
    // 0x11eb60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11EB60u;
    {
        const bool branch_taken_0x11eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB60u;
        // 0x11eb64: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb60) {
            ctx->pc = 0x11EB74u;
            goto label_11eb74;
        }
    }
    ctx->pc = 0x11EB68u;
label_11eb68:
    // 0x11eb68: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11eb6c: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11eb70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11eb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb74:
    // 0x11eb74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11eb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11eb78: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11eb78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11eb7c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11eb7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11eb80: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11eb80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11eb84: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11eb84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11eb88: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11eb88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11eb8c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11eb8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eb90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eb94: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB94u;
        // 0x11eb98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB9Cu;
    // 0x11eb9c: 0x0  nop
    ctx->pc = 0x11eb9cu;
    // NOP
    if (ctx->pc == 0x11eb9cu) { ctx->pc = 0x11eba0u; }
}
