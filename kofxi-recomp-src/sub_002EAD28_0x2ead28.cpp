#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EAD28
// Address: 0x2ead28 - 0x2eaeb0
void sub_002EAD28_0x2ead28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAD28_0x2ead28");
#endif

    switch (ctx->pc) {
        case 0x2eada0u: goto label_2eada0;
        case 0x2eadb0u: goto label_2eadb0;
        case 0x2eadd0u: goto label_2eadd0;
        case 0x2eae24u: goto label_2eae24;
        case 0x2eae58u: goto label_2eae58;
        case 0x2eae84u: goto label_2eae84;
        default: break;
    }

    ctx->pc = 0x2ead28u;

    // 0x2ead28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ead28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ead2c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2ead2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ead30: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ead30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ead34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ead34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ead38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ead38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead3c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ead3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ead40: 0x26362684  addiu       $s6, $s1, 0x2684
    ctx->pc = 0x2ead40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 9860));
    // 0x2ead44: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ead44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ead48: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ead48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ead4c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ead4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ead50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ead50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ead54: 0x86220030  lh          $v0, 0x30($s1)
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ead58: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2ead58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2ead5c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2EAD5Cu;
    {
        const bool branch_taken_0x2ead5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD5Cu;
            // 0x2ead60: 0x96230030  lhu         $v1, 0x30($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead5c) {
            ctx->pc = 0x2EAE84u;
            goto label_2eae84;
        }
    }
    ctx->pc = 0x2EAD64u;
    // 0x2ead64: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2ead64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2ead68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EAD68u;
    {
        const bool branch_taken_0x2ead68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD68u;
            // 0x2ead6c: 0x26352648  addiu       $s5, $s1, 0x2648 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 9800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead68) {
            ctx->pc = 0x2EAD7Cu;
            goto label_2ead7c;
        }
    }
    ctx->pc = 0x2EAD70u;
    // 0x2ead70: 0xae202680  sw          $zero, 0x2680($s1)
    ctx->pc = 0x2ead70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9856), GPR_U32(ctx, 0));
    // 0x2ead74: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2EAD74u;
    {
        const bool branch_taken_0x2ead74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD74u;
            // 0x2ead78: 0x26342680  addiu       $s4, $s1, 0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 9856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead74) {
            ctx->pc = 0x2EAE04u;
            goto label_2eae04;
        }
    }
    ctx->pc = 0x2EAD7Cu;
label_2ead7c:
    // 0x2ead7c: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x2ead7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x2ead80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ead80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead84: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAD84u;
    {
        const bool branch_taken_0x2ead84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD84u;
            // 0x2ead88: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead84) {
            ctx->pc = 0x2EAD90u;
            goto label_2ead90;
        }
    }
    ctx->pc = 0x2EAD8Cu;
    // 0x2ead8c: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x2ead8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2ead90:
    // 0x2ead90: 0x26352648  addiu       $s5, $s1, 0x2648
    ctx->pc = 0x2ead90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 9800));
    // 0x2ead94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EAD94u;
    {
        const bool branch_taken_0x2ead94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD94u;
            // 0x2ead98: 0x26342680  addiu       $s4, $s1, 0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 9856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead94) {
            ctx->pc = 0x2EADBCu;
            goto label_2eadbc;
        }
    }
    ctx->pc = 0x2EAD9Cu;
    // 0x2ead9c: 0x0  nop
    ctx->pc = 0x2ead9cu;
    // NOP
label_2eada0:
    // 0x2eada0: 0x2d32021  addu        $a0, $s6, $s3
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x2eada4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2eada4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eada8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2EADA8u;
    SET_GPR_U32(ctx, 31, 0x2EADB0u);
    ctx->pc = 0x2EADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADA8u;
            // 0x2eadac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADB0u; }
        if (ctx->pc != 0x2EADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADB0u; }
        if (ctx->pc != 0x2EADB0u) { return; }
    }
    ctx->pc = 0x2EADB0u;
label_2eadb0:
    // 0x2eadb0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EADB0u;
    {
        const bool branch_taken_0x2eadb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADB0u;
            // 0x2eadb4: 0x26730006  addiu       $s3, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadb0) {
            ctx->pc = 0x2EADD8u;
            goto label_2eadd8;
        }
    }
    ctx->pc = 0x2EADB8u;
    // 0x2eadb8: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x2eadb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2eadbc:
    // 0x2eadbc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EADBCu;
    {
        const bool branch_taken_0x2eadbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADBCu;
            // 0x2eadc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadbc) {
            ctx->pc = 0x2EADD8u;
            goto label_2eadd8;
        }
    }
    ctx->pc = 0x2EADC4u;
    // 0x2eadc4: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x2eadc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2eadc8: 0xc049c22  jal         func_127088
    ctx->pc = 0x2EADC8u;
    SET_GPR_U32(ctx, 31, 0x2EADD0u);
    ctx->pc = 0x2EADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADC8u;
            // 0x2eadcc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADD0u; }
        if (ctx->pc != 0x2EADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADD0u; }
        if (ctx->pc != 0x2EADD0u) { return; }
    }
    ctx->pc = 0x2EADD0u;
label_2eadd0:
    // 0x2eadd0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2EADD0u;
    {
        const bool branch_taken_0x2eadd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADD0u;
            // 0x2eadd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadd0) {
            ctx->pc = 0x2EADA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eada0;
        }
    }
    ctx->pc = 0x2EADD8u;
label_2eadd8:
    // 0x2eadd8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EADD8u;
    {
        const bool branch_taken_0x2eadd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADD8u;
            // 0x2eaddc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadd8) {
            ctx->pc = 0x2EADF8u;
            goto label_2eadf8;
        }
    }
    ctx->pc = 0x2EADE0u;
    // 0x2eade0: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x2eade0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eade4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EADE4u;
    {
        const bool branch_taken_0x2eade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eade4) {
            ctx->pc = 0x2EADE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADE4u;
            // 0x2eade8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EADECu;
            goto label_2eadec;
        }
    }
    ctx->pc = 0x2EADECu;
label_2eadec:
    // 0x2eadec: 0x1812  mflo        $v1
    ctx->pc = 0x2eadecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2eadf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EADF0u;
    {
        const bool branch_taken_0x2eadf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADF0u;
            // 0x2eadf4: 0xae232680  sw          $v1, 0x2680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 9856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eadf0) {
            ctx->pc = 0x2EAE04u;
            goto label_2eae04;
        }
    }
    ctx->pc = 0x2EADF8u;
label_2eadf8:
    // 0x2eadf8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eadfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2eadfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2eae00: 0xae232680  sw          $v1, 0x2680($s1)
    ctx->pc = 0x2eae00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9856), GPR_U32(ctx, 3));
label_2eae04:
    // 0x2eae04: 0x8e232680  lw          $v1, 0x2680($s1)
    ctx->pc = 0x2eae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9856)));
    // 0x2eae08: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAE08u;
    {
        const bool branch_taken_0x2eae08 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2EAE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE08u;
            // 0x2eae0c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae08) {
            ctx->pc = 0x2EAE18u;
            goto label_2eae18;
        }
    }
    ctx->pc = 0x2EAE10u;
    // 0x2eae10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAE10u;
    {
        const bool branch_taken_0x2eae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE10u;
            // 0x2eae14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae10) {
            ctx->pc = 0x2EAE1Cu;
            goto label_2eae1c;
        }
    }
    ctx->pc = 0x2EAE18u;
label_2eae18:
    // 0x2eae18: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x2eae18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2eae1c:
    // 0x2eae1c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2EAE1Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE24u);
    ctx->pc = 0x2EAE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE1Cu;
            // 0x2eae20: 0x8e242e8c  lw          $a0, 0x2E8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE24u; }
        if (ctx->pc != 0x2EAE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE24u; }
        if (ctx->pc != 0x2EAE24u) { return; }
    }
    ctx->pc = 0x2EAE24u;
label_2eae24:
    // 0x2eae24: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2eae24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2eae28: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2eae28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae2c: 0x26020007  addiu       $v0, $s0, 0x7
    ctx->pc = 0x2eae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2eae30: 0x3508fffc  ori         $t0, $t0, 0xFFFC
    ctx->pc = 0x2eae30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65532);
    // 0x2eae34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae38: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2eae38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eae3c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2eae3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2eae40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae44: 0x484024  and         $t0, $v0, $t0
    ctx->pc = 0x2eae44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2eae48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eae48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2eae4c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2eae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eae50: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2EAE50u;
    SET_GPR_U32(ctx, 31, 0x2EAE58u);
    ctx->pc = 0x2EAE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE50u;
            // 0x2eae54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE58u; }
        if (ctx->pc != 0x2EAE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE58u; }
        if (ctx->pc != 0x2EAE58u) { return; }
    }
    ctx->pc = 0x2EAE58u;
label_2eae58:
    // 0x2eae58: 0x8e242e8c  lw          $a0, 0x2E8C($s1)
    ctx->pc = 0x2eae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    // 0x2eae5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2eae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eae60: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2eae60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eae64: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2eae64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eae68: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2eae68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eae6c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2eae6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eae70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2eae70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eae74: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2eae74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eae78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eae78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eae7c: 0x8043320  j           func_10CC80
    ctx->pc = 0x2EAE7Cu;
    ctx->pc = 0x2EAE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE7Cu;
            // 0x2eae80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2EAE84u;
label_2eae84:
    // 0x2eae84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2eae84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eae88: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2eae88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eae8c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2eae8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eae90: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2eae90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eae94: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2eae94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eae98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2eae98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eae9c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2eae9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eaea0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eaea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eaea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAEA4u;
            // 0x2eaea8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EAEACu;
    // 0x2eaeac: 0x0  nop
    ctx->pc = 0x2eaeacu;
    // NOP
    ctx->pc = 0x2eaeb0u;
}
