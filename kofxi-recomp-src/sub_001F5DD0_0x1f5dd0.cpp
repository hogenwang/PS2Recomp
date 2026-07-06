#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5DD0
// Address: 0x1f5dd0 - 0x1f5fd0
void sub_001F5DD0_0x1f5dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5DD0_0x1f5dd0");
#endif

    switch (ctx->pc) {
        case 0x1f5e08u: goto label_1f5e08;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e30u: goto label_1f5e30;
        case 0x1f5e50u: goto label_1f5e50;
        case 0x1f5f00u: goto label_1f5f00;
        case 0x1f5f10u: goto label_1f5f10;
        case 0x1f5f3cu: goto label_1f5f3c;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f5f9cu: goto label_1f5f9c;
        default: break;
    }

    ctx->pc = 0x1f5dd0u;

    // 0x1f5dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ddc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f5ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f5de0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f5de0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5de8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5dec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f5decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f5df0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f5df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f5df4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f5df8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f5df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f5dfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f5e00: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1F5E00u;
    SET_GPR_U32(ctx, 31, 0x1F5E08u);
    ctx->pc = 0x1F5E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E00u;
            // 0x1f5e04: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E08u; }
        if (ctx->pc != 0x1F5E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E08u; }
        if (ctx->pc != 0x1F5E08u) { return; }
    }
    ctx->pc = 0x1F5E08u;
label_1f5e08:
    // 0x1f5e08: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1f5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1f5e0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5E0Cu;
    {
        const bool branch_taken_0x1f5e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e0c) {
            ctx->pc = 0x1F5E28u;
            goto label_1f5e28;
        }
    }
    ctx->pc = 0x1F5E14u;
    // 0x1f5e14: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1F5E14u;
    SET_GPR_U32(ctx, 31, 0x1F5E1Cu);
    ctx->pc = 0x1F5E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E14u;
            // 0x1f5e18: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E1Cu; }
        if (ctx->pc != 0x1F5E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E1Cu; }
        if (ctx->pc != 0x1F5E1Cu) { return; }
    }
    ctx->pc = 0x1F5E1Cu;
label_1f5e1c:
    // 0x1f5e1c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1F5E1Cu;
    {
        const bool branch_taken_0x1f5e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E1Cu;
            // 0x1f5e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e1c) {
            ctx->pc = 0x1F5FA0u;
            goto label_1f5fa0;
        }
    }
    ctx->pc = 0x1F5E24u;
    // 0x1f5e24: 0x0  nop
    ctx->pc = 0x1f5e24u;
    // NOP
label_1f5e28:
    // 0x1f5e28: 0xc07d672  jal         func_1F59C8
    ctx->pc = 0x1F5E28u;
    SET_GPR_U32(ctx, 31, 0x1F5E30u);
    ctx->pc = 0x1F5E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E28u;
            // 0x1f5e2c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F59C8u;
    if (runtime->hasFunction(0x1F59C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F59C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E30u; }
        if (ctx->pc != 0x1F5E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F59C8_0x1f59c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E30u; }
        if (ctx->pc != 0x1F5E30u) { return; }
    }
    ctx->pc = 0x1F5E30u;
label_1f5e30:
    // 0x1f5e30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5e34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5e38: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1f5e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1f5e3c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1f5e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1f5e40: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1f5e40u;
    SET_GPR_S32(ctx, 21, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1f5e44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1f5e48: 0xc07d644  jal         func_1F5910
    ctx->pc = 0x1F5E48u;
    SET_GPR_U32(ctx, 31, 0x1F5E50u);
    ctx->pc = 0x1F5E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E48u;
            // 0x1f5e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5910u;
    if (runtime->hasFunction(0x1F5910u)) {
        auto targetFn = runtime->lookupFunction(0x1F5910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E50u; }
        if (ctx->pc != 0x1F5E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5910_0x1f5910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E50u; }
        if (ctx->pc != 0x1F5E50u) { return; }
    }
    ctx->pc = 0x1F5E50u;
label_1f5e50:
    // 0x1f5e50: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1f5e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f5e54: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f5e58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f5e5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5E5Cu;
    {
        const bool branch_taken_0x1f5e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e5c) {
            ctx->pc = 0x1F5E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E5Cu;
            // 0x1f5e60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E64u;
            goto label_1f5e64;
        }
    }
    ctx->pc = 0x1F5E64u;
label_1f5e64:
    // 0x1f5e64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5e68: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1f5e68u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f5e6c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f5e70: 0x2010  mfhi        $a0
    ctx->pc = 0x1f5e70u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f5e74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5e78: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f5e7c: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1f5e7cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f5e80: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1f5e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1f5e84: 0x2810  mfhi        $a1
    ctx->pc = 0x1f5e84u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f5e88: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x1f5e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5e8c: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x1f5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x1f5e90: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1f5e90u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f5e94: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1f5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f5e98: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1f5e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f5e9c: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x1f5ea0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f5ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ea4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1f5ea4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1f5ea8: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x1f5ea8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1f5eac: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x1f5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    // 0x1f5eb0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1f5eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5eb4: 0x8010  mfhi        $s0
    ctx->pc = 0x1f5eb4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1f5eb8: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F5EB8u;
    {
        const bool branch_taken_0x1f5eb8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F5EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EB8u;
            // 0x1f5ebc: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5eb8) {
            ctx->pc = 0x1F5F00u;
            goto label_1f5f00;
        }
    }
    ctx->pc = 0x1F5EC0u;
    // 0x1f5ec0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1f5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1f5ec4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f5ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5ec8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f5ecc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5ECCu;
    {
        const bool branch_taken_0x1f5ecc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ecc) {
            ctx->pc = 0x1F5ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5ECCu;
            // 0x1f5ed0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5ED4u;
            goto label_1f5ed4;
        }
    }
    ctx->pc = 0x1F5ED4u;
label_1f5ed4:
    // 0x1f5ed4: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1f5ed4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f5ed8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f5ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5edc: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1f5edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f5ee0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f5ee0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5ee4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5ee8: 0x2010  mfhi        $a0
    ctx->pc = 0x1f5ee8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f5eec: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x1f5eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x1f5ef0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f5ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1f5ef4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1f5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1f5ef8: 0xc07d68c  jal         func_1F5A30
    ctx->pc = 0x1F5EF8u;
    SET_GPR_U32(ctx, 31, 0x1F5F00u);
    ctx->pc = 0x1F5EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EF8u;
            // 0x1f5efc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A30u;
    if (runtime->hasFunction(0x1F5A30u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F00u; }
        if (ctx->pc != 0x1F5F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5A30_0x1f5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F00u; }
        if (ctx->pc != 0x1F5F00u) { return; }
    }
    ctx->pc = 0x1F5F00u;
label_1f5f00:
    // 0x1f5f00: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F5F00u;
    {
        const bool branch_taken_0x1f5f00 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F5F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F00u;
            // 0x1f5f04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f00) {
            ctx->pc = 0x1F5F64u;
            goto label_1f5f64;
        }
    }
    ctx->pc = 0x1F5F08u;
    // 0x1f5f08: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x1f5f08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1f5f0c: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1f5f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f5f10:
    // 0x1f5f10: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f5f14: 0x2543826  xor         $a3, $s2, $s4
    ctx->pc = 0x1f5f14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
    // 0x1f5f18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5f1c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1f5f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1f5f20: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x1f5f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x1f5f24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5f2c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1f5f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f5f30: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x1f5f30u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x1f5f34: 0xc07d68c  jal         func_1F5A30
    ctx->pc = 0x1F5F34u;
    SET_GPR_U32(ctx, 31, 0x1F5F3Cu);
    ctx->pc = 0x1F5F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F34u;
            // 0x1f5f38: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A30u;
    if (runtime->hasFunction(0x1F5A30u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F3Cu; }
        if (ctx->pc != 0x1F5F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5A30_0x1f5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F3Cu; }
        if (ctx->pc != 0x1F5F3Cu) { return; }
    }
    ctx->pc = 0x1F5F3Cu;
label_1f5f3c:
    // 0x1f5f3c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1f5f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5f40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f5f44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f5f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f5f48: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x1f5f48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f5f4c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f5f4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f5f50: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5F50u;
    {
        const bool branch_taken_0x1f5f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f50) {
            ctx->pc = 0x1F5F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F50u;
            // 0x1f5f54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5F58u;
            goto label_1f5f58;
        }
    }
    ctx->pc = 0x1F5F58u;
label_1f5f58:
    // 0x1f5f58: 0x2010  mfhi        $a0
    ctx->pc = 0x1f5f58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f5f5c: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F5F5Cu;
    {
        const bool branch_taken_0x1f5f5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F5Cu;
            // 0x1f5f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f5c) {
            ctx->pc = 0x1F5F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5f10;
        }
    }
    ctx->pc = 0x1F5F64u;
label_1f5f64:
    // 0x1f5f64: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f5f68: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f5f6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5F6Cu;
    {
        const bool branch_taken_0x1f5f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F6Cu;
            // 0x1f5f70: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f6c) {
            ctx->pc = 0x1F5F94u;
            goto label_1f5f94;
        }
    }
    ctx->pc = 0x1F5F74u;
    // 0x1f5f74: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5F74u;
    {
        const bool branch_taken_0x1f5f74 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F74u;
            // 0x1f5f78: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f74) {
            ctx->pc = 0x1F5F8Cu;
            goto label_1f5f8c;
        }
    }
    ctx->pc = 0x1F5F7Cu;
    // 0x1f5f7c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1f5f80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f5f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f5f84: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1f5f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1f5f88: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x1f5f88u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f5f8c:
    // 0x1f5f8c: 0xc07d672  jal         func_1F59C8
    ctx->pc = 0x1F5F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F94u);
    ctx->pc = 0x1F5F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F8Cu;
            // 0x1f5f90: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F59C8u;
    if (runtime->hasFunction(0x1F59C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F59C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F94u; }
        if (ctx->pc != 0x1F5F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F59C8_0x1f59c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F94u; }
        if (ctx->pc != 0x1F5F94u) { return; }
    }
    ctx->pc = 0x1F5F94u;
label_1f5f94:
    // 0x1f5f94: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1F5F94u;
    SET_GPR_U32(ctx, 31, 0x1F5F9Cu);
    ctx->pc = 0x1F5F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F94u;
            // 0x1f5f98: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F9Cu; }
        if (ctx->pc != 0x1F5F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F9Cu; }
        if (ctx->pc != 0x1F5F9Cu) { return; }
    }
    ctx->pc = 0x1F5F9Cu;
label_1f5f9c:
    // 0x1f5f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5fa0:
    // 0x1f5fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5fa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5fac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f5facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5fb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f5fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5fb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f5fb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5fb8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f5fb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5fbc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f5fbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FC4u;
            // 0x1f5fc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5FCCu;
    // 0x1f5fcc: 0x0  nop
    ctx->pc = 0x1f5fccu;
    // NOP
    ctx->pc = 0x1f5fd0u;
}
