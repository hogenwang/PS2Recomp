#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3B58
// Address: 0x1b3b58 - 0x1b3c88
void sub_001B3B58_0x1b3b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B58_0x1b3b58");
#endif

    switch (ctx->pc) {
        case 0x1b3ba0u: goto label_1b3ba0;
        case 0x1b3c00u: goto label_1b3c00;
        case 0x1b3c10u: goto label_1b3c10;
        case 0x1b3c18u: goto label_1b3c18;
        case 0x1b3c20u: goto label_1b3c20;
        default: break;
    }

    ctx->pc = 0x1b3b58u;

    // 0x1b3b58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3b5c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3b60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3b64: 0x24423040  addiu       $v0, $v0, 0x3040
    ctx->pc = 0x1b3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12352));
    // 0x1b3b68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3b70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3b74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3b78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3b7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b3b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b3b80: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b3b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b3b84: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b3b88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b3b8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b90: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3B90u;
    {
        const bool branch_taken_0x1b3b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B3B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B90u;
            // 0x1b3b94: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b90) {
            ctx->pc = 0x1B3BC8u;
            goto label_1b3bc8;
        }
    }
    ctx->pc = 0x1B3B98u;
    // 0x1b3b98: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1b3b98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1b3b9c: 0x26a230e0  addiu       $v0, $s5, 0x30E0
    ctx->pc = 0x1b3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12512));
label_1b3ba0:
    // 0x1b3ba0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1b3ba0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3ba4: 0x0  nop
    ctx->pc = 0x1b3ba4u;
    // NOP
    // 0x1b3ba8: 0x0  nop
    ctx->pc = 0x1b3ba8u;
    // NOP
    // 0x1b3bac: 0x0  nop
    ctx->pc = 0x1b3bacu;
    // NOP
    // 0x1b3bb0: 0x0  nop
    ctx->pc = 0x1b3bb0u;
    // NOP
    // 0x1b3bb4: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3BB4u;
    {
        const bool branch_taken_0x1b3bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BB4u;
            // 0x1b3bb8: 0x3c170037  lui         $s7, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bb4) {
            ctx->pc = 0x1B3BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3ba0;
        }
    }
    ctx->pc = 0x1B3BBCu;
    // 0x1b3bbc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B3BBCu;
    {
        const bool branch_taken_0x1b3bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BBCu;
            // 0x1b3bc0: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bbc) {
            ctx->pc = 0x1B3C44u;
            goto label_1b3c44;
        }
    }
    ctx->pc = 0x1B3BC4u;
    // 0x1b3bc4: 0x0  nop
    ctx->pc = 0x1b3bc4u;
    // NOP
label_1b3bc8:
    // 0x1b3bc8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1b3bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1b3bcc: 0x2443311c  addiu       $v1, $v0, 0x311C
    ctx->pc = 0x1b3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12572));
    // 0x1b3bd0: 0x26a430e0  addiu       $a0, $s5, 0x30E0
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12512));
    // 0x1b3bd4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b3bd8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1b3bd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3bdc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B3BDCu;
    {
        const bool branch_taken_0x1b3bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BDCu;
            // 0x1b3be0: 0x3c170037  lui         $s7, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bdc) {
            ctx->pc = 0x1B3C40u;
            goto label_1b3c40;
        }
    }
    ctx->pc = 0x1B3BE4u;
    // 0x1b3be4: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b3be4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b3be8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1b3be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b3becu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bf0: 0x26f330d8  addiu       $s3, $s7, 0x30D8
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 12504));
    // 0x1b3bf4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b3bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3bf8: 0x26d03094  addiu       $s0, $s6, 0x3094
    ctx->pc = 0x1b3bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12436));
    // 0x1b3bfc: 0x0  nop
    ctx->pc = 0x1b3bfcu;
    // NOP
label_1b3c00:
    // 0x1b3c00: 0xfe720000  sd          $s2, 0x0($s3)
    ctx->pc = 0x1b3c00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 18));
    // 0x1b3c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3c08: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3C08u;
    SET_GPR_U32(ctx, 31, 0x1B3C10u);
    ctx->pc = 0x1B3C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C08u;
            // 0x1b3c0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C10u; }
        if (ctx->pc != 0x1B3C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C10u; }
        if (ctx->pc != 0x1B3C10u) { return; }
    }
    ctx->pc = 0x1B3C10u;
label_1b3c10:
    // 0x1b3c10: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B3C10u;
    SET_GPR_U32(ctx, 31, 0x1B3C18u);
    ctx->pc = 0x1B3C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C10u;
            // 0x1b3c14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (runtime->hasFunction(0x10CB90u)) {
        auto targetFn = runtime->lookupFunction(0x10CB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C18u; }
        if (ctx->pc != 0x1B3C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWakeupThreadWrapper_0x10cb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C18u; }
        if (ctx->pc != 0x1B3C18u) { return; }
    }
    ctx->pc = 0x1B3C18u;
label_1b3c18:
    // 0x1b3c18: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B3C18u;
    SET_GPR_U32(ctx, 31, 0x1B3C20u);
    ctx->pc = 0x1B3C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C18u;
            // 0x1b3c1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (runtime->hasFunction(0x1B3198u)) {
        auto targetFn = runtime->lookupFunction(0x1B3198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C20u; }
        if (ctx->pc != 0x1B3C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadResumeIfSuspended_0x1b3198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C20u; }
        if (ctx->pc != 0x1B3C20u) { return; }
    }
    ctx->pc = 0x1B3C20u;
label_1b3c20:
    // 0x1b3c20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3c24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b3c28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1b3c2c: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b3c2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b3c30: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B3C30u;
    {
        const bool branch_taken_0x1b3c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C30u;
            // 0x1b3c34: 0x26a230e0  addiu       $v0, $s5, 0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c30) {
            ctx->pc = 0x1B3C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3c00;
        }
    }
    ctx->pc = 0x1B3C38u;
    // 0x1b3c38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3C38u;
    {
        const bool branch_taken_0x1b3c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C38u;
            // 0x1b3c3c: 0xdfb50028  ld          $s5, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c38) {
            ctx->pc = 0x1B3C4Cu;
            goto label_1b3c4c;
        }
    }
    ctx->pc = 0x1B3C40u;
label_1b3c40:
    // 0x1b3c40: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b3c40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1b3c44:
    // 0x1b3c44: 0x26a230e0  addiu       $v0, $s5, 0x30E0
    ctx->pc = 0x1b3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12512));
    // 0x1b3c48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b3c48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b3c4c:
    // 0x1b3c4c: 0x26e330d8  addiu       $v1, $s7, 0x30D8
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 12504));
    // 0x1b3c50: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b3c50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3c54: 0x26c43094  addiu       $a0, $s6, 0x3094
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12436));
    // 0x1b3c58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b3c58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3c68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3c6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b3c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3c70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b3c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3c74: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1b3c74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b3c78: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b3c78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b3c7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b3c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C80u;
            // 0x1b3c84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3C88u;
    ctx->pc = 0x1b3c88u;
}
