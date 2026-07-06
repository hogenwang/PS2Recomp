#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024AB48
// Address: 0x24ab48 - 0x24ac30
void sub_0024AB48_0x24ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AB48_0x24ab48");
#endif

    switch (ctx->pc) {
        case 0x24ab70u: goto label_24ab70;
        case 0x24ab80u: goto label_24ab80;
        case 0x24abb8u: goto label_24abb8;
        default: break;
    }

    ctx->pc = 0x24ab48u;

    // 0x24ab48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ab4c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24ab50: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24ab54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24ab54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24ab5c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x24ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x24ab60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24ab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24ab64: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x24ab64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ab68: 0xc08a254  jal         func_228950
    ctx->pc = 0x24AB68u;
    SET_GPR_U32(ctx, 31, 0x24AB70u);
    ctx->pc = 0x24AB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB68u;
            // 0x24ab6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB70u; }
        if (ctx->pc != 0x24AB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB70u; }
        if (ctx->pc != 0x24AB70u) { return; }
    }
    ctx->pc = 0x24AB70u;
label_24ab70:
    // 0x24ab70: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24AB70u;
    {
        const bool branch_taken_0x24ab70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB70u;
            // 0x24ab74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab70) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24AB78u;
    // 0x24ab78: 0xc08a254  jal         func_228950
    ctx->pc = 0x24AB78u;
    SET_GPR_U32(ctx, 31, 0x24AB80u);
    ctx->pc = 0x24AB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB78u;
            // 0x24ab7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB80u; }
        if (ctx->pc != 0x24AB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24AB80u; }
        if (ctx->pc != 0x24AB80u) { return; }
    }
    ctx->pc = 0x24AB80u;
label_24ab80:
    // 0x24ab80: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x24AB80u;
    {
        const bool branch_taken_0x24ab80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB80u;
            // 0x24ab84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab80) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24AB88u;
    // 0x24ab88: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x24ab88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x24ab8c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24ab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24ab90: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24AB90u;
    {
        const bool branch_taken_0x24ab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB90u;
            // 0x24ab94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab90) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24AB98u;
    // 0x24ab98: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x24ab98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24ab9c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x24AB9Cu;
    {
        const bool branch_taken_0x24ab9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ABA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AB9Cu;
            // 0x24aba0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab9c) {
            ctx->pc = 0x24AC18u;
            goto label_24ac18;
        }
    }
    ctx->pc = 0x24ABA4u;
    // 0x24aba4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24aba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24aba8: 0x8c46019c  lw          $a2, 0x19C($v0)
    ctx->pc = 0x24aba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x24abac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24abacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24abb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24abb4: 0x0  nop
    ctx->pc = 0x24abb4u;
    // NOP
label_24abb8:
    // 0x24abb8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24abb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24abbc: 0x54670014  bnel        $v1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x24ABBCu;
    {
        const bool branch_taken_0x24abbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x24abbc) {
            ctx->pc = 0x24ABC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABBCu;
            // 0x24abc0: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24AC10u;
            goto label_24ac10;
        }
    }
    ctx->pc = 0x24ABC4u;
    // 0x24abc4: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x24abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x24abc8: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24ABC8u;
    {
        const bool branch_taken_0x24abc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24abc8) {
            ctx->pc = 0x24ABCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABC8u;
            // 0x24abcc: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24AC10u;
            goto label_24ac10;
        }
    }
    ctx->pc = 0x24ABD0u;
    // 0x24abd0: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x24abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x24abd4: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24ABD4u;
    {
        const bool branch_taken_0x24abd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABD4u;
            // 0x24abd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abd4) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24ABDCu;
    // 0x24abdc: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x24abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24abe0: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24ABE0u;
    {
        const bool branch_taken_0x24abe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABE0u;
            // 0x24abe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abe0) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24ABE8u;
    // 0x24abe8: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24ABE8u;
    {
        const bool branch_taken_0x24abe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x24abe8) {
            ctx->pc = 0x24ABECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABE8u;
            // 0x24abec: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24AC10u;
            goto label_24ac10;
        }
    }
    ctx->pc = 0x24ABF0u;
    // 0x24abf0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x24abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x24abf4: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24ABF4u;
    {
        const bool branch_taken_0x24abf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ABF4u;
            // 0x24abf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abf4) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24ABFCu;
    // 0x24abfc: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x24abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x24ac00: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AC00u;
    {
        const bool branch_taken_0x24ac00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ac00) {
            ctx->pc = 0x24AC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC00u;
            // 0x24ac04: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24AC10u;
            goto label_24ac10;
        }
    }
    ctx->pc = 0x24AC08u;
    // 0x24ac08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24AC08u;
    {
        const bool branch_taken_0x24ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC08u;
            // 0x24ac0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac08) {
            ctx->pc = 0x24AC1Cu;
            goto label_24ac1c;
        }
    }
    ctx->pc = 0x24AC10u;
label_24ac10:
    // 0x24ac10: 0x54a0ffe9  bnel        $a1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x24AC10u;
    {
        const bool branch_taken_0x24ac10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ac10) {
            ctx->pc = 0x24AC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC10u;
            // 0x24ac14: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24ABB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24abb8;
        }
    }
    ctx->pc = 0x24AC18u;
label_24ac18:
    // 0x24ac18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ac18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ac1c:
    // 0x24ac1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24ac1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ac20: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24ac20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ac24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24ac24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ac28: 0x3e00008  jr          $ra
    ctx->pc = 0x24AC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24AC28u;
            // 0x24ac2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24AC30u;
    ctx->pc = 0x24ac30u;
}
