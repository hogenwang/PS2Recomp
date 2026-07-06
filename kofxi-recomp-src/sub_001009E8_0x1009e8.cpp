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

// Function: sub_001009E8
// Address: 0x1009e8 - 0x100bd0
void sub_001009E8_0x1009e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001009E8_0x1009e8");
#endif

    switch (ctx->pc) {
        case 0x100a78u: goto label_100a78;
        case 0x100aacu: goto label_100aac;
        default: break;
    }

    ctx->pc = 0x1009e8u;

    // 0x1009e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1009e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1009ec: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1009f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1009f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1009f4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1009f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1009f8: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1009f8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1009fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1009fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x100a00: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x100a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x100a04: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x100a04u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x100a08: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x100a08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x100a0c: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x100a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x100a10: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x100a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x100a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100a18: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x100a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x100a1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x100a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x100a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100a28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x100a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x100a2c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x100a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x100a30: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x100a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x100a34: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x100a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x100a38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x100a3c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x100a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x100a40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x100a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x100a44: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x100a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x100a48: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x100a4c: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x100a4cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x100a50: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x100a50u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x100a54: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x100a58: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x100a58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x100a5c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x100a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x100a60: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x100A60u;
    {
        const bool branch_taken_0x100a60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A60u;
        // 0x100a64: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a60) {
            ctx->pc = 0x100A9Cu;
            goto label_100a9c;
        }
    }
    ctx->pc = 0x100A68u;
    // 0x100a68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a70: 0xc040248  jal         func_100920
    ctx->pc = 0x100A70u;
    SET_GPR_U32(ctx, 31, 0x100A78u);
    ctx->pc = 0x100A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A70u;
    // 0x100a74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100920u, 0x100A70u, 0x100A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A78u;
label_100a78:
    // 0x100a78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x100a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x100a7c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x100a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x100a80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100a80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x100a84: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x100a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x100a88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100a8c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x100a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x100a90: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x100a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x100a94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x100A94u;
    {
        const bool branch_taken_0x100a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A94u;
        // 0x100a98: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a94) {
            ctx->pc = 0x100AC0u;
            goto label_100ac0;
        }
    }
    ctx->pc = 0x100A9Cu;
label_100a9c:
    // 0x100a9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100aa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100aa4: 0xc040248  jal         func_100920
    ctx->pc = 0x100AA4u;
    SET_GPR_U32(ctx, 31, 0x100AACu);
    ctx->pc = 0x100AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100AA4u;
    // 0x100aa8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100920u, 0x100AA4u, 0x100AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100AACu;
label_100aac:
    // 0x100aac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x100aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x100ab0: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x100ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x100ab4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100ab4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x100ab8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x100ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x100abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_100ac0:
    // 0x100ac0: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x100ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x100ac4: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x100ac8: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x100acc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x100accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x100ad0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x100ad4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x100ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x100ad8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100ad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x100adc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x100adcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x100ae0: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x100ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x100ae4: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x100ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x100ae8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x100ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x100aec: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x100aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x100af0: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x100af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x100af4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x100af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x100af8: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x100af8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x100afc: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x100afcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x100b00: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x100b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x100b04: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x100b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x100b08: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x100b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x100b0c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x100b0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b10: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x100b10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x100b14: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x100b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x100b18: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x100b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x100b1c: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x100b1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x100b20: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x100b24: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x100b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x100b28: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x100b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x100b2c: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x100b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x100b30: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x100b30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x100b34: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x100b34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x100b38: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x100b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x100b3c: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x100b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x100b40: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x100b40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x100b44: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x100b44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x100b48: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x100b48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x100b4c: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x100b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x100b50: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x100b50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x100b54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100B54u;
    {
        const bool branch_taken_0x100b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B54u;
        // 0x100b58: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b54) {
            ctx->pc = 0x100B68u;
            goto label_100b68;
        }
    }
    ctx->pc = 0x100B5Cu;
    // 0x100b5c: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x100b5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x100b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x100B60u;
    {
        const bool branch_taken_0x100b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B60u;
        // 0x100b64: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b60) {
            ctx->pc = 0x100B74u;
            goto label_100b74;
        }
    }
    ctx->pc = 0x100B68u;
label_100b68:
    // 0x100b68: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x100b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x100b6c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x100b70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_100b74:
    // 0x100b74: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x100b74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x100b78: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x100b7c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x100B7Cu;
    {
        const bool branch_taken_0x100b7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B7Cu;
        // 0x100b80: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b7c) {
            ctx->pc = 0x100B98u;
            goto label_100b98;
        }
    }
    ctx->pc = 0x100B84u;
    // 0x100b84: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x100b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x100b88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x100b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x100b8c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x100b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x100b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100B90u;
    {
        const bool branch_taken_0x100b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B90u;
        // 0x100b94: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b90) {
            ctx->pc = 0x100B9Cu;
            goto label_100b9c;
        }
    }
    ctx->pc = 0x100B98u;
label_100b98:
    // 0x100b98: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x100b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_100b9c:
    // 0x100b9c: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x100b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x100ba0: 0xf  sync
    ctx->pc = 0x100ba0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x100ba4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x100ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x100ba8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x100ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x100bac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x100bacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100bb0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x100bb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100bb4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x100bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100bb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x100bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100bbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x100bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x100BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BC4u;
        // 0x100bc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100BCCu;
    // 0x100bcc: 0x0  nop
    ctx->pc = 0x100bccu;
    // NOP
}
