#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031EB30
// Address: 0x31eb30 - 0x31eeb0
void sub_0031EB30_0x31eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EB30_0x31eb30");
#endif

    ctx->pc = 0x31eb30u;

    // 0x31eb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31eb34: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31eb38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31eb3c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x31eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31eb40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31eb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31eb44: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x31eb44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31eb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31eb4c: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x31eb4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x31eb50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31eb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31eb54: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x31eb54u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x31eb58: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x31eb58u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31eb5c: 0x3c0d01da  lui         $t5, 0x1DA
    ctx->pc = 0x31eb5cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)474 << 16));
    // 0x31eb60: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x31eb60u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31eb64: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x31eb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31eb68: 0x94890004  lhu         $t1, 0x4($a0)
    ctx->pc = 0x31eb68u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31eb6c: 0x8c632a98  lw          $v1, 0x2A98($v1)
    ctx->pc = 0x31eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10904)));
    // 0x31eb70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31eb74: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x31eb74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31eb78: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x31eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31eb7c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x31eb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x31eb80: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x31eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x31eb84: 0x3128000f  andi        $t0, $t1, 0xF
    ctx->pc = 0x31eb84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x31eb88: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x31eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x31eb8c: 0x312400f0  andi        $a0, $t1, 0xF0
    ctx->pc = 0x31eb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)240);
    // 0x31eb90: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x31eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x31eb94: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x31eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x31eb98: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x31eb98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x31eb9c: 0x250a0008  addiu       $t2, $t0, 0x8
    ctx->pc = 0x31eb9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x31eba0: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x31eba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31eba4: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x31eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x31eba8: 0x3c082017  lui         $t0, 0x2017
    ctx->pc = 0x31eba8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8215 << 16));
    // 0x31ebac: 0x3509e406  ori         $t1, $t0, 0xE406
    ctx->pc = 0x31ebacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)58374);
    // 0x31ebb0: 0x3c082142  lui         $t0, 0x2142
    ctx->pc = 0x31ebb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8514 << 16));
    // 0x31ebb4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x31ebb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x31ebb8: 0x35083ea0  ori         $t0, $t0, 0x3EA0
    ctx->pc = 0x31ebb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16032);
    // 0x31ebbc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x31ebbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x31ebc0: 0xfc680020  sd          $t0, 0x20($v1)
    ctx->pc = 0x31ebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 8));
    // 0x31ebc4: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x31ebc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31ebc8: 0xfc690028  sd          $t1, 0x28($v1)
    ctx->pc = 0x31ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 9));
    // 0x31ebcc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x31ebccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31ebd0: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x31ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x31ebd4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x31ebd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ebd8: 0xfc680038  sd          $t0, 0x38($v1)
    ctx->pc = 0x31ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 8));
    // 0x31ebdc: 0x3c0860ab  lui         $t0, 0x60AB
    ctx->pc = 0x31ebdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)24747 << 16));
    // 0x31ebe0: 0xfc6b0040  sd          $t3, 0x40($v1)
    ctx->pc = 0x31ebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 11));
    // 0x31ebe4: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x31ebe4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x31ebe8: 0xfc690048  sd          $t1, 0x48($v1)
    ctx->pc = 0x31ebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 9));
    // 0x31ebec: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x31ebecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x31ebf0: 0x34098001  ori         $t1, $zero, 0x8001
    ctx->pc = 0x31ebf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31ebf4: 0x12b5825  or          $t3, $t1, $t3
    ctx->pc = 0x31ebf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x31ebf8: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x31ebf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x31ebfc: 0x35093513  ori         $t1, $t0, 0x3513
    ctx->pc = 0x31ebfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13587);
    // 0x31ec00: 0xfc6b0050  sd          $t3, 0x50($v1)
    ctx->pc = 0x31ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 11));
    // 0x31ec04: 0xfc690058  sd          $t1, 0x58($v1)
    ctx->pc = 0x31ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 9));
    // 0x31ec08: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31ec08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31ec0c: 0x8d0c2a98  lw          $t4, 0x2A98($t0)
    ctx->pc = 0x31ec0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10904)));
    // 0x31ec10: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x31ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31ec14: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31ec14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31ec18: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x31ec18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x31ec1c: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ec20: 0x258b0060  addiu       $t3, $t4, 0x60
    ctx->pc = 0x31ec20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
    // 0x31ec24: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31ec24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31ec28: 0xad2b2a98  sw          $t3, 0x2A98($t1)
    ctx->pc = 0x31ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 10904), GPR_U32(ctx, 11));
    // 0x31ec2c: 0xad8a0060  sw          $t2, 0x60($t4)
    ctx->pc = 0x31ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 10));
    // 0x31ec30: 0x3c0b01da  lui         $t3, 0x1DA
    ctx->pc = 0x31ec30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)474 << 16));
    // 0x31ec34: 0x8d102a98  lw          $s0, 0x2A98($t0)
    ctx->pc = 0x31ec34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10904)));
    // 0x31ec38: 0x3c0c01da  lui         $t4, 0x1DA
    ctx->pc = 0x31ec38u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)474 << 16));
    // 0x31ec3c: 0x3c0a01da  lui         $t2, 0x1DA
    ctx->pc = 0x31ec3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)474 << 16));
    // 0x31ec40: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31ec40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31ec44: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x31ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x31ec48: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31ec48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31ec4c: 0x8c722a98  lw          $s2, 0x2A98($v1)
    ctx->pc = 0x31ec4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10904)));
    // 0x31ec50: 0x78100  sll         $s0, $a3, 4
    ctx->pc = 0x31ec50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31ec54: 0x26106c00  addiu       $s0, $s0, 0x6C00
    ctx->pc = 0x31ec54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x31ec58: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x31ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x31ec5c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x31ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x31ec60: 0x8def2a98  lw          $t7, 0x2A98($t7)
    ctx->pc = 0x31ec60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 10904)));
    // 0x31ec64: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x31ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x31ec68: 0x8dcf2a98  lw          $t7, 0x2A98($t6)
    ctx->pc = 0x31ec68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 10904)));
    // 0x31ec6c: 0x25ee0010  addiu       $t6, $t7, 0x10
    ctx->pc = 0x31ec6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x31ec70: 0xadae2a98  sw          $t6, 0x2A98($t5)
    ctx->pc = 0x31ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 10904), GPR_U32(ctx, 14));
    // 0x31ec74: 0xadf10010  sw          $s1, 0x10($t7)
    ctx->pc = 0x31ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 17));
    // 0x31ec78: 0x8d8c2a98  lw          $t4, 0x2A98($t4)
    ctx->pc = 0x31ec78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 10904)));
    // 0x31ec7c: 0xad910004  sw          $s1, 0x4($t4)
    ctx->pc = 0x31ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 17));
    // 0x31ec80: 0x8d6b2a98  lw          $t3, 0x2A98($t3)
    ctx->pc = 0x31ec80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 10904)));
    // 0x31ec84: 0xad710008  sw          $s1, 0x8($t3)
    ctx->pc = 0x31ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 17));
    // 0x31ec88: 0x8d4a2a98  lw          $t2, 0x2A98($t2)
    ctx->pc = 0x31ec88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10904)));
    // 0x31ec8c: 0xad51000c  sw          $s1, 0xC($t2)
    ctx->pc = 0x31ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 17));
    // 0x31ec90: 0x8d2a2a98  lw          $t2, 0x2A98($t1)
    ctx->pc = 0x31ec90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10904)));
    // 0x31ec94: 0x25490010  addiu       $t1, $t2, 0x10
    ctx->pc = 0x31ec94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x31ec98: 0xad092a98  sw          $t1, 0x2A98($t0)
    ctx->pc = 0x31ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 10904), GPR_U32(ctx, 9));
    // 0x31ec9c: 0xad500010  sw          $s0, 0x10($t2)
    ctx->pc = 0x31ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 16));
    // 0x31eca0: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x31eca0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x31eca4: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x31ECA4u;
    {
        const bool branch_taken_0x31eca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eca4) {
            ctx->pc = 0x31ECA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31ECA4u;
            // 0x31eca8: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31ECFCu;
            goto label_31ecfc;
        }
    }
    ctx->pc = 0x31ECACu;
    // 0x31ecac: 0x64100  sll         $t0, $a2, 4
    ctx->pc = 0x31ecacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31ecb0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x31ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x31ecb4: 0x25097000  addiu       $t1, $t0, 0x7000
    ctx->pc = 0x31ecb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x31ecb8: 0x252a8000  addiu       $t2, $t1, -0x8000
    ctx->pc = 0x31ecb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934528));
    // 0x31ecbc: 0x34688889  ori         $t0, $v1, 0x8889
    ctx->pc = 0x31ecbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x31ecc0: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x31ecc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x31ecc4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x31ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31ecc8: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x31ecc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x31eccc: 0x95180  sll         $t2, $t1, 6
    ctx->pc = 0x31ecccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x31ecd0: 0x10a0018  mult        $zero, $t0, $t2
    ctx->pc = 0x31ecd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31ecd4: 0xa4fc2  srl         $t1, $t2, 31
    ctx->pc = 0x31ecd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x31ecd8: 0x0  nop
    ctx->pc = 0x31ecd8u;
    // NOP
    // 0x31ecdc: 0x4010  mfhi        $t0
    ctx->pc = 0x31ecdcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x31ece0: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x31ece0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x31ece4: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x31ece4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x31ece8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x31ecec: 0x25087fff  addiu       $t0, $t0, 0x7FFF
    ctx->pc = 0x31ececu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32767));
    // 0x31ecf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31ecf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31ecf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31ECF4u;
    {
        const bool branch_taken_0x31ecf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ECF4u;
            // 0x31ecf8: 0x1034824  and         $t1, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ecf4) {
            ctx->pc = 0x31ED00u;
            goto label_31ed00;
        }
    }
    ctx->pc = 0x31ECFCu;
label_31ecfc:
    // 0x31ecfc: 0x24697000  addiu       $t1, $v1, 0x7000
    ctx->pc = 0x31ecfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_31ed00:
    // 0x31ed00: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x31ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31ed04: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31ed08: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x31ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31ed0c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x31ed0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x31ed10: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31ed14: 0x3c1001da  lui         $s0, 0x1DA
    ctx->pc = 0x31ed14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)474 << 16));
    // 0x31ed18: 0x8ca82a98  lw          $t0, 0x2A98($a1)
    ctx->pc = 0x31ed18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10904)));
    // 0x31ed1c: 0x3c1901da  lui         $t9, 0x1DA
    ctx->pc = 0x31ed1cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)474 << 16));
    // 0x31ed20: 0x3c1801da  lui         $t8, 0x1DA
    ctx->pc = 0x31ed20u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)474 << 16));
    // 0x31ed24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31ed28: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x31ed28u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x31ed2c: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x31ed2cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x31ed30: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x31ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31ed34: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x31ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x31ed38: 0x3c0701da  lui         $a3, 0x1DA
    ctx->pc = 0x31ed38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)474 << 16));
    // 0x31ed3c: 0x24b16c00  addiu       $s1, $a1, 0x6C00
    ctx->pc = 0x31ed3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x31ed40: 0x8ce72a98  lw          $a3, 0x2A98($a3)
    ctx->pc = 0x31ed40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10904)));
    // 0x31ed44: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31ed48: 0x3c0d01da  lui         $t5, 0x1DA
    ctx->pc = 0x31ed48u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)474 << 16));
    // 0x31ed4c: 0x3c0c01da  lui         $t4, 0x1DA
    ctx->pc = 0x31ed4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)474 << 16));
    // 0x31ed50: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x31ed50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31ed54: 0x3c0b01da  lui         $t3, 0x1DA
    ctx->pc = 0x31ed54u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)474 << 16));
    // 0x31ed58: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x31ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x31ed5c: 0x3c0a01da  lui         $t2, 0x1DA
    ctx->pc = 0x31ed5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)474 << 16));
    // 0x31ed60: 0x8ca52a98  lw          $a1, 0x2A98($a1)
    ctx->pc = 0x31ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10904)));
    // 0x31ed64: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31ed64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31ed68: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31ed68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31ed6c: 0x3c0701da  lui         $a3, 0x1DA
    ctx->pc = 0x31ed6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)474 << 16));
    // 0x31ed70: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x31ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x31ed74: 0x8e132a98  lw          $s3, 0x2A98($s0)
    ctx->pc = 0x31ed74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10904)));
    // 0x31ed78: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x31ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x31ed7c: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x31ed7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x31ed80: 0xaf302a98  sw          $s0, 0x2A98($t9)
    ctx->pc = 0x31ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 10904), GPR_U32(ctx, 16));
    // 0x31ed84: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x31ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
    // 0x31ed88: 0x8f042a98  lw          $a0, 0x2A98($t8)
    ctx->pc = 0x31ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 10904)));
    // 0x31ed8c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x31ed90: 0x8de32a98  lw          $v1, 0x2A98($t7)
    ctx->pc = 0x31ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 10904)));
    // 0x31ed94: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x31ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x31ed98: 0x8dc32a98  lw          $v1, 0x2A98($t6)
    ctx->pc = 0x31ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 10904)));
    // 0x31ed9c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x31ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x31eda0: 0x8da42a98  lw          $a0, 0x2A98($t5)
    ctx->pc = 0x31eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 10904)));
    // 0x31eda4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x31eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31eda8: 0xad832a98  sw          $v1, 0x2A98($t4)
    ctx->pc = 0x31eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 10904), GPR_U32(ctx, 3));
    // 0x31edac: 0xac920010  sw          $s2, 0x10($a0)
    ctx->pc = 0x31edacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 18));
    // 0x31edb0: 0x8d632a98  lw          $v1, 0x2A98($t3)
    ctx->pc = 0x31edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 10904)));
    // 0x31edb4: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x31edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x31edb8: 0x8d432a98  lw          $v1, 0x2A98($t2)
    ctx->pc = 0x31edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10904)));
    // 0x31edbc: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x31edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x31edc0: 0x8d232a98  lw          $v1, 0x2A98($t1)
    ctx->pc = 0x31edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10904)));
    // 0x31edc4: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x31edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    // 0x31edc8: 0x8d042a98  lw          $a0, 0x2A98($t0)
    ctx->pc = 0x31edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10904)));
    // 0x31edcc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x31edccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31edd0: 0xace32a98  sw          $v1, 0x2A98($a3)
    ctx->pc = 0x31edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 10904), GPR_U32(ctx, 3));
    // 0x31edd4: 0xac910010  sw          $s1, 0x10($a0)
    ctx->pc = 0x31edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 17));
    // 0x31edd8: 0x90a3b280  lbu         $v1, -0x4D80($a1)
    ctx->pc = 0x31edd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294947456)));
    // 0x31eddc: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x31EDDCu;
    {
        const bool branch_taken_0x31eddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eddc) {
            ctx->pc = 0x31EDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EDDCu;
            // 0x31ede0: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EE38u;
            goto label_31ee38;
        }
    }
    ctx->pc = 0x31EDE4u;
    // 0x31ede4: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x31ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x31ede8: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x31ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x31edec: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x31edecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31edf0: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x31edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x31edf4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x31edf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x31edf8: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x31edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x31edfc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x31edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31ee00: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x31ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31ee04: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x31ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31ee08: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x31ee08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x31ee0c: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x31ee0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31ee10: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x31ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x31ee14: 0x0  nop
    ctx->pc = 0x31ee14u;
    // NOP
    // 0x31ee18: 0x2010  mfhi        $a0
    ctx->pc = 0x31ee18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x31ee1c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x31ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x31ee20: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x31ee20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x31ee24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31ee28: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x31ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x31ee2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31ee30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EE30u;
    {
        const bool branch_taken_0x31ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE30u;
            // 0x31ee34: 0x835024  and         $t2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee30) {
            ctx->pc = 0x31EE40u;
            goto label_31ee40;
        }
    }
    ctx->pc = 0x31EE38u;
label_31ee38:
    // 0x31ee38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31ee3c: 0x246a7000  addiu       $t2, $v1, 0x7000
    ctx->pc = 0x31ee3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_31ee40:
    // 0x31ee40: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ee44: 0x3c0801da  lui         $t0, 0x1DA
    ctx->pc = 0x31ee44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)474 << 16));
    // 0x31ee48: 0x8c692a98  lw          $t1, 0x2A98($v1)
    ctx->pc = 0x31ee48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10904)));
    // 0x31ee4c: 0x3c0701da  lui         $a3, 0x1DA
    ctx->pc = 0x31ee4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)474 << 16));
    // 0x31ee50: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x31ee50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
    // 0x31ee54: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x31ee58: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x31ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31ee5c: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x31ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x31ee60: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ee64: 0x8d082a98  lw          $t0, 0x2A98($t0)
    ctx->pc = 0x31ee64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10904)));
    // 0x31ee68: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x31ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x31ee6c: 0x8ce72a98  lw          $a3, 0x2A98($a3)
    ctx->pc = 0x31ee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10904)));
    // 0x31ee70: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x31ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x31ee74: 0x8cc62a98  lw          $a2, 0x2A98($a2)
    ctx->pc = 0x31ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10904)));
    // 0x31ee78: 0x8c842a90  lw          $a0, 0x2A90($a0)
    ctx->pc = 0x31ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10896)));
    // 0x31ee7c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x31ee7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x31ee80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31ee84: 0xaca62a98  sw          $a2, 0x2A98($a1)
    ctx->pc = 0x31ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 10904), GPR_U32(ctx, 6));
    // 0x31ee88: 0xac642a90  sw          $a0, 0x2A90($v1)
    ctx->pc = 0x31ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10896), GPR_U32(ctx, 4));
    // 0x31ee8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31ee8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ee90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ee90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ee94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ee94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ee98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ee98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EE9Cu;
            // 0x31eea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EEA4u;
    // 0x31eea4: 0x0  nop
    ctx->pc = 0x31eea4u;
    // NOP
    // 0x31eea8: 0x0  nop
    ctx->pc = 0x31eea8u;
    // NOP
    // 0x31eeac: 0x0  nop
    ctx->pc = 0x31eeacu;
    // NOP
    ctx->pc = 0x31eeb0u;
}
