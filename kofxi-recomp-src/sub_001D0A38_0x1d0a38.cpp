#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0A38
// Address: 0x1d0a38 - 0x1d0ba8
void sub_001D0A38_0x1d0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0A38_0x1d0a38");
#endif

    ctx->pc = 0x1d0a38u;

    // 0x1d0a38: 0x24830180  addiu       $v1, $a0, 0x180
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1d0a3c: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x1d0a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x1d0a40: 0x8c6502c4  lw          $a1, 0x2C4($v1)
    ctx->pc = 0x1d0a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    // 0x1d0a44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0a48: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1d0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1d0a4c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d0a50: 0x8c6202c8  lw          $v0, 0x2C8($v1)
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 712)));
    // 0x1d0a54: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d0a58: 0x8c6502cc  lw          $a1, 0x2CC($v1)
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x1d0a5c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1d0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1d0a60: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1d0a64: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1d0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1d0a68: 0x8c6500dc  lw          $a1, 0xDC($v1)
    ctx->pc = 0x1d0a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x1d0a6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d0a70: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1d0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1d0a74: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1d0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1d0a78: 0x8c6500bc  lw          $a1, 0xBC($v1)
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1d0a7c: 0x8c6600e0  lw          $a2, 0xE0($v1)
    ctx->pc = 0x1d0a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x1d0a80: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x1d0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x1d0a84: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x1d0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x1d0a88: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1d0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1d0a8c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1d0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1d0a90: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x1d0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x1d0a94: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1d0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1d0a98: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x1d0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1d0a9c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x1d0a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1d0aa0: 0x8c6500cc  lw          $a1, 0xCC($v1)
    ctx->pc = 0x1d0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1d0aa4: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1d0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1d0aa8: 0x8c62043c  lw          $v0, 0x43C($v1)
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    // 0x1d0aac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1d0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1d0ab0: 0x8c65042c  lw          $a1, 0x42C($v1)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x1d0ab4: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x1d0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x1d0ab8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x1d0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x1d0abc: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1d0abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1d0ac0: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1d0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1d0ac4: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x1d0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x1d0ac8: 0xac870044  sw          $a3, 0x44($a0)
    ctx->pc = 0x1d0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 7));
    // 0x1d0acc: 0x8c6202d4  lw          $v0, 0x2D4($v1)
    ctx->pc = 0x1d0accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 724)));
    // 0x1d0ad0: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1d0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x1d0ad4: 0x8c6502d8  lw          $a1, 0x2D8($v1)
    ctx->pc = 0x1d0ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 728)));
    // 0x1d0ad8: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x1d0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x1d0adc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1d0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1d0ae0: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x1d0ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1d0ae4: 0x94670080  lhu         $a3, 0x80($v1)
    ctx->pc = 0x1d0ae4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1d0ae8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d0aec: 0x94680084  lhu         $t0, 0x84($v1)
    ctx->pc = 0x1d0aecu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1d0af0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d0af4: 0x8c66011c  lw          $a2, 0x11C($v1)
    ctx->pc = 0x1d0af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1d0af8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d0afc: 0xa4870050  sh          $a3, 0x50($a0)
    ctx->pc = 0x1d0afcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x1d0b00: 0xa4880052  sh          $t0, 0x52($a0)
    ctx->pc = 0x1d0b00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 8));
    // 0x1d0b04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d0b08: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1d0b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1d0b0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d0b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d0b10: 0x90a5c0d0  lbu         $a1, -0x3F30($a1)
    ctx->pc = 0x1d0b10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294951120)));
    // 0x1d0b14: 0xa0850054  sb          $a1, 0x54($a0)
    ctx->pc = 0x1d0b14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b18: 0x9062013c  lbu         $v0, 0x13C($v1)
    ctx->pc = 0x1d0b18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x1d0b1c: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x1d0b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b20: 0x9065011c  lbu         $a1, 0x11C($v1)
    ctx->pc = 0x1d0b20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1d0b24: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x1d0b24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b28: 0x90620134  lbu         $v0, 0x134($v1)
    ctx->pc = 0x1d0b28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1d0b2c: 0xa0820057  sb          $v0, 0x57($a0)
    ctx->pc = 0x1d0b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b30: 0x906503c4  lbu         $a1, 0x3C4($v1)
    ctx->pc = 0x1d0b30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 964)));
    // 0x1d0b34: 0xa0850058  sb          $a1, 0x58($a0)
    ctx->pc = 0x1d0b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b38: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x1d0b38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d0b3c: 0xa0820059  sb          $v0, 0x59($a0)
    ctx->pc = 0x1d0b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b40: 0x90650020  lbu         $a1, 0x20($v1)
    ctx->pc = 0x1d0b40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d0b44: 0xa085005a  sb          $a1, 0x5A($a0)
    ctx->pc = 0x1d0b44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b48: 0x90620064  lbu         $v0, 0x64($v1)
    ctx->pc = 0x1d0b48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1d0b4c: 0xa082005b  sb          $v0, 0x5B($a0)
    ctx->pc = 0x1d0b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b50: 0x90650068  lbu         $a1, 0x68($v1)
    ctx->pc = 0x1d0b50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d0b54: 0xa085005c  sb          $a1, 0x5C($a0)
    ctx->pc = 0x1d0b54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b58: 0x90620044  lbu         $v0, 0x44($v1)
    ctx->pc = 0x1d0b58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d0b5c: 0xa082005d  sb          $v0, 0x5D($a0)
    ctx->pc = 0x1d0b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b60: 0x90650048  lbu         $a1, 0x48($v1)
    ctx->pc = 0x1d0b60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1d0b64: 0xa085005e  sb          $a1, 0x5E($a0)
    ctx->pc = 0x1d0b64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b68: 0x90620060  lbu         $v0, 0x60($v1)
    ctx->pc = 0x1d0b68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1d0b6c: 0xa082005f  sb          $v0, 0x5F($a0)
    ctx->pc = 0x1d0b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b70: 0x9065006c  lbu         $a1, 0x6C($v1)
    ctx->pc = 0x1d0b70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1d0b74: 0xa0850060  sb          $a1, 0x60($a0)
    ctx->pc = 0x1d0b74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b78: 0x90620070  lbu         $v0, 0x70($v1)
    ctx->pc = 0x1d0b78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1d0b7c: 0xa0820061  sb          $v0, 0x61($a0)
    ctx->pc = 0x1d0b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b80: 0x90650074  lbu         $a1, 0x74($v1)
    ctx->pc = 0x1d0b80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1d0b84: 0xa0850062  sb          $a1, 0x62($a0)
    ctx->pc = 0x1d0b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b88: 0x90620078  lbu         $v0, 0x78($v1)
    ctx->pc = 0x1d0b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1d0b8c: 0xa0820063  sb          $v0, 0x63($a0)
    ctx->pc = 0x1d0b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0b90: 0x9065007c  lbu         $a1, 0x7C($v1)
    ctx->pc = 0x1d0b90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1d0b94: 0xa0850064  sb          $a1, 0x64($a0)
    ctx->pc = 0x1d0b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0b98: 0x8c6204ac  lw          $v0, 0x4AC($v1)
    ctx->pc = 0x1d0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1196)));
    // 0x1d0b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0B9Cu;
            // 0x1d0ba0: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0BA4u;
    // 0x1d0ba4: 0x0  nop
    ctx->pc = 0x1d0ba4u;
    // NOP
    ctx->pc = 0x1d0ba8u;
}
