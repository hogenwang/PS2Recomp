#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6B88
// Address: 0x1f6b88 - 0x1f6cb8
void sub_001F6B88_0x1f6b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6B88_0x1f6b88");
#endif

    switch (ctx->pc) {
        case 0x1f6bfcu: goto label_1f6bfc;
        case 0x1f6c0cu: goto label_1f6c0c;
        case 0x1f6c20u: goto label_1f6c20;
        case 0x1f6c3cu: goto label_1f6c3c;
        case 0x1f6c4cu: goto label_1f6c4c;
        case 0x1f6c60u: goto label_1f6c60;
        case 0x1f6c70u: goto label_1f6c70;
        case 0x1f6c80u: goto label_1f6c80;
        default: break;
    }

    ctx->pc = 0x1f6b88u;

    // 0x1f6b88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f6b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6b94: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1f6b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6b9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f6b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ba0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f6ba4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1f6ba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ba8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1f6ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1f6bac: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1f6bb0: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1f6bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1f6bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6bb8: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x1f6bb8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1f6bbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f6bc0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f6bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f6bc4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f6bc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bc8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f6bcc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1f6bccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6bd4: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1f6bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f6bd8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f6bdc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f6bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6be0: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F6BE0u;
    {
        const bool branch_taken_0x1f6be0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BE0u;
            // 0x1f6be4: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6be0) {
            ctx->pc = 0x1F6C84u;
            goto label_1f6c84;
        }
    }
    ctx->pc = 0x1F6BE8u;
    // 0x1f6be8: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6BE8u;
    {
        const bool branch_taken_0x1f6be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6be8) {
            ctx->pc = 0x1F6BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BE8u;
            // 0x1f6bec: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C28u;
            goto label_1f6c28;
        }
    }
    ctx->pc = 0x1F6BF0u;
    // 0x1f6bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bf4: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6BF4u;
    SET_GPR_U32(ctx, 31, 0x1F6BFCu);
    ctx->pc = 0x1F6BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BF4u;
            // 0x1f6bf8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BFCu; }
        if (ctx->pc != 0x1F6BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BFCu; }
        if (ctx->pc != 0x1F6BFCu) { return; }
    }
    ctx->pc = 0x1F6BFCu;
label_1f6bfc:
    // 0x1f6bfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f6bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c00: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x1f6c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1f6c04: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6C04u;
    SET_GPR_U32(ctx, 31, 0x1F6C0Cu);
    ctx->pc = 0x1F6C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C04u;
            // 0x1f6c08: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C0Cu; }
        if (ctx->pc != 0x1F6C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C0Cu; }
        if (ctx->pc != 0x1F6C0Cu) { return; }
    }
    ctx->pc = 0x1F6C0Cu;
label_1f6c0c:
    // 0x1f6c0c: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1f6c10: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1f6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1f6c14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f6c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c18: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6C18u;
    SET_GPR_U32(ctx, 31, 0x1F6C20u);
    ctx->pc = 0x1F6C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C18u;
            // 0x1f6c1c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C20u; }
        if (ctx->pc != 0x1F6C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C20u; }
        if (ctx->pc != 0x1F6C20u) { return; }
    }
    ctx->pc = 0x1F6C20u;
label_1f6c20:
    // 0x1f6c20: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F6C20u;
    {
        const bool branch_taken_0x1f6c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C20u;
            // 0x1f6c24: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c20) {
            ctx->pc = 0x1F6C84u;
            goto label_1f6c84;
        }
    }
    ctx->pc = 0x1F6C28u;
label_1f6c28:
    // 0x1f6c28: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x1f6c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f6c2c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F6C2Cu;
    {
        const bool branch_taken_0x1f6c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C2Cu;
            // 0x1f6c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c2c) {
            ctx->pc = 0x1F6C68u;
            goto label_1f6c68;
        }
    }
    ctx->pc = 0x1F6C34u;
    // 0x1f6c34: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6C34u;
    SET_GPR_U32(ctx, 31, 0x1F6C3Cu);
    ctx->pc = 0x1F6C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C34u;
            // 0x1f6c38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C3Cu; }
        if (ctx->pc != 0x1F6C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C3Cu; }
        if (ctx->pc != 0x1F6C3Cu) { return; }
    }
    ctx->pc = 0x1F6C3Cu;
label_1f6c3c:
    // 0x1f6c3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f6c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f6c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c44: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6C44u;
    SET_GPR_U32(ctx, 31, 0x1F6C4Cu);
    ctx->pc = 0x1F6C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C44u;
            // 0x1f6c48: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C4Cu; }
        if (ctx->pc != 0x1F6C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C4Cu; }
        if (ctx->pc != 0x1F6C4Cu) { return; }
    }
    ctx->pc = 0x1F6C4Cu;
label_1f6c4c:
    // 0x1f6c4c: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1f6c50: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x1f6c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1f6c54: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x1f6c54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1f6c58: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6C58u;
    SET_GPR_U32(ctx, 31, 0x1F6C60u);
    ctx->pc = 0x1F6C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C58u;
            // 0x1f6c5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C60u; }
        if (ctx->pc != 0x1F6C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C60u; }
        if (ctx->pc != 0x1F6C60u) { return; }
    }
    ctx->pc = 0x1F6C60u;
label_1f6c60:
    // 0x1f6c60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6C60u;
    {
        const bool branch_taken_0x1f6c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C60u;
            // 0x1f6c64: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c60) {
            ctx->pc = 0x1F6C84u;
            goto label_1f6c84;
        }
    }
    ctx->pc = 0x1F6C68u;
label_1f6c68:
    // 0x1f6c68: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6C68u;
    SET_GPR_U32(ctx, 31, 0x1F6C70u);
    ctx->pc = 0x1F6C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C68u;
            // 0x1f6c6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C70u; }
        if (ctx->pc != 0x1F6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C70u; }
        if (ctx->pc != 0x1F6C70u) { return; }
    }
    ctx->pc = 0x1F6C70u;
label_1f6c70:
    // 0x1f6c70: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1f6c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f6c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c78: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F6C78u;
    SET_GPR_U32(ctx, 31, 0x1F6C80u);
    ctx->pc = 0x1F6C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C78u;
            // 0x1f6c7c: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C80u; }
        if (ctx->pc != 0x1F6C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C80u; }
        if (ctx->pc != 0x1F6C80u) { return; }
    }
    ctx->pc = 0x1F6C80u;
label_1f6c80:
    // 0x1f6c80: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1f6c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f6c84:
    // 0x1f6c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6c8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6c90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6c90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6c94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6c94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6c98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6c98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6c9c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f6c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6ca0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f6ca0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6ca4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1f6ca4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6ca8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f6ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CACu;
            // 0x1f6cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6CB4u;
    // 0x1f6cb4: 0x0  nop
    ctx->pc = 0x1f6cb4u;
    // NOP
    ctx->pc = 0x1f6cb8u;
}
