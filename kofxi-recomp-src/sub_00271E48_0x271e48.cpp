#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271E48
// Address: 0x271e48 - 0x2722a0
void sub_00271E48_0x271e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271E48_0x271e48");
#endif

    switch (ctx->pc) {
        case 0x271ea0u: goto label_271ea0;
        case 0x271ee0u: goto label_271ee0;
        case 0x271ef8u: goto label_271ef8;
        case 0x271f0cu: goto label_271f0c;
        case 0x271f34u: goto label_271f34;
        case 0x271f48u: goto label_271f48;
        case 0x271f5cu: goto label_271f5c;
        case 0x271fd0u: goto label_271fd0;
        case 0x272270u: goto label_272270;
        default: break;
    }

    ctx->pc = 0x271e48u;

    // 0x271e48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x271e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x271e4c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x271e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x271e50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x271e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x271e54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x271e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x271e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x271e5c: 0x24723478  addiu       $s2, $v1, 0x3478
    ctx->pc = 0x271e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13432));
    // 0x271e60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x271e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x271e64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x271e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e68: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x271e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x271e6c: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x271e6cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x271e70: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x271e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x271e74: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x271e74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e78: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x271e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x271e7c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x271e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x271e80: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x271e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x271e84: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x271e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x271e88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x271e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x271e8c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271e90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x271e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x271e94: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x271e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x271e98: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x271E98u;
    SET_GPR_U32(ctx, 31, 0x271EA0u);
    ctx->pc = 0x271E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271E98u;
            // 0x271e9c: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271EA0u; }
        if (ctx->pc != 0x271EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271EA0u; }
        if (ctx->pc != 0x271EA0u) { return; }
    }
    ctx->pc = 0x271EA0u;
label_271ea0:
    // 0x271ea0: 0x2ec3000e  sltiu       $v1, $s6, 0xE
    ctx->pc = 0x271ea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x271ea4: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x271EA4u;
    {
        const bool branch_taken_0x271ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EA4u;
            // 0x271ea8: 0x26a22d78  addiu       $v0, $s5, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ea4) {
            ctx->pc = 0x272250u;
            goto label_272250;
        }
    }
    ctx->pc = 0x271EACu;
    // 0x271eac: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x271eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x271eb0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x271eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x271eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271eb8: 0x8c639e00  lw          $v1, -0x6200($v1)
    ctx->pc = 0x271eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942208)));
    // 0x271ebc: 0x600008  jr          $v1
    ctx->pc = 0x271EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271EC8u: goto label_271ec8;
            case 0x272080u: goto label_272080;
            case 0x2720A0u: goto label_2720a0;
            case 0x2720B0u: goto label_2720b0;
            case 0x2720D8u: goto label_2720d8;
            case 0x272100u: goto label_272100;
            case 0x272188u: goto label_272188;
            case 0x2721B0u: goto label_2721b0;
            case 0x2721D8u: goto label_2721d8;
            case 0x272200u: goto label_272200;
            case 0x272228u: goto label_272228;
            case 0x27224Cu: goto label_27224c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271EC4u;
    // 0x271ec4: 0x0  nop
    ctx->pc = 0x271ec4u;
    // NOP
label_271ec8:
    // 0x271ec8: 0x26b32d78  addiu       $s3, $s5, 0x2D78
    ctx->pc = 0x271ec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x271ecc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271ed0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x271ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x271ed4: 0x8c8406c4  lw          $a0, 0x6C4($a0)
    ctx->pc = 0x271ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
    // 0x271ed8: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x271ED8u;
    SET_GPR_U32(ctx, 31, 0x271EE0u);
    ctx->pc = 0x271EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271ED8u;
            // 0x271edc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (runtime->hasFunction(0x10CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271EE0u; }
        if (ctx->pc != 0x271EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCD0_0x10ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271EE0u; }
        if (ctx->pc != 0x271EE0u) { return; }
    }
    ctx->pc = 0x271EE0u;
label_271ee0:
    // 0x271ee0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x271ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ee4: 0x68000dd  bltz        $s4, . + 4 + (0xDD << 2)
    ctx->pc = 0x271EE4u;
    {
        const bool branch_taken_0x271ee4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x271EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EE4u;
            // 0x271ee8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ee4) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x271EECu;
    // 0x271eec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x271EECu;
    {
        const bool branch_taken_0x271eec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x271EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EECu;
            // 0x271ef0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271eec) {
            ctx->pc = 0x271F1Cu;
            goto label_271f1c;
        }
    }
    ctx->pc = 0x271EF4u;
    // 0x271ef4: 0x0  nop
    ctx->pc = 0x271ef4u;
    // NOP
label_271ef8:
    // 0x271ef8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271efc: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x271efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x271f00: 0x8c8406c4  lw          $a0, 0x6C4($a0)
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
    // 0x271f04: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x271F04u;
    SET_GPR_U32(ctx, 31, 0x271F0Cu);
    ctx->pc = 0x271F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F04u;
            // 0x271f08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F0Cu; }
        if (ctx->pc != 0x271F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F0Cu; }
        if (ctx->pc != 0x271F0Cu) { return; }
    }
    ctx->pc = 0x271F0Cu;
label_271f0c:
    // 0x271f0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x271f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271f10: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x271f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271f14: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x271F14u;
    {
        const bool branch_taken_0x271f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271f14) {
            ctx->pc = 0x271EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271ef8;
        }
    }
    ctx->pc = 0x271F1Cu;
label_271f1c:
    // 0x271f1c: 0x26b32d78  addiu       $s3, $s5, 0x2D78
    ctx->pc = 0x271f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x271f20: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271f24: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x271f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x271f28: 0x8c8406bc  lw          $a0, 0x6BC($a0)
    ctx->pc = 0x271f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    // 0x271f2c: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x271F2Cu;
    SET_GPR_U32(ctx, 31, 0x271F34u);
    ctx->pc = 0x271F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F2Cu;
            // 0x271f30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (runtime->hasFunction(0x10CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F34u; }
        if (ctx->pc != 0x271F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCD0_0x10ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F34u; }
        if (ctx->pc != 0x271F34u) { return; }
    }
    ctx->pc = 0x271F34u;
label_271f34:
    // 0x271f34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x271f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f38: 0x68000c8  bltz        $s4, . + 4 + (0xC8 << 2)
    ctx->pc = 0x271F38u;
    {
        const bool branch_taken_0x271f38 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x271F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F38u;
            // 0x271f3c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f38) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x271F40u;
    // 0x271f40: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x271F40u;
    {
        const bool branch_taken_0x271f40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x271F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F40u;
            // 0x271f44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f40) {
            ctx->pc = 0x271F6Cu;
            goto label_271f6c;
        }
    }
    ctx->pc = 0x271F48u;
label_271f48:
    // 0x271f48: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x271f4c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x271f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x271f50: 0x8c8406bc  lw          $a0, 0x6BC($a0)
    ctx->pc = 0x271f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    // 0x271f54: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x271F54u;
    SET_GPR_U32(ctx, 31, 0x271F5Cu);
    ctx->pc = 0x271F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F54u;
            // 0x271f58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F5Cu; }
        if (ctx->pc != 0x271F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F5Cu; }
        if (ctx->pc != 0x271F5Cu) { return; }
    }
    ctx->pc = 0x271F5Cu;
label_271f5c:
    // 0x271f5c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x271f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271f60: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x271f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271f64: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x271F64u;
    {
        const bool branch_taken_0x271f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271f64) {
            ctx->pc = 0x271F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271f48;
        }
    }
    ctx->pc = 0x271F6Cu;
label_271f6c:
    // 0x271f6c: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x271F6Cu;
    {
        const bool branch_taken_0x271f6c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x271F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F6Cu;
            // 0x271f70: 0x2622fff6  addiu       $v0, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f6c) {
            ctx->pc = 0x271F88u;
            goto label_271f88;
        }
    }
    ctx->pc = 0x271F74u;
    // 0x271f74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271f78: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x271f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x271f7c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x271F7Cu;
    {
        const bool branch_taken_0x271f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F7Cu;
            // 0x271f80: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f7c) {
            ctx->pc = 0x272074u;
            goto label_272074;
        }
    }
    ctx->pc = 0x271F84u;
    // 0x271f84: 0x0  nop
    ctx->pc = 0x271f84u;
    // NOP
label_271f88:
    // 0x271f88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x271f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x271f8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x271F8Cu;
    {
        const bool branch_taken_0x271f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F8Cu;
            // 0x271f90: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f8c) {
            ctx->pc = 0x271FC0u;
            goto label_271fc0;
        }
    }
    ctx->pc = 0x271F94u;
    // 0x271f94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x271f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x271f98: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271F98u;
    {
        const bool branch_taken_0x271f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x271f98) {
            ctx->pc = 0x271F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x271F98u;
            // 0x271f9c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x271FA8u;
            goto label_271fa8;
        }
    }
    ctx->pc = 0x271FA0u;
    // 0x271fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271FA0u;
    {
        const bool branch_taken_0x271fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FA0u;
            // 0x271fa4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fa0) {
            ctx->pc = 0x271FB4u;
            goto label_271fb4;
        }
    }
    ctx->pc = 0x271FA8u;
label_271fa8:
    // 0x271fa8: 0x56220032  bnel        $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x271FA8u;
    {
        const bool branch_taken_0x271fa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x271fa8) {
            ctx->pc = 0x271FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x271FA8u;
            // 0x271fac: 0xae570004  sw          $s7, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x272074u;
            goto label_272074;
        }
    }
    ctx->pc = 0x271FB0u;
    // 0x271fb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x271fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_271fb4:
    // 0x271fb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x271fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x271fb8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x271FB8u;
    {
        const bool branch_taken_0x271fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FB8u;
            // 0x271fbc: 0xae570004  sw          $s7, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fb8) {
            ctx->pc = 0x272074u;
            goto label_272074;
        }
    }
    ctx->pc = 0x271FC0u;
label_271fc0:
    // 0x271fc0: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x271FC0u;
    {
        const bool branch_taken_0x271fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x271FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FC0u;
            // 0x271fc4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fc0) {
            ctx->pc = 0x272018u;
            goto label_272018;
        }
    }
    ctx->pc = 0x271FC8u;
    // 0x271fc8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x271fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x271fcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_271fd0:
    if (ctx->pc == 0x271FD0u) {
        ctx->pc = 0x271FD0u;
            // 0x271fd0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x271FD4u;
        goto label_fallthrough_0x271fcc;
    }
    ctx->pc = 0x271FCCu;
    {
        const bool branch_taken_0x271fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FCCu;
            // 0x271fd0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fcc) {
            ctx->pc = 0x271FE8u;
            goto label_271fe8;
        }
    }
label_fallthrough_0x271fcc:
    ctx->pc = 0x271FD4u;
    // 0x271fd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271fd8: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x271FD8u;
    {
        const bool branch_taken_0x271fd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x271FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FD8u;
            // 0x271fdc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fd8) {
            ctx->pc = 0x272008u;
            goto label_272008;
        }
    }
    ctx->pc = 0x271FE0u;
    // 0x271fe0: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x271FE0u;
    {
        const bool branch_taken_0x271fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FE0u;
            // 0x271fe4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fe0) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x271FE8u;
label_271fe8:
    // 0x271fe8: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271FE8u;
    {
        const bool branch_taken_0x271fe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x271FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FE8u;
            // 0x271fec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fe8) {
            ctx->pc = 0x272010u;
            goto label_272010;
        }
    }
    ctx->pc = 0x271FF0u;
    // 0x271ff0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x271ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x271ff4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x271FF4u;
    {
        const bool branch_taken_0x271ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x271FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FF4u;
            // 0x271ff8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ff4) {
            ctx->pc = 0x272020u;
            goto label_272020;
        }
    }
    ctx->pc = 0x271FFCu;
    // 0x271ffc: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x271FFCu;
    {
        const bool branch_taken_0x271ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FFCu;
            // 0x272000: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ffc) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x272004u;
    // 0x272004: 0x0  nop
    ctx->pc = 0x272004u;
    // NOP
label_272008:
    // 0x272008: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x272008u;
    {
        const bool branch_taken_0x272008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27200Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272008u;
            // 0x27200c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272008) {
            ctx->pc = 0x272024u;
            goto label_272024;
        }
    }
    ctx->pc = 0x272010u;
label_272010:
    // 0x272010: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272010u;
    {
        const bool branch_taken_0x272010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272010u;
            // 0x272014: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272010) {
            ctx->pc = 0x272024u;
            goto label_272024;
        }
    }
    ctx->pc = 0x272018u;
label_272018:
    // 0x272018: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x272018u;
    {
        const bool branch_taken_0x272018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272018u;
            // 0x27201c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272018) {
            ctx->pc = 0x272024u;
            goto label_272024;
        }
    }
    ctx->pc = 0x272020u;
label_272020:
    // 0x272020: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x272020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_272024:
    // 0x272024: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x272024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x272028: 0x26a32d78  addiu       $v1, $s5, 0x2D78
    ctx->pc = 0x272028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x27202c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x27202cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x272030: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x272034: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x272034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x272038: 0x90840684  lbu         $a0, 0x684($a0)
    ctx->pc = 0x272038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1668)));
    // 0x27203c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x272040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272044: 0x90420685  lbu         $v0, 0x685($v0)
    ctx->pc = 0x272044u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1669)));
    // 0x272048: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x27204c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x27204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x272050: 0x90a50686  lbu         $a1, 0x686($a1)
    ctx->pc = 0x272050u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1670)));
    // 0x272054: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x272054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x272058: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x272058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27205c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x27205cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x272060: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x272060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x272064: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x272068: 0x304203f0  andi        $v0, $v0, 0x3F0
    ctx->pc = 0x272068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1008);
    // 0x27206c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x27206cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x272070: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x272070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_272074:
    // 0x272074: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x272074u;
    {
        const bool branch_taken_0x272074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272074u;
            // 0x272078: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272074) {
            ctx->pc = 0x27224Cu;
            goto label_27224c;
        }
    }
    ctx->pc = 0x27207Cu;
    // 0x27207c: 0x0  nop
    ctx->pc = 0x27207cu;
    // NOP
label_272080:
    // 0x272080: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x272080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x272084: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x272084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x272088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27208c: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x27208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x272090: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x272090u;
    {
        const bool branch_taken_0x272090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272090) {
            ctx->pc = 0x272250u;
            goto label_272250;
        }
    }
    ctx->pc = 0x272098u;
    // 0x272098: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x272098u;
    {
        const bool branch_taken_0x272098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272098u;
            // 0x27209c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272098) {
            ctx->pc = 0x272260u;
            goto label_272260;
        }
    }
    ctx->pc = 0x2720A0u;
label_2720a0:
    // 0x2720a0: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x2720a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x2720a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2720A4u;
    {
        const bool branch_taken_0x2720a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720A4u;
            // 0x2720a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720a4) {
            ctx->pc = 0x2720E0u;
            goto label_2720e0;
        }
    }
    ctx->pc = 0x2720ACu;
    // 0x2720ac: 0x0  nop
    ctx->pc = 0x2720acu;
    // NOP
label_2720b0:
    // 0x2720b0: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x2720b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x2720b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2720b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2720b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2720b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2720bc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2720bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2720c0: 0x8c2206b4  lw          $v0, 0x6B4($at)
    ctx->pc = 0x2720c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1716)));
    // 0x2720c4: 0x50430061  beql        $v0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2720C4u;
    {
        const bool branch_taken_0x2720c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2720c4) {
            ctx->pc = 0x2720C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2720C4u;
            // 0x2720c8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27224Cu;
            goto label_27224c;
        }
    }
    ctx->pc = 0x2720CCu;
    // 0x2720cc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2720CCu;
    {
        const bool branch_taken_0x2720cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720CCu;
            // 0x2720d0: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720cc) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x2720D4u;
    // 0x2720d4: 0x0  nop
    ctx->pc = 0x2720d4u;
    // NOP
label_2720d8:
    // 0x2720d8: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x2720d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x2720dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2720dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2720e0:
    // 0x2720e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2720e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2720e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2720e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2720e8: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x2720e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x2720ec: 0x10640058  beq         $v1, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2720ECu;
    {
        const bool branch_taken_0x2720ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2720F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720ECu;
            // 0x2720f0: 0x26a22d78  addiu       $v0, $s5, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720ec) {
            ctx->pc = 0x272250u;
            goto label_272250;
        }
    }
    ctx->pc = 0x2720F4u;
    // 0x2720f4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2720F4u;
    {
        const bool branch_taken_0x2720f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720F4u;
            // 0x2720f8: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720f4) {
            ctx->pc = 0x272260u;
            goto label_272260;
        }
    }
    ctx->pc = 0x2720FCu;
    // 0x2720fc: 0x0  nop
    ctx->pc = 0x2720fcu;
    // NOP
label_272100:
    // 0x272100: 0x26a32d78  addiu       $v1, $s5, 0x2D78
    ctx->pc = 0x272100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x272104: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x272104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x272108: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x272108u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x27210c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x27210cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x272110: 0x8ce706b4  lw          $a3, 0x6B4($a3)
    ctx->pc = 0x272110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1716)));
    // 0x272114: 0x10e2004c  beq         $a3, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x272114u;
    {
        const bool branch_taken_0x272114 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x272118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272114u;
            // 0x272118: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272114) {
            ctx->pc = 0x272248u;
            goto label_272248;
        }
    }
    ctx->pc = 0x27211Cu;
    // 0x27211c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x272120: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272120u;
    {
        const bool branch_taken_0x272120 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x272124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272120u;
            // 0x272124: 0x3c060300  lui         $a2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272120) {
            ctx->pc = 0x272130u;
            goto label_272130;
        }
    }
    ctx->pc = 0x272128u;
    // 0x272128: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x272128u;
    {
        const bool branch_taken_0x272128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272128u;
            // 0x27212c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272128) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x272130u;
label_272130:
    // 0x272130: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x272134: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x272134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x272138: 0x90840684  lbu         $a0, 0x684($a0)
    ctx->pc = 0x272138u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1668)));
    // 0x27213c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x27213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x272140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272144: 0x90420685  lbu         $v0, 0x685($v0)
    ctx->pc = 0x272144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1669)));
    // 0x272148: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x272148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27214c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x27214cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x272150: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x272150u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x272154: 0x90230686  lbu         $v1, 0x686($at)
    ctx->pc = 0x272154u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 1670)));
    // 0x272158: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x272158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x27215c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27215cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x272160: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x272160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x272164: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x272164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x272168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x272168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27216c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x27216cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x272170: 0x304203f0  andi        $v0, $v0, 0x3F0
    ctx->pc = 0x272170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1008);
    // 0x272174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x272174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x272178: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x272178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x27217c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x27217Cu;
    {
        const bool branch_taken_0x27217c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27217Cu;
            // 0x272180: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27217c) {
            ctx->pc = 0x27224Cu;
            goto label_27224c;
        }
    }
    ctx->pc = 0x272184u;
    // 0x272184: 0x0  nop
    ctx->pc = 0x272184u;
    // NOP
label_272188:
    // 0x272188: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x272188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x27218c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x272190: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x272194: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x272194u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x272198: 0x8c2206b4  lw          $v0, 0x6B4($at)
    ctx->pc = 0x272198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1716)));
    // 0x27219c: 0x5043002b  beql        $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x27219Cu;
    {
        const bool branch_taken_0x27219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27219c) {
            ctx->pc = 0x2721A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27219Cu;
            // 0x2721a0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27224Cu;
            goto label_27224c;
        }
    }
    ctx->pc = 0x2721A4u;
    // 0x2721a4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2721A4u;
    {
        const bool branch_taken_0x2721a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721A4u;
            // 0x2721a8: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721a4) {
            ctx->pc = 0x27225Cu;
            goto label_27225c;
        }
    }
    ctx->pc = 0x2721ACu;
    // 0x2721ac: 0x0  nop
    ctx->pc = 0x2721acu;
    // NOP
label_2721b0:
    // 0x2721b0: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x2721b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x2721b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2721b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2721b8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2721b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2721bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2721bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2721c0: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x2721c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x2721c4: 0x54640026  bnel        $v1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2721C4u;
    {
        const bool branch_taken_0x2721c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2721c4) {
            ctx->pc = 0x2721C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2721C4u;
            // 0x2721c8: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x272260u;
            goto label_272260;
        }
    }
    ctx->pc = 0x2721CCu;
    // 0x2721cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2721CCu;
    {
        const bool branch_taken_0x2721cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721CCu;
            // 0x2721d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721cc) {
            ctx->pc = 0x272248u;
            goto label_272248;
        }
    }
    ctx->pc = 0x2721D4u;
    // 0x2721d4: 0x0  nop
    ctx->pc = 0x2721d4u;
    // NOP
label_2721d8:
    // 0x2721d8: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x2721d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x2721dc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2721dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2721e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2721e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2721e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2721e8: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x2721e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x2721ec: 0x5464001c  bnel        $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2721ECu;
    {
        const bool branch_taken_0x2721ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2721ec) {
            ctx->pc = 0x2721F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2721ECu;
            // 0x2721f0: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x272260u;
            goto label_272260;
        }
    }
    ctx->pc = 0x2721F4u;
    // 0x2721f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2721F4u;
    {
        const bool branch_taken_0x2721f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2721F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721F4u;
            // 0x2721f8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721f4) {
            ctx->pc = 0x272248u;
            goto label_272248;
        }
    }
    ctx->pc = 0x2721FCu;
    // 0x2721fc: 0x0  nop
    ctx->pc = 0x2721fcu;
    // NOP
label_272200:
    // 0x272200: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x272200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x272204: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x272204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x272208: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x272208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x27220c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27220cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272210: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x272210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x272214: 0x54640012  bnel        $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x272214u;
    {
        const bool branch_taken_0x272214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x272214) {
            ctx->pc = 0x272218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x272214u;
            // 0x272218: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x272260u;
            goto label_272260;
        }
    }
    ctx->pc = 0x27221Cu;
    // 0x27221c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27221Cu;
    {
        const bool branch_taken_0x27221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27221Cu;
            // 0x272220: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27221c) {
            ctx->pc = 0x272248u;
            goto label_272248;
        }
    }
    ctx->pc = 0x272224u;
    // 0x272224: 0x0  nop
    ctx->pc = 0x272224u;
    // NOP
label_272228:
    // 0x272228: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x272228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
    // 0x27222c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x272230: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x272230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x272234: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272238: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x272238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
    // 0x27223c: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27223Cu;
    {
        const bool branch_taken_0x27223c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27223c) {
            ctx->pc = 0x272240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27223Cu;
            // 0x272240: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x272260u;
            goto label_272260;
        }
    }
    ctx->pc = 0x272244u;
    // 0x272244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_272248:
    // 0x272248: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x272248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_27224c:
    // 0x27224c: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x27224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_272250:
    // 0x272250: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x272250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x272254: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x272254u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x272258: 0xac3606b4  sw          $s6, 0x6B4($at)
    ctx->pc = 0x272258u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1716), GPR_U32(ctx, 22));
label_27225c:
    // 0x27225c: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x27225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_272260:
    // 0x272260: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x272260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x272264: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x272264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x272268: 0xc043320  jal         func_10CC80
    ctx->pc = 0x272268u;
    SET_GPR_U32(ctx, 31, 0x272270u);
    ctx->pc = 0x27226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272268u;
            // 0x27226c: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272270u; }
        if (ctx->pc != 0x272270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272270u; }
        if (ctx->pc != 0x272270u) { return; }
    }
    ctx->pc = 0x272270u;
label_272270:
    // 0x272270: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x272270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272274: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x272274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272278: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x272278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27227c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27227cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272280: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x272280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x272284: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x272284u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272288: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x272288u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27228c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x27228cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272290: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x272290u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x272294: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x272294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x272298: 0x3e00008  jr          $ra
    ctx->pc = 0x272298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27229Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272298u;
            // 0x27229c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2722A0u;
    ctx->pc = 0x2722a0u;
}
