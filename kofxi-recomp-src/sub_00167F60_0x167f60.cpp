#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167F60
// Address: 0x167f60 - 0x1680b0
void sub_00167F60_0x167f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167F60_0x167f60");
#endif

    switch (ctx->pc) {
        case 0x167fb0u: goto label_167fb0;
        case 0x167fc8u: goto label_167fc8;
        case 0x168014u: goto label_168014;
        case 0x168060u: goto label_168060;
        case 0x168080u: goto label_168080;
        default: break;
    }

    ctx->pc = 0x167f60u;

    // 0x167f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167f64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167f70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x167f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167f78: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x167f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x167f7c: 0x908303c2  lbu         $v1, 0x3C2($a0)
    ctx->pc = 0x167f7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 962)));
    // 0x167f80: 0x949103ba  lhu         $s1, 0x3BA($a0)
    ctx->pc = 0x167f80u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 954)));
    // 0x167f84: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x167f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x167f88: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x167f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167f8c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x167F8Cu;
    {
        const bool branch_taken_0x167f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167F8Cu;
            // 0x167f90: 0x58082  srl         $s0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f8c) {
            ctx->pc = 0x168090u;
            goto label_168090;
        }
    }
    ctx->pc = 0x167F94u;
    // 0x167f94: 0x964203be  lhu         $v0, 0x3BE($s2)
    ctx->pc = 0x167f94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 958)));
    // 0x167f98: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x167f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x167f9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x167F9Cu;
    {
        const bool branch_taken_0x167f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f9c) {
            ctx->pc = 0x167FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167F9Cu;
            // 0x167fa0: 0x964400ea  lhu         $a0, 0xEA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167FB4u;
            goto label_167fb4;
        }
    }
    ctx->pc = 0x167FA4u;
    // 0x167fa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167fa8: 0xc06266c  jal         func_1899B0
    ctx->pc = 0x167FA8u;
    SET_GPR_U32(ctx, 31, 0x167FB0u);
    ctx->pc = 0x167FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167FA8u;
            // 0x167fac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899B0u;
    if (runtime->hasFunction(0x1899B0u)) {
        auto targetFn = runtime->lookupFunction(0x1899B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FB0u; }
        if (ctx->pc != 0x167FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899B0_0x1899b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FB0u; }
        if (ctx->pc != 0x167FB0u) { return; }
    }
    ctx->pc = 0x167FB0u;
label_167fb0:
    // 0x167fb0: 0x964400ea  lhu         $a0, 0xEA($s2)
    ctx->pc = 0x167fb0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
label_167fb4:
    // 0x167fb4: 0x924500f7  lbu         $a1, 0xF7($s2)
    ctx->pc = 0x167fb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x167fb8: 0x964600ec  lhu         $a2, 0xEC($s2)
    ctx->pc = 0x167fb8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x167fbc: 0x8e4800f8  lw          $t0, 0xF8($s2)
    ctx->pc = 0x167fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x167fc0: 0xc059f80  jal         func_167E00
    ctx->pc = 0x167FC0u;
    SET_GPR_U32(ctx, 31, 0x167FC8u);
    ctx->pc = 0x167FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167FC0u;
            // 0x167fc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167E00u;
    if (runtime->hasFunction(0x167E00u)) {
        auto targetFn = runtime->lookupFunction(0x167E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FC8u; }
        if (ctx->pc != 0x167FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167E00_0x167e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FC8u; }
        if (ctx->pc != 0x167FC8u) { return; }
    }
    ctx->pc = 0x167FC8u;
label_167fc8:
    // 0x167fc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x167fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x167fcc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x167fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x167fd0: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x167FD0u;
    {
        const bool branch_taken_0x167fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167fd0) {
            ctx->pc = 0x167FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167FD0u;
            // 0x167fd4: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16801Cu;
            goto label_16801c;
        }
    }
    ctx->pc = 0x167FD8u;
    // 0x167fd8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x167fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x167fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fe0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x167fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x167fe4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x167fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167fe8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x167fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x167fec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x167fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x167ff0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x167ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x167ff4: 0x2442db5c  addiu       $v0, $v0, -0x24A4
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957916));
    // 0x167ff8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x167ffc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x167ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x168000: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x168000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168004: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168008: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x168008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x16800c: 0xc06266c  jal         func_1899B0
    ctx->pc = 0x16800Cu;
    SET_GPR_U32(ctx, 31, 0x168014u);
    ctx->pc = 0x168010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16800Cu;
            // 0x168010: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899B0u;
    if (runtime->hasFunction(0x1899B0u)) {
        auto targetFn = runtime->lookupFunction(0x1899B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168014u; }
        if (ctx->pc != 0x168014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899B0_0x1899b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168014u; }
        if (ctx->pc != 0x168014u) { return; }
    }
    ctx->pc = 0x168014u;
label_168014:
    // 0x168014: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x168014u;
    {
        const bool branch_taken_0x168014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168014u;
            // 0x168018: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168014) {
            ctx->pc = 0x168094u;
            goto label_168094;
        }
    }
    ctx->pc = 0x16801Cu;
label_16801c:
    // 0x16801c: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16801Cu;
    {
        const bool branch_taken_0x16801c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16801c) {
            ctx->pc = 0x168020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16801Cu;
            // 0x168020: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x168068u;
            goto label_168068;
        }
    }
    ctx->pc = 0x168024u;
    // 0x168024: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x168024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x168028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16802c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x16802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x168030: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x168030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168034: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x168034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x168038: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x168038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x16803c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x168040: 0x2442db5c  addiu       $v0, $v0, -0x24A4
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957916));
    // 0x168044: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x168044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x168048: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x168048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16804c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x16804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x168050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168054: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x168054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x168058: 0xc06266c  jal         func_1899B0
    ctx->pc = 0x168058u;
    SET_GPR_U32(ctx, 31, 0x168060u);
    ctx->pc = 0x16805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168058u;
            // 0x16805c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899B0u;
    if (runtime->hasFunction(0x1899B0u)) {
        auto targetFn = runtime->lookupFunction(0x1899B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168060u; }
        if (ctx->pc != 0x168060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899B0_0x1899b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168060u; }
        if (ctx->pc != 0x168060u) { return; }
    }
    ctx->pc = 0x168060u;
label_168060:
    // 0x168060: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168060u;
    {
        const bool branch_taken_0x168060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168060) {
            ctx->pc = 0x168090u;
            goto label_168090;
        }
    }
    ctx->pc = 0x168068u;
label_168068:
    // 0x168068: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x168068u;
    {
        const bool branch_taken_0x168068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168068) {
            ctx->pc = 0x168090u;
            goto label_168090;
        }
    }
    ctx->pc = 0x168070u;
    // 0x168070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168078: 0xc06266c  jal         func_1899B0
    ctx->pc = 0x168078u;
    SET_GPR_U32(ctx, 31, 0x168080u);
    ctx->pc = 0x16807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168078u;
            // 0x16807c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899B0u;
    if (runtime->hasFunction(0x1899B0u)) {
        auto targetFn = runtime->lookupFunction(0x1899B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168080u; }
        if (ctx->pc != 0x168080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899B0_0x1899b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168080u; }
        if (ctx->pc != 0x168080u) { return; }
    }
    ctx->pc = 0x168080u;
label_168080:
    // 0x168080: 0x8e440498  lw          $a0, 0x498($s2)
    ctx->pc = 0x168080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
    // 0x168084: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x168084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x168088: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x168088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16808c: 0xae430498  sw          $v1, 0x498($s2)
    ctx->pc = 0x16808cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
label_168090:
    // 0x168090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168094:
    // 0x168094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16809c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16809cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1680a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1680A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1680A0u;
            // 0x1680a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1680A8u;
    // 0x1680a8: 0x0  nop
    ctx->pc = 0x1680a8u;
    // NOP
    // 0x1680ac: 0x0  nop
    ctx->pc = 0x1680acu;
    // NOP
    ctx->pc = 0x1680b0u;
}
