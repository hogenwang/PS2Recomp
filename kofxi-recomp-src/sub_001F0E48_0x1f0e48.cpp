#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0E48
// Address: 0x1f0e48 - 0x1f0fa0
void sub_001F0E48_0x1f0e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0E48_0x1f0e48");
#endif

    switch (ctx->pc) {
        case 0x1f0e8cu: goto label_1f0e8c;
        case 0x1f0ea0u: goto label_1f0ea0;
        case 0x1f0ef8u: goto label_1f0ef8;
        case 0x1f0f10u: goto label_1f0f10;
        case 0x1f0f20u: goto label_1f0f20;
        case 0x1f0f28u: goto label_1f0f28;
        case 0x1f0f58u: goto label_1f0f58;
        case 0x1f0f6cu: goto label_1f0f6c;
        default: break;
    }

    ctx->pc = 0x1f0e48u;

    // 0x1f0e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f0e4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f0e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f0e50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f0e54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f0e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e58: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f0e5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f0e5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e60: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f0e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f0e64: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f0e64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f0e6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f0e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f0e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f0e74: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f0e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f0e78: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f0e7c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1f0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1f0e80: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1f0e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f0e84: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1F0E84u;
    SET_GPR_U32(ctx, 31, 0x1F0E8Cu);
    ctx->pc = 0x1F0E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E84u;
            // 0x1f0e88: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (runtime->hasFunction(0x1D8C98u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E8Cu; }
        if (ctx->pc != 0x1F0E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C98_0x1d8c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E8Cu; }
        if (ctx->pc != 0x1F0E8Cu) { return; }
    }
    ctx->pc = 0x1F0E8Cu;
label_1f0e8c:
    // 0x1f0e8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e90: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0E90u;
    {
        const bool branch_taken_0x1f0e90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e90) {
            ctx->pc = 0x1F0E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E90u;
            // 0x1f0e94: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0EB8u;
            goto label_1f0eb8;
        }
    }
    ctx->pc = 0x1F0E98u;
    // 0x1f0e98: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F0E98u;
    {
        const bool branch_taken_0x1f0e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e98) {
            ctx->pc = 0x1F0F64u;
            goto label_1f0f64;
        }
    }
    ctx->pc = 0x1F0EA0u;
label_1f0ea0:
    // 0x1f0ea0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f0ea4: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x1f0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x1f0ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0eac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f0eb0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1F0EB0u;
    {
        const bool branch_taken_0x1f0eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EB0u;
            // 0x1f0eb4: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0eb0) {
            ctx->pc = 0x1F0F74u;
            goto label_1f0f74;
        }
    }
    ctx->pc = 0x1F0EB8u;
label_1f0eb8:
    // 0x1f0eb8: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F0EB8u;
    {
        const bool branch_taken_0x1f0eb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EB8u;
            // 0x1f0ebc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0eb8) {
            ctx->pc = 0x1F0F74u;
            goto label_1f0f74;
        }
    }
    ctx->pc = 0x1F0EC0u;
    // 0x1f0ec0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1f0ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f0ec4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f0ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f0ec8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1f0ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ecc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f0eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ed0: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1f0ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f0ed4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x1f0ed4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1f0ed8: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x1f0ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f0edc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f0edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f0ee0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f0ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ee4: 0xe2800b  movn        $s0, $a3, $v0
    ctx->pc = 0x1f0ee4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x1f0ee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0eec: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x1f0eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1f0ef0: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F0EF0u;
    SET_GPR_U32(ctx, 31, 0x1F0EF8u);
    ctx->pc = 0x1F0EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EF0u;
            // 0x1f0ef4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0EF8u; }
        if (ctx->pc != 0x1F0EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0EF8u; }
        if (ctx->pc != 0x1F0EF8u) { return; }
    }
    ctx->pc = 0x1F0EF8u;
label_1f0ef8:
    // 0x1f0ef8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f0efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f0efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f00: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f0f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1f0f04: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x1f0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x1f0f08: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F0F08u;
    SET_GPR_U32(ctx, 31, 0x1F0F10u);
    ctx->pc = 0x1F0F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F08u;
            // 0x1f0f0c: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F10u; }
        if (ctx->pc != 0x1F0F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F10u; }
        if (ctx->pc != 0x1F0F10u) { return; }
    }
    ctx->pc = 0x1F0F10u;
label_1f0f10:
    // 0x1f0f10: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1f0f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f0f14: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0F14u;
    {
        const bool branch_taken_0x1f0f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f14) {
            ctx->pc = 0x1F0F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F14u;
            // 0x1f0f18: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0F4Cu;
            goto label_1f0f4c;
        }
    }
    ctx->pc = 0x1F0F1Cu;
    // 0x1f0f1c: 0x0  nop
    ctx->pc = 0x1f0f1cu;
    // NOP
label_1f0f20:
    // 0x1f0f20: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1F0F20u;
    SET_GPR_U32(ctx, 31, 0x1F0F28u);
    ctx->pc = 0x1F0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F20u;
            // 0x1f0f24: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F28u; }
        if (ctx->pc != 0x1F0F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F28u; }
        if (ctx->pc != 0x1F0F28u) { return; }
    }
    ctx->pc = 0x1F0F28u;
label_1f0f28:
    // 0x1f0f28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f0f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f2c: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x1f0f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1f0f30: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1F0F30u;
    {
        const bool branch_taken_0x1f0f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f30) {
            ctx->pc = 0x1F0F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F30u;
            // 0x1f0f34: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f0ea0;
        }
    }
    ctx->pc = 0x1F0F38u;
    // 0x1f0f38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f0f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f0f3c: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x1f0f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f0f40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F0F40u;
    {
        const bool branch_taken_0x1f0f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f40) {
            ctx->pc = 0x1F0F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f0f20;
        }
    }
    ctx->pc = 0x1F0F48u;
    // 0x1f0f48: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1f0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f0f4c:
    // 0x1f0f4c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f0f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f50: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1F0F50u;
    SET_GPR_U32(ctx, 31, 0x1F0F58u);
    ctx->pc = 0x1F0F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F50u;
            // 0x1f0f54: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (runtime->hasFunction(0x1D8C98u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F58u; }
        if (ctx->pc != 0x1F0F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C98_0x1d8c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F58u; }
        if (ctx->pc != 0x1F0F58u) { return; }
    }
    ctx->pc = 0x1F0F58u;
label_1f0f58:
    // 0x1f0f58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f5c: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F5Cu;
    {
        const bool branch_taken_0x1f0f5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f5c) {
            ctx->pc = 0x1F0F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F5Cu;
            // 0x1f0f60: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0F78u;
            goto label_1f0f78;
        }
    }
    ctx->pc = 0x1F0F64u;
label_1f0f64:
    // 0x1f0f64: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1F0F64u;
    SET_GPR_U32(ctx, 31, 0x1F0F6Cu);
    ctx->pc = 0x1F0F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F64u;
            // 0x1f0f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F6Cu; }
        if (ctx->pc != 0x1F0F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F6Cu; }
        if (ctx->pc != 0x1F0F6Cu) { return; }
    }
    ctx->pc = 0x1F0F6Cu;
label_1f0f6c:
    // 0x1f0f6c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1f0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1f0f70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f0f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f74:
    // 0x1f0f74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f0f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0f78:
    // 0x1f0f78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f0f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0f7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f0f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0f80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f0f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0f84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f0f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0f88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f0f88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f0f8c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f0f8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0f90: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f0f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f0f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F94u;
            // 0x1f0f98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0F9Cu;
    // 0x1f0f9c: 0x0  nop
    ctx->pc = 0x1f0f9cu;
    // NOP
    ctx->pc = 0x1f0fa0u;
}
