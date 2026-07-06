#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172A10
// Address: 0x172a10 - 0x1731c0
void sub_00172A10_0x172a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172A10_0x172a10");
#endif

    switch (ctx->pc) {
        case 0x172a58u: goto label_172a58;
        case 0x172a88u: goto label_172a88;
        case 0x172b98u: goto label_172b98;
        case 0x172dc4u: goto label_172dc4;
        case 0x172de0u: goto label_172de0;
        case 0x172e58u: goto label_172e58;
        default: break;
    }

    ctx->pc = 0x172a10u;

    // 0x172a10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x172a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x172a14: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x172a14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x172a18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x172a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x172a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x172a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x172a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x172a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x172a2c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x172a2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x172a34: 0x25293630  addiu       $t1, $t1, 0x3630
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13872));
    // 0x172a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x172a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x172a3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x172a3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x172a44: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x172a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x172a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172a4c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x172a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_172a58:
    // 0x172a58: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x172a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x172a5c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x172a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x172a60: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x172a64: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x172a64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x172a68: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x172a68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x172a6c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x172a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x172a70: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172A70u;
    {
        const bool branch_taken_0x172a70 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x172A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A70u;
            // 0x172a74: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a70) {
            ctx->pc = 0x172A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172a58;
        }
    }
    ctx->pc = 0x172A78u;
    // 0x172a78: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x172a7c: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x172a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x172a80: 0x25293670  addiu       $t1, $t1, 0x3670
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13936));
    // 0x172a84: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x172a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_172a88:
    // 0x172a88: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x172a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x172a8c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x172a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x172a90: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x172a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x172a94: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x172a94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x172a98: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x172a98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x172a9c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x172a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x172aa0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172AA0u;
    {
        const bool branch_taken_0x172aa0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x172AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172AA0u;
            // 0x172aa4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172aa0) {
            ctx->pc = 0x172A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172a88;
        }
    }
    ctx->pc = 0x172AA8u;
    // 0x172aa8: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x172aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x172aac: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x172aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x172ab0: 0x774023  subu        $t0, $v1, $s7
    ctx->pc = 0x172ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x172ab4: 0x248448c0  addiu       $a0, $a0, 0x48C0
    ctx->pc = 0x172ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18624));
    // 0x172ab8: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x172ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x172abc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x172abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x172ac0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x172ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x172ac4: 0x24635a30  addiu       $v1, $v1, 0x5A30
    ctx->pc = 0x172ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
    // 0x172ac8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x172ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x172acc: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x172ad0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x172ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x172ad4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x172ad4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x172ad8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x172ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x172adc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172ADCu;
    {
        const bool branch_taken_0x172adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172adc) {
            ctx->pc = 0x172AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172ADCu;
            // 0x172ae0: 0x30640002  andi        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172AF0u;
            goto label_172af0;
        }
    }
    ctx->pc = 0x172AE4u;
    // 0x172ae4: 0x34e40001  ori         $a0, $a3, 0x1
    ctx->pc = 0x172ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x172ae8: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x172ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x172aec: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x172aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_172af0:
    // 0x172af0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172AF0u;
    {
        const bool branch_taken_0x172af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172af0) {
            ctx->pc = 0x172AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172AF0u;
            // 0x172af4: 0x96840000  lhu         $a0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172B04u;
            goto label_172b04;
        }
    }
    ctx->pc = 0x172AF8u;
    // 0x172af8: 0x34e40002  ori         $a0, $a3, 0x2
    ctx->pc = 0x172af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x172afc: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x172afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x172b00: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x172b00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_172b04:
    // 0x172b04: 0x30880001  andi        $t0, $a0, 0x1
    ctx->pc = 0x172b04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x172b08: 0x5100000c  beql        $t0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x172B08u;
    {
        const bool branch_taken_0x172b08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b08) {
            ctx->pc = 0x172B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172B08u;
            // 0x172b0c: 0x30680004  andi        $t0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172B3Cu;
            goto label_172b3c;
        }
    }
    ctx->pc = 0x172B10u;
    // 0x172b10: 0x30680004  andi        $t0, $v1, 0x4
    ctx->pc = 0x172b10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x172b14: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172B14u;
    {
        const bool branch_taken_0x172b14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b14) {
            ctx->pc = 0x172B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172B14u;
            // 0x172b18: 0x30680008  andi        $t0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172B28u;
            goto label_172b28;
        }
    }
    ctx->pc = 0x172B1Cu;
    // 0x172b1c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x172b1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x172b20: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172b20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172b24: 0x30680008  andi        $t0, $v1, 0x8
    ctx->pc = 0x172b24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_172b28:
    // 0x172b28: 0x5100000e  beql        $t0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x172B28u;
    {
        const bool branch_taken_0x172b28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b28) {
            ctx->pc = 0x172B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172B28u;
            // 0x172b2c: 0x30880002  andi        $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172B64u;
            goto label_172b64;
        }
    }
    ctx->pc = 0x172B30u;
    // 0x172b30: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x172b30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x172b34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x172B34u;
    {
        const bool branch_taken_0x172b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B34u;
            // 0x172b38: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b34) {
            ctx->pc = 0x172B60u;
            goto label_172b60;
        }
    }
    ctx->pc = 0x172B3Cu;
label_172b3c:
    // 0x172b3c: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172B3Cu;
    {
        const bool branch_taken_0x172b3c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b3c) {
            ctx->pc = 0x172B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172B3Cu;
            // 0x172b40: 0x30680008  andi        $t0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172B50u;
            goto label_172b50;
        }
    }
    ctx->pc = 0x172B44u;
    // 0x172b44: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x172b44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x172b48: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172b48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172b4c: 0x30680008  andi        $t0, $v1, 0x8
    ctx->pc = 0x172b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_172b50:
    // 0x172b50: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172B50u;
    {
        const bool branch_taken_0x172b50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b50) {
            ctx->pc = 0x172B60u;
            goto label_172b60;
        }
    }
    ctx->pc = 0x172B58u;
    // 0x172b58: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x172b58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x172b5c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_172b60:
    // 0x172b60: 0x30880002  andi        $t0, $a0, 0x2
    ctx->pc = 0x172b60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_172b64:
    // 0x172b64: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x172B64u;
    {
        const bool branch_taken_0x172b64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172B64u;
            // 0x172b68: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b64) {
            ctx->pc = 0x172B70u;
            goto label_172b70;
        }
    }
    ctx->pc = 0x172B6Cu;
    // 0x172b6c: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x172b6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_172b70:
    // 0x172b70: 0x30880004  andi        $t0, $a0, 0x4
    ctx->pc = 0x172b70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x172b74: 0x51000003  beql        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x172B74u;
    {
        const bool branch_taken_0x172b74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b74) {
            ctx->pc = 0x172B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172B74u;
            // 0x172b78: 0x94100  sll         $t0, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172B84u;
            goto label_172b84;
        }
    }
    ctx->pc = 0x172B7Cu;
    // 0x172b7c: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x172b7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x172b80: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x172b80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_172b84:
    // 0x172b84: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x172b84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b88: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x172b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x172b8c: 0x30eaffff  andi        $t2, $a3, 0xFFFF
    ctx->pc = 0x172b8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172b90: 0x250b0110  addiu       $t3, $t0, 0x110
    ctx->pc = 0x172b90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 272));
    // 0x172b94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x172b94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172b98:
    // 0x172b98: 0x1894004  sllv        $t0, $t1, $t4
    ctx->pc = 0x172b98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x172b9c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x172b9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x172ba0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172BA0u;
    {
        const bool branch_taken_0x172ba0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ba0) {
            ctx->pc = 0x172BB8u;
            goto label_172bb8;
        }
    }
    ctx->pc = 0x172BA8u;
    // 0x172ba8: 0x95680000  lhu         $t0, 0x0($t3)
    ctx->pc = 0x172ba8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x172bac: 0x2a84025  or          $t0, $s5, $t0
    ctx->pc = 0x172bacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) | GPR_U64(ctx, 8));
    // 0x172bb0: 0x3115ffff  andi        $s5, $t0, 0xFFFF
    ctx->pc = 0x172bb0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x172bb4: 0x0  nop
    ctx->pc = 0x172bb4u;
    // NOP
label_172bb8:
    // 0x172bb8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x172bbc: 0x29880004  slti        $t0, $t4, 0x4
    ctx->pc = 0x172bbcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x172bc0: 0x1500fff5  bnez        $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x172BC0u;
    {
        const bool branch_taken_0x172bc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x172BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172BC0u;
            // 0x172bc4: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bc0) {
            ctx->pc = 0x172B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172b98;
        }
    }
    ctx->pc = 0x172BC8u;
    // 0x172bc8: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x172bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x172bcc: 0x240e0100  addiu       $t6, $zero, 0x100
    ctx->pc = 0x172bccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x172bd0: 0x950cef30  lhu         $t4, -0x10D0($t0)
    ctx->pc = 0x172bd0u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294962992)));
    // 0x172bd4: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x172bd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x172bd8: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x172bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x172bdc: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x172bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x172be0: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x172be0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x172be4: 0x950aef32  lhu         $t2, -0x10CE($t0)
    ctx->pc = 0x172be4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294962994)));
    // 0x172be8: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x172be8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x172bec: 0xa5ae0150  sh          $t6, 0x150($t5)
    ctx->pc = 0x172becu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 336), (uint16_t)GPR_U32(ctx, 14));
    // 0x172bf0: 0x240c0800  addiu       $t4, $zero, 0x800
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x172bf4: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x172bf8: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x172bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x172bfc: 0x9508ef34  lhu         $t0, -0x10CC($t0)
    ctx->pc = 0x172bfcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294962996)));
    // 0x172c00: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x172c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x172c04: 0xa54b0150  sh          $t3, 0x150($t2)
    ctx->pc = 0x172c04u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 336), (uint16_t)GPR_U32(ctx, 11));
    // 0x172c08: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x172c0c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x172c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x172c10: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x172c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x172c14: 0xa5090150  sh          $t1, 0x150($t0)
    ctx->pc = 0x172c14u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 336), (uint16_t)GPR_U32(ctx, 9));
    // 0x172c18: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x172c18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x172c1c: 0x30690100  andi        $t1, $v1, 0x100
    ctx->pc = 0x172c1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x172c20: 0x950bef36  lhu         $t3, -0x10CA($t0)
    ctx->pc = 0x172c20u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294962998)));
    // 0x172c24: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x172c24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x172c28: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x172c28u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x172c2c: 0x9508ef38  lhu         $t0, -0x10C8($t0)
    ctx->pc = 0x172c2cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294963000)));
    // 0x172c30: 0x17d5821  addu        $t3, $t3, $sp
    ctx->pc = 0x172c30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x172c34: 0xa56c0150  sh          $t4, 0x150($t3)
    ctx->pc = 0x172c34u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 336), (uint16_t)GPR_U32(ctx, 12));
    // 0x172c38: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x172c38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x172c3c: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x172c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x172c40: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172C40u;
    {
        const bool branch_taken_0x172c40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172C40u;
            // 0x172c44: 0xa50a0150  sh          $t2, 0x150($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 336), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c40) {
            ctx->pc = 0x172C54u;
            goto label_172c54;
        }
    }
    ctx->pc = 0x172C48u;
    // 0x172c48: 0x97a80150  lhu         $t0, 0x150($sp)
    ctx->pc = 0x172c48u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x172c4c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x172c4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x172c50: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172c50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_172c54:
    // 0x172c54: 0x30680200  andi        $t0, $v1, 0x200
    ctx->pc = 0x172c54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x172c58: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172C58u;
    {
        const bool branch_taken_0x172c58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c58) {
            ctx->pc = 0x172C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172C58u;
            // 0x172c5c: 0x30680400  andi        $t0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172C60u;
    // 0x172c60: 0x97a80152  lhu         $t0, 0x152($sp)
    ctx->pc = 0x172c60u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
    // 0x172c64: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x172c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x172c68: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172c6c: 0x30680400  andi        $t0, $v1, 0x400
    ctx->pc = 0x172c6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_172c70:
    // 0x172c70: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172C70u;
    {
        const bool branch_taken_0x172c70 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c70) {
            ctx->pc = 0x172C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172C70u;
            // 0x172c74: 0x30680800  andi        $t0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172C88u;
            goto label_172c88;
        }
    }
    ctx->pc = 0x172C78u;
    // 0x172c78: 0x97a80154  lhu         $t0, 0x154($sp)
    ctx->pc = 0x172c78u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x172c7c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x172c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x172c80: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172c80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172c84: 0x30680800  andi        $t0, $v1, 0x800
    ctx->pc = 0x172c84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_172c88:
    // 0x172c88: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172C88u;
    {
        const bool branch_taken_0x172c88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c88) {
            ctx->pc = 0x172C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172C88u;
            // 0x172c8c: 0x30681000  andi        $t0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172CA0u;
            goto label_172ca0;
        }
    }
    ctx->pc = 0x172C90u;
    // 0x172c90: 0x97a80156  lhu         $t0, 0x156($sp)
    ctx->pc = 0x172c90u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 342)));
    // 0x172c94: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x172c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x172c98: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172c98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172c9c: 0x30681000  andi        $t0, $v1, 0x1000
    ctx->pc = 0x172c9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_172ca0:
    // 0x172ca0: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172CA0u;
    {
        const bool branch_taken_0x172ca0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ca0) {
            ctx->pc = 0x172CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172CA0u;
            // 0x172ca4: 0x30682000  andi        $t0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172CB8u;
            goto label_172cb8;
        }
    }
    ctx->pc = 0x172CA8u;
    // 0x172ca8: 0x97a80158  lhu         $t0, 0x158($sp)
    ctx->pc = 0x172ca8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x172cac: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x172cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x172cb0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172cb4: 0x30682000  andi        $t0, $v1, 0x2000
    ctx->pc = 0x172cb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_172cb8:
    // 0x172cb8: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172CB8u;
    {
        const bool branch_taken_0x172cb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172cb8) {
            ctx->pc = 0x172CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172CB8u;
            // 0x172cbc: 0x30684000  andi        $t0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172CCCu;
            goto label_172ccc;
        }
    }
    ctx->pc = 0x172CC0u;
    // 0x172cc0: 0x34e72000  ori         $a3, $a3, 0x2000
    ctx->pc = 0x172cc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8192);
    // 0x172cc4: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172cc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172cc8: 0x30684000  andi        $t0, $v1, 0x4000
    ctx->pc = 0x172cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_172ccc:
    // 0x172ccc: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172CCCu;
    {
        const bool branch_taken_0x172ccc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ccc) {
            ctx->pc = 0x172CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172CCCu;
            // 0x172cd0: 0x30638000  andi        $v1, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172CE0u;
            goto label_172ce0;
        }
    }
    ctx->pc = 0x172CD4u;
    // 0x172cd4: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x172cd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x172cd8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x172cd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172cdc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x172cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_172ce0:
    // 0x172ce0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172CE0u;
    {
        const bool branch_taken_0x172ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ce0) {
            ctx->pc = 0x172CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172CE0u;
            // 0x172ce4: 0x94a30006  lhu         $v1, 0x6($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172CF4u;
            goto label_172cf4;
        }
    }
    ctx->pc = 0x172CE8u;
    // 0x172ce8: 0x34e38000  ori         $v1, $a3, 0x8000
    ctx->pc = 0x172ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x172cec: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x172cecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172cf0: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x172cf0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_172cf4:
    // 0x172cf4: 0x30650100  andi        $a1, $v1, 0x100
    ctx->pc = 0x172cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x172cf8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172CF8u;
    {
        const bool branch_taken_0x172cf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172cf8) {
            ctx->pc = 0x172CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172CF8u;
            // 0x172cfc: 0x30650200  andi        $a1, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D10u;
            goto label_172d10;
        }
    }
    ctx->pc = 0x172D00u;
    // 0x172d00: 0x97a50150  lhu         $a1, 0x150($sp)
    ctx->pc = 0x172d00u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x172d04: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x172d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x172d08: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x172d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172d0c: 0x30650200  andi        $a1, $v1, 0x200
    ctx->pc = 0x172d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_172d10:
    // 0x172d10: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172D10u;
    {
        const bool branch_taken_0x172d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d10) {
            ctx->pc = 0x172D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D10u;
            // 0x172d14: 0x30650400  andi        $a1, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D28u;
            goto label_172d28;
        }
    }
    ctx->pc = 0x172D18u;
    // 0x172d18: 0x97a50152  lhu         $a1, 0x152($sp)
    ctx->pc = 0x172d18u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
    // 0x172d1c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x172d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x172d20: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x172d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172d24: 0x30650400  andi        $a1, $v1, 0x400
    ctx->pc = 0x172d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_172d28:
    // 0x172d28: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172D28u;
    {
        const bool branch_taken_0x172d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d28) {
            ctx->pc = 0x172D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D28u;
            // 0x172d2c: 0x30650800  andi        $a1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D40u;
            goto label_172d40;
        }
    }
    ctx->pc = 0x172D30u;
    // 0x172d30: 0x97a50154  lhu         $a1, 0x154($sp)
    ctx->pc = 0x172d30u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x172d34: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x172d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x172d38: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x172d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172d3c: 0x30650800  andi        $a1, $v1, 0x800
    ctx->pc = 0x172d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_172d40:
    // 0x172d40: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172D40u;
    {
        const bool branch_taken_0x172d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d40) {
            ctx->pc = 0x172D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D40u;
            // 0x172d44: 0x30651000  andi        $a1, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D58u;
            goto label_172d58;
        }
    }
    ctx->pc = 0x172D48u;
    // 0x172d48: 0x97a50156  lhu         $a1, 0x156($sp)
    ctx->pc = 0x172d48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 342)));
    // 0x172d4c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x172d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x172d50: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x172d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172d54: 0x30651000  andi        $a1, $v1, 0x1000
    ctx->pc = 0x172d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_172d58:
    // 0x172d58: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172D58u;
    {
        const bool branch_taken_0x172d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d58) {
            ctx->pc = 0x172D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D58u;
            // 0x172d5c: 0x30652000  andi        $a1, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D70u;
            goto label_172d70;
        }
    }
    ctx->pc = 0x172D60u;
    // 0x172d60: 0x97a50158  lhu         $a1, 0x158($sp)
    ctx->pc = 0x172d60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x172d64: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x172d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x172d68: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x172d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172d6c: 0x30652000  andi        $a1, $v1, 0x2000
    ctx->pc = 0x172d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_172d70:
    // 0x172d70: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D70u;
    {
        const bool branch_taken_0x172d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d70) {
            ctx->pc = 0x172D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D70u;
            // 0x172d74: 0x30654000  andi        $a1, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D84u;
            goto label_172d84;
        }
    }
    ctx->pc = 0x172D78u;
    // 0x172d78: 0x34c52000  ori         $a1, $a2, 0x2000
    ctx->pc = 0x172d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x172d7c: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x172d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172d80: 0x30654000  andi        $a1, $v1, 0x4000
    ctx->pc = 0x172d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_172d84:
    // 0x172d84: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D84u;
    {
        const bool branch_taken_0x172d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d84) {
            ctx->pc = 0x172D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D84u;
            // 0x172d88: 0x30638000  andi        $v1, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D98u;
            goto label_172d98;
        }
    }
    ctx->pc = 0x172D8Cu;
    // 0x172d8c: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x172d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x172d90: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x172d90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172d94: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x172d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_172d98:
    // 0x172d98: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D98u;
    {
        const bool branch_taken_0x172d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d98) {
            ctx->pc = 0x172D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D98u;
            // 0x172d9c: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172DACu;
            goto label_172dac;
        }
    }
    ctx->pc = 0x172DA0u;
    // 0x172da0: 0x34c38000  ori         $v1, $a2, 0x8000
    ctx->pc = 0x172da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x172da4: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x172da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172da8: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x172da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_172dac:
    // 0x172dac: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x172DACu;
    {
        const bool branch_taken_0x172dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172dac) {
            ctx->pc = 0x172DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172DACu;
            // 0x172db0: 0x30f2ffff  andi        $s2, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172E4Cu;
            goto label_172e4c;
        }
    }
    ctx->pc = 0x172DB4u;
    // 0x172db4: 0x30d6ffff  andi        $s6, $a2, 0xFFFF
    ctx->pc = 0x172db4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x172db8: 0x30f2ffff  andi        $s2, $a3, 0xFFFF
    ctx->pc = 0x172db8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x172dbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x172dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dc0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x172dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_172dc4:
    // 0x172dc4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x172dc8: 0x2238004  sllv        $s0, $v1, $s1
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x172dcc: 0x2d01824  and         $v1, $s6, $s0
    ctx->pc = 0x172dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 16));
    // 0x172dd0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x172DD0u;
    {
        const bool branch_taken_0x172dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172dd0) {
            ctx->pc = 0x172E10u;
            goto label_172e10;
        }
    }
    ctx->pc = 0x172DD8u;
    // 0x172dd8: 0xc067c48  jal         func_19F120
    ctx->pc = 0x172DD8u;
    SET_GPR_U32(ctx, 31, 0x172DE0u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DE0u; }
        if (ctx->pc != 0x172DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DE0u; }
        if (ctx->pc != 0x172DE0u) { return; }
    }
    ctx->pc = 0x172DE0u;
label_172de0:
    // 0x172de0: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x172de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x172de4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x172de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x172de8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x172de8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172dec: 0x0  nop
    ctx->pc = 0x172decu;
    // NOP
    // 0x172df0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172df4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172df8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x172df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x172dfc: 0x0  nop
    ctx->pc = 0x172dfcu;
    // NOP
    // 0x172e00: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x172e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x172e04: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x172e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x172e08: 0xa6630224  sh          $v1, 0x224($s3)
    ctx->pc = 0x172e08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x172e0c: 0x0  nop
    ctx->pc = 0x172e0cu;
    // NOP
label_172e10:
    // 0x172e10: 0x2501824  and         $v1, $s2, $s0
    ctx->pc = 0x172e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x172e14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E14u;
    {
        const bool branch_taken_0x172e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e14) {
            ctx->pc = 0x172E28u;
            goto label_172e28;
        }
    }
    ctx->pc = 0x172E1Cu;
    // 0x172e1c: 0x96630224  lhu         $v1, 0x224($s3)
    ctx->pc = 0x172e1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x172e20: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x172e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x172e24: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x172e24u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_172e28:
    // 0x172e28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x172e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x172e2c: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x172e2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x172e30: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x172E30u;
    {
        const bool branch_taken_0x172e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E30u;
            // 0x172e34: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e30) {
            ctx->pc = 0x172DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172dc4;
        }
    }
    ctx->pc = 0x172E38u;
    // 0x172e38: 0x32431000  andi        $v1, $s2, 0x1000
    ctx->pc = 0x172e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
    // 0x172e3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x172e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172e40: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x172e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x172e44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x172E44u;
    {
        const bool branch_taken_0x172e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E44u;
            // 0x172e48: 0x3075ffff  andi        $s5, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e44) {
            ctx->pc = 0x172E88u;
            goto label_172e88;
        }
    }
    ctx->pc = 0x172E4Cu;
label_172e4c:
    // 0x172e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e50: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x172e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x172e54: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x172e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_172e58:
    // 0x172e58: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x172e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x172e5c: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x172e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x172e60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172E60u;
    {
        const bool branch_taken_0x172e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e60) {
            ctx->pc = 0x172E78u;
            goto label_172e78;
        }
    }
    ctx->pc = 0x172E68u;
    // 0x172e68: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x172e68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x172e6c: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x172e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x172e70: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x172e70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172e74: 0x0  nop
    ctx->pc = 0x172e74u;
    // NOP
label_172e78:
    // 0x172e78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x172e7c: 0x28a30005  slti        $v1, $a1, 0x5
    ctx->pc = 0x172e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x172e80: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x172E80u;
    {
        const bool branch_taken_0x172e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E80u;
            // 0x172e84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e80) {
            ctx->pc = 0x172E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172e58;
        }
    }
    ctx->pc = 0x172E88u;
label_172e88:
    // 0x172e88: 0x32432000  andi        $v1, $s2, 0x2000
    ctx->pc = 0x172e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x172e8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x172e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172e90: 0x2a42825  or          $a1, $s5, $a0
    ctx->pc = 0x172e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x172e94: 0x32434000  andi        $v1, $s2, 0x4000
    ctx->pc = 0x172e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x172e98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x172e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172e9c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x172e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x172ea0: 0x32438000  andi        $v1, $s2, 0x8000
    ctx->pc = 0x172ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x172ea4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x172ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x172ea8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x172ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172eac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x172eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x172eb0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x172eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x172eb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x172eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172eb8: 0x30640100  andi        $a0, $v1, 0x100
    ctx->pc = 0x172eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x172ebc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x172EBCu;
    {
        const bool branch_taken_0x172ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ebc) {
            ctx->pc = 0x172EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172EBCu;
            // 0x172ec0: 0x30640200  andi        $a0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172EE4u;
            goto label_172ee4;
        }
    }
    ctx->pc = 0x172EC4u;
    // 0x172ec4: 0x9684000e  lhu         $a0, 0xE($s4)
    ctx->pc = 0x172ec4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x172ec8: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x172ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172ecc: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x172eccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x172ed0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x172ED0u;
    {
        const bool branch_taken_0x172ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ed0) {
            ctx->pc = 0x172EE0u;
            goto label_172ee0;
        }
    }
    ctx->pc = 0x172ED8u;
    // 0x172ed8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172edc: 0xa684000e  sh          $a0, 0xE($s4)
    ctx->pc = 0x172edcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 4));
label_172ee0:
    // 0x172ee0: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x172ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_172ee4:
    // 0x172ee4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x172EE4u;
    {
        const bool branch_taken_0x172ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ee4) {
            ctx->pc = 0x172EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172EE4u;
            // 0x172ee8: 0x30640400  andi        $a0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172F0Cu;
            goto label_172f0c;
        }
    }
    ctx->pc = 0x172EECu;
    // 0x172eec: 0x96840010  lhu         $a0, 0x10($s4)
    ctx->pc = 0x172eecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x172ef0: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x172ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172ef4: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x172ef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x172ef8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x172EF8u;
    {
        const bool branch_taken_0x172ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ef8) {
            ctx->pc = 0x172F08u;
            goto label_172f08;
        }
    }
    ctx->pc = 0x172F00u;
    // 0x172f00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172f04: 0xa6840010  sh          $a0, 0x10($s4)
    ctx->pc = 0x172f04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 4));
label_172f08:
    // 0x172f08: 0x30640400  andi        $a0, $v1, 0x400
    ctx->pc = 0x172f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_172f0c:
    // 0x172f0c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x172F0Cu;
    {
        const bool branch_taken_0x172f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f0c) {
            ctx->pc = 0x172F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172F0Cu;
            // 0x172f10: 0x30640800  andi        $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172F34u;
            goto label_172f34;
        }
    }
    ctx->pc = 0x172F14u;
    // 0x172f14: 0x96840012  lhu         $a0, 0x12($s4)
    ctx->pc = 0x172f14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x172f18: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x172f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172f1c: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x172f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x172f20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x172F20u;
    {
        const bool branch_taken_0x172f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f20) {
            ctx->pc = 0x172F30u;
            goto label_172f30;
        }
    }
    ctx->pc = 0x172F28u;
    // 0x172f28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172f2c: 0xa6840012  sh          $a0, 0x12($s4)
    ctx->pc = 0x172f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 4));
label_172f30:
    // 0x172f30: 0x30640800  andi        $a0, $v1, 0x800
    ctx->pc = 0x172f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_172f34:
    // 0x172f34: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x172F34u;
    {
        const bool branch_taken_0x172f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f34) {
            ctx->pc = 0x172F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172F34u;
            // 0x172f38: 0x30641000  andi        $a0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172F5Cu;
            goto label_172f5c;
        }
    }
    ctx->pc = 0x172F3Cu;
    // 0x172f3c: 0x96840014  lhu         $a0, 0x14($s4)
    ctx->pc = 0x172f3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x172f40: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x172f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172f44: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x172f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x172f48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x172F48u;
    {
        const bool branch_taken_0x172f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f48) {
            ctx->pc = 0x172F58u;
            goto label_172f58;
        }
    }
    ctx->pc = 0x172F50u;
    // 0x172f50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172f54: 0xa6840014  sh          $a0, 0x14($s4)
    ctx->pc = 0x172f54u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 4));
label_172f58:
    // 0x172f58: 0x30641000  andi        $a0, $v1, 0x1000
    ctx->pc = 0x172f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_172f5c:
    // 0x172f5c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x172F5Cu;
    {
        const bool branch_taken_0x172f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f5c) {
            ctx->pc = 0x172F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172F5Cu;
            // 0x172f60: 0x30642000  andi        $a0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172F84u;
            goto label_172f84;
        }
    }
    ctx->pc = 0x172F64u;
    // 0x172f64: 0x96840016  lhu         $a0, 0x16($s4)
    ctx->pc = 0x172f64u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x172f68: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x172f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172f6c: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x172f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x172f70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x172F70u;
    {
        const bool branch_taken_0x172f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f70) {
            ctx->pc = 0x172F80u;
            goto label_172f80;
        }
    }
    ctx->pc = 0x172F78u;
    // 0x172f78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172f7c: 0xa6840016  sh          $a0, 0x16($s4)
    ctx->pc = 0x172f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 22), (uint16_t)GPR_U32(ctx, 4));
label_172f80:
    // 0x172f80: 0x30642000  andi        $a0, $v1, 0x2000
    ctx->pc = 0x172f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_172f84:
    // 0x172f84: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x172F84u;
    {
        const bool branch_taken_0x172f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f84) {
            ctx->pc = 0x172FA8u;
            goto label_172fa8;
        }
    }
    ctx->pc = 0x172F8Cu;
    // 0x172f8c: 0x96840018  lhu         $a0, 0x18($s4)
    ctx->pc = 0x172f8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x172f90: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x172f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172f94: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x172f94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x172f98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x172F98u;
    {
        const bool branch_taken_0x172f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f98) {
            ctx->pc = 0x172FA8u;
            goto label_172fa8;
        }
    }
    ctx->pc = 0x172FA0u;
    // 0x172fa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x172fa4: 0xa6840018  sh          $a0, 0x18($s4)
    ctx->pc = 0x172fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 24), (uint16_t)GPR_U32(ctx, 4));
label_172fa8:
    // 0x172fa8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x172fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x172fac: 0x96870004  lhu         $a3, 0x4($s4)
    ctx->pc = 0x172facu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x172fb0: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x172fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x172fb4: 0x248448a0  addiu       $a0, $a0, 0x48A0
    ctx->pc = 0x172fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18592));
    // 0x172fb8: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x172fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x172fbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x172fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fc0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x172fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x172fc4: 0xa6870002  sh          $a3, 0x2($s4)
    ctx->pc = 0x172fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x172fc8: 0x2484489e  addiu       $a0, $a0, 0x489E
    ctx->pc = 0x172fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18590));
    // 0x172fcc: 0xa6830004  sh          $v1, 0x4($s4)
    ctx->pc = 0x172fccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x172fd0: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x172fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x172fd4: 0xe32026  xor         $a0, $a3, $v1
    ctx->pc = 0x172fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x172fd8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x172fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x172fdc: 0x95070002  lhu         $a3, 0x2($t0)
    ctx->pc = 0x172fdcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x172fe0: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x172fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172fe4: 0x96840004  lhu         $a0, 0x4($s4)
    ctx->pc = 0x172fe4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x172fe8: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x172fe8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x172fec: 0x31253f00  andi        $a1, $t1, 0x3F00
    ctx->pc = 0x172fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16128);
    // 0x172ff0: 0xa4c70002  sh          $a3, 0x2($a2)
    ctx->pc = 0x172ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x172ff4: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x172ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x172ff8: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x172ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x172ffc: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x172ffcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x173000: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x173000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x173004: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x173004u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x173008: 0xa6830006  sh          $v1, 0x6($s4)
    ctx->pc = 0x173008u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x17300c: 0x1461825  or          $v1, $t2, $a2
    ctx->pc = 0x17300cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x173010: 0x96840002  lhu         $a0, 0x2($s4)
    ctx->pc = 0x173010u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x173014: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x173014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x173018: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x173018u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17301c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x17301cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x173020: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x173020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x173024: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x173024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x173028: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x173028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17302c: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x17302cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x173030: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x173030u;
    {
        const bool branch_taken_0x173030 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x173034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173030u;
            // 0x173034: 0xa680000c  sh          $zero, 0xC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173030) {
            ctx->pc = 0x17303Cu;
            goto label_17303c;
        }
    }
    ctx->pc = 0x173038u;
    // 0x173038: 0xa685000c  sh          $a1, 0xC($s4)
    ctx->pc = 0x173038u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 5));
label_17303c:
    // 0x17303c: 0x96840006  lhu         $a0, 0x6($s4)
    ctx->pc = 0x17303cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x173040: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x173040u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x173044: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x173044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x173048: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x173048u;
    {
        const bool branch_taken_0x173048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173048) {
            ctx->pc = 0x17304Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173048u;
            // 0x17304c: 0x96830222  lhu         $v1, 0x222($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 546)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173060u;
            goto label_173060;
        }
    }
    ctx->pc = 0x173050u;
    // 0x173050: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173054: 0xa6830220  sh          $v1, 0x220($s4)
    ctx->pc = 0x173054u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x173058: 0xa6800222  sh          $zero, 0x222($s4)
    ctx->pc = 0x173058u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x17305c: 0x96830222  lhu         $v1, 0x222($s4)
    ctx->pc = 0x17305cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 546)));
label_173060:
    // 0x173060: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173060u;
    {
        const bool branch_taken_0x173060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173060) {
            ctx->pc = 0x173064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173060u;
            // 0x173064: 0xa680000a  sh          $zero, 0xA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173070u;
            goto label_173070;
        }
    }
    ctx->pc = 0x173068u;
    // 0x173068: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x173068u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17306c: 0xa683000a  sh          $v1, 0xA($s4)
    ctx->pc = 0x17306cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 3));
label_173070:
    // 0x173070: 0x96840002  lhu         $a0, 0x2($s4)
    ctx->pc = 0x173070u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x173074: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x173074u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x173078: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x173078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x17307c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17307Cu;
    {
        const bool branch_taken_0x17307c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17307Cu;
            // 0x173080: 0x9685001a  lhu         $a1, 0x1A($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17307c) {
            ctx->pc = 0x1730C8u;
            goto label_1730c8;
        }
    }
    ctx->pc = 0x173084u;
    // 0x173084: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x173084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x173088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17308c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x17308cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x173090: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173090u;
    {
        const bool branch_taken_0x173090 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x173094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173090u;
            // 0x173094: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173090) {
            ctx->pc = 0x1730A4u;
            goto label_1730a4;
        }
    }
    ctx->pc = 0x173098u;
    // 0x173098: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173098u;
    {
        const bool branch_taken_0x173098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173098) {
            ctx->pc = 0x17309Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173098u;
            // 0x17309c: 0xa683001a  sh          $v1, 0x1A($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 26), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1730A8u;
            goto label_1730a8;
        }
    }
    ctx->pc = 0x1730A0u;
    // 0x1730a0: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1730a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1730a4:
    // 0x1730a4: 0xa683001a  sh          $v1, 0x1A($s4)
    ctx->pc = 0x1730a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26), (uint16_t)GPR_U32(ctx, 3));
label_1730a8:
    // 0x1730a8: 0x9684001a  lhu         $a0, 0x1A($s4)
    ctx->pc = 0x1730a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x1730ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1730acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1730b0: 0x96850004  lhu         $a1, 0x4($s4)
    ctx->pc = 0x1730b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1730b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1730b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1730b8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1730b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1730bc: 0xa485001e  sh          $a1, 0x1E($a0)
    ctx->pc = 0x1730bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x1730c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1730C0u;
    {
        const bool branch_taken_0x1730c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730C0u;
            // 0x1730c4: 0xa483001c  sh          $v1, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730c0) {
            ctx->pc = 0x173130u;
            goto label_173130;
        }
    }
    ctx->pc = 0x1730C8u;
label_1730c8:
    // 0x1730c8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1730c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1730cc: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x1730ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1730d0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1730d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1730d4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1730d8: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x1730d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x1730dc: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x1730dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1730e0: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1730e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1730e4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1730E4u;
    {
        const bool branch_taken_0x1730e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1730e4) {
            ctx->pc = 0x1730E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1730E4u;
            // 0x1730e8: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1730F8u;
            goto label_1730f8;
        }
    }
    ctx->pc = 0x1730ECu;
    // 0x1730ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1730ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1730f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1730F0u;
    {
        const bool branch_taken_0x1730f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730F0u;
            // 0x1730f4: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730f0) {
            ctx->pc = 0x173130u;
            goto label_173130;
        }
    }
    ctx->pc = 0x1730F8u;
label_1730f8:
    // 0x1730f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1730f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1730fc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1730FCu;
    {
        const bool branch_taken_0x1730fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x173100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730FCu;
            // 0x173100: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730fc) {
            ctx->pc = 0x173110u;
            goto label_173110;
        }
    }
    ctx->pc = 0x173104u;
    // 0x173104: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173104u;
    {
        const bool branch_taken_0x173104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173104) {
            ctx->pc = 0x173108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173104u;
            // 0x173108: 0xa683001a  sh          $v1, 0x1A($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 26), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173114u;
            goto label_173114;
        }
    }
    ctx->pc = 0x17310Cu;
    // 0x17310c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_173110:
    // 0x173110: 0xa683001a  sh          $v1, 0x1A($s4)
    ctx->pc = 0x173110u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26), (uint16_t)GPR_U32(ctx, 3));
label_173114:
    // 0x173114: 0x9684001a  lhu         $a0, 0x1A($s4)
    ctx->pc = 0x173114u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x173118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17311c: 0x96850004  lhu         $a1, 0x4($s4)
    ctx->pc = 0x17311cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x173120: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173124: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x173124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x173128: 0xa485001e  sh          $a1, 0x1E($a0)
    ctx->pc = 0x173128u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x17312c: 0xa483001c  sh          $v1, 0x1C($a0)
    ctx->pc = 0x17312cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 3));
label_173130:
    // 0x173130: 0x9683011c  lhu         $v1, 0x11C($s4)
    ctx->pc = 0x173130u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x173134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173138: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x173138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17313c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17313Cu;
    {
        const bool branch_taken_0x17313c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x173140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17313Cu;
            // 0x173140: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17313c) {
            ctx->pc = 0x173150u;
            goto label_173150;
        }
    }
    ctx->pc = 0x173144u;
    // 0x173144: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173144u;
    {
        const bool branch_taken_0x173144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173144) {
            ctx->pc = 0x173148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173144u;
            // 0x173148: 0xa683011c  sh          $v1, 0x11C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173154u;
            goto label_173154;
        }
    }
    ctx->pc = 0x17314Cu;
    // 0x17314c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x17314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_173150:
    // 0x173150: 0xa683011c  sh          $v1, 0x11C($s4)
    ctx->pc = 0x173150u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
label_173154:
    // 0x173154: 0x9684011c  lhu         $a0, 0x11C($s4)
    ctx->pc = 0x173154u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x173158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17315c: 0x96850004  lhu         $a1, 0x4($s4)
    ctx->pc = 0x17315cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x173160: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173164: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x173164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x173168: 0xa4850120  sh          $a1, 0x120($a0)
    ctx->pc = 0x173168u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 5));
    // 0x17316c: 0xa483011e  sh          $v1, 0x11E($a0)
    ctx->pc = 0x17316cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x173170: 0x9683021e  lhu         $v1, 0x21E($s4)
    ctx->pc = 0x173170u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 542)));
    // 0x173174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173178: 0xa683021e  sh          $v1, 0x21E($s4)
    ctx->pc = 0x173178u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x17317c: 0x9683021e  lhu         $v1, 0x21E($s4)
    ctx->pc = 0x17317cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 542)));
    // 0x173180: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x173180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x173184: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173184u;
    {
        const bool branch_taken_0x173184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173184) {
            ctx->pc = 0x173188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173184u;
            // 0x173188: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173198u;
            goto label_173198;
        }
    }
    ctx->pc = 0x17318Cu;
    // 0x17318c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x17318cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x173190: 0xa683021e  sh          $v1, 0x21E($s4)
    ctx->pc = 0x173190u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x173194: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x173194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_173198:
    // 0x173198: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x173198u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17319c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17319cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1731a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1731a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1731a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1731a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1731a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1731a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1731ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1731acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1731b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1731b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1731b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1731b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1731b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1731B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1731BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1731B8u;
            // 0x1731bc: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1731C0u;
    ctx->pc = 0x1731c0u;
}
