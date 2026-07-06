#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AF988
// Address: 0x2af988 - 0x2afab8
void sub_002AF988_0x2af988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF988_0x2af988");
#endif

    switch (ctx->pc) {
        case 0x2af9c0u: goto label_2af9c0;
        case 0x2af9dcu: goto label_2af9dc;
        case 0x2af9f0u: goto label_2af9f0;
        case 0x2afa04u: goto label_2afa04;
        case 0x2afa18u: goto label_2afa18;
        case 0x2afa2cu: goto label_2afa2c;
        case 0x2afa38u: goto label_2afa38;
        case 0x2afa4cu: goto label_2afa4c;
        case 0x2afa60u: goto label_2afa60;
        case 0x2afa80u: goto label_2afa80;
        case 0x2afaa0u: goto label_2afaa0;
        default: break;
    }

    ctx->pc = 0x2af988u;

    // 0x2af988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2af988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2af98c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2af98cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2af990: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2af990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2af994: 0x24e7d228  addiu       $a3, $a3, -0x2DD8
    ctx->pc = 0x2af994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955560));
    // 0x2af998: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2af998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af99c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2af99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2af9a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2af9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2af9a4: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x2af9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x2af9a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2af9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2af9ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2af9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af9b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af9b4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2af9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2af9b8: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x2AF9B8u;
    SET_GPR_U32(ctx, 31, 0x2AF9C0u);
    ctx->pc = 0x2AF9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9B8u;
            // 0x2af9bc: 0x2408004f  addiu       $t0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (runtime->hasFunction(0x2A2D18u)) {
        auto targetFn = runtime->lookupFunction(0x2A2D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9C0u; }
        if (ctx->pc != 0x2AF9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2D18_0x2a2d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9C0u; }
        if (ctx->pc != 0x2AF9C0u) { return; }
    }
    ctx->pc = 0x2AF9C0u;
label_2af9c0:
    // 0x2af9c0: 0x1c400037  bgtz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2AF9C0u;
    {
        const bool branch_taken_0x2af9c0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2AF9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9C0u;
            // 0x2af9c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9c0) {
            ctx->pc = 0x2AFAA0u;
            goto label_2afaa0;
        }
    }
    ctx->pc = 0x2AF9C8u;
    // 0x2af9c8: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2af9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2af9cc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF9CCu;
    {
        const bool branch_taken_0x2af9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9cc) {
            ctx->pc = 0x2AF9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9CCu;
            // 0x2af9d0: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9E0u;
            goto label_2af9e0;
        }
    }
    ctx->pc = 0x2AF9D4u;
    // 0x2af9d4: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2AF9D4u;
    SET_GPR_U32(ctx, 31, 0x2AF9DCu);
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9DCu; }
        if (ctx->pc != 0x2AF9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9DCu; }
        if (ctx->pc != 0x2AF9DCu) { return; }
    }
    ctx->pc = 0x2AF9DCu;
label_2af9dc:
    // 0x2af9dc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2af9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2af9e0:
    // 0x2af9e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF9E0u;
    {
        const bool branch_taken_0x2af9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9e0) {
            ctx->pc = 0x2AF9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9E0u;
            // 0x2af9e4: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF9F4u;
            goto label_2af9f4;
        }
    }
    ctx->pc = 0x2AF9E8u;
    // 0x2af9e8: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2AF9E8u;
    SET_GPR_U32(ctx, 31, 0x2AF9F0u);
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9F0u; }
        if (ctx->pc != 0x2AF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF9F0u; }
        if (ctx->pc != 0x2AF9F0u) { return; }
    }
    ctx->pc = 0x2AF9F0u;
label_2af9f0:
    // 0x2af9f0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2af9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2af9f4:
    // 0x2af9f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF9F4u;
    {
        const bool branch_taken_0x2af9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9f4) {
            ctx->pc = 0x2AF9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF9F4u;
            // 0x2af9f8: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AFA08u;
            goto label_2afa08;
        }
    }
    ctx->pc = 0x2AF9FCu;
    // 0x2af9fc: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2AF9FCu;
    SET_GPR_U32(ctx, 31, 0x2AFA04u);
    ctx->pc = 0x2A8CD0u;
    if (runtime->hasFunction(0x2A8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA04u; }
        if (ctx->pc != 0x2AFA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CD0_0x2a8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA04u; }
        if (ctx->pc != 0x2AFA04u) { return; }
    }
    ctx->pc = 0x2AFA04u;
label_2afa04:
    // 0x2afa04: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x2afa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2afa08:
    // 0x2afa08: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFA08u;
    {
        const bool branch_taken_0x2afa08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afa08) {
            ctx->pc = 0x2AFA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA08u;
            // 0x2afa0c: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AFA1Cu;
            goto label_2afa1c;
        }
    }
    ctx->pc = 0x2AFA10u;
    // 0x2afa10: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2AFA10u;
    SET_GPR_U32(ctx, 31, 0x2AFA18u);
    ctx->pc = 0x293FC8u;
    if (runtime->hasFunction(0x293FC8u)) {
        auto targetFn = runtime->lookupFunction(0x293FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA18u; }
        if (ctx->pc != 0x2AFA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293FC8_0x293fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA18u; }
        if (ctx->pc != 0x2AFA18u) { return; }
    }
    ctx->pc = 0x2AFA18u;
label_2afa18:
    // 0x2afa18: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2afa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2afa1c:
    // 0x2afa1c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFA1Cu;
    {
        const bool branch_taken_0x2afa1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA1Cu;
            // 0x2afa20: 0x26510044  addiu       $s1, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa1c) {
            ctx->pc = 0x2AFA2Cu;
            goto label_2afa2c;
        }
    }
    ctx->pc = 0x2AFA24u;
    // 0x2afa24: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2AFA24u;
    SET_GPR_U32(ctx, 31, 0x2AFA2Cu);
    ctx->pc = 0x293FC8u;
    if (runtime->hasFunction(0x293FC8u)) {
        auto targetFn = runtime->lookupFunction(0x293FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA2Cu; }
        if (ctx->pc != 0x2AFA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293FC8_0x293fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA2Cu; }
        if (ctx->pc != 0x2AFA2Cu) { return; }
    }
    ctx->pc = 0x2AFA2Cu;
label_2afa2c:
    // 0x2afa2c: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2afa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2afa30: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2afa30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2afa34: 0x0  nop
    ctx->pc = 0x2afa34u;
    // NOP
label_2afa38:
    // 0x2afa38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2afa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2afa3c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFA3Cu;
    {
        const bool branch_taken_0x2afa3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afa3c) {
            ctx->pc = 0x2AFA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA3Cu;
            // 0x2afa40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AFA50u;
            goto label_2afa50;
        }
    }
    ctx->pc = 0x2AFA44u;
    // 0x2afa44: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2AFA44u;
    SET_GPR_U32(ctx, 31, 0x2AFA4Cu);
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA4Cu; }
        if (ctx->pc != 0x2AFA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA4Cu; }
        if (ctx->pc != 0x2AFA4Cu) { return; }
    }
    ctx->pc = 0x2AFA4Cu;
label_2afa4c:
    // 0x2afa4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2afa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afa50:
    // 0x2afa50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFA50u;
    {
        const bool branch_taken_0x2afa50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA50u;
            // 0x2afa54: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa50) {
            ctx->pc = 0x2AFA60u;
            goto label_2afa60;
        }
    }
    ctx->pc = 0x2AFA58u;
    // 0x2afa58: 0xc0a3d02  jal         func_28F408
    ctx->pc = 0x2AFA58u;
    SET_GPR_U32(ctx, 31, 0x2AFA60u);
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA60u; }
        if (ctx->pc != 0x2AFA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA60u; }
        if (ctx->pc != 0x2AFA60u) { return; }
    }
    ctx->pc = 0x2AFA60u;
label_2afa60:
    // 0x2afa60: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2afa60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2afa64: 0x661fff4  bgez        $s3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AFA64u;
    {
        const bool branch_taken_0x2afa64 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2AFA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA64u;
            // 0x2afa68: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa64) {
            ctx->pc = 0x2AFA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2afa38;
        }
    }
    ctx->pc = 0x2AFA6Cu;
    // 0x2afa6c: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x2afa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2afa70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFA70u;
    {
        const bool branch_taken_0x2afa70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA70u;
            // 0x2afa74: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa70) {
            ctx->pc = 0x2AFA80u;
            goto label_2afa80;
        }
    }
    ctx->pc = 0x2AFA78u;
    // 0x2afa78: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2AFA78u;
    SET_GPR_U32(ctx, 31, 0x2AFA80u);
    ctx->pc = 0x2AFA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA78u;
            // 0x2afa7c: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA80u; }
        if (ctx->pc != 0x2AFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFA80u; }
        if (ctx->pc != 0x2AFA80u) { return; }
    }
    ctx->pc = 0x2AFA80u;
label_2afa80:
    // 0x2afa80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2afa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2afa84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afa88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2afa88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afa8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2afa8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afa90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2afa90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afa94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2afa94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afa98: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2AFA98u;
    ctx->pc = 0x2AFA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFA98u;
            // 0x2afa9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2AFAA0u;
label_2afaa0:
    // 0x2afaa0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2afaa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afaa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2afaa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afaa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2afaa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afaac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2afaacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFAB0u;
            // 0x2afab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFAB8u;
    ctx->pc = 0x2afab8u;
}
