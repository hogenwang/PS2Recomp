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

// Function: sub_0017CFF0
// Address: 0x17cff0 - 0x17d260
void sub_0017CFF0_0x17cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CFF0_0x17cff0");
#endif

    switch (ctx->pc) {
        case 0x17d0d4u: goto label_17d0d4;
        case 0x17d1acu: goto label_17d1ac;
        default: break;
    }

    ctx->pc = 0x17cff0u;

    // 0x17cff0: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x17cff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17cff4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17cff8: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x17cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x17cffc: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x17cffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x17d000: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17d000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17d004: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x17d004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x17d008: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17d008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17d00c: 0x24a5db64  addiu       $a1, $a1, -0x249C
    ctx->pc = 0x17d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957924));
    // 0x17d010: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x17d010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17d014: 0x24e7dc9d  addiu       $a3, $a3, -0x2363
    ctx->pc = 0x17d014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958237));
    // 0x17d018: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d01c: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x17d01cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17d020: 0x2463b828  addiu       $v1, $v1, -0x47D8
    ctx->pc = 0x17d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948904));
    // 0x17d024: 0xe85821  addu        $t3, $a3, $t0
    ctx->pc = 0x17d024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x17d028: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x17d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17d02c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x17d02cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x17d030: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x17d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x17d034: 0x24c6db94  addiu       $a2, $a2, -0x246C
    ctx->pc = 0x17d034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957972));
    // 0x17d038: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x17d038u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d03c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x17d03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x17d040: 0x24e7da58  addiu       $a3, $a3, -0x25A8
    ctx->pc = 0x17d040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957656));
    // 0x17d044: 0x91680020  lbu         $t0, 0x20($t3)
    ctx->pc = 0x17d044u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x17d048: 0xe95021  addu        $t2, $a3, $t1
    ctx->pc = 0x17d048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x17d04c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17d04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d050: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17d054: 0x91670040  lbu         $a3, 0x40($t3)
    ctx->pc = 0x17d054u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x17d058: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
    // 0x17d05c: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x17d05cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x17d060: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17d064: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x17d064u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d068: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x17d068u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17d06c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x17d06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x17d070: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17d070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d074: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x17d074u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x17d078: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x17d078u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x17d07c: 0x914b0000  lbu         $t3, 0x0($t2)
    ctx->pc = 0x17d07cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17d080: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x17d080u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x17d084: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x17d084u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x17d088: 0x11600038  beqz        $t3, . + 4 + (0x38 << 2)
    ctx->pc = 0x17D088u;
    {
        const bool branch_taken_0x17d088 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D088u;
        // 0x17d08c: 0x94c3f  dsra32      $t1, $t1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d088) {
            ctx->pc = 0x17D16Cu;
            goto label_17d16c;
        }
    }
    ctx->pc = 0x17D090u;
    // 0x17d090: 0x3c0b009f  lui         $t3, 0x9F
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)159 << 16));
    // 0x17d094: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x17d094u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d098: 0x916d9780  lbu         $t5, -0x6880($t3)
    ctx->pc = 0x17d098u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294940544)));
    // 0x17d09c: 0x55ac0004  bnel        $t5, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D09Cu;
    {
        const bool branch_taken_0x17d09c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        if (branch_taken_0x17d09c) {
            ctx->pc = 0x17D0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D09Cu;
            // 0x17d0a0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D0B0u;
            goto label_17d0b0;
        }
    }
    ctx->pc = 0x17D0A4u;
    // 0x17d0a4: 0x3c0d0093  lui         $t5, 0x93
    ctx->pc = 0x17d0a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)147 << 16));
    // 0x17d0a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D0A8u;
    {
        const bool branch_taken_0x17d0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0A8u;
        // 0x17d0ac: 0x25adedf0  addiu       $t5, $t5, -0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0a8) {
            ctx->pc = 0x17D0CCu;
            goto label_17d0cc;
        }
    }
    ctx->pc = 0x17D0B0u;
label_17d0b0:
    // 0x17d0b0: 0x15ab0004  bne         $t5, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D0B0u;
    {
        const bool branch_taken_0x17d0b0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 11));
        if (branch_taken_0x17d0b0) {
            ctx->pc = 0x17D0C4u;
            goto label_17d0c4;
        }
    }
    ctx->pc = 0x17D0B8u;
    // 0x17d0b8: 0x3c0d0093  lui         $t5, 0x93
    ctx->pc = 0x17d0b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)147 << 16));
    // 0x17d0bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D0BCu;
    {
        const bool branch_taken_0x17d0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0BCu;
        // 0x17d0c0: 0x25aded50  addiu       $t5, $t5, -0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0bc) {
            ctx->pc = 0x17D0CCu;
            goto label_17d0cc;
        }
    }
    ctx->pc = 0x17D0C4u;
label_17d0c4:
    // 0x17d0c4: 0x3c0d0093  lui         $t5, 0x93
    ctx->pc = 0x17d0c4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)147 << 16));
    // 0x17d0c8: 0x25adee90  addiu       $t5, $t5, -0x1170
    ctx->pc = 0x17d0c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962832));
label_17d0cc:
    // 0x17d0cc: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x17d0ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17d0d0: 0x25ac0090  addiu       $t4, $t5, 0x90
    ctx->pc = 0x17d0d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
label_17d0d4:
    // 0x17d0d4: 0x29c10009  slti        $at, $t6, 0x9
    ctx->pc = 0x17d0d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x17d0d8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x17D0D8u;
    {
        const bool branch_taken_0x17d0d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d0d8) {
            ctx->pc = 0x17D128u;
            goto label_17d128;
        }
    }
    ctx->pc = 0x17D0E0u;
    // 0x17d0e0: 0x5c00011  bltz        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D0E0u;
    {
        const bool branch_taken_0x17d0e0 = (GPR_S32(ctx, 14) < 0);
        if (branch_taken_0x17d0e0) {
            ctx->pc = 0x17D128u;
            goto label_17d128;
        }
    }
    ctx->pc = 0x17D0E8u;
    // 0x17d0e8: 0x858b0000  lh          $t3, 0x0($t4)
    ctx->pc = 0x17d0e8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x17d0ec: 0xa58b0010  sh          $t3, 0x10($t4)
    ctx->pc = 0x17d0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 16), (uint16_t)GPR_U32(ctx, 11));
    // 0x17d0f0: 0x858b0002  lh          $t3, 0x2($t4)
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x17d0f4: 0xa58b0012  sh          $t3, 0x12($t4)
    ctx->pc = 0x17d0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 18), (uint16_t)GPR_U32(ctx, 11));
    // 0x17d0f8: 0x858b0004  lh          $t3, 0x4($t4)
    ctx->pc = 0x17d0f8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x17d0fc: 0xa58b0014  sh          $t3, 0x14($t4)
    ctx->pc = 0x17d0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 20), (uint16_t)GPR_U32(ctx, 11));
    // 0x17d100: 0x818b0006  lb          $t3, 0x6($t4)
    ctx->pc = 0x17d100u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x17d104: 0xa18b0016  sb          $t3, 0x16($t4)
    ctx->pc = 0x17d104u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 22), (uint8_t)GPR_U32(ctx, 11));
    // 0x17d108: 0x818b0007  lb          $t3, 0x7($t4)
    ctx->pc = 0x17d108u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x17d10c: 0xa18b0017  sb          $t3, 0x17($t4)
    ctx->pc = 0x17d10cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 23), (uint8_t)GPR_U32(ctx, 11));
    // 0x17d110: 0x818b0008  lb          $t3, 0x8($t4)
    ctx->pc = 0x17d110u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x17d114: 0xa18b0018  sb          $t3, 0x18($t4)
    ctx->pc = 0x17d114u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 24), (uint8_t)GPR_U32(ctx, 11));
    // 0x17d118: 0xa1800019  sb          $zero, 0x19($t4)
    ctx->pc = 0x17d118u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d11c: 0x8d8b000c  lw          $t3, 0xC($t4)
    ctx->pc = 0x17d11cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x17d120: 0xad8b001c  sw          $t3, 0x1C($t4)
    ctx->pc = 0x17d120u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 11));
    // 0x17d124: 0x0  nop
    ctx->pc = 0x17d124u;
    // NOP
label_17d128:
    // 0x17d128: 0x11c40005  beq         $t6, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D128u;
    {
        const bool branch_taken_0x17d128 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 4));
        if (branch_taken_0x17d128) {
            ctx->pc = 0x17D140u;
            goto label_17d140;
        }
    }
    ctx->pc = 0x17D130u;
    // 0x17d130: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x17d130u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x17d134: 0x29c10000  slti        $at, $t6, 0x0
    ctx->pc = 0x17d134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17d138: 0x1020ffe6  beqz        $at, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17D138u;
    {
        const bool branch_taken_0x17d138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D138u;
        // 0x17d13c: 0x258cfff0  addiu       $t4, $t4, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d138) {
            ctx->pc = 0x17D0D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d0d4;
        }
    }
    ctx->pc = 0x17D140u;
label_17d140:
    // 0x17d140: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17d140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17d144: 0x1a45821  addu        $t3, $t5, $a0
    ctx->pc = 0x17d144u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x17d148: 0xa5690000  sh          $t1, 0x0($t3)
    ctx->pc = 0x17d148u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x17d14c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x17d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17d150: 0xa5680002  sh          $t0, 0x2($t3)
    ctx->pc = 0x17d150u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x17d154: 0xa5670004  sh          $a3, 0x4($t3)
    ctx->pc = 0x17d154u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x17d158: 0xa1640006  sb          $a0, 0x6($t3)
    ctx->pc = 0x17d158u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x17d15c: 0xa1640007  sb          $a0, 0x7($t3)
    ctx->pc = 0x17d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x17d160: 0xa1640008  sb          $a0, 0x8($t3)
    ctx->pc = 0x17d160u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x17d164: 0xa1640009  sb          $a0, 0x9($t3)
    ctx->pc = 0x17d164u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x17d168: 0xad66000c  sw          $a2, 0xC($t3)
    ctx->pc = 0x17d168u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 6));
label_17d16c:
    // 0x17d16c: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x17d16cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17d170: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x17d170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x17d174: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x17D174u;
    {
        const bool branch_taken_0x17d174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d174) {
            ctx->pc = 0x17D24Cu;
            goto label_17d24c;
        }
    }
    ctx->pc = 0x17D17Cu;
    // 0x17d17c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x17d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x17d180: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x17d180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17d184: 0x90849780  lbu         $a0, -0x6880($a0)
    ctx->pc = 0x17d184u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294940544)));
    // 0x17d188: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D188u;
    {
        const bool branch_taken_0x17d188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x17d188) {
            ctx->pc = 0x17D19Cu;
            goto label_17d19c;
        }
    }
    ctx->pc = 0x17D190u;
    // 0x17d190: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x17d190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x17d194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D194u;
    {
        const bool branch_taken_0x17d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D194u;
        // 0x17d198: 0x24c6ec50  addiu       $a2, $a2, -0x13B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d194) {
            ctx->pc = 0x17D1A4u;
            goto label_17d1a4;
        }
    }
    ctx->pc = 0x17D19Cu;
label_17d19c:
    // 0x17d19c: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x17d19cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x17d1a0: 0x24c6ecd0  addiu       $a2, $a2, -0x1330
    ctx->pc = 0x17d1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962384));
label_17d1a4:
    // 0x17d1a4: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x17d1a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17d1a8: 0x24cb006c  addiu       $t3, $a2, 0x6C
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
label_17d1ac:
    // 0x17d1ac: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x17d1acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x17d1b0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x17D1B0u;
    {
        const bool branch_taken_0x17d1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1b0) {
            ctx->pc = 0x17D200u;
            goto label_17d200;
        }
    }
    ctx->pc = 0x17D1B8u;
    // 0x17d1b8: 0x5400011  bltz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D1B8u;
    {
        const bool branch_taken_0x17d1b8 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x17d1b8) {
            ctx->pc = 0x17D200u;
            goto label_17d200;
        }
    }
    ctx->pc = 0x17D1C0u;
    // 0x17d1c0: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x17d1c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17d1c4: 0xa564000c  sh          $a0, 0xC($t3)
    ctx->pc = 0x17d1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x17d1c8: 0x85640002  lh          $a0, 0x2($t3)
    ctx->pc = 0x17d1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x17d1cc: 0xa564000e  sh          $a0, 0xE($t3)
    ctx->pc = 0x17d1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x17d1d0: 0x85640004  lh          $a0, 0x4($t3)
    ctx->pc = 0x17d1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17d1d4: 0xa5640010  sh          $a0, 0x10($t3)
    ctx->pc = 0x17d1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x17d1d8: 0x81640006  lb          $a0, 0x6($t3)
    ctx->pc = 0x17d1d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x17d1dc: 0xa1640012  sb          $a0, 0x12($t3)
    ctx->pc = 0x17d1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x17d1e0: 0x81640007  lb          $a0, 0x7($t3)
    ctx->pc = 0x17d1e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x17d1e4: 0xa1640013  sb          $a0, 0x13($t3)
    ctx->pc = 0x17d1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x17d1e8: 0x81640008  lb          $a0, 0x8($t3)
    ctx->pc = 0x17d1e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x17d1ec: 0xa1640014  sb          $a0, 0x14($t3)
    ctx->pc = 0x17d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x17d1f0: 0xa1600015  sb          $zero, 0x15($t3)
    ctx->pc = 0x17d1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d1f4: 0x9564000a  lhu         $a0, 0xA($t3)
    ctx->pc = 0x17d1f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x17d1f8: 0xa5640016  sh          $a0, 0x16($t3)
    ctx->pc = 0x17d1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x17d1fc: 0x0  nop
    ctx->pc = 0x17d1fcu;
    // NOP
label_17d200:
    // 0x17d200: 0x11430005  beq         $t2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D200u;
    {
        const bool branch_taken_0x17d200 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x17d200) {
            ctx->pc = 0x17D218u;
            goto label_17d218;
        }
    }
    ctx->pc = 0x17D208u;
    // 0x17d208: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x17d208u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x17d20c: 0x29410000  slti        $at, $t2, 0x0
    ctx->pc = 0x17d20cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17d210: 0x1020ffe6  beqz        $at, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17D210u;
    {
        const bool branch_taken_0x17d210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D210u;
        // 0x17d214: 0x256bfff4  addiu       $t3, $t3, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d210) {
            ctx->pc = 0x17D1ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d1ac;
        }
    }
    ctx->pc = 0x17D218u;
label_17d218:
    // 0x17d218: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x17d218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17d21c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17d220: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17d220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17d224: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17d224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17d228: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x17d228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17d22c: 0xa4890000  sh          $t1, 0x0($a0)
    ctx->pc = 0x17d22cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x17d230: 0xa4880002  sh          $t0, 0x2($a0)
    ctx->pc = 0x17d230u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x17d234: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x17d234u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x17d238: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x17d238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x17d23c: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x17d23cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x17d240: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x17d240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x17d244: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x17d244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d248: 0xa485000a  sh          $a1, 0xA($a0)
    ctx->pc = 0x17d248u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 5));
label_17d24c:
    // 0x17d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D254u;
    // 0x17d254: 0x0  nop
    ctx->pc = 0x17d254u;
    // NOP
    // 0x17d258: 0x0  nop
    ctx->pc = 0x17d258u;
    // NOP
    // 0x17d25c: 0x0  nop
    ctx->pc = 0x17d25cu;
    // NOP
    if (ctx->pc == 0x17d25cu) { ctx->pc = 0x17d260u; }
}
