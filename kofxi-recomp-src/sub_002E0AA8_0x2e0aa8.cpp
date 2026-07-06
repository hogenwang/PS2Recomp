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

// Function: sub_002E0AA8
// Address: 0x2e0aa8 - 0x2e0e80
void sub_002E0AA8_0x2e0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0AA8_0x2e0aa8");
#endif

    switch (ctx->pc) {
        case 0x2e0ad8u: goto label_2e0ad8;
        case 0x2e0bb8u: goto label_2e0bb8;
        case 0x2e0c90u: goto label_2e0c90;
        case 0x2e0d70u: goto label_2e0d70;
        default: break;
    }

    ctx->pc = 0x2e0aa8u;

    // 0x2e0aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0aac: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2e0aacu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0ab4: 0x3c0a5a82  lui         $t2, 0x5A82
    ctx->pc = 0x2e0ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23170 << 16));
    // 0x2e0ab8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2e0ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0abc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2e0abcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ac0: 0x8f2f0000  lw          $t7, 0x0($t9)
    ctx->pc = 0x2e0ac0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2e0ac4: 0x354a7999  ori         $t2, $t2, 0x7999
    ctx->pc = 0x2e0ac4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)31129);
    // 0x2e0ac8: 0x8f2b0004  lw          $t3, 0x4($t9)
    ctx->pc = 0x2e0ac8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x2e0acc: 0x8f2d0008  lw          $t5, 0x8($t9)
    ctx->pc = 0x2e0accu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2e0ad0: 0x8f2c000c  lw          $t4, 0xC($t9)
    ctx->pc = 0x2e0ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x2e0ad4: 0x8f380010  lw          $t8, 0x10($t9)
    ctx->pc = 0x2e0ad4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e0ad8:
    // 0x2e0ad8: 0x31c8000f  andi        $t0, $t6, 0xF
    ctx->pc = 0x2e0ad8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2e0adc: 0x29c50010  slti        $a1, $t6, 0x10
    ctx->pc = 0x2e0adcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e0ae0: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x2e0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2e0ae4: 0x2502000d  addiu       $v0, $t0, 0xD
    ctx->pc = 0x2e0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13));
    // 0x2e0ae8: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2e0ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2e0aec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e0aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e0af0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2e0af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e0af4: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2e0af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2e0af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e0afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e0b00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e0b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e0b04: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2e0b04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e0b08: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2e0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2e0b0c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e0b10: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2e0b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2e0b14: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x2e0b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0b18: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0B18u;
    {
        const bool branch_taken_0x2e0b18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B18u;
        // 0x2e0b1c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b18) {
            ctx->pc = 0x2E0B4Cu;
            goto label_2e0b4c;
        }
    }
    ctx->pc = 0x2E0B20u;
    // 0x2e0b20: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e0b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0b24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0b28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0b2c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2e0b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0b30: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2e0b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2e0b34: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2e0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2e0b38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e0b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e0b3c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2e0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e0b40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e0b44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e0b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e0b48: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2e0b48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2e0b4c:
    // 0x2e0b4c: 0xb1027  nor         $v0, $zero, $t3
    ctx->pc = 0x2e0b4cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
    // 0x2e0b50: 0x16d2824  and         $a1, $t3, $t5
    ctx->pc = 0x2e0b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
    // 0x2e0b54: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x2e0b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2e0b58: 0xf26c2  srl         $a0, $t7, 27
    ctx->pc = 0x2e0b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 15), 27));
    // 0x2e0b5c: 0xf1940  sll         $v1, $t7, 5
    ctx->pc = 0x2e0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
    // 0x2e0b60: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2e0b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2e0b64: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e0b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e0b68: 0xb2082  srl         $a0, $t3, 2
    ctx->pc = 0x2e0b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 2));
    // 0x2e0b6c: 0xb1780  sll         $v0, $t3, 30
    ctx->pc = 0x2e0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 30));
    // 0x2e0b70: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x2e0b70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b74: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2e0b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0b78: 0x3052821  addu        $a1, $t8, $a1
    ctx->pc = 0x2e0b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x2e0b7c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2e0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2e0b80: 0x180c02d  daddu       $t8, $t4, $zero
    ctx->pc = 0x2e0b80u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b84: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2e0b84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b88: 0x446825  or          $t5, $v0, $a0
    ctx->pc = 0x2e0b88u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e0b8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0b90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e0b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e0b94: 0x29c50014  slti        $a1, $t6, 0x14
    ctx->pc = 0x2e0b94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2e0b98: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2e0b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0b9c: 0x14a0ffce  bnez        $a1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2E0B9Cu;
    {
        const bool branch_taken_0x2e0b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B9Cu;
        // 0x2e0ba0: 0xe0782d  daddu       $t7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0b9c) {
            ctx->pc = 0x2E0AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0ad8;
        }
    }
    ctx->pc = 0x2E0BA4u;
    // 0x2e0ba4: 0x29c20028  slti        $v0, $t6, 0x28
    ctx->pc = 0x2e0ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2e0ba8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E0BA8u;
    {
        const bool branch_taken_0x2e0ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BA8u;
        // 0x2e0bac: 0x29c2003c  slti        $v0, $t6, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ba8) {
            ctx->pc = 0x2E0C80u;
            goto label_2e0c80;
        }
    }
    ctx->pc = 0x2E0BB0u;
    // 0x2e0bb0: 0x3c106ed9  lui         $s0, 0x6ED9
    ctx->pc = 0x2e0bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28377 << 16));
    // 0x2e0bb4: 0x3610eba1  ori         $s0, $s0, 0xEBA1
    ctx->pc = 0x2e0bb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)60321);
label_2e0bb8:
    // 0x2e0bb8: 0x31c8000f  andi        $t0, $t6, 0xF
    ctx->pc = 0x2e0bb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2e0bbc: 0x29c50010  slti        $a1, $t6, 0x10
    ctx->pc = 0x2e0bbcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e0bc0: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x2e0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2e0bc4: 0x2502000d  addiu       $v0, $t0, 0xD
    ctx->pc = 0x2e0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13));
    // 0x2e0bc8: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2e0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2e0bcc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e0bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e0bd0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2e0bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e0bd4: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2e0bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2e0bd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e0bdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e0be0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e0be4: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2e0be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e0be8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2e0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2e0bec: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e0becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e0bf0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2e0bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2e0bf4: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x2e0bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0bf8: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0BF8u;
    {
        const bool branch_taken_0x2e0bf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BF8u;
        // 0x2e0bfc: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bf8) {
            ctx->pc = 0x2E0C2Cu;
            goto label_2e0c2c;
        }
    }
    ctx->pc = 0x2E0C00u;
    // 0x2e0c00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0c04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0c08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e0c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0c0c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2e0c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2e0c10: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2e0c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2e0c14: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2e0c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2e0c18: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e0c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e0c1c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2e0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e0c20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e0c24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e0c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e0c28: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2e0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_2e0c2c:
    // 0x2e0c2c: 0x726c2  srl         $a0, $a3, 27
    ctx->pc = 0x2e0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 27));
    // 0x2e0c30: 0x16d1026  xor         $v0, $t3, $t5
    ctx->pc = 0x2e0c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 13));
    // 0x2e0c34: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2e0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2e0c38: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x2e0c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0c3c: 0x4c1026  xor         $v0, $v0, $t4
    ctx->pc = 0x2e0c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 12));
    // 0x2e0c40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e0c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e0c44: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x2e0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2e0c48: 0x180c02d  daddu       $t8, $t4, $zero
    ctx->pc = 0x2e0c48u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e0c50: 0xb2882  srl         $a1, $t3, 2
    ctx->pc = 0x2e0c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), 2));
    // 0x2e0c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e0c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0c58: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0c5c: 0xb2780  sll         $a0, $t3, 30
    ctx->pc = 0x2e0c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 30));
    // 0x2e0c60: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x2e0c60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c64: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2e0c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0c68: 0x29c60028  slti        $a2, $t6, 0x28
    ctx->pc = 0x2e0c68u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2e0c6c: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2e0c6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c70: 0x856825  or          $t5, $a0, $a1
    ctx->pc = 0x2e0c70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e0c74: 0x14c0ffd0  bnez        $a2, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2E0C74u;
    {
        const bool branch_taken_0x2e0c74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C74u;
        // 0x2e0c78: 0xe0782d  daddu       $t7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c74) {
            ctx->pc = 0x2E0BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0bb8;
        }
    }
    ctx->pc = 0x2E0C7Cu;
    // 0x2e0c7c: 0x29c2003c  slti        $v0, $t6, 0x3C
    ctx->pc = 0x2e0c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)60) ? 1 : 0);
label_2e0c80:
    // 0x2e0c80: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E0C80u;
    {
        const bool branch_taken_0x2e0c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C80u;
        // 0x2e0c84: 0x29c20050  slti        $v0, $t6, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c80) {
            ctx->pc = 0x2E0D60u;
            goto label_2e0d60;
        }
    }
    ctx->pc = 0x2E0C88u;
    // 0x2e0c88: 0x3c108f1b  lui         $s0, 0x8F1B
    ctx->pc = 0x2e0c88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36635 << 16));
    // 0x2e0c8c: 0x3610bcdc  ori         $s0, $s0, 0xBCDC
    ctx->pc = 0x2e0c8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)48348);
label_2e0c90:
    // 0x2e0c90: 0x31c8000f  andi        $t0, $t6, 0xF
    ctx->pc = 0x2e0c90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2e0c94: 0x29c50010  slti        $a1, $t6, 0x10
    ctx->pc = 0x2e0c94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e0c98: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x2e0c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2e0c9c: 0x2502000d  addiu       $v0, $t0, 0xD
    ctx->pc = 0x2e0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13));
    // 0x2e0ca0: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2e0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2e0ca4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e0ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e0ca8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2e0ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e0cac: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2e0cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2e0cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e0cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e0cb8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e0cbc: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2e0cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e0cc0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2e0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2e0cc4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e0cc8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2e0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2e0ccc: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x2e0cccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0cd0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0CD0u;
    {
        const bool branch_taken_0x2e0cd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0CD0u;
        // 0x2e0cd4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0cd0) {
            ctx->pc = 0x2E0D04u;
            goto label_2e0d04;
        }
    }
    ctx->pc = 0x2E0CD8u;
    // 0x2e0cd8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0cdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0ce0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0ce4: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2e0ce8: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2e0ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2e0cec: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2e0cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2e0cf0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e0cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e0cf4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2e0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e0cf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e0cfc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e0cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e0d00: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2e0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_2e0d04:
    // 0x2e0d04: 0x1ac1025  or          $v0, $t5, $t4
    ctx->pc = 0x2e0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x2e0d08: 0x1ac2024  and         $a0, $t5, $t4
    ctx->pc = 0x2e0d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x2e0d0c: 0x72ec2  srl         $a1, $a3, 27
    ctx->pc = 0x2e0d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 27));
    // 0x2e0d10: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x2e0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x2e0d14: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2e0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2e0d18: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x2e0d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0d1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e0d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e0d20: 0xb2780  sll         $a0, $t3, 30
    ctx->pc = 0x2e0d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 30));
    // 0x2e0d24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2e0d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2e0d28: 0xb2882  srl         $a1, $t3, 2
    ctx->pc = 0x2e0d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), 2));
    // 0x2e0d2c: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x2e0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2e0d30: 0x180c02d  daddu       $t8, $t4, $zero
    ctx->pc = 0x2e0d30u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e0d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e0d38: 0x29c6003c  slti        $a2, $t6, 0x3C
    ctx->pc = 0x2e0d38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2e0d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e0d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0d40: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0d44: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2e0d44u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d48: 0x856825  or          $t5, $a0, $a1
    ctx->pc = 0x2e0d48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e0d4c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2e0d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0d50: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x2e0d50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d54: 0x14c0ffce  bnez        $a2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2E0D54u;
    {
        const bool branch_taken_0x2e0d54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D54u;
        // 0x2e0d58: 0xe0782d  daddu       $t7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d54) {
            ctx->pc = 0x2E0C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0c90;
        }
    }
    ctx->pc = 0x2E0D5Cu;
    // 0x2e0d5c: 0x29c20050  slti        $v0, $t6, 0x50
    ctx->pc = 0x2e0d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)80) ? 1 : 0);
label_2e0d60:
    // 0x2e0d60: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E0D60u;
    {
        const bool branch_taken_0x2e0d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d60) {
            ctx->pc = 0x2E0D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D60u;
            // 0x2e0d64: 0x8f230000  lw          $v1, 0x0($t9) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0E38u;
            goto label_2e0e38;
        }
    }
    ctx->pc = 0x2E0D68u;
    // 0x2e0d68: 0x3c10ca62  lui         $s0, 0xCA62
    ctx->pc = 0x2e0d68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51810 << 16));
    // 0x2e0d6c: 0x3610c1d6  ori         $s0, $s0, 0xC1D6
    ctx->pc = 0x2e0d6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)49622);
label_2e0d70:
    // 0x2e0d70: 0x31c8000f  andi        $t0, $t6, 0xF
    ctx->pc = 0x2e0d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2e0d74: 0x29c50010  slti        $a1, $t6, 0x10
    ctx->pc = 0x2e0d74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e0d78: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x2e0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2e0d7c: 0x2502000d  addiu       $v0, $t0, 0xD
    ctx->pc = 0x2e0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 13));
    // 0x2e0d80: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2e0d84: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e0d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e0d88: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2e0d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e0d8c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2e0d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2e0d90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e0d94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e0d98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e0d9c: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e0da0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2e0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2e0da4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2e0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2e0da8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2e0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2e0dac: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x2e0dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0db0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E0DB0u;
    {
        const bool branch_taken_0x2e0db0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DB0u;
        // 0x2e0db4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0db0) {
            ctx->pc = 0x2E0DE4u;
            goto label_2e0de4;
        }
    }
    ctx->pc = 0x2E0DB8u;
    // 0x2e0db8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e0dbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0dc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0dc4: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2e0dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2e0dc8: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2e0dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2e0dcc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2e0dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2e0dd0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2e0dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2e0dd4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2e0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2e0dd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e0ddc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e0ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e0de0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2e0de0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_2e0de4:
    // 0x2e0de4: 0x726c2  srl         $a0, $a3, 27
    ctx->pc = 0x2e0de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 27));
    // 0x2e0de8: 0x16d1026  xor         $v0, $t3, $t5
    ctx->pc = 0x2e0de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 13));
    // 0x2e0dec: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2e0decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2e0df0: 0xc93821  addu        $a3, $a2, $t1
    ctx->pc = 0x2e0df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2e0df4: 0x4c1026  xor         $v0, $v0, $t4
    ctx->pc = 0x2e0df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 12));
    // 0x2e0df8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e0df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e0dfc: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x2e0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2e0e00: 0x180c02d  daddu       $t8, $t4, $zero
    ctx->pc = 0x2e0e00u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e0e08: 0xb2882  srl         $a1, $t3, 2
    ctx->pc = 0x2e0e08u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), 2));
    // 0x2e0e0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0e10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0e14: 0xb2780  sll         $a0, $t3, 30
    ctx->pc = 0x2e0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 30));
    // 0x2e0e18: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x2e0e18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e1c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2e0e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0e20: 0x29c60050  slti        $a2, $t6, 0x50
    ctx->pc = 0x2e0e20u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2e0e24: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x2e0e24u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e28: 0x856825  or          $t5, $a0, $a1
    ctx->pc = 0x2e0e28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2e0e2c: 0x14c0ffd0  bnez        $a2, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2E0E2Cu;
    {
        const bool branch_taken_0x2e0e2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E2Cu;
        // 0x2e0e30: 0xe0782d  daddu       $t7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e2c) {
            ctx->pc = 0x2E0D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0d70;
        }
    }
    ctx->pc = 0x2E0E34u;
    // 0x2e0e34: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x2e0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_2e0e38:
    // 0x2e0e38: 0x8f240004  lw          $a0, 0x4($t9)
    ctx->pc = 0x2e0e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x2e0e3c: 0x8f260008  lw          $a2, 0x8($t9)
    ctx->pc = 0x2e0e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x2e0e40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2e0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e0e44: 0x8f25000c  lw          $a1, 0xC($t9)
    ctx->pc = 0x2e0e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x2e0e48: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2e0e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2e0e4c: 0x8f220010  lw          $v0, 0x10($t9)
    ctx->pc = 0x2e0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x2e0e50: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x2e0e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2e0e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e58: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2e0e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2e0e5c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x2e0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2e0e60: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x2e0e60u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
    // 0x2e0e64: 0xaf240004  sw          $a0, 0x4($t9)
    ctx->pc = 0x2e0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 4));
    // 0x2e0e68: 0xaf220010  sw          $v0, 0x10($t9)
    ctx->pc = 0x2e0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 2));
    // 0x2e0e6c: 0xaf260008  sw          $a2, 0x8($t9)
    ctx->pc = 0x2e0e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 6));
    // 0x2e0e70: 0xaf25000c  sw          $a1, 0xC($t9)
    ctx->pc = 0x2e0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 5));
    // 0x2e0e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E74u;
        // 0x2e0e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E7Cu;
    // 0x2e0e7c: 0x0  nop
    ctx->pc = 0x2e0e7cu;
    // NOP
}
