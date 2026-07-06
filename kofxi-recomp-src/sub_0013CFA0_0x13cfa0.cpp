#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CFA0
// Address: 0x13cfa0 - 0x13d0c0
void sub_0013CFA0_0x13cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CFA0_0x13cfa0");
#endif

    switch (ctx->pc) {
        case 0x13d000u: goto label_13d000;
        case 0x13d05cu: goto label_13d05c;
        case 0x13d078u: goto label_13d078;
        case 0x13d08cu: goto label_13d08c;
        case 0x13d0a8u: goto label_13d0a8;
        default: break;
    }

    ctx->pc = 0x13cfa0u;

    // 0x13cfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13cfa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13cfa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cfa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cfac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cfb0: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x13cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x13cfb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cfb8: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x13cfb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x13cfbc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x13cfc0: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x13cfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x13cfc4: 0x2484db55  addiu       $a0, $a0, -0x24AB
    ctx->pc = 0x13cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957909));
    // 0x13cfc8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x13cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13cfcc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13cfd0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x13cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13cfd4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13cfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13cfd8: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x13cfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13cfdc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13cfe0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x13cfe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13cfe4: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13CFE4u;
    {
        const bool branch_taken_0x13cfe4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CFE4u;
            // 0x13cfe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfe4) {
            ctx->pc = 0x13D028u;
            goto label_13d028;
        }
    }
    ctx->pc = 0x13CFECu;
    // 0x13cfec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x13cff0: 0x9205025d  lbu         $a1, 0x25D($s0)
    ctx->pc = 0x13cff0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 605)));
    // 0x13cff4: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x13cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x13cff8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x13cff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13cffc: 0x24e60005  addiu       $a2, $a3, 0x5
    ctx->pc = 0x13cffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
label_13d000:
    // 0x13d000: 0x90e40028  lbu         $a0, 0x28($a3)
    ctx->pc = 0x13d000u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x13d004: 0x54a40004  bnel        $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D004u;
    {
        const bool branch_taken_0x13d004 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d004) {
            ctx->pc = 0x13D008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D004u;
            // 0x13d008: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D018u;
            goto label_13d018;
        }
    }
    ctx->pc = 0x13D00Cu;
    // 0x13d00c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D00Cu;
    {
        const bool branch_taken_0x13d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D00Cu;
            // 0x13d010: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d00c) {
            ctx->pc = 0x13D028u;
            goto label_13d028;
        }
    }
    ctx->pc = 0x13D014u;
    // 0x13d014: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x13d014u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_13d018:
    // 0x13d018: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13d018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13d01c: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x13d01cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13d020: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13D020u;
    {
        const bool branch_taken_0x13d020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D020u;
            // 0x13d024: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d020) {
            ctx->pc = 0x13D000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13d000;
        }
    }
    ctx->pc = 0x13D028u;
label_13d028:
    // 0x13d028: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d02c: 0x50640015  beql        $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13D02Cu;
    {
        const bool branch_taken_0x13d02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d02c) {
            ctx->pc = 0x13D030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D02Cu;
            // 0x13d030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D084u;
            goto label_13d084;
        }
    }
    ctx->pc = 0x13D034u;
    // 0x13d034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d038: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D038u;
    {
        const bool branch_taken_0x13d038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d038) {
            ctx->pc = 0x13D03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D038u;
            // 0x13d03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D054u;
            goto label_13d054;
        }
    }
    ctx->pc = 0x13D040u;
    // 0x13d040: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x13D040u;
    {
        const bool branch_taken_0x13d040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d040) {
            ctx->pc = 0x13D044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D040u;
            // 0x13d044: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D0ACu;
            goto label_13d0ac;
        }
    }
    ctx->pc = 0x13D048u;
    // 0x13d048: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13D048u;
    {
        const bool branch_taken_0x13d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d048) {
            ctx->pc = 0x13D0A8u;
            goto label_13d0a8;
        }
    }
    ctx->pc = 0x13D050u;
    // 0x13d050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d054:
    // 0x13d054: 0xc04f9fc  jal         func_13E7F0
    ctx->pc = 0x13D054u;
    SET_GPR_U32(ctx, 31, 0x13D05Cu);
    ctx->pc = 0x13D058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D054u;
            // 0x13d058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (runtime->hasFunction(0x13E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D05Cu; }
        if (ctx->pc != 0x13D05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E7F0_0x13e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D05Cu; }
        if (ctx->pc != 0x13D05Cu) { return; }
    }
    ctx->pc = 0x13D05Cu;
label_13d05c:
    // 0x13d05c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13D05Cu;
    {
        const bool branch_taken_0x13d05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d05c) {
            ctx->pc = 0x13D0A8u;
            goto label_13d0a8;
        }
    }
    ctx->pc = 0x13D064u;
    // 0x13d064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d068: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x13d068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13d06c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x13d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x13d070: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13D070u;
    SET_GPR_U32(ctx, 31, 0x13D078u);
    ctx->pc = 0x13D074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D070u;
            // 0x13d074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (runtime->hasFunction(0x140740u)) {
        auto targetFn = runtime->lookupFunction(0x140740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D078u; }
        if (ctx->pc != 0x13D078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140740_0x140740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D078u; }
        if (ctx->pc != 0x13D078u) { return; }
    }
    ctx->pc = 0x13D078u;
label_13d078:
    // 0x13d078: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13D078u;
    {
        const bool branch_taken_0x13d078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d078) {
            ctx->pc = 0x13D0A8u;
            goto label_13d0a8;
        }
    }
    ctx->pc = 0x13D080u;
    // 0x13d080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d084:
    // 0x13d084: 0xc04f9fc  jal         func_13E7F0
    ctx->pc = 0x13D084u;
    SET_GPR_U32(ctx, 31, 0x13D08Cu);
    ctx->pc = 0x13D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D084u;
            // 0x13d088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (runtime->hasFunction(0x13E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D08Cu; }
        if (ctx->pc != 0x13D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E7F0_0x13e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D08Cu; }
        if (ctx->pc != 0x13D08Cu) { return; }
    }
    ctx->pc = 0x13D08Cu;
label_13d08c:
    // 0x13d08c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D08Cu;
    {
        const bool branch_taken_0x13d08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d08c) {
            ctx->pc = 0x13D0A8u;
            goto label_13d0a8;
        }
    }
    ctx->pc = 0x13D094u;
    // 0x13d094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d098: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x13d098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13d09c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x13d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x13d0a0: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13D0A0u;
    SET_GPR_U32(ctx, 31, 0x13D0A8u);
    ctx->pc = 0x13D0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0A0u;
            // 0x13d0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (runtime->hasFunction(0x140740u)) {
        auto targetFn = runtime->lookupFunction(0x140740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0A8u; }
        if (ctx->pc != 0x13D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140740_0x140740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0A8u; }
        if (ctx->pc != 0x13D0A8u) { return; }
    }
    ctx->pc = 0x13D0A8u;
label_13d0a8:
    // 0x13d0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d0ac:
    // 0x13d0ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0B0u;
            // 0x13d0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D0B8u;
    // 0x13d0b8: 0x0  nop
    ctx->pc = 0x13d0b8u;
    // NOP
    // 0x13d0bc: 0x0  nop
    ctx->pc = 0x13d0bcu;
    // NOP
    ctx->pc = 0x13d0c0u;
}
