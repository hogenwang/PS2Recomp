#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217A48
// Address: 0x217a48 - 0x217c78
void sub_00217A48_0x217a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A48_0x217a48");
#endif

    switch (ctx->pc) {
        case 0x217a64u: goto label_217a64;
        case 0x217ae4u: goto label_217ae4;
        case 0x217ae8u: goto label_217ae8;
        case 0x217af8u: goto label_217af8;
        case 0x217b34u: goto label_217b34;
        case 0x217b44u: goto label_217b44;
        case 0x217b84u: goto label_217b84;
        case 0x217c14u: goto label_217c14;
        case 0x217c18u: goto label_217c18;
        case 0x217c24u: goto label_217c24;
        case 0x217c44u: goto label_217c44;
        default: break;
    }

    ctx->pc = 0x217a48u;

label_217a48:
    // 0x217a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217a50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217a5c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x217A5Cu;
    SET_GPR_U32(ctx, 31, 0x217A64u);
    ctx->pc = 0x217A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A5Cu;
    // 0x217a60: 0x24840f28  addiu       $a0, $a0, 0xF28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x217A5Cu, 0x217A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A64u;
label_217a64:
    // 0x217a64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x217a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217a68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x217a6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217a70: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x217a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x217a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a78: 0x8043e52  j           func_10F948
    ctx->pc = 0x217A78u;
    ctx->pc = 0x217A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A78u;
    // 0x217a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x217A80u;
    // 0x217a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217a84: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217a84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217a90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217a94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217a9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x217a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217aa0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x217aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x217aa4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217aa8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x217aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x217aac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x217aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ab0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x217ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x217ab4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ab8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217abc: 0x1e0b82d  daddu       $s7, $t7, $zero
    ctx->pc = 0x217abcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ac0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x217ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x217ac4: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x217ac4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x217ac8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x217ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x217acc: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x217accu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ad0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x217ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x217ad4: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x217ad4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217ad8: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x217ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x217adc: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217ADCu;
    SET_GPR_U32(ctx, 31, 0x217AE4u);
    ctx->pc = 0x217AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217ADCu;
    // 0x217ae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x217ADCu, 0x217AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AE4u;
label_217ae4:
    // 0x217ae4: 0xaea0ab60  sw          $zero, -0x54A0($s5)
    ctx->pc = 0x217ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
label_217ae8:
    // 0x217ae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x217ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217aec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217af0: 0xc084f58  jal         func_213D60
    ctx->pc = 0x217AF0u;
    SET_GPR_U32(ctx, 31, 0x217AF8u);
    ctx->pc = 0x217AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AF0u;
    // 0x217af4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D60u, 0x217AF0u, 0x217AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AF8u;
label_217af8:
    // 0x217af8: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x217AF8u;
    {
        const bool branch_taken_0x217af8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AF8u;
        // 0x217afc: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217af8) {
            ctx->pc = 0x217B88u;
            goto label_217b88;
        }
    }
    ctx->pc = 0x217B00u;
    // 0x217b00: 0x8eafab60  lw          $t7, -0x54A0($s5)
    ctx->pc = 0x217b00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945632)));
    // 0x217b04: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x217B04u;
    {
        const bool branch_taken_0x217b04 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B04u;
        // 0x217b08: 0x8eedab58  lw          $t5, -0x54A8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b04) {
            ctx->pc = 0x217B64u;
            goto label_217b64;
        }
    }
    ctx->pc = 0x217B0Cu;
    // 0x217b0c: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x217b0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x217b10: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x217B10u;
    {
        const bool branch_taken_0x217b10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B10u;
        // 0x217b14: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b10) {
            ctx->pc = 0x217BBCu;
            goto label_217bbc;
        }
    }
    ctx->pc = 0x217B18u;
    // 0x217b18: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x217b18u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x217b1c: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x217b1cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x217b20: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x217b20u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x217b24: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x217b24u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x217b28: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x217b28u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x217b2c: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x217b2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217b30: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x217b30u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_217b34:
    // 0x217b34: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x217b34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x217b38: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x217b38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217b3c: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x217B3Cu;
    {
        const bool branch_taken_0x217b3c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x217B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B3Cu;
        // 0x217b40: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b3c) {
            ctx->pc = 0x217B60u;
            goto label_217b60;
        }
    }
    ctx->pc = 0x217B44u;
label_217b44:
    // 0x217b44: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x217b44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217b48: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x217b48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x217b4c: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x217b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x217b50: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x217b50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x217b54: 0x0  nop
    ctx->pc = 0x217b54u;
    // NOP
    // 0x217b58: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217B58u;
    {
        const bool branch_taken_0x217b58 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x217B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B58u;
        // 0x217b5c: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b58) {
            ctx->pc = 0x217B44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b44;
        }
    }
    ctx->pc = 0x217B60u;
label_217b60:
    // 0x217b60: 0xafc0ab58  sw          $zero, -0x54A8($fp)
    ctx->pc = 0x217b60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294945624), GPR_U32(ctx, 0));
label_217b64:
    // 0x217b64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x217b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x217b68: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x217b68u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x217b6c: 0x55e0ffde  bnel        $t7, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x217B6Cu;
    {
        const bool branch_taken_0x217b6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x217b6c) {
            ctx->pc = 0x217B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217B6Cu;
            // 0x217b70: 0xaea0ab60  sw          $zero, -0x54A0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217ae8;
        }
    }
    ctx->pc = 0x217B74u;
    // 0x217b74: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x217b74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217b78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x217b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b7c: 0xc085e92  jal         func_217A48
    ctx->pc = 0x217B7Cu;
    SET_GPR_U32(ctx, 31, 0x217B84u);
    ctx->pc = 0x217B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B7Cu;
    // 0x217b80: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A48u;
    goto label_217a48;
    ctx->pc = 0x217B84u;
label_217b84:
    // 0x217b84: 0x260782d  daddu       $t7, $s3, $zero
    ctx->pc = 0x217b84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217b88:
    // 0x217b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b8c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x217b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217b94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217b98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217b9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ba0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x217ba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217ba4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x217ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217ba8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x217ba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x217bac: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x217bacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217bb0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x217bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x217bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x217BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BB4u;
        // 0x217bb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217BBCu;
label_217bbc:
    // 0x217bbc: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x217BBCu;
    {
        const bool branch_taken_0x217bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BBCu;
        // 0x217bc0: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bbc) {
            ctx->pc = 0x217B34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b34;
        }
    }
    ctx->pc = 0x217BC4u;
    // 0x217bc4: 0x0  nop
    ctx->pc = 0x217bc4u;
    // NOP
    // 0x217bc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217bcc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217bccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217bd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217bd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217bdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217be0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217be4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217be8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217bec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x217becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bf0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x217bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x217bf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x217bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x217bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x217bfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x217bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217c00: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x217c00u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x217c04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x217c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c08: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x217c08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217c0c: 0xc084612  jal         func_211848
    ctx->pc = 0x217C0Cu;
    SET_GPR_U32(ctx, 31, 0x217C14u);
    ctx->pc = 0x217C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C0Cu;
    // 0x217c10: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x217C0Cu, 0x217C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C14u;
label_217c14:
    // 0x217c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217c18:
    // 0x217c18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c1c: 0xc084f98  jal         func_213E60
    ctx->pc = 0x217C1Cu;
    SET_GPR_U32(ctx, 31, 0x217C24u);
    ctx->pc = 0x217C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C1Cu;
    // 0x217c20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E60u, 0x217C1Cu, 0x217C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C24u;
label_217c24:
    // 0x217c24: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217C24u;
    {
        const bool branch_taken_0x217c24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C24u;
        // 0x217c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c24) {
            ctx->pc = 0x217C4Cu;
            goto label_217c4c;
        }
    }
    ctx->pc = 0x217C2Cu;
    // 0x217c2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x217c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x217c30: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x217c30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x217c34: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x217C34u;
    {
        const bool branch_taken_0x217c34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x217C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C34u;
        // 0x217c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c34) {
            ctx->pc = 0x217C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217c18;
        }
    }
    ctx->pc = 0x217C3Cu;
    // 0x217c3c: 0xc085e92  jal         func_217A48
    ctx->pc = 0x217C3Cu;
    SET_GPR_U32(ctx, 31, 0x217C44u);
    ctx->pc = 0x217C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C3Cu;
    // 0x217c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A48u;
    goto label_217a48;
    ctx->pc = 0x217C44u;
label_217c44:
    // 0x217c44: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x217c44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217c48: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x217c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_217c4c:
    // 0x217c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217c50: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x217c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217c58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217c5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217c60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217c60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217c64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x217c64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217c68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x217c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x217C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C6Cu;
        // 0x217c70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217C74u;
    // 0x217c74: 0x0  nop
    ctx->pc = 0x217c74u;
    // NOP
    if (ctx->pc == 0x217c74u) { ctx->pc = 0x217c78u; }
}
