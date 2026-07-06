#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiThreadCreateAndStartMainKernelThread
// Address: 0x10da38 - 0x10db28
void kofxiThreadCreateAndStartMainKernelThread_0x10da38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadCreateAndStartMainKernelThread_0x10da38");
#endif

    switch (ctx->pc) {
        case 0x10da7cu: goto label_10da7c;
        case 0x10dac0u: goto label_10dac0;
        case 0x10dad4u: goto label_10dad4;
        case 0x10daf4u: goto label_10daf4;
        case 0x10dafcu: goto label_10dafc;
        case 0x10db08u: goto label_10db08;
        default: break;
    }

    ctx->pc = 0x10da38u;

    // 0x10da38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10da38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10da3c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10da3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10da40: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x10da40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x10da44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10da44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x10da48: 0x8e028698  lw          $v0, -0x7968($s0)
    ctx->pc = 0x10da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936216)));
    // 0x10da4c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10da4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10da50: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10DA50u;
    {
        const bool branch_taken_0x10da50 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x10DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA50u;
            // 0x10da54: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da50) {
            ctx->pc = 0x10DAD4u;
            goto label_10dad4;
        }
    }
    ctx->pc = 0x10DA58u;
    // 0x10da58: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x10da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x10da5c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x10da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10da60: 0x2451a508  addiu       $s1, $v0, -0x5AF8
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944008));
    // 0x10da64: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x10da64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x10da68: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x10da68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x10da6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x10da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10da70: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x10da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x10da74: 0xc043318  jal         func_10CC60
    ctx->pc = 0x10DA74u;
    SET_GPR_U32(ctx, 31, 0x10DA7Cu);
    ctx->pc = 0x10DA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA74u;
            // 0x10da78: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA7Cu; }
        if (ctx->pc != 0x10DA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA7Cu; }
        if (ctx->pc != 0x10DA7Cu) { return; }
    }
    ctx->pc = 0x10DA7Cu;
label_10da7c:
    // 0x10da7c: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10DA7Cu;
    {
        const bool branch_taken_0x10da7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA7Cu;
            // 0x10da80: 0xae425e80  sw          $v0, 0x5E80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da7c) {
            ctx->pc = 0x10DAD4u;
            goto label_10dad4;
        }
    }
    ctx->pc = 0x10DA84u;
    // 0x10da84: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x10da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x10da88: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10da88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10da8c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x10da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x10da90: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x10da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
    // 0x10da94: 0x24635a80  addiu       $v1, $v1, 0x5A80
    ctx->pc = 0x10da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23168));
    // 0x10da98: 0x24a5d6f0  addiu       $a1, $a1, -0x2910
    ctx->pc = 0x10da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956784));
    // 0x10da9c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x10da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x10daa0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x10daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x10daa4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x10daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x10daa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10daa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10daac: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x10daacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x10dab0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10dab4: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x10dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x10dab8: 0xc043298  jal         func_10CA60
    ctx->pc = 0x10DAB8u;
    SET_GPR_U32(ctx, 31, 0x10DAC0u);
    ctx->pc = 0x10DABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DAB8u;
            // 0x10dabc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAC0u; }
        if (ctx->pc != 0x10DAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateThreadWrapper_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAC0u; }
        if (ctx->pc != 0x10DAC0u) { return; }
    }
    ctx->pc = 0x10DAC0u;
label_10dac0:
    // 0x10dac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10dac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dac4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DAC4u;
    {
        const bool branch_taken_0x10dac4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DAC4u;
            // 0x10dac8: 0xae048698  sw          $a0, -0x7968($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294936216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dac4) {
            ctx->pc = 0x10DADCu;
            goto label_10dadc;
        }
    }
    ctx->pc = 0x10DACCu;
    // 0x10dacc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x10DACCu;
    SET_GPR_U32(ctx, 31, 0x10DAD4u);
    ctx->pc = 0x10DAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DACCu;
            // 0x10dad0: 0x8e445e80  lw          $a0, 0x5E80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAD4u; }
        if (ctx->pc != 0x10DAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAD4u; }
        if (ctx->pc != 0x10DAD4u) { return; }
    }
    ctx->pc = 0x10DAD4u;
label_10dad4:
    // 0x10dad4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10DAD4u;
    {
        const bool branch_taken_0x10dad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DAD4u;
            // 0x10dad8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dad4) {
            ctx->pc = 0x10DB0Cu;
            goto label_10db0c;
        }
    }
    ctx->pc = 0x10DADCu;
label_10dadc:
    // 0x10dadc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10dae0: 0x24435e88  addiu       $v1, $v0, 0x5E88
    ctx->pc = 0x10dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24200));
    // 0x10dae4: 0xac405e88  sw          $zero, 0x5E88($v0)
    ctx->pc = 0x10dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24200), GPR_U32(ctx, 0));
    // 0x10dae8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10dae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10daec: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x10DAECu;
    SET_GPR_U32(ctx, 31, 0x10DAF4u);
    ctx->pc = 0x10DAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DAECu;
            // 0x10daf0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (runtime->hasFunction(0x10DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAF4u; }
        if (ctx->pc != 0x10DAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadStartWithContextInit_0x10dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAF4u; }
        if (ctx->pc != 0x10DAF4u) { return; }
    }
    ctx->pc = 0x10DAF4u;
label_10daf4:
    // 0x10daf4: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x10DAF4u;
    SET_GPR_U32(ctx, 31, 0x10DAFCu);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAFCu; }
        if (ctx->pc != 0x10DAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DAFCu; }
        if (ctx->pc != 0x10DAFCu) { return; }
    }
    ctx->pc = 0x10DAFCu;
label_10dafc:
    // 0x10dafc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10dafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db00: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x10DB00u;
    SET_GPR_U32(ctx, 31, 0x10DB08u);
    ctx->pc = 0x10DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB00u;
            // 0x10db04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB08u; }
        if (ctx->pc != 0x10DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB08u; }
        if (ctx->pc != 0x10DB08u) { return; }
    }
    ctx->pc = 0x10DB08u;
label_10db08:
    // 0x10db08: 0x8e028698  lw          $v0, -0x7968($s0)
    ctx->pc = 0x10db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936216)));
label_10db0c:
    // 0x10db0c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x10db0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10db10: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10db10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10db14: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10db14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10db18: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10db18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10db1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB1Cu;
            // 0x10db20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DB24u;
    // 0x10db24: 0x0  nop
    ctx->pc = 0x10db24u;
    // NOP
    ctx->pc = 0x10db28u;
}
