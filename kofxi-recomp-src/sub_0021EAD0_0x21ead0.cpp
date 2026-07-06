#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EAD0
// Address: 0x21ead0 - 0x21ec38
void sub_0021EAD0_0x21ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EAD0_0x21ead0");
#endif

    switch (ctx->pc) {
        case 0x21eb00u: goto label_21eb00;
        case 0x21eb10u: goto label_21eb10;
        case 0x21eb20u: goto label_21eb20;
        case 0x21eb78u: goto label_21eb78;
        case 0x21ebb8u: goto label_21ebb8;
        case 0x21ebbcu: goto label_21ebbc;
        case 0x21ebd0u: goto label_21ebd0;
        case 0x21ebf4u: goto label_21ebf4;
        case 0x21ec04u: goto label_21ec04;
        case 0x21ec30u: goto label_21ec30;
        default: break;
    }

    ctx->pc = 0x21ead0u;

    // 0x21ead0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ead4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ead8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21eadc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21eae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21eae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eae4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21eae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21eae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eaec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21eaf0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21eaf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eaf4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x21eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21eaf8: 0xc087f6a  jal         func_21FDA8
    ctx->pc = 0x21EAF8u;
    SET_GPR_U32(ctx, 31, 0x21EB00u);
    ctx->pc = 0x21EAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAF8u;
            // 0x21eafc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FDA8u;
    if (runtime->hasFunction(0x21FDA8u)) {
        auto targetFn = runtime->lookupFunction(0x21FDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB00u; }
        if (ctx->pc != 0x21EB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FDA8_0x21fda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB00u; }
        if (ctx->pc != 0x21EB00u) { return; }
    }
    ctx->pc = 0x21EB00u;
label_21eb00:
    // 0x21eb00: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21EB00u;
    {
        const bool branch_taken_0x21eb00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21EB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB00u;
            // 0x21eb04: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb00) {
            ctx->pc = 0x21EB48u;
            goto label_21eb48;
        }
    }
    ctx->pc = 0x21EB08u;
    // 0x21eb08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21eb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21eb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21eb10:
    // 0x21eb10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eb14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21eb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb18: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x21EB18u;
    SET_GPR_U32(ctx, 31, 0x21EB20u);
    ctx->pc = 0x21EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB18u;
            // 0x21eb1c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB20u; }
        if (ctx->pc != 0x21EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB20u; }
        if (ctx->pc != 0x21EB20u) { return; }
    }
    ctx->pc = 0x21EB20u;
label_21eb20:
    // 0x21eb20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EB20u;
    {
        const bool branch_taken_0x21eb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB20u;
            // 0x21eb24: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb20) {
            ctx->pc = 0x21EB3Cu;
            goto label_21eb3c;
        }
    }
    ctx->pc = 0x21EB28u;
    // 0x21eb28: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x21eb28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eb2c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21eb30: 0x22f7821  addu        $t7, $s1, $t7
    ctx->pc = 0x21eb30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x21eb34: 0x8dee0010  lw          $t6, 0x10($t7)
    ctx->pc = 0x21eb34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x21eb38: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x21eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
label_21eb3c:
    // 0x21eb3c: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21EB3Cu;
    {
        const bool branch_taken_0x21eb3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB3Cu;
            // 0x21eb40: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb3c) {
            ctx->pc = 0x21EB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21eb10;
        }
    }
    ctx->pc = 0x21EB44u;
    // 0x21eb44: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x21eb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21eb48:
    // 0x21eb48: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EB48u;
    {
        const bool branch_taken_0x21eb48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB48u;
            // 0x21eb4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb48) {
            ctx->pc = 0x21EB58u;
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EB50u;
    // 0x21eb50: 0x240f0063  addiu       $t7, $zero, 0x63
    ctx->pc = 0x21eb50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21eb54: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x21eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
label_21eb58:
    // 0x21eb58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21eb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21eb5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21eb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eb60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21eb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21eb64: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21eb64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21eb68: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21eb68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21eb6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21eb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21eb70: 0x3e00008  jr          $ra
    ctx->pc = 0x21EB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB70u;
            // 0x21eb74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EB78u;
label_21eb78:
    // 0x21eb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21eb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21eb7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21eb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21eb84: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x21eb84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x21eb88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21eb8c: 0x8e28c25c  lw          $t0, -0x3DA4($s1)
    ctx->pc = 0x21eb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951516)));
    // 0x21eb90: 0x250ffff0  addiu       $t7, $t0, -0x10
    ctx->pc = 0x21eb90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x21eb94: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x21eb94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21eb98: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21EB98u;
    {
        const bool branch_taken_0x21eb98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB98u;
            // 0x21eb9c: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb98) {
            ctx->pc = 0x21EBD0u;
            goto label_21ebd0;
        }
    }
    ctx->pc = 0x21EBA0u;
    // 0x21eba0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21eba4: 0x24841e30  addiu       $a0, $a0, 0x1E30
    ctx->pc = 0x21eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7728));
    // 0x21eba8: 0x24e71e00  addiu       $a3, $a3, 0x1E00
    ctx->pc = 0x21eba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7680));
    // 0x21ebac: 0x24050221  addiu       $a1, $zero, 0x221
    ctx->pc = 0x21ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    // 0x21ebb0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EBB0u;
    SET_GPR_U32(ctx, 31, 0x21EBB8u);
    ctx->pc = 0x21EBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBB0u;
            // 0x21ebb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBB8u; }
        if (ctx->pc != 0x21EBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBB8u; }
        if (ctx->pc != 0x21EBB8u) { return; }
    }
    ctx->pc = 0x21EBB8u;
label_21ebb8:
    // 0x21ebb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21ebbc:
    // 0x21ebbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ebbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ebc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ebc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ebc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x21EBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBC8u;
            // 0x21ebcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EBD0u;
label_21ebd0:
    // 0x21ebd0: 0x240f0012  addiu       $t7, $zero, 0x12
    ctx->pc = 0x21ebd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21ebd4: 0x110f0009  beq         $t0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EBD4u;
    {
        const bool branch_taken_0x21ebd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 15));
        ctx->pc = 0x21EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBD4u;
            // 0x21ebd8: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebd4) {
            ctx->pc = 0x21EBFCu;
            goto label_21ebfc;
        }
    }
    ctx->pc = 0x21EBDCu;
    // 0x21ebdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ebe0: 0x24841e30  addiu       $a0, $a0, 0x1E30
    ctx->pc = 0x21ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7728));
    // 0x21ebe4: 0x24e71e48  addiu       $a3, $a3, 0x1E48
    ctx->pc = 0x21ebe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7752));
    // 0x21ebe8: 0x24050225  addiu       $a1, $zero, 0x225
    ctx->pc = 0x21ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    // 0x21ebec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EBECu;
    SET_GPR_U32(ctx, 31, 0x21EBF4u);
    ctx->pc = 0x21EBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBECu;
            // 0x21ebf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBF4u; }
        if (ctx->pc != 0x21EBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBF4u; }
        if (ctx->pc != 0x21EBF4u) { return; }
    }
    ctx->pc = 0x21EBF4u;
label_21ebf4:
    // 0x21ebf4: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x21EBF4u;
    {
        const bool branch_taken_0x21ebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBF4u;
            // 0x21ebf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebf4) {
            ctx->pc = 0x21EBBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ebbc;
        }
    }
    ctx->pc = 0x21EBFCu;
label_21ebfc:
    // 0x21ebfc: 0xc0899ec  jal         func_2267B0
    ctx->pc = 0x21EBFCu;
    SET_GPR_U32(ctx, 31, 0x21EC04u);
    ctx->pc = 0x2267B0u;
    if (runtime->hasFunction(0x2267B0u)) {
        auto targetFn = runtime->lookupFunction(0x2267B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC04u; }
        if (ctx->pc != 0x21EC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002267B0_0x2267b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC04u; }
        if (ctx->pc != 0x21EC04u) { return; }
    }
    ctx->pc = 0x21EC04u;
label_21ec04:
    // 0x21ec04: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x21ec04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21ec08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ec0c: 0xae2fc25c  sw          $t7, -0x3DA4($s1)
    ctx->pc = 0x21ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951516), GPR_U32(ctx, 15));
    // 0x21ec10: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ec10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ec14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21ec14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec18: 0x24841e30  addiu       $a0, $a0, 0x1E30
    ctx->pc = 0x21ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7728));
    // 0x21ec1c: 0x24e71e78  addiu       $a3, $a3, 0x1E78
    ctx->pc = 0x21ec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7800));
    // 0x21ec20: 0x24050234  addiu       $a1, $zero, 0x234
    ctx->pc = 0x21ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
    // 0x21ec24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ec24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec28: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EC28u;
    SET_GPR_U32(ctx, 31, 0x21EC30u);
    ctx->pc = 0x21EC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC28u;
            // 0x21ec2c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC30u; }
        if (ctx->pc != 0x21EC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC30u; }
        if (ctx->pc != 0x21EC30u) { return; }
    }
    ctx->pc = 0x21EC30u;
label_21ec30:
    // 0x21ec30: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x21EC30u;
    {
        const bool branch_taken_0x21ec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC30u;
            // 0x21ec34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec30) {
            ctx->pc = 0x21EBBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ebbc;
        }
    }
    ctx->pc = 0x21EC38u;
    ctx->pc = 0x21ec38u;
}
