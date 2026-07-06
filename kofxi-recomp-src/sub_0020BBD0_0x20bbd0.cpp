#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020BBD0
// Address: 0x20bbd0 - 0x20be50
void sub_0020BBD0_0x20bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BBD0_0x20bbd0");
#endif

    ctx->pc = 0x20bbd0u;

    // 0x20bbd0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x20bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20bbd4: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x20bbd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20bbd8: 0x24663480  addiu       $a2, $v1, 0x3480
    ctx->pc = 0x20bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13440));
    // 0x20bbdc: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x20bbdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20bbe0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20bbe4: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x20bbe4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20bbe8: 0x8c69a458  lw          $t1, -0x5BA8($v1)
    ctx->pc = 0x20bbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20bbec: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x20bbecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x20bbf0: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x20bbf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20bbf4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x20bbf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x20bbf8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x20bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20bbfc: 0x240b5353  addiu       $t3, $zero, 0x5353
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x20bc00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20bc04: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x20bc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x20bc08: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x20bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x20bc0c: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x20bc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20bc10: 0x3c032007  lui         $v1, 0x2007
    ctx->pc = 0x20bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8199 << 16));
    // 0x20bc14: 0xfd260008  sd          $a2, 0x8($t1)
    ctx->pc = 0x20bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 6));
    // 0x20bc18: 0x3463d00d  ori         $v1, $v1, 0xD00D
    ctx->pc = 0x20bc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53261);
    // 0x20bc1c: 0xfd200010  sd          $zero, 0x10($t1)
    ctx->pc = 0x20bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 0));
    // 0x20bc20: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x20bc20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20bc24: 0xfd270018  sd          $a3, 0x18($t1)
    ctx->pc = 0x20bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 7));
    // 0x20bc28: 0x3c035531  lui         $v1, 0x5531
    ctx->pc = 0x20bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21809 << 16));
    // 0x20bc2c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20bc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20bc30: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x20bc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20bc34: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x20bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x20bc38: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x20bc38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x20bc3c: 0xfd230020  sd          $v1, 0x20($t1)
    ctx->pc = 0x20bc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 32), GPR_U64(ctx, 3));
    // 0x20bc40: 0xfd270028  sd          $a3, 0x28($t1)
    ctx->pc = 0x20bc40u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 40), GPR_U64(ctx, 7));
    // 0x20bc44: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20bc48: 0x90c8b280  lbu         $t0, -0x4D80($a2)
    ctx->pc = 0x20bc48u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947456)));
    // 0x20bc4c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20bc50: 0x8c6da458  lw          $t5, -0x5BA8($v1)
    ctx->pc = 0x20bc50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20bc54: 0x3c0640ab  lui         $a2, 0x40AB
    ctx->pc = 0x20bc54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16555 << 16));
    // 0x20bc58: 0x8482b  sltu        $t1, $zero, $t0
    ctx->pc = 0x20bc58u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20bc5c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x20bc5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x20bc60: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x20bc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20bc64: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20bc64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20bc68: 0x94178  dsll        $t0, $t1, 5
    ctx->pc = 0x20bc68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 5);
    // 0x20bc6c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x20bc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20bc70: 0x919b8  dsll        $v1, $t1, 6
    ctx->pc = 0x20bc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 6);
    // 0x20bc74: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x20bc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x20bc78: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20bc78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20bc7c: 0xfda30030  sd          $v1, 0x30($t5)
    ctx->pc = 0x20bc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 48), GPR_U64(ctx, 3));
    // 0x20bc80: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20bc80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20bc84: 0xfda70038  sd          $a3, 0x38($t5)
    ctx->pc = 0x20bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 56), GPR_U64(ctx, 7));
    // 0x20bc88: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20bc8c: 0xfdac0040  sd          $t4, 0x40($t5)
    ctx->pc = 0x20bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 64), GPR_U64(ctx, 12));
    // 0x20bc90: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20bc90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20bc94: 0xfdaa0048  sd          $t2, 0x48($t5)
    ctx->pc = 0x20bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 72), GPR_U64(ctx, 10));
    // 0x20bc98: 0xfda60050  sd          $a2, 0x50($t5)
    ctx->pc = 0x20bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 80), GPR_U64(ctx, 6));
    // 0x20bc9c: 0x246a6c00  addiu       $t2, $v1, 0x6C00
    ctx->pc = 0x20bc9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20bca0: 0xfdab0058  sd          $t3, 0x58($t5)
    ctx->pc = 0x20bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 88), GPR_U64(ctx, 11));
    // 0x20bca4: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20bca8: 0xada00060  sw          $zero, 0x60($t5)
    ctx->pc = 0x20bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 0));
    // 0x20bcac: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x20bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x20bcb0: 0x8d29a458  lw          $t1, -0x5BA8($t1)
    ctx->pc = 0x20bcb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943832)));
    // 0x20bcb4: 0xad200064  sw          $zero, 0x64($t1)
    ctx->pc = 0x20bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 0));
    // 0x20bcb8: 0x8d08a458  lw          $t0, -0x5BA8($t0)
    ctx->pc = 0x20bcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943832)));
    // 0x20bcbc: 0xad000068  sw          $zero, 0x68($t0)
    ctx->pc = 0x20bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 104), GPR_U32(ctx, 0));
    // 0x20bcc0: 0x8ce7a458  lw          $a3, -0x5BA8($a3)
    ctx->pc = 0x20bcc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943832)));
    // 0x20bcc4: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x20bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x20bcc8: 0x8cc6a458  lw          $a2, -0x5BA8($a2)
    ctx->pc = 0x20bcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943832)));
    // 0x20bccc: 0xacca0070  sw          $t2, 0x70($a2)
    ctx->pc = 0x20bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 10));
    // 0x20bcd0: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x20bcd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x20bcd4: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20BCD4u;
    {
        const bool branch_taken_0x20bcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bcd4) {
            ctx->pc = 0x20BCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCD4u;
            // 0x20bcd8: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BD2Cu;
            goto label_20bd2c;
        }
    }
    ctx->pc = 0x20BCDCu;
    // 0x20bcdc: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x20bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20bce0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20bce4: 0x24c77100  addiu       $a3, $a2, 0x7100
    ctx->pc = 0x20bce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 28928));
    // 0x20bce8: 0x24e88000  addiu       $t0, $a3, -0x8000
    ctx->pc = 0x20bce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934528));
    // 0x20bcec: 0x34668889  ori         $a2, $v1, 0x8889
    ctx->pc = 0x20bcecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20bcf0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x20bcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20bcf4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20bcf8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x20bcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x20bcfc: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x20bcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x20bd00: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x20bd00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20bd04: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x20bd04u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x20bd08: 0x0  nop
    ctx->pc = 0x20bd08u;
    // NOP
    // 0x20bd0c: 0x3010  mfhi        $a2
    ctx->pc = 0x20bd0cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x20bd10: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x20bd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20bd14: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x20bd14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x20bd18: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20bd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20bd1c: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x20bd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x20bd20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20bd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20bd24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20BD24u;
    {
        const bool branch_taken_0x20bd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD24u;
            // 0x20bd28: 0xc33824  and         $a3, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd24) {
            ctx->pc = 0x20BD30u;
            goto label_20bd30;
        }
    }
    ctx->pc = 0x20BD2Cu;
label_20bd2c:
    // 0x20bd2c: 0x24677100  addiu       $a3, $v1, 0x7100
    ctx->pc = 0x20bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20bd30:
    // 0x20bd30: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20bd34: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20bd38: 0x8c66a458  lw          $a2, -0x5BA8($v1)
    ctx->pc = 0x20bd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20bd3c: 0x3c0df000  lui         $t5, 0xF000
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)61440 << 16));
    // 0x20bd40: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20bd40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20bd44: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20bd44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20bd48: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x20bd48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x20bd4c: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20bd50: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20bd54: 0xacc70074  sw          $a3, 0x74($a2)
    ctx->pc = 0x20bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 7));
    // 0x20bd58: 0x246b6c00  addiu       $t3, $v1, 0x6C00
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20bd5c: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20bd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20bd60: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20bd64: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20bd64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20bd68: 0x8c63a458  lw          $v1, -0x5BA8($v1)
    ctx->pc = 0x20bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20bd6c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20bd70: 0xac6d0078  sw          $t5, 0x78($v1)
    ctx->pc = 0x20bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 13));
    // 0x20bd74: 0x8d4aa458  lw          $t2, -0x5BA8($t2)
    ctx->pc = 0x20bd74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x20bd78: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x20bd7c: 0xad40007c  sw          $zero, 0x7C($t2)
    ctx->pc = 0x20bd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 0));
    // 0x20bd80: 0x8d29a458  lw          $t1, -0x5BA8($t1)
    ctx->pc = 0x20bd80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943832)));
    // 0x20bd84: 0xad2c0080  sw          $t4, 0x80($t1)
    ctx->pc = 0x20bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 12));
    // 0x20bd88: 0x8d08a458  lw          $t0, -0x5BA8($t0)
    ctx->pc = 0x20bd88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943832)));
    // 0x20bd8c: 0xad0c0084  sw          $t4, 0x84($t0)
    ctx->pc = 0x20bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 12));
    // 0x20bd90: 0x8ce7a458  lw          $a3, -0x5BA8($a3)
    ctx->pc = 0x20bd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943832)));
    // 0x20bd94: 0xace00088  sw          $zero, 0x88($a3)
    ctx->pc = 0x20bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 0));
    // 0x20bd98: 0x8cc6a458  lw          $a2, -0x5BA8($a2)
    ctx->pc = 0x20bd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943832)));
    // 0x20bd9c: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x20bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
    // 0x20bda0: 0x8c84a458  lw          $a0, -0x5BA8($a0)
    ctx->pc = 0x20bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943832)));
    // 0x20bda4: 0xac8b0090  sw          $t3, 0x90($a0)
    ctx->pc = 0x20bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 11));
    // 0x20bda8: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x20bda8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x20bdac: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20BDACu;
    {
        const bool branch_taken_0x20bdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bdac) {
            ctx->pc = 0x20BDB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDACu;
            // 0x20bdb0: 0x24a30020  addiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BE08u;
            goto label_20be08;
        }
    }
    ctx->pc = 0x20BDB4u;
    // 0x20bdb4: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x20bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x20bdb8: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20bdbc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20bdc0: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    // 0x20bdc4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x20bdc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20bdc8: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x20bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20bdcc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20bdd0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20bdd4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20bdd8: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x20bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x20bddc: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x20bddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20bde0: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x20bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20bde4: 0x0  nop
    ctx->pc = 0x20bde4u;
    // NOP
    // 0x20bde8: 0x2010  mfhi        $a0
    ctx->pc = 0x20bde8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20bdec: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20bdf0: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x20bdf0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x20bdf4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20bdf8: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x20bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x20bdfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20be00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20BE00u;
    {
        const bool branch_taken_0x20be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE00u;
            // 0x20be04: 0x834824  and         $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be00) {
            ctx->pc = 0x20BE10u;
            goto label_20be10;
        }
    }
    ctx->pc = 0x20BE08u;
label_20be08:
    // 0x20be08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20be08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20be0c: 0x24697100  addiu       $t1, $v1, 0x7100
    ctx->pc = 0x20be0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20be10:
    // 0x20be10: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20be10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20be14: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20be14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20be18: 0x8c68a458  lw          $t0, -0x5BA8($v1)
    ctx->pc = 0x20be18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20be1c: 0x3c07f000  lui         $a3, 0xF000
    ctx->pc = 0x20be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61440 << 16));
    // 0x20be20: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20be20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20be24: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20be24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20be28: 0xad090094  sw          $t1, 0x94($t0)
    ctx->pc = 0x20be28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 148), GPR_U32(ctx, 9));
    // 0x20be2c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20be30: 0x8cc6a458  lw          $a2, -0x5BA8($a2)
    ctx->pc = 0x20be30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943832)));
    // 0x20be34: 0xacc70098  sw          $a3, 0x98($a2)
    ctx->pc = 0x20be34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 7));
    // 0x20be38: 0x8ca5a458  lw          $a1, -0x5BA8($a1)
    ctx->pc = 0x20be38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943832)));
    // 0x20be3c: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x20be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x20be40: 0x8c84a458  lw          $a0, -0x5BA8($a0)
    ctx->pc = 0x20be40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943832)));
    // 0x20be44: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x20be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x20be48: 0x3e00008  jr          $ra
    ctx->pc = 0x20BE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE48u;
            // 0x20be4c: 0xac64a458  sw          $a0, -0x5BA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943832), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20BE50u;
    ctx->pc = 0x20be50u;
}
