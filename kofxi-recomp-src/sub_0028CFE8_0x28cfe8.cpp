#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CFE8
// Address: 0x28cfe8 - 0x28d4a0
void sub_0028CFE8_0x28cfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CFE8_0x28cfe8");
#endif

    switch (ctx->pc) {
        case 0x28d004u: goto label_28d004;
        case 0x28d02cu: goto label_28d02c;
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d054u: goto label_28d054;
        case 0x28d078u: goto label_28d078;
        case 0x28d090u: goto label_28d090;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d114u: goto label_28d114;
        case 0x28d130u: goto label_28d130;
        case 0x28d148u: goto label_28d148;
        case 0x28d15cu: goto label_28d15c;
        case 0x28d170u: goto label_28d170;
        case 0x28d194u: goto label_28d194;
        case 0x28d1ccu: goto label_28d1cc;
        case 0x28d238u: goto label_28d238;
        case 0x28d2c4u: goto label_28d2c4;
        case 0x28d2e8u: goto label_28d2e8;
        case 0x28d2f0u: goto label_28d2f0;
        case 0x28d308u: goto label_28d308;
        case 0x28d310u: goto label_28d310;
        case 0x28d344u: goto label_28d344;
        case 0x28d358u: goto label_28d358;
        case 0x28d368u: goto label_28d368;
        case 0x28d374u: goto label_28d374;
        case 0x28d390u: goto label_28d390;
        case 0x28d3b0u: goto label_28d3b0;
        case 0x28d3e4u: goto label_28d3e4;
        case 0x28d3f0u: goto label_28d3f0;
        case 0x28d410u: goto label_28d410;
        case 0x28d424u: goto label_28d424;
        case 0x28d440u: goto label_28d440;
        case 0x28d468u: goto label_28d468;
        default: break;
    }

    ctx->pc = 0x28cfe8u;

    // 0x28cfe8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28cfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28cfec: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x28cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x28cff0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28cff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28cff4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x28cff4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cff8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28cffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d000: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_28d004:
    // 0x28d004: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28d004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d008: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x28d008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x28d00c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x28d00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28d010: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28d010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28d014: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28d018: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28d018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28d01c: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28D01Cu;
    {
        const bool branch_taken_0x28d01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D01Cu;
            // 0x28d020: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d01c) {
            ctx->pc = 0x28D114u;
            goto label_28d114;
        }
    }
    ctx->pc = 0x28D024u;
    // 0x28d024: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28D024u;
    SET_GPR_U32(ctx, 31, 0x28D02Cu);
    ctx->pc = 0x28D028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D024u;
            // 0x28d028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D02Cu; }
        if (ctx->pc != 0x28D02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D02Cu; }
        if (ctx->pc != 0x28D02Cu) { return; }
    }
    ctx->pc = 0x28D02Cu;
label_28d02c:
    // 0x28d02c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28D02Cu;
    {
        const bool branch_taken_0x28d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D02Cu;
            // 0x28d030: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d02c) {
            ctx->pc = 0x28D114u;
            goto label_28d114;
        }
    }
    ctx->pc = 0x28D034u;
    // 0x28d034: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x28d034u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d038: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28d03c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x28d03cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28d040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28D040u;
    {
        const bool branch_taken_0x28d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D040u;
            // 0x28d044: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d040) {
            ctx->pc = 0x28D054u;
            goto label_28d054;
        }
    }
    ctx->pc = 0x28D048u;
label_28d048:
    // 0x28d048: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x28d048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28d04c:
    // 0x28d04c: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x28d04cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28d050: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x28d050u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28d054:
    // 0x28d054: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x28d054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x28d058: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x28d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x28d05c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x28d05cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x28d060: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D060u;
    {
        const bool branch_taken_0x28d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D060u;
            // 0x28d064: 0x2e0a82d  daddu       $s5, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d060) {
            ctx->pc = 0x28D074u;
            goto label_28d074;
        }
    }
    ctx->pc = 0x28D068u;
    // 0x28d068: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28D068u;
    {
        const bool branch_taken_0x28d068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d068) {
            ctx->pc = 0x28D06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D068u;
            // 0x28d06c: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D04Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d04c;
        }
    }
    ctx->pc = 0x28D070u;
    // 0x28d070: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x28d070u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28d074:
    // 0x28d074: 0x275a023  subu        $s4, $s3, $s5
    ctx->pc = 0x28d074u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_28d078:
    // 0x28d078: 0x1280fff6  beqz        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x28D078u;
    {
        const bool branch_taken_0x28d078 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D078u;
            // 0x28d07c: 0x2c0b82d  daddu       $s7, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d078) {
            ctx->pc = 0x28D054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d054;
        }
    }
    ctx->pc = 0x28D080u;
    // 0x28d080: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x28D080u;
    {
        const bool branch_taken_0x28d080 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x28D084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D080u;
            // 0x28d084: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d080) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D088u;
    // 0x28d088: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28d08c: 0x0  nop
    ctx->pc = 0x28d08cu;
    // NOP
label_28d090:
    // 0x28d090: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28d090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28d094: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28d094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d098: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28d098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d09c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d0a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28d0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28d0a4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x28D0A4u;
    SET_GPR_U32(ctx, 31, 0x28D0ACu);
    ctx->pc = 0x28D0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0A4u;
            // 0x28d0a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0ACu; }
        if (ctx->pc != 0x28D0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0ACu; }
        if (ctx->pc != 0x28D0ACu) { return; }
    }
    ctx->pc = 0x28D0ACu;
label_28d0ac:
    // 0x28d0ac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x28d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d0b0: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x28d0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28d0b4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x28D0B4u;
    {
        const bool branch_taken_0x28d0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d0b4) {
            ctx->pc = 0x28D0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0B4u;
            // 0x28d0b8: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d090;
        }
    }
    ctx->pc = 0x28D0BCu;
label_28d0bc:
    // 0x28d0bc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28d0c0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28d0c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x28d0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28d0c8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x28D0C8u;
    {
        const bool branch_taken_0x28d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0C8u;
            // 0x28d0cc: 0x2462000a  addiu       $v0, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0c8) {
            ctx->pc = 0x28D17Cu;
            goto label_28d17c;
        }
    }
    ctx->pc = 0x28D0D0u;
    // 0x28d0d0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d0d4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28D0D4u;
    SET_GPR_U32(ctx, 31, 0x28D0DCu);
    ctx->pc = 0x28D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0D4u;
            // 0x28d0d8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0DCu; }
        if (ctx->pc != 0x28D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0DCu; }
        if (ctx->pc != 0x28D0DCu) { return; }
    }
    ctx->pc = 0x28D0DCu;
label_28d0dc:
    // 0x28d0dc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x28d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28d0e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d0e4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28D0E4u;
    SET_GPR_U32(ctx, 31, 0x28D0ECu);
    ctx->pc = 0x28D0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0E4u;
            // 0x28d0e8: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0ECu; }
        if (ctx->pc != 0x28D0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0ECu; }
        if (ctx->pc != 0x28D0ECu) { return; }
    }
    ctx->pc = 0x28D0ECu;
label_28d0ec:
    // 0x28d0ec: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D0ECu;
    {
        const bool branch_taken_0x28d0ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0ECu;
            // 0x28d0f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0ec) {
            ctx->pc = 0x28D0FCu;
            goto label_28d0fc;
        }
    }
    ctx->pc = 0x28D0F4u;
    // 0x28d0f4: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D0F4u;
    {
        const bool branch_taken_0x28d0f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d0f4) {
            ctx->pc = 0x28D0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0F4u;
            // 0x28d0f8: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D11Cu;
            goto label_28d11c;
        }
    }
    ctx->pc = 0x28D0FCu;
label_28d0fc:
    // 0x28d0fc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28d100: 0x240500d5  addiu       $a1, $zero, 0xD5
    ctx->pc = 0x28d100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x28d104: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28d108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d10c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28D10Cu;
    SET_GPR_U32(ctx, 31, 0x28D114u);
    ctx->pc = 0x28D110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D10Cu;
            // 0x28d110: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D114u; }
        if (ctx->pc != 0x28D114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D114u; }
        if (ctx->pc != 0x28D114u) { return; }
    }
    ctx->pc = 0x28D114u;
label_28d114:
    // 0x28d114: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28D114u;
    {
        const bool branch_taken_0x28d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D114u;
            // 0x28d118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d114) {
            ctx->pc = 0x28D204u;
            goto label_28d204;
        }
    }
    ctx->pc = 0x28D11Cu;
label_28d11c:
    // 0x28d11c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d120: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x28d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28d124: 0x24c6fff6  addiu       $a2, $a2, -0xA
    ctx->pc = 0x28d124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967286));
    // 0x28d128: 0xc049c48  jal         func_127120
    ctx->pc = 0x28D128u;
    SET_GPR_U32(ctx, 31, 0x28D130u);
    ctx->pc = 0x28D12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D128u;
            // 0x28d12c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D130u; }
        if (ctx->pc != 0x28D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D130u; }
        if (ctx->pc != 0x28D130u) { return; }
    }
    ctx->pc = 0x28D130u;
label_28d130:
    // 0x28d130: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x28d130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28d134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d138: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x28d138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28d13c: 0x24c6fff6  addiu       $a2, $a2, -0xA
    ctx->pc = 0x28d13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967286));
    // 0x28d140: 0xc049c48  jal         func_127120
    ctx->pc = 0x28D140u;
    SET_GPR_U32(ctx, 31, 0x28D148u);
    ctx->pc = 0x28D144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D140u;
            // 0x28d144: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D148u; }
        if (ctx->pc != 0x28D148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D148u; }
        if (ctx->pc != 0x28D148u) { return; }
    }
    ctx->pc = 0x28D148u;
label_28d148:
    // 0x28d148: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x28d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28d14c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D14Cu;
    {
        const bool branch_taken_0x28d14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d14c) {
            ctx->pc = 0x28D150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D14Cu;
            // 0x28d150: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D160u;
            goto label_28d160;
        }
    }
    ctx->pc = 0x28D154u;
    // 0x28d154: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28D154u;
    SET_GPR_U32(ctx, 31, 0x28D15Cu);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D15Cu; }
        if (ctx->pc != 0x28D15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D15Cu; }
        if (ctx->pc != 0x28D15Cu) { return; }
    }
    ctx->pc = 0x28D15Cu;
label_28d15c:
    // 0x28d15c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x28d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28d160:
    // 0x28d160: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D160u;
    {
        const bool branch_taken_0x28d160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d160) {
            ctx->pc = 0x28D164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D160u;
            // 0x28d164: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D174u;
            goto label_28d174;
        }
    }
    ctx->pc = 0x28D168u;
    // 0x28d168: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28D168u;
    SET_GPR_U32(ctx, 31, 0x28D170u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D170u; }
        if (ctx->pc != 0x28D170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D170u; }
        if (ctx->pc != 0x28D170u) { return; }
    }
    ctx->pc = 0x28D170u;
label_28d170:
    // 0x28d170: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x28d170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_28d174:
    // 0x28d174: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x28d174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x28d178: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x28d178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28d17c:
    // 0x28d17c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28d180: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28d180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28d184: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x28d184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d18c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28D18Cu;
    SET_GPR_U32(ctx, 31, 0x28D194u);
    ctx->pc = 0x28D190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D18Cu;
            // 0x28d190: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D194u; }
        if (ctx->pc != 0x28D194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D194u; }
        if (ctx->pc != 0x28D194u) { return; }
    }
    ctx->pc = 0x28D194u;
label_28d194:
    // 0x28d194: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d198: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x28d198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28d19c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d1a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28d1a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28d1a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d1ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28d1b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28d1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d1b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d1bc: 0x1080ffd5  beqz        $a0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x28D1BCu;
    {
        const bool branch_taken_0x28d1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1BCu;
            // 0x28d1c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1bc) {
            ctx->pc = 0x28D114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d114;
        }
    }
    ctx->pc = 0x28D1C4u;
    // 0x28d1c4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x28D1C4u;
    SET_GPR_U32(ctx, 31, 0x28D1CCu);
    ctx->pc = 0x28D1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1C4u;
            // 0x28d1c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1CCu; }
        if (ctx->pc != 0x28D1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1CCu; }
        if (ctx->pc != 0x28D1CCu) { return; }
    }
    ctx->pc = 0x28D1CCu;
label_28d1cc:
    // 0x28d1cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d1d0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x28d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28d1d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28d1d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28d1dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d1e0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x28d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28d1e4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28d1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28d1e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d1ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d1f0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x28d1f4: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x28d1f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28d1f8: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x28D1F8u;
    {
        const bool branch_taken_0x28d1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1F8u;
            // 0x28d1fc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1f8) {
            ctx->pc = 0x28D048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d048;
        }
    }
    ctx->pc = 0x28D200u;
    // 0x28d200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d204:
    // 0x28d204: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28d204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28d208: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x28d208u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28d20c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x28d20cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d210: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28d210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d214: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28d214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d218: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28d218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d21c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28d21cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d220: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28d220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d224: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28d224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d22c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D22Cu;
            // 0x28d230: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D234u;
    // 0x28d234: 0x0  nop
    ctx->pc = 0x28d234u;
    // NOP
label_28d238:
    // 0x28d238: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x28d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x28d23c: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x28d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x28d240: 0xffb50140  sd          $s5, 0x140($sp)
    ctx->pc = 0x28d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x28d244: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x28d244u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d248: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x28d248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x28d24c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28d24cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d250: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x28d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x28d254: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28d254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d258: 0xffb70160  sd          $s7, 0x160($sp)
    ctx->pc = 0x28d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 23));
    // 0x28d25c: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x28d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x28d260: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x28d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x28d264: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x28d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x28d268: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x28d268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x28d26c: 0xffb10100  sd          $s1, 0x100($sp)
    ctx->pc = 0x28d26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
    // 0x28d270: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x28d270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x28d274: 0xafa700d4  sw          $a3, 0xD4($sp)
    ctx->pc = 0x28d274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 7));
    // 0x28d278: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D278u;
    {
        const bool branch_taken_0x28d278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D278u;
            // 0x28d27c: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d278) {
            ctx->pc = 0x28D288u;
            goto label_28d288;
        }
    }
    ctx->pc = 0x28D280u;
    // 0x28d280: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x28D280u;
    {
        const bool branch_taken_0x28d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D280u;
            // 0x28d284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d280) {
            ctx->pc = 0x28D46Cu;
            goto label_28d46c;
        }
    }
    ctx->pc = 0x28D288u;
label_28d288:
    // 0x28d288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d28c: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D28Cu;
    {
        const bool branch_taken_0x28d28c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D28Cu;
            // 0x28d290: 0xafbe00c0  sw          $fp, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d28c) {
            ctx->pc = 0x28D2ACu;
            goto label_28d2ac;
        }
    }
    ctx->pc = 0x28D294u;
    // 0x28d294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d298: 0x13c20008  beq         $fp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D298u;
    {
        const bool branch_taken_0x28d298 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D298u;
            // 0x28d29c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d298) {
            ctx->pc = 0x28D2BCu;
            goto label_28d2bc;
        }
    }
    ctx->pc = 0x28D2A0u;
    // 0x28d2a0: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x28d2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x28d2a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28D2A4u;
    {
        const bool branch_taken_0x28d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2A4u;
            // 0x28d2a8: 0x240600a5  addiu       $a2, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2a4) {
            ctx->pc = 0x28D2DCu;
            goto label_28d2dc;
        }
    }
    ctx->pc = 0x28D2ACu;
label_28d2ac:
    // 0x28d2ac: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x28d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28d2b0: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x28d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x28d2b4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x28d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x28d2b8: 0xafbd00c4  sw          $sp, 0xC4($sp)
    ctx->pc = 0x28d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 29));
label_28d2bc:
    // 0x28d2bc: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x28D2BCu;
    SET_GPR_U32(ctx, 31, 0x28D2C4u);
    ctx->pc = 0x28CAD0u;
    if (runtime->hasFunction(0x28CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x28CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2C4u; }
        if (ctx->pc != 0x28D2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CAD0_0x28cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2C4u; }
        if (ctx->pc != 0x28D2C4u) { return; }
    }
    ctx->pc = 0x28D2C4u;
label_28d2c4:
    // 0x28d2c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28d2c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2c8: 0x16a0001a  bnez        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x28D2C8u;
    {
        const bool branch_taken_0x28d2c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2C8u;
            // 0x28d2cc: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2c8) {
            ctx->pc = 0x28D334u;
            goto label_28d334;
        }
    }
    ctx->pc = 0x28D2D0u;
    // 0x28d2d0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28d2d4: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x28d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x28d2d8: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x28d2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
label_28d2dc:
    // 0x28d2dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2e0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28D2E0u;
    SET_GPR_U32(ctx, 31, 0x28D2E8u);
    ctx->pc = 0x28D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D2E0u;
            // 0x28d2e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2E8u; }
        if (ctx->pc != 0x28D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D2E8u; }
        if (ctx->pc != 0x28D2E8u) { return; }
    }
    ctx->pc = 0x28D2E8u;
label_28d2e8:
    // 0x28d2e8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x28D2E8u;
    {
        const bool branch_taken_0x28d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d2e8) {
            ctx->pc = 0x28D458u;
            goto label_28d458;
        }
    }
    ctx->pc = 0x28D2F0u;
label_28d2f0:
    // 0x28d2f0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x28d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28d2f4: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x28d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x28d2f8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x28d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28d2fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d300: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28D300u;
    SET_GPR_U32(ctx, 31, 0x28D308u);
    ctx->pc = 0x28D304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D300u;
            // 0x28d304: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D308u; }
        if (ctx->pc != 0x28D308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D308u; }
        if (ctx->pc != 0x28D308u) { return; }
    }
    ctx->pc = 0x28D308u;
label_28d308:
    // 0x28d308: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x28D308u;
    {
        const bool branch_taken_0x28d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d308) {
            ctx->pc = 0x28D458u;
            goto label_28d458;
        }
    }
    ctx->pc = 0x28D310u;
label_28d310:
    // 0x28d310: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d318: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28d318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x28d31c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x28d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28d320: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28d320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28d324: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28d328: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28d32c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x28D32Cu;
    {
        const bool branch_taken_0x28d32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D32Cu;
            // 0x28d330: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d32c) {
            ctx->pc = 0x28D458u;
            goto label_28d458;
        }
    }
    ctx->pc = 0x28D334u;
label_28d334:
    // 0x28d334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d338: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28d338u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d33c: 0xc0afca4  jal         func_2BF290
    ctx->pc = 0x28D33Cu;
    SET_GPR_U32(ctx, 31, 0x28D344u);
    ctx->pc = 0x28D340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D33Cu;
            // 0x28d340: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF290u;
    if (runtime->hasFunction(0x2BF290u)) {
        auto targetFn = runtime->lookupFunction(0x2BF290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D344u; }
        if (ctx->pc != 0x28D344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF290_0x2bf290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D344u; }
        if (ctx->pc != 0x28D344u) { return; }
    }
    ctx->pc = 0x28D344u;
label_28d344:
    // 0x28d344: 0xffa200e0  sd          $v0, 0xE0($sp)
    ctx->pc = 0x28d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 2));
    // 0x28d348: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d34c: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x28D34Cu;
    {
        const bool branch_taken_0x28d34c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28D350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D34Cu;
            // 0x28d350: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d34c) {
            ctx->pc = 0x28D458u;
            goto label_28d458;
        }
    }
    ctx->pc = 0x28D354u;
    // 0x28d354: 0x0  nop
    ctx->pc = 0x28d354u;
    // NOP
label_28d358:
    // 0x28d358: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28d35c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28d360: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28D360u;
    SET_GPR_U32(ctx, 31, 0x28D368u);
    ctx->pc = 0x28D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D360u;
            // 0x28d364: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D368u; }
        if (ctx->pc != 0x28D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D368u; }
        if (ctx->pc != 0x28D368u) { return; }
    }
    ctx->pc = 0x28D368u;
label_28d368:
    // 0x28d368: 0x24450011  addiu       $a1, $v0, 0x11
    ctx->pc = 0x28d368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x28d36c: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x28D36Cu;
    SET_GPR_U32(ctx, 31, 0x28D374u);
    ctx->pc = 0x28D370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D36Cu;
            // 0x28d370: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D374u; }
        if (ctx->pc != 0x28D374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D374u; }
        if (ctx->pc != 0x28D374u) { return; }
    }
    ctx->pc = 0x28D374u;
label_28d374:
    // 0x28d374: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x28D374u;
    {
        const bool branch_taken_0x28d374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D374u;
            // 0x28d378: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d374) {
            ctx->pc = 0x28D2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d2f0;
        }
    }
    ctx->pc = 0x28D37Cu;
    // 0x28d37c: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x28d37cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x28d380: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x28d380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28d384: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28D384u;
    {
        const bool branch_taken_0x28d384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D384u;
            // 0x28d388: 0x27b400c0  addiu       $s4, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d384) {
            ctx->pc = 0x28D3B8u;
            goto label_28d3b8;
        }
    }
    ctx->pc = 0x28D38Cu;
    // 0x28d38c: 0x0  nop
    ctx->pc = 0x28d38cu;
    // NOP
label_28d390:
    // 0x28d390: 0x57c3000a  bnel        $fp, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28D390u;
    {
        const bool branch_taken_0x28d390 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d390) {
            ctx->pc = 0x28D394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D390u;
            // 0x28d394: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D3BCu;
            goto label_28d3bc;
        }
    }
    ctx->pc = 0x28D398u;
    // 0x28d398: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28d39c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x28d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28d3a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28d3a4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x28d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28d3a8: 0xc0a355c  jal         func_28D570
    ctx->pc = 0x28D3A8u;
    SET_GPR_U32(ctx, 31, 0x28D3B0u);
    ctx->pc = 0x28D3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3A8u;
            // 0x28d3ac: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D570u;
    if (runtime->hasFunction(0x28D570u)) {
        auto targetFn = runtime->lookupFunction(0x28D570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3B0u; }
        if (ctx->pc != 0x28D3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D570_0x28d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3B0u; }
        if (ctx->pc != 0x28D3B0u) { return; }
    }
    ctx->pc = 0x28D3B0u;
label_28d3b0:
    // 0x28d3b0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28D3B0u;
    {
        const bool branch_taken_0x28d3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3B0u;
            // 0x28d3b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3b0) {
            ctx->pc = 0x28D3FCu;
            goto label_28d3fc;
        }
    }
    ctx->pc = 0x28D3B8u;
label_28d3b8:
    // 0x28d3b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28d3bc:
    // 0x28d3bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x28d3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3c0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x28d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28d3c4: 0x26c5af80  addiu       $a1, $s6, -0x5080
    ctx->pc = 0x28d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946688));
    // 0x28d3c8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28d3cc: 0xdfa700e0  ld          $a3, 0xE0($sp)
    ctx->pc = 0x28d3ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28d3d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28d3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d3d4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x28d3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x28d3d8: 0x2508af78  addiu       $t0, $t0, -0x5088
    ctx->pc = 0x28d3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946680));
    // 0x28d3dc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x28D3DCu;
    SET_GPR_U32(ctx, 31, 0x28D3E4u);
    ctx->pc = 0x28D3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3DCu;
            // 0x28d3e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3E4u; }
        if (ctx->pc != 0x28D3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3E4u; }
        if (ctx->pc != 0x28D3E4u) { return; }
    }
    ctx->pc = 0x28D3E4u;
label_28d3e4:
    // 0x28d3e4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x28d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28d3e8: 0xc043518  jal         func_10D460
    ctx->pc = 0x28D3E8u;
    SET_GPR_U32(ctx, 31, 0x28D3F0u);
    ctx->pc = 0x28D3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3E8u;
            // 0x28d3ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D460u;
    if (runtime->hasFunction(0x10D460u)) {
        auto targetFn = runtime->lookupFunction(0x10D460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3F0u; }
        if (ctx->pc != 0x28D3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D460_0x10d460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3F0u; }
        if (ctx->pc != 0x28D3F0u) { return; }
    }
    ctx->pc = 0x28D3F0u;
label_28d3f0:
    // 0x28d3f0: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28D3F0u;
    {
        const bool branch_taken_0x28d3f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28D3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3F0u;
            // 0x28d3f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3f0) {
            ctx->pc = 0x28D390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d390;
        }
    }
    ctx->pc = 0x28D3F8u;
    // 0x28d3f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x28d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28d3fc:
    // 0x28d3fc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x28d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28d400: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x28d400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x28d404: 0x24c6af90  addiu       $a2, $a2, -0x5070
    ctx->pc = 0x28d404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946704));
    // 0x28d408: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x28D408u;
    SET_GPR_U32(ctx, 31, 0x28D410u);
    ctx->pc = 0x28D40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D408u;
            // 0x28d40c: 0x24070135  addiu       $a3, $zero, 0x135 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D410u; }
        if (ctx->pc != 0x28D410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D410u; }
        if (ctx->pc != 0x28D410u) { return; }
    }
    ctx->pc = 0x28D410u;
label_28d410:
    // 0x28d410: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x28d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28d414: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28d414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d418: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x28d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28d41c: 0xc0a6246  jal         func_298918
    ctx->pc = 0x28D41Cu;
    SET_GPR_U32(ctx, 31, 0x28D424u);
    ctx->pc = 0x28D420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D41Cu;
            // 0x28d420: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (runtime->hasFunction(0x298918u)) {
        auto targetFn = runtime->lookupFunction(0x298918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D424u; }
        if (ctx->pc != 0x28D424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298918_0x298918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D424u; }
        if (ctx->pc != 0x28D424u) { return; }
    }
    ctx->pc = 0x28D424u;
label_28d424:
    // 0x28d424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d428: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x28d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28d42c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x28d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x28d430: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x28d430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x28d434: 0x24c6af90  addiu       $a2, $a2, -0x5070
    ctx->pc = 0x28d434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946704));
    // 0x28d438: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x28D438u;
    SET_GPR_U32(ctx, 31, 0x28D440u);
    ctx->pc = 0x28D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D438u;
            // 0x28d43c: 0x24070138  addiu       $a3, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D440u; }
        if (ctx->pc != 0x28D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D440u; }
        if (ctx->pc != 0x28D440u) { return; }
    }
    ctx->pc = 0x28D440u;
label_28d440:
    // 0x28d440: 0x1600ffb3  bnez        $s0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x28D440u;
    {
        const bool branch_taken_0x28d440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D440u;
            // 0x28d444: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d440) {
            ctx->pc = 0x28D310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d310;
        }
    }
    ctx->pc = 0x28D448u;
    // 0x28d448: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28d44c: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x28d44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28d450: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x28D450u;
    {
        const bool branch_taken_0x28d450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D450u;
            // 0x28d454: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d450) {
            ctx->pc = 0x28D358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d358;
        }
    }
    ctx->pc = 0x28D458u;
label_28d458:
    // 0x28d458: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D458u;
    {
        const bool branch_taken_0x28d458 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D458u;
            // 0x28d45c: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d458) {
            ctx->pc = 0x28D46Cu;
            goto label_28d46c;
        }
    }
    ctx->pc = 0x28D460u;
    // 0x28d460: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x28D460u;
    SET_GPR_U32(ctx, 31, 0x28D468u);
    ctx->pc = 0x28D464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D460u;
            // 0x28d464: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB28u;
    if (runtime->hasFunction(0x28CB28u)) {
        auto targetFn = runtime->lookupFunction(0x28CB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D468u; }
        if (ctx->pc != 0x28D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB28_0x28cb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D468u; }
        if (ctx->pc != 0x28D468u) { return; }
    }
    ctx->pc = 0x28D468u;
label_28d468:
    // 0x28d468: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x28d468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_28d46c:
    // 0x28d46c: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x28d46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x28d470: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x28d470u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28d474: 0xdfb70160  ld          $s7, 0x160($sp)
    ctx->pc = 0x28d474u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28d478: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x28d478u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28d47c: 0xdfb50140  ld          $s5, 0x140($sp)
    ctx->pc = 0x28d47cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28d480: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x28d480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28d484: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x28d484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28d488: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x28d488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28d48c: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x28d48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28d490: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x28d490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28d494: 0x3e00008  jr          $ra
    ctx->pc = 0x28D494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D494u;
            // 0x28d498: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D49Cu;
    // 0x28d49c: 0x0  nop
    ctx->pc = 0x28d49cu;
    // NOP
    ctx->pc = 0x28d4a0u;
}
