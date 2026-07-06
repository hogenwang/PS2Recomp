#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1C48
// Address: 0x2b1c48 - 0x2b1df0
void sub_002B1C48_0x2b1c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1C48_0x2b1c48");
#endif

    switch (ctx->pc) {
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1ca8u: goto label_2b1ca8;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1cf0u: goto label_2b1cf0;
        case 0x2b1cf8u: goto label_2b1cf8;
        case 0x2b1d14u: goto label_2b1d14;
        case 0x2b1d2cu: goto label_2b1d2c;
        case 0x2b1d68u: goto label_2b1d68;
        case 0x2b1d84u: goto label_2b1d84;
        case 0x2b1da4u: goto label_2b1da4;
        case 0x2b1dacu: goto label_2b1dac;
        default: break;
    }

    ctx->pc = 0x2b1c48u;

    // 0x2b1c48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b1c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b1c4c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b1c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b1c50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b1c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b1c54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b1c54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b1c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c5c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2b1c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b1c6c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b1c6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c70: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b1c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b1c74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b1c78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b1c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b1c7c: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2B1C7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C84u);
    ctx->pc = 0x2B1C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C7Cu;
            // 0x2b1c80: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C84u; }
        if (ctx->pc != 0x2B1C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1C84u; }
        if (ctx->pc != 0x2B1C84u) { return; }
    }
    ctx->pc = 0x2B1C84u;
label_2b1c84:
    // 0x2b1c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c88: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1C88u;
    {
        const bool branch_taken_0x2b1c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C88u;
            // 0x2b1c8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c88) {
            ctx->pc = 0x2B1CA0u;
            goto label_2b1ca0;
        }
    }
    ctx->pc = 0x2B1C90u;
    // 0x2b1c90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1c94: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x2b1c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x2b1c98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1C98u;
    {
        const bool branch_taken_0x2b1c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1C98u;
            // 0x2b1c9c: 0x2406010c  addiu       $a2, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1c98) {
            ctx->pc = 0x2B1CC0u;
            goto label_2b1cc0;
        }
    }
    ctx->pc = 0x2B1CA0u;
label_2b1ca0:
    // 0x2b1ca0: 0xc0ab52e  jal         func_2AD4B8
    ctx->pc = 0x2B1CA0u;
    SET_GPR_U32(ctx, 31, 0x2B1CA8u);
    ctx->pc = 0x2B1CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1CA0u;
            // 0x2b1ca4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD4B8u;
    if (runtime->hasFunction(0x2AD4B8u)) {
        auto targetFn = runtime->lookupFunction(0x2AD4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CA8u; }
        if (ctx->pc != 0x2B1CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD4B8_0x2ad4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CA8u; }
        if (ctx->pc != 0x2B1CA8u) { return; }
    }
    ctx->pc = 0x2B1CA8u;
label_2b1ca8:
    // 0x2b1ca8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b1ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1cac: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1CACu;
    {
        const bool branch_taken_0x2b1cac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2B1CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1CACu;
            // 0x2b1cb0: 0x1298c0  sll         $s3, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1cac) {
            ctx->pc = 0x2B1CD4u;
            goto label_2b1cd4;
        }
    }
    ctx->pc = 0x2B1CB4u;
    // 0x2b1cb4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1cb8: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x2b1cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x2b1cbc: 0x240600f7  addiu       $a2, $zero, 0xF7
    ctx->pc = 0x2b1cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
label_2b1cc0:
    // 0x2b1cc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b1cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1cc4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B1CC4u;
    SET_GPR_U32(ctx, 31, 0x2B1CCCu);
    ctx->pc = 0x2B1CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1CC4u;
            // 0x2b1cc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CCCu; }
        if (ctx->pc != 0x2B1CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CCCu; }
        if (ctx->pc != 0x2B1CCCu) { return; }
    }
    ctx->pc = 0x2B1CCCu;
label_2b1ccc:
    // 0x2b1ccc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2B1CCCu;
    {
        const bool branch_taken_0x2b1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1CCCu;
            // 0x2b1cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ccc) {
            ctx->pc = 0x2B1DC4u;
            goto label_2b1dc4;
        }
    }
    ctx->pc = 0x2B1CD4u;
label_2b1cd4:
    // 0x2b1cd4: 0x26d50044  addiu       $s5, $s6, 0x44
    ctx->pc = 0x2b1cd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 68));
    // 0x2b1cd8: 0x2b38821  addu        $s1, $s5, $s3
    ctx->pc = 0x2b1cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2b1cdc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b1ce0: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B1CE0u;
    {
        const bool branch_taken_0x2b1ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ce0) {
            ctx->pc = 0x2B1D74u;
            goto label_2b1d74;
        }
    }
    ctx->pc = 0x2B1CE8u;
    // 0x2b1ce8: 0xc0aef38  jal         func_2BBCE0
    ctx->pc = 0x2B1CE8u;
    SET_GPR_U32(ctx, 31, 0x2B1CF0u);
    ctx->pc = 0x2B1CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1CE8u;
            // 0x2b1cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBCE0u;
    if (runtime->hasFunction(0x2BBCE0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CF0u; }
        if (ctx->pc != 0x2B1CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBCE0_0x2bbce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CF0u; }
        if (ctx->pc != 0x2B1CF0u) { return; }
    }
    ctx->pc = 0x2B1CF0u;
label_2b1cf0:
    // 0x2b1cf0: 0xc0a56b6  jal         func_295AD8
    ctx->pc = 0x2B1CF0u;
    SET_GPR_U32(ctx, 31, 0x2B1CF8u);
    ctx->pc = 0x295AD8u;
    if (runtime->hasFunction(0x295AD8u)) {
        auto targetFn = runtime->lookupFunction(0x295AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CF8u; }
        if (ctx->pc != 0x2B1CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295AD8_0x295ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1CF8u; }
        if (ctx->pc != 0x2B1CF8u) { return; }
    }
    ctx->pc = 0x2B1CF8u;
label_2b1cf8:
    // 0x2b1cf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b1cfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b1d00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b1d04: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1D04u;
    {
        const bool branch_taken_0x2b1d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b1d04) {
            ctx->pc = 0x2B1D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D04u;
            // 0x2b1d08: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B1D24u;
            goto label_2b1d24;
        }
    }
    ctx->pc = 0x2B1D0Cu;
    // 0x2b1d0c: 0xc0aa582  jal         func_2A9608
    ctx->pc = 0x2B1D0Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D14u);
    ctx->pc = 0x2B1D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D0Cu;
            // 0x2b1d10: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9608u;
    if (runtime->hasFunction(0x2A9608u)) {
        auto targetFn = runtime->lookupFunction(0x2A9608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D14u; }
        if (ctx->pc != 0x2B1D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9608_0x2a9608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D14u; }
        if (ctx->pc != 0x2B1D14u) { return; }
    }
    ctx->pc = 0x2B1D14u;
label_2b1d14:
    // 0x2b1d14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1d18: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B1D18u;
    {
        const bool branch_taken_0x2b1d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d18) {
            ctx->pc = 0x2B1D74u;
            goto label_2b1d74;
        }
    }
    ctx->pc = 0x2B1D20u;
    // 0x2b1d20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b1d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b1d24:
    // 0x2b1d24: 0xc0a3cba  jal         func_28F2E8
    ctx->pc = 0x2B1D24u;
    SET_GPR_U32(ctx, 31, 0x2B1D2Cu);
    ctx->pc = 0x2B1D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D24u;
            // 0x2b1d28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2E8u;
    if (runtime->hasFunction(0x28F2E8u)) {
        auto targetFn = runtime->lookupFunction(0x28F2E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D2Cu; }
        if (ctx->pc != 0x2B1D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2E8_0x28f2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D2Cu; }
        if (ctx->pc != 0x2B1D2Cu) { return; }
    }
    ctx->pc = 0x2B1D2Cu;
label_2b1d2c:
    // 0x2b1d2c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B1D2Cu;
    {
        const bool branch_taken_0x2b1d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D2Cu;
            // 0x2b1d30: 0x2642fffd  addiu       $v0, $s2, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d2c) {
            ctx->pc = 0x2B1D74u;
            goto label_2b1d74;
        }
    }
    ctx->pc = 0x2B1D34u;
    // 0x2b1d34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b1d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b1d38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1D38u;
    {
        const bool branch_taken_0x2b1d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D38u;
            // 0x2b1d3c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d38) {
            ctx->pc = 0x2B1D70u;
            goto label_2b1d70;
        }
    }
    ctx->pc = 0x2B1D40u;
    // 0x2b1d40: 0x3a440003  xori        $a0, $s2, 0x3
    ctx->pc = 0x2b1d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x2b1d44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1d48: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2b1d48u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2b1d4c: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x2b1d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b1d50: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x2b1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2b1d54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b1d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1d58: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1D58u;
    {
        const bool branch_taken_0x2b1d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d58) {
            ctx->pc = 0x2B1D74u;
            goto label_2b1d74;
        }
    }
    ctx->pc = 0x2B1D60u;
    // 0x2b1d60: 0xc0a3cba  jal         func_28F2E8
    ctx->pc = 0x2B1D60u;
    SET_GPR_U32(ctx, 31, 0x2B1D68u);
    ctx->pc = 0x2B1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D60u;
            // 0x2b1d64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F2E8u;
    if (runtime->hasFunction(0x28F2E8u)) {
        auto targetFn = runtime->lookupFunction(0x28F2E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D68u; }
        if (ctx->pc != 0x2B1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F2E8_0x28f2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D68u; }
        if (ctx->pc != 0x2B1D68u) { return; }
    }
    ctx->pc = 0x2B1D68u;
label_2b1d68:
    // 0x2b1d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1D68u;
    {
        const bool branch_taken_0x2b1d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D68u;
            // 0x2b1d6c: 0x2c570001  sltiu       $s7, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d68) {
            ctx->pc = 0x2B1D74u;
            goto label_2b1d74;
        }
    }
    ctx->pc = 0x2B1D70u;
label_2b1d70:
    // 0x2b1d70: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b1d70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1d74:
    // 0x2b1d74: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1D74u;
    {
        const bool branch_taken_0x2b1d74 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D74u;
            // 0x2b1d78: 0x2b38021  addu        $s0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d74) {
            ctx->pc = 0x2B1D88u;
            goto label_2b1d88;
        }
    }
    ctx->pc = 0x2B1D7Cu;
    // 0x2b1d7c: 0xc0a3d02  jal         func_28F408
    ctx->pc = 0x2B1D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D84u);
    ctx->pc = 0x2B1D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1D7Cu;
            // 0x2b1d80: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F408u;
    if (runtime->hasFunction(0x28F408u)) {
        auto targetFn = runtime->lookupFunction(0x28F408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D84u; }
        if (ctx->pc != 0x2B1D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F408_0x28f408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1D84u; }
        if (ctx->pc != 0x2B1D84u) { return; }
    }
    ctx->pc = 0x2B1D84u;
label_2b1d84:
    // 0x2b1d84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2b1d88:
    // 0x2b1d88: 0x26c20040  addiu       $v0, $s6, 0x40
    ctx->pc = 0x2b1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x2b1d8c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x2b1d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b1d90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b1d94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1D94u;
    {
        const bool branch_taken_0x2b1d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d94) {
            ctx->pc = 0x2B1DA4u;
            goto label_2b1da4;
        }
    }
    ctx->pc = 0x2B1D9Cu;
    // 0x2b1d9c: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2B1D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B1DA4u);
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1DA4u; }
        if (ctx->pc != 0x2B1DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1DA4u; }
        if (ctx->pc != 0x2B1DA4u) { return; }
    }
    ctx->pc = 0x2B1DA4u;
label_2b1da4:
    // 0x2b1da4: 0xc0a3966  jal         func_28E598
    ctx->pc = 0x2B1DA4u;
    SET_GPR_U32(ctx, 31, 0x2B1DACu);
    ctx->pc = 0x2B1DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1DA4u;
            // 0x2b1da8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E598u;
    if (runtime->hasFunction(0x28E598u)) {
        auto targetFn = runtime->lookupFunction(0x28E598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1DACu; }
        if (ctx->pc != 0x2B1DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E598_0x28e598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1DACu; }
        if (ctx->pc != 0x2B1DACu) { return; }
    }
    ctx->pc = 0x2B1DACu;
label_2b1dac:
    // 0x2b1dac: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x2b1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2b1db0: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2b1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2b1db4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2b1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2b1db8: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x2b1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x2b1dbc: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x2b1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x2b1dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1dc4:
    // 0x2b1dc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b1dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b1dc8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b1dc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1dcc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b1dccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1dd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b1dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1dd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b1dd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1dd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b1dd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1ddc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1de0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1de8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1DE8u;
            // 0x2b1dec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1DF0u;
    ctx->pc = 0x2b1df0u;
}
