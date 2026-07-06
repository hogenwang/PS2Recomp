#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011EBA0
// Address: 0x11eba0 - 0x11ed18
void sub_0011EBA0_0x11eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EBA0_0x11eba0");
#endif

    switch (ctx->pc) {
        case 0x11ebf0u: goto label_11ebf0;
        case 0x11ec70u: goto label_11ec70;
        case 0x11eca8u: goto label_11eca8;
        case 0x11ecd0u: goto label_11ecd0;
        case 0x11ece0u: goto label_11ece0;
        default: break;
    }

    ctx->pc = 0x11eba0u;

    // 0x11eba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11eba4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11eba8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11ebac: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x11ebacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x11ebb0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11ebb4: 0x2682de00  addiu       $v0, $s4, -0x2200
    ctx->pc = 0x11ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958592));
    // 0x11ebb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ebbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ebbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebc0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11ebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11ebc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11ebc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebc8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11ebcc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11ebd0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x11ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x11ebd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EBD4u;
    {
        const bool branch_taken_0x11ebd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBD4u;
            // 0x11ebd8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebd4) {
            ctx->pc = 0x11EBE4u;
            goto label_11ebe4;
        }
    }
    ctx->pc = 0x11EBDCu;
    // 0x11ebdc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x11EBDCu;
    {
        const bool branch_taken_0x11ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBDCu;
            // 0x11ebe0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebdc) {
            ctx->pc = 0x11ECF4u;
            goto label_11ecf4;
        }
    }
    ctx->pc = 0x11EBE4u;
label_11ebe4:
    // 0x11ebe4: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x11ebe4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x11ebe8: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11EBE8u;
    SET_GPR_U32(ctx, 31, 0x11EBF0u);
    ctx->pc = 0x11EBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBE8u;
            // 0x11ebec: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBF0u; }
        if (ctx->pc != 0x11EBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBF0u; }
        if (ctx->pc != 0x11EBF0u) { return; }
    }
    ctx->pc = 0x11EBF0u;
label_11ebf0:
    // 0x11ebf0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EBF0u;
    {
        const bool branch_taken_0x11ebf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11EBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBF0u;
            // 0x11ebf4: 0x3c130041  lui         $s3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebf0) {
            ctx->pc = 0x11EC00u;
            goto label_11ec00;
        }
    }
    ctx->pc = 0x11EBF8u;
    // 0x11ebf8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11EBF8u;
    {
        const bool branch_taken_0x11ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBF8u;
            // 0x11ebfc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebf8) {
            ctx->pc = 0x11ECF4u;
            goto label_11ecf4;
        }
    }
    ctx->pc = 0x11EC00u;
label_11ec00:
    // 0x11ec00: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x11ec00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11ec04: 0x2666de80  addiu       $a2, $s3, -0x2180
    ctx->pc = 0x11ec04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958720));
    // 0x11ec08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC08u;
    {
        const bool branch_taken_0x11ec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC08u;
            // 0x11ec0c: 0xae72de80  sw          $s2, -0x2180($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294958720), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec08) {
            ctx->pc = 0x11EC20u;
            goto label_11ec20;
        }
    }
    ctx->pc = 0x11EC10u;
    // 0x11ec10: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x11ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x11ec14: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x11ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x11ec18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11EC18u;
    {
        const bool branch_taken_0x11ec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC18u;
            // 0x11ec1c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec18) {
            ctx->pc = 0x11EC4Cu;
            goto label_11ec4c;
        }
    }
    ctx->pc = 0x11EC20u;
label_11ec20:
    // 0x11ec20: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x11ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11ec24: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x11ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x11ec28: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x11ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x11ec2c: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x11ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x11ec30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11ec34: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x11ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11ec38: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x11ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ec3c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x11ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11ec40: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x11ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x11ec44: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x11ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x11ec48: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x11ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_11ec4c:
    // 0x11ec4c: 0x2662de80  addiu       $v0, $s3, -0x2180
    ctx->pc = 0x11ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958720));
    // 0x11ec50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11ec50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec54: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x11ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11ec58: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x11EC58u;
    {
        const bool branch_taken_0x11ec58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC58u;
            // 0x11ec5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec58) {
            ctx->pc = 0x11EC98u;
            goto label_11ec98;
        }
    }
    ctx->pc = 0x11EC60u;
    // 0x11ec60: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x11ec60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x11ec64: 0x3c100012  lui         $s0, 0x12
    ctx->pc = 0x11ec64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)18 << 16));
    // 0x11ec68: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x11ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x11ec6c: 0x24e4de80  addiu       $a0, $a3, -0x2180
    ctx->pc = 0x11ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_11ec70:
    // 0x11ec70: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x11ec70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ec74: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x11ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11ec78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11ec78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ec7c: 0xa0650020  sb          $a1, 0x20($v1)
    ctx->pc = 0x11ec7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x11ec80: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x11ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x11ec84: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x11ec84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ec88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11EC88u;
    {
        const bool branch_taken_0x11ec88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC88u;
            // 0x11ec8c: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec88) {
            ctx->pc = 0x11EC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ec70;
        }
    }
    ctx->pc = 0x11EC90u;
    // 0x11ec90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EC90u;
    {
        const bool branch_taken_0x11ec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ec90) {
            ctx->pc = 0x11ECA0u;
            goto label_11eca0;
        }
    }
    ctx->pc = 0x11EC98u;
label_11ec98:
    // 0x11ec98: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x11ec98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x11ec9c: 0x3c100012  lui         $s0, 0x12
    ctx->pc = 0x11ec9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)18 << 16));
label_11eca0:
    // 0x11eca0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x11ECA0u;
    SET_GPR_U32(ctx, 31, 0x11ECA8u);
    ctx->pc = 0x11ECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECA0u;
            // 0x11eca4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECA8u; }
        if (ctx->pc != 0x11ECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECA8u; }
        if (ctx->pc != 0x11ECA8u) { return; }
    }
    ctx->pc = 0x11ECA8u;
label_11eca8:
    // 0x11eca8: 0x2684de00  addiu       $a0, $s4, -0x2200
    ctx->pc = 0x11eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958592));
    // 0x11ecac: 0x2667de80  addiu       $a3, $s3, -0x2180
    ctx->pc = 0x11ecacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958720));
    // 0x11ecb0: 0x2649f3c0  addiu       $t1, $s2, -0xC40
    ctx->pc = 0x11ecb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964160));
    // 0x11ecb4: 0x260be548  addiu       $t3, $s0, -0x1AB8
    ctx->pc = 0x11ecb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960456));
    // 0x11ecb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ecbc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11ecc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ecc4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11ecc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11ecc8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11ECC8u;
    SET_GPR_U32(ctx, 31, 0x11ECD0u);
    ctx->pc = 0x11ECCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECC8u;
            // 0x11eccc: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECD0u; }
        if (ctx->pc != 0x11ECD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECD0u; }
        if (ctx->pc != 0x11ECD0u) { return; }
    }
    ctx->pc = 0x11ECD0u;
label_11ecd0:
    // 0x11ecd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ECD0u;
    {
        const bool branch_taken_0x11ecd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECD0u;
            // 0x11ecd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecd0) {
            ctx->pc = 0x11ECE8u;
            goto label_11ece8;
        }
    }
    ctx->pc = 0x11ECD8u;
    // 0x11ecd8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11ECD8u;
    SET_GPR_U32(ctx, 31, 0x11ECE0u);
    ctx->pc = 0x11ECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECD8u;
            // 0x11ecdc: 0x8ea4b9dc  lw          $a0, -0x4624($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECE0u; }
        if (ctx->pc != 0x11ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECE0u; }
        if (ctx->pc != 0x11ECE0u) { return; }
    }
    ctx->pc = 0x11ECE0u;
label_11ece0:
    // 0x11ece0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11ECE0u;
    {
        const bool branch_taken_0x11ece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECE0u;
            // 0x11ece4: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ece0) {
            ctx->pc = 0x11ECF4u;
            goto label_11ecf4;
        }
    }
    ctx->pc = 0x11ECE8u;
label_11ece8:
    // 0x11ece8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11ecec: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11ececu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11ecf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ecf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ecf4:
    // 0x11ecf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11ecf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ecf8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11ecf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ecfc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11ecfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ed00: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11ed00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ed04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11ed04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ed08: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11ed08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ed0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11ed0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ed10: 0x3e00008  jr          $ra
    ctx->pc = 0x11ED10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED10u;
            // 0x11ed14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11ED18u;
    ctx->pc = 0x11ed18u;
}
