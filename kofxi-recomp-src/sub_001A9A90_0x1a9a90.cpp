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

// Function: sub_001A9A90
// Address: 0x1a9a90 - 0x1a9e20
void sub_001A9A90_0x1a9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9A90_0x1a9a90");
#endif

    switch (ctx->pc) {
        case 0x1a9bc0u: goto label_1a9bc0;
        default: break;
    }

    ctx->pc = 0x1a9a90u;

    // 0x1a9a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9a94: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x1a9a94u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9a9c: 0x3c104d52  lui         $s0, 0x4D52
    ctx->pc = 0x1a9a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19794 << 16));
    // 0x1a9aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9aa4: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x1a9aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x1a9aa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9aac: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a9aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ab0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a9ab4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a9ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ab8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a9ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a9abc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a9abcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ac0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a9ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a9ac4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a9ac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ac8: 0x36104f46  ori         $s0, $s0, 0x4F46
    ctx->pc = 0x1a9ac8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20294);
    // 0x1a9acc: 0x930f0000  lbu         $t7, 0x0($t8)
    ctx->pc = 0x1a9accu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9ad0: 0x930e0003  lbu         $t6, 0x3($t8)
    ctx->pc = 0x1a9ad0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1a9ad4: 0x930c0002  lbu         $t4, 0x2($t8)
    ctx->pc = 0x1a9ad4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1a9ad8: 0x930d0001  lbu         $t5, 0x1($t8)
    ctx->pc = 0x1a9ad8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9adc: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1a9adcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1a9ae0: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x1a9ae0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1a9ae4: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1a9ae4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1a9ae8: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x1a9ae8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1a9aec: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x1a9aecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x1a9af0: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1a9af0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9af4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1a9af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1a9af8: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1a9af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9afc: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1a9afcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1a9b00: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a9b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a9b04: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a9b08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a9b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a9b0c: 0x93050002  lbu         $a1, 0x2($t8)
    ctx->pc = 0x1a9b0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1a9b10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a9b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9b14: 0x930b0003  lbu         $t3, 0x3($t8)
    ctx->pc = 0x1a9b14u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1a9b18: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x1a9b18u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9b1c: 0x930a0001  lbu         $t2, 0x1($t8)
    ctx->pc = 0x1a9b1cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9b20: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x1a9b20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x1a9b24: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x1a9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x1a9b28: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x1a9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x1a9b2c: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x1a9b2cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9b30: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x1a9b30u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1a9b34: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1a9b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1a9b38: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1a9b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1a9b3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b40: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x1a9b40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x1a9b44: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1a9b44u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b48: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x1a9b48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x1a9b4c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a9b4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a9b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a9b54: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x1a9b54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x1a9b58: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1a9b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1a9b5c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1a9b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1a9b60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a9b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9b64: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x1a9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x1a9b68: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x1a9b68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x1a9b6c: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1a9b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x1a9b70: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x1a9b70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x1a9b74: 0x82c825  or          $t9, $a0, $v0
    ctx->pc = 0x1a9b74u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9b78: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1a9b78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x1a9b7c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1a9b7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1a9b80: 0x15f0009e  bne         $t7, $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1A9B80u;
    {
        const bool branch_taken_0x1a9b80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B80u;
        // 0x1a9b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b80) {
            ctx->pc = 0x1A9DFCu;
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9B88u;
    // 0x1a9b88: 0x3c024646  lui         $v0, 0x4646
    ctx->pc = 0x1a9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17990 << 16));
    // 0x1a9b8c: 0x34424941  ori         $v0, $v0, 0x4941
    ctx->pc = 0x1a9b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18753);
    // 0x1a9b90: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9B90u;
    {
        const bool branch_taken_0x1a9b90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9b90) {
            ctx->pc = 0x1A9B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9B90u;
            // 0x1a9b94: 0x3191021  addu        $v0, $t8, $t9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9BA0u;
            goto label_1a9ba0;
        }
    }
    ctx->pc = 0x1A9B98u;
    // 0x1a9b98: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1A9B98u;
    {
        const bool branch_taken_0x1a9b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B98u;
        // 0x1a9b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b98) {
            ctx->pc = 0x1A9DFCu;
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9BA0u;
label_1a9ba0:
    // 0x1a9ba0: 0x244bfffc  addiu       $t3, $v0, -0x4
    ctx->pc = 0x1a9ba0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1a9ba4: 0x30b182b  sltu        $v1, $t8, $t3
    ctx->pc = 0x1a9ba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1a9ba8: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1A9BA8u;
    {
        const bool branch_taken_0x1a9ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BA8u;
        // 0x1a9bac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ba8) {
            ctx->pc = 0x1A9DFCu;
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9BB0u;
    // 0x1a9bb0: 0x3c0c00ff  lui         $t4, 0xFF
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)255 << 16));
    // 0x1a9bb4: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x1a9bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1a9bb8: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x1a9bb8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9bbc: 0x0  nop
    ctx->pc = 0x1a9bbcu;
    // NOP
label_1a9bc0:
    // 0x1a9bc0: 0x3c0a444e  lui         $t2, 0x444E
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17486 << 16));
    // 0x1a9bc4: 0x93080003  lbu         $t0, 0x3($t8)
    ctx->pc = 0x1a9bc4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1a9bc8: 0x354a5353  ori         $t2, $t2, 0x5353
    ctx->pc = 0x1a9bc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21331);
    // 0x1a9bcc: 0x93060002  lbu         $a2, 0x2($t8)
    ctx->pc = 0x1a9bccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1a9bd0: 0x93070001  lbu         $a3, 0x1($t8)
    ctx->pc = 0x1a9bd0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9bd4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1a9bd4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1a9bd8: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x1a9bd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1a9bdc: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1a9bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1a9be0: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x1a9be0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1a9be4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1a9be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a9be8: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1a9be8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9bec: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1a9becu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1a9bf0: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1a9bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9bf4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1a9bf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1a9bf8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a9bfc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a9c00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a9c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9c04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a9c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a9c08: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x1a9c08u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9c0c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1a9c10: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x1a9c14: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x1a9c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x1a9c18: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x1a9c1c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1a9c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1a9c20: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1a9c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1a9c24: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x1a9c24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1a9c28: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1a9c28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1a9c2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a9c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a9c30: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a9c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a9c34: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x1a9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x1a9c38: 0x1267825  or          $t7, $t1, $a2
    ctx->pc = 0x1a9c38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1a9c3c: 0x11ea004c  beq         $t7, $t2, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A9C3Cu;
    {
        const bool branch_taken_0x1a9c3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x1A9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C3Cu;
        // 0x1a9c40: 0x82c825  or          $t9, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c3c) {
            ctx->pc = 0x1A9D70u;
            goto label_1a9d70;
        }
    }
    ctx->pc = 0x1A9C44u;
    // 0x1a9c44: 0x3c024d4d  lui         $v0, 0x4D4D
    ctx->pc = 0x1a9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19789 << 16));
    // 0x1a9c48: 0x34424f43  ori         $v0, $v0, 0x4F43
    ctx->pc = 0x1a9c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20291);
    // 0x1a9c4c: 0x15e20064  bne         $t7, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1A9C4Cu;
    {
        const bool branch_taken_0x1a9c4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C4Cu;
        // 0x1a9c50: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c4c) {
            ctx->pc = 0x1A9DE0u;
            goto label_1a9de0;
        }
    }
    ctx->pc = 0x1A9C54u;
    // 0x1a9c54: 0x15a00066  bnez        $t5, . + 4 + (0x66 << 2)
    ctx->pc = 0x1A9C54u;
    {
        const bool branch_taken_0x1a9c54 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C54u;
        // 0x1a9c58: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c54) {
            ctx->pc = 0x1A9DF0u;
            goto label_1a9df0;
        }
    }
    ctx->pc = 0x1A9C5Cu;
    // 0x1a9c5c: 0x2b220012  slti        $v0, $t9, 0x12
    ctx->pc = 0x1a9c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1a9c60: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1A9C60u;
    {
        const bool branch_taken_0x1a9c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C60u;
        // 0x1a9c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c60) {
            ctx->pc = 0x1A9DFCu;
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9C68u;
    // 0x1a9c68: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1a9c68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9c6c: 0x2406400e  addiu       $a2, $zero, 0x400E
    ctx->pc = 0x1a9c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16398));
    // 0x1a9c70: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1a9c70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9c74: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x1a9c74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x1a9c78: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a9c7c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1a9c7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9c80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a9c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a9c84: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a9c88: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a9c8c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1a9c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1a9c90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9c94: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1a9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1a9c98: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x1a9c98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1a9c9c: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x1a9c9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1a9ca0: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1a9ca0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9ca4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1a9ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1a9ca8: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x1a9ca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9cac: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1a9cb0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a9cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a9cb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9cb8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a9cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a9cbc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a9cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a9cc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9cc4: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x1a9cc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1a9cc8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a9cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a9ccc: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1a9cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1a9cd0: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x1a9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1a9cd4: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x1a9cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x1a9cd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1a9cdc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a9cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a9ce0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9ce4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a9ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a9ce8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a9ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a9cec: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1a9cecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9cf0: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1a9cf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9cf4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x1a9cf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x1a9cf8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a9cfc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a9cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a9d00: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a9d04: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a9d08: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1a9d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1a9d0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9d10: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1a9d14: 0x93050000  lbu         $a1, 0x0($t8)
    ctx->pc = 0x1a9d14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9d18: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1a9d18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9d1c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x1a9d1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x1a9d20: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x1a9d20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9d24: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1a9d24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9d28: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x1a9d28u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x1a9d2c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1a9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a9d30: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a9d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a9d34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9d38: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a9d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a9d3c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a9d40: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a9d44: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1a9d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1a9d48: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x1a9d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1a9d4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9d50: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1a9d50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a9d54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a9d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a9d58: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1a9d5c: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A9D5Cu;
    {
        const bool branch_taken_0x1a9d5c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D5Cu;
        // 0x1a9d60: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d5c) {
            ctx->pc = 0x1A9DECu;
            goto label_1a9dec;
        }
    }
    ctx->pc = 0x1A9D64u;
    // 0x1a9d64: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A9D64u;
    {
        const bool branch_taken_0x1a9d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D64u;
        // 0x1a9d68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d64) {
            ctx->pc = 0x1A9DFCu;
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9D6Cu;
    // 0x1a9d6c: 0x0  nop
    ctx->pc = 0x1a9d6cu;
    // NOP
label_1a9d70:
    // 0x1a9d70: 0x15c0001f  bnez        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9D70u;
    {
        const bool branch_taken_0x1a9d70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D70u;
        // 0x1a9d74: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d70) {
            ctx->pc = 0x1A9DF0u;
            goto label_1a9df0;
        }
    }
    ctx->pc = 0x1A9D78u;
    // 0x1a9d78: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x1a9d78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x1a9d7c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1a9d7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9d80: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x1a9d80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x1a9d84: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x1a9d84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x1a9d88: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1a9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1a9d8c: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x1a9d8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a9d90: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x1a9d90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x1a9d94: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1a9d94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1a9d98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a9d9c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a9d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a9da0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a9da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a9da4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a9da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9da8: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x1a9da8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a9dac: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1a9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a9db0: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1a9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1a9db4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a9db8: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x1a9db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x1a9dbc: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1a9dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1a9dc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a9dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a9dc4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a9dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a9dc8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a9dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9dcc: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9DCCu;
    {
        const bool branch_taken_0x1a9dcc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DCCu;
        // 0x1a9dd0: 0x3028821  addu        $s1, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dcc) {
            ctx->pc = 0x1A9DECu;
            goto label_1a9dec;
        }
    }
    ctx->pc = 0x1A9DD4u;
    // 0x1a9dd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9DD4u;
    {
        const bool branch_taken_0x1a9dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DD4u;
        // 0x1a9dd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dd4) {
            ctx->pc = 0x1A9DFCu;
            goto label_1a9dfc;
        }
    }
    ctx->pc = 0x1A9DDCu;
    // 0x1a9ddc: 0x0  nop
    ctx->pc = 0x1a9ddcu;
    // NOP
label_1a9de0:
    // 0x1a9de0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1a9de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a9de4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a9de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a9de8: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_1a9dec:
    // 0x1a9dec: 0x30b102b  sltu        $v0, $t8, $t3
    ctx->pc = 0x1a9decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_1a9df0:
    // 0x1a9df0: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x1A9DF0u;
    {
        const bool branch_taken_0x1a9df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9df0) {
            ctx->pc = 0x1A9DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9DF0u;
            // 0x1a9df4: 0x93090000  lbu         $t1, 0x0($t8) (Delay Slot)
            SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9bc0;
        }
    }
    ctx->pc = 0x1A9DF8u;
    // 0x1a9df8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a9df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9dfc:
    // 0x1a9dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9e04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9e08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9e0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a9e0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9e10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a9e10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a9e14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E14u;
        // 0x1a9e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E1Cu;
    // 0x1a9e1c: 0x0  nop
    ctx->pc = 0x1a9e1cu;
    // NOP
    if (ctx->pc == 0x1a9e1cu) { ctx->pc = 0x1a9e20u; }
}
