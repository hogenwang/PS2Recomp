#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6018
// Address: 0x1c6018 - 0x1c61b0
void sub_001C6018_0x1c6018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6018_0x1c6018");
#endif

    switch (ctx->pc) {
        case 0x1c6060u: goto label_1c6060;
        case 0x1c608cu: goto label_1c608c;
        case 0x1c60f8u: goto label_1c60f8;
        case 0x1c6108u: goto label_1c6108;
        default: break;
    }

    ctx->pc = 0x1c6018u;

    // 0x1c6018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c601c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6024: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6028: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c6028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c602c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c6030: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c6030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6034: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c6034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c6038: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1c6038u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c603c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c6040: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1c6040u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6048: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c604c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C604Cu;
    {
        const bool branch_taken_0x1c604c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C604Cu;
            // 0x1c6050: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c604c) {
            ctx->pc = 0x1C6068u;
            goto label_1c6068;
        }
    }
    ctx->pc = 0x1C6054u;
    // 0x1c6054: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6058: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C6058u;
    SET_GPR_U32(ctx, 31, 0x1C6060u);
    ctx->pc = 0x1C605Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6058u;
            // 0x1c605c: 0x2484a638  addiu       $a0, $a0, -0x59C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6060u; }
        if (ctx->pc != 0x1C6060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6060u; }
        if (ctx->pc != 0x1C6060u) { return; }
    }
    ctx->pc = 0x1C6060u;
label_1c6060:
    // 0x1c6060: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C6060u;
    {
        const bool branch_taken_0x1c6060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6060u;
            // 0x1c6064: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6060) {
            ctx->pc = 0x1C6188u;
            goto label_1c6188;
        }
    }
    ctx->pc = 0x1C6068u;
label_1c6068:
    // 0x1c6068: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c6068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c606c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1c606cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c6070: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C6070u;
    {
        const bool branch_taken_0x1c6070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6070u;
            // 0x1c6074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6070) {
            ctx->pc = 0x1C6188u;
            goto label_1c6188;
        }
    }
    ctx->pc = 0x1C6078u;
    // 0x1c6078: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6078u;
    {
        const bool branch_taken_0x1c6078 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6078) {
            ctx->pc = 0x1C607Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6078u;
            // 0x1c607c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6098u;
            goto label_1c6098;
        }
    }
    ctx->pc = 0x1C6080u;
    // 0x1c6080: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6084: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C6084u;
    SET_GPR_U32(ctx, 31, 0x1C608Cu);
    ctx->pc = 0x1C6088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6084u;
            // 0x1c6088: 0x2484a668  addiu       $a0, $a0, -0x5998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C608Cu; }
        if (ctx->pc != 0x1C608Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C608Cu; }
        if (ctx->pc != 0x1C608Cu) { return; }
    }
    ctx->pc = 0x1C608Cu;
label_1c608c:
    // 0x1c608c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1C608Cu;
    {
        const bool branch_taken_0x1c608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C608Cu;
            // 0x1c6090: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c608c) {
            ctx->pc = 0x1C6188u;
            goto label_1c6188;
        }
    }
    ctx->pc = 0x1C6094u;
    // 0x1c6094: 0x0  nop
    ctx->pc = 0x1c6094u;
    // NOP
label_1c6098:
    // 0x1c6098: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x1c6098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x1c609c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1c609cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1c60a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c60a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60a4: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x1c60a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c60a8: 0x2467001e  addiu       $a3, $v1, 0x1E
    ctx->pc = 0x1c60a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1c60ac: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x1c60acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c60b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c60b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60b4: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x1c60b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1c60b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1c60bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c60bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c60c0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1c60c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c60c8: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x1c60c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1c60cc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1c60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c60d0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1c60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1c60d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c60d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c60d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c60e0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c60e4: 0x684026  xor         $t0, $v1, $t0
    ctx->pc = 0x1c60e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1c60e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c60ec: 0x68980b  movn        $s3, $v1, $t0
    ctx->pc = 0x1c60ecu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x1c60f0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C60F0u;
    SET_GPR_U32(ctx, 31, 0x1C60F8u);
    ctx->pc = 0x1C60F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C60F0u;
            // 0x1c60f4: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60F8u; }
        if (ctx->pc != 0x1C60F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60F8u; }
        if (ctx->pc != 0x1C60F8u) { return; }
    }
    ctx->pc = 0x1C60F8u;
label_1c60f8:
    // 0x1c60f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c60f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c60fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c60fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6100: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6100u;
    {
        const bool branch_taken_0x1c6100 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6100u;
            // 0x1c6104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6100) {
            ctx->pc = 0x1C6128u;
            goto label_1c6128;
        }
    }
    ctx->pc = 0x1C6108u;
label_1c6108:
    // 0x1c6108: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1c6108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1c610c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c6110: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1c6110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6114: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x1c6114u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c6118: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c611c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6120: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C6120u;
    {
        const bool branch_taken_0x1c6120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6120u;
            // 0x1c6124: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6120) {
            ctx->pc = 0x1C6108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6108;
        }
    }
    ctx->pc = 0x1C6128u;
label_1c6128:
    // 0x1c6128: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1c6128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1c612c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c612cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6130: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x1c6130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x1c6134: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c6134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c6138: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c6138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c613c: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x1c613cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x1c6140: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c6144: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1c6144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c6148: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c6148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c614c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c6150: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x1c6150u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c6154: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c6154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6158: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1c6158u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1c615c: 0x82270001  lb          $a3, 0x1($s1)
    ctx->pc = 0x1c615cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1c6160: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c6160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c6164: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c6164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c6168: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c616c: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x1c616cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x1c6170: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1c6170u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c6174: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6174u;
    {
        const bool branch_taken_0x1c6174 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x1C6178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6174u;
            // 0x1c6178: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6174) {
            ctx->pc = 0x1C6184u;
            goto label_1c6184;
        }
    }
    ctx->pc = 0x1C617Cu;
    // 0x1c617c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6180: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1c6180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c6184:
    // 0x1c6184: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1c6184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c6188:
    // 0x1c6188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c618c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c618cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6198: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c6198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c619c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c619cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c61a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c61a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c61a4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c61a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c61a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61A8u;
            // 0x1c61ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C61B0u;
    ctx->pc = 0x1c61b0u;
}
