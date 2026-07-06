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

// Function: sub_001859F0
// Address: 0x1859f0 - 0x185eb0
void sub_001859F0_0x1859f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001859F0_0x1859f0");
#endif

    switch (ctx->pc) {
        case 0x185adcu: goto label_185adc;
        case 0x185bc0u: goto label_185bc0;
        case 0x185c84u: goto label_185c84;
        case 0x185e5cu: goto label_185e5c;
        case 0x185e74u: goto label_185e74;
        default: break;
    }

    ctx->pc = 0x1859f0u;

    // 0x1859f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1859f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1859f4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1859f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1859f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1859f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1859fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1859fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x185a00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x185a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x185a04: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x185a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x185a08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x185a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x185a0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x185a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x185a10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x185a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x185a14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x185a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x185a1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185a24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185a28: 0x84473e98  lh          $a3, 0x3E98($v0)
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16024)));
    // 0x185a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a30: 0x84633e9e  lh          $v1, 0x3E9E($v1)
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16030)));
    // 0x185a34: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x185a34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185a38: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185a3c: 0xa7a70108  sh          $a3, 0x108($sp)
    ctx->pc = 0x185a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 7));
    // 0x185a40: 0x84463e9a  lh          $a2, 0x3E9A($v0)
    ctx->pc = 0x185a40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16026)));
    // 0x185a44: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185a48: 0xa7a6010a  sh          $a2, 0x10A($sp)
    ctx->pc = 0x185a48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 6));
    // 0x185a4c: 0x84453e9c  lh          $a1, 0x3E9C($v0)
    ctx->pc = 0x185a4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16028)));
    // 0x185a50: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185a54: 0xa7a5010c  sh          $a1, 0x10C($sp)
    ctx->pc = 0x185a54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 268), (uint16_t)GPR_U32(ctx, 5));
    // 0x185a58: 0xc4403ea0  lwc1        $f0, 0x3EA0($v0)
    ctx->pc = 0x185a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185a5c: 0xa7a3010e  sh          $v1, 0x10E($sp)
    ctx->pc = 0x185a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 270), (uint16_t)GPR_U32(ctx, 3));
    // 0x185a60: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x185a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185a64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185a68: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185a6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x185a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185a70: 0xc4423ea4  lwc1        $f2, 0x3EA4($v0)
    ctx->pc = 0x185a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185a74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185a78: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x185a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x185a7c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x185a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185a80: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185a84: 0xc4413ea8  lwc1        $f1, 0x3EA8($v0)
    ctx->pc = 0x185a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185a88: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x185a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x185a8c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185a90: 0xc4403eac  lwc1        $f0, 0x3EAC($v0)
    ctx->pc = 0x185a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185a94: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x185a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x185a98: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185a9c: 0xc4413eb0  lwc1        $f1, 0x3EB0($v0)
    ctx->pc = 0x185a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185aa0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x185aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x185aa4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185aa8: 0xc4403eb4  lwc1        $f0, 0x3EB4($v0)
    ctx->pc = 0x185aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185aac: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x185aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x185ab0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185ab4: 0xc4413eb8  lwc1        $f1, 0x3EB8($v0)
    ctx->pc = 0x185ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185ab8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x185ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x185abc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x185abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x185ac0: 0xc4403ebc  lwc1        $f0, 0x3EBC($v0)
    ctx->pc = 0x185ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185ac4: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x185ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x185ac8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x185ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x185acc: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x185accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x185ad0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x185ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x185ad4: 0xc062784  jal         func_189E10
    ctx->pc = 0x185AD4u;
    SET_GPR_U32(ctx, 31, 0x185ADCu);
    ctx->pc = 0x185AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185AD4u;
    // 0x185ad8: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E10u, 0x185AD4u, 0x185ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185ADCu;
label_185adc:
    // 0x185adc: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x185adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185ae0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x185ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x185ae4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x185ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x185ae8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x185ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x185aec: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x185aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x185af0: 0x92a70000  lbu         $a3, 0x0($s5)
    ctx->pc = 0x185af0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x185af4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x185af4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x185af8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x185af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185afc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x185afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x185b00: 0x306200f0  andi        $v0, $v1, 0xF0
    ctx->pc = 0x185b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x185b04: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x185b04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x185b08: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x185b08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x185b0c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x185b0cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185b10: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x185b14: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x185b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x185b18: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x185b18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x185b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185b20: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x185b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x185b24: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x185b24u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x185b28: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x185b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x185b2c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x185b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185b30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x185b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x185b34: 0x85b021  addu        $s6, $a0, $a1
    ctx->pc = 0x185b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x185b38: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x185b38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x185b3c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x185b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x185b40: 0x2442db53  addiu       $v0, $v0, -0x24AD
    ctx->pc = 0x185b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957907));
    // 0x185b44: 0x24a5db78  addiu       $a1, $a1, -0x2488
    ctx->pc = 0x185b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
    // 0x185b48: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x185b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x185b4c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x185b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x185b50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185b54: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x185b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x185b58: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x185b58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185b5c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x185b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x185b60: 0x90b10000  lbu         $s1, 0x0($a1)
    ctx->pc = 0x185b60u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185b64: 0x2463dbc8  addiu       $v1, $v1, -0x2438
    ctx->pc = 0x185b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958024));
    // 0x185b68: 0x2484dbbc  addiu       $a0, $a0, -0x2444
    ctx->pc = 0x185b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958012));
    // 0x185b6c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x185b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x185b70: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x185b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x185b74: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x185b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x185b78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x185b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185b7c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x185b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x185b80: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x185b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x185b84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x185b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185b88: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x185b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x185b8c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x185b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x185b90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x185b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185b94: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x185b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x185b98: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x185b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x185b9c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x185ba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x185ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185ba4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x185ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185ba8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x185ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x185bac: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x185bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x185bb0: 0x8e140010  lw          $s4, 0x10($s0)
    ctx->pc = 0x185bb0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x185bb4: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x185bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x185bb8: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x185BB8u;
    SET_GPR_U32(ctx, 31, 0x185BC0u);
    ctx->pc = 0x185BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BB8u;
    // 0x185bbc: 0x8c530010  lw          $s3, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F60u, 0x185BB8u, 0x185BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BC0u;
label_185bc0:
    // 0x185bc0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x185bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x185bc4: 0x506000ac  beql        $v1, $zero, . + 4 + (0xAC << 2)
    ctx->pc = 0x185BC4u;
    {
        const bool branch_taken_0x185bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bc4) {
            ctx->pc = 0x185BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185BC4u;
            // 0x185bc8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185E78u;
            goto label_185e78;
        }
    }
    ctx->pc = 0x185BCCu;
    // 0x185bcc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x185bccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x185bd0: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x185BD0u;
    {
        const bool branch_taken_0x185bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bd0) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185BD8u;
    // 0x185bd8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x185bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x185bdc: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x185BDCu;
    {
        const bool branch_taken_0x185bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bdc) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185BE4u;
    // 0x185be4: 0x120000a3  beqz        $s0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x185BE4u;
    {
        const bool branch_taken_0x185be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x185be4) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185BECu;
    // 0x185bec: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x185becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x185bf0: 0x2353021  addu        $a2, $s1, $s5
    ctx->pc = 0x185bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x185bf4: 0x554021  addu        $t0, $v0, $s5
    ctx->pc = 0x185bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x185bf8: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x185bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x185bfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x185bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x185c00: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x185c04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x185c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x185c08: 0x8ca900e0  lw          $t1, 0xE0($a1)
    ctx->pc = 0x185c08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x185c0c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x185c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x185c10: 0x8ca700f0  lw          $a3, 0xF0($a1)
    ctx->pc = 0x185c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x185c14: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x185c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x185c18: 0x94440108  lhu         $a0, 0x108($v0)
    ctx->pc = 0x185c18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x185c1c: 0xa109000a  sb          $t1, 0xA($t0)
    ctx->pc = 0x185c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 10), (uint8_t)GPR_U32(ctx, 9));
    // 0x185c20: 0x966803a4  lhu         $t0, 0x3A4($s3)
    ctx->pc = 0x185c20u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 932)));
    // 0x185c24: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x185c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x185c28: 0x35080020  ori         $t0, $t0, 0x20
    ctx->pc = 0x185c28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x185c2c: 0xa66803a4  sh          $t0, 0x3A4($s3)
    ctx->pc = 0x185c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 932), (uint16_t)GPR_U32(ctx, 8));
    // 0x185c30: 0xa260035d  sb          $zero, 0x35D($s3)
    ctx->pc = 0x185c30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 861), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c34: 0xa260035f  sb          $zero, 0x35F($s3)
    ctx->pc = 0x185c34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 863), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c38: 0xa260036d  sb          $zero, 0x36D($s3)
    ctx->pc = 0x185c38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 877), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c3c: 0xa260036f  sb          $zero, 0x36F($s3)
    ctx->pc = 0x185c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 879), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c40: 0xa0c7000a  sb          $a3, 0xA($a2)
    ctx->pc = 0x185c40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x185c44: 0xa68400f2  sh          $a0, 0xF2($s4)
    ctx->pc = 0x185c44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 242), (uint16_t)GPR_U32(ctx, 4));
    // 0x185c48: 0x968403a4  lhu         $a0, 0x3A4($s4)
    ctx->pc = 0x185c48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 932)));
    // 0x185c4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x185c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x185c50: 0xa68303a4  sh          $v1, 0x3A4($s4)
    ctx->pc = 0x185c50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x185c54: 0x968303a4  lhu         $v1, 0x3A4($s4)
    ctx->pc = 0x185c54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 932)));
    // 0x185c58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x185c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x185c5c: 0xa68203a4  sh          $v0, 0x3A4($s4)
    ctx->pc = 0x185c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 932), (uint16_t)GPR_U32(ctx, 2));
    // 0x185c60: 0xa280035d  sb          $zero, 0x35D($s4)
    ctx->pc = 0x185c60u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 861), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c64: 0xa280035f  sb          $zero, 0x35F($s4)
    ctx->pc = 0x185c64u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 863), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c68: 0xa280036d  sb          $zero, 0x36D($s4)
    ctx->pc = 0x185c68u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 877), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c6c: 0xa280036f  sb          $zero, 0x36F($s4)
    ctx->pc = 0x185c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 879), (uint8_t)GPR_U32(ctx, 0));
    // 0x185c70: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x185c70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x185c74: 0xa2a20013  sb          $v0, 0x13($s5)
    ctx->pc = 0x185c74u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x185c78: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x185c78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x185c7c: 0xc05ccb0  jal         func_1732C0
    ctx->pc = 0x185C7Cu;
    SET_GPR_U32(ctx, 31, 0x185C84u);
    ctx->pc = 0x185C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C7Cu;
    // 0x185c80: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732C0u, 0x185C7Cu, 0x185C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C84u;
label_185c84:
    // 0x185c84: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x185c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x185c88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x185c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185c8c: 0x50430028  beql        $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x185C8Cu;
    {
        const bool branch_taken_0x185c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x185c8c) {
            ctx->pc = 0x185C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185C8Cu;
            // 0x185c90: 0x92a40013  lbu         $a0, 0x13($s5) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185D30u;
            goto label_185d30;
        }
    }
    ctx->pc = 0x185C94u;
    // 0x185c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185c98: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x185C98u;
    {
        const bool branch_taken_0x185c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x185c98) {
            ctx->pc = 0x185C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185C98u;
            // 0x185c9c: 0x86c30240  lh          $v1, 0x240($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185CF8u;
            goto label_185cf8;
        }
    }
    ctx->pc = 0x185CA0u;
    // 0x185ca0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x185ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185ca4: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x185CA4u;
    {
        const bool branch_taken_0x185ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x185ca4) {
            ctx->pc = 0x185CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185CA4u;
            // 0x185ca8: 0x86430240  lh          $v1, 0x240($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185CC0u;
            goto label_185cc0;
        }
    }
    ctx->pc = 0x185CACu;
    // 0x185cac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185CACu;
    {
        const bool branch_taken_0x185cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185cac) {
            ctx->pc = 0x185CBCu;
            goto label_185cbc;
        }
    }
    ctx->pc = 0x185CB4u;
    // 0x185cb4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x185CB4u;
    {
        const bool branch_taken_0x185cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CB4u;
        // 0x185cb8: 0x86430240  lh          $v1, 0x240($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cb4) {
            ctx->pc = 0x185D8Cu;
            goto label_185d8c;
        }
    }
    ctx->pc = 0x185CBCu;
label_185cbc:
    // 0x185cbc: 0x86430240  lh          $v1, 0x240($s2)
    ctx->pc = 0x185cbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 576)));
label_185cc0:
    // 0x185cc0: 0xa6a30014  sh          $v1, 0x14($s5)
    ctx->pc = 0x185cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x185cc4: 0x92a30013  lbu         $v1, 0x13($s5)
    ctx->pc = 0x185cc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x185cc8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x185cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x185ccc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x185CCCu;
    {
        const bool branch_taken_0x185ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CCCu;
        // 0x185cd0: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ccc) {
            ctx->pc = 0x185CD8u;
            goto label_185cd8;
        }
    }
    ctx->pc = 0x185CD4u;
    // 0x185cd4: 0x2404fccc  addiu       $a0, $zero, -0x334
    ctx->pc = 0x185cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966476));
label_185cd8:
    // 0x185cd8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x185cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x185cdc: 0x86a40014  lh          $a0, 0x14($s5)
    ctx->pc = 0x185cdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x185ce0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x185ce0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x185ce4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x185ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x185ce8: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x185ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x185cec: 0x92a30013  lbu         $v1, 0x13($s5)
    ctx->pc = 0x185cecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x185cf0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x185CF0u;
    {
        const bool branch_taken_0x185cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CF0u;
        // 0x185cf4: 0xa283008c  sb          $v1, 0x8C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cf0) {
            ctx->pc = 0x185DC0u;
            goto label_185dc0;
        }
    }
    ctx->pc = 0x185CF8u;
label_185cf8:
    // 0x185cf8: 0xa6a30014  sh          $v1, 0x14($s5)
    ctx->pc = 0x185cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x185cfc: 0x92a30013  lbu         $v1, 0x13($s5)
    ctx->pc = 0x185cfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x185d00: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x185d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x185d04: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x185D04u;
    {
        const bool branch_taken_0x185d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D04u;
        // 0x185d08: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d04) {
            ctx->pc = 0x185D10u;
            goto label_185d10;
        }
    }
    ctx->pc = 0x185D0Cu;
    // 0x185d0c: 0x2404fccc  addiu       $a0, $zero, -0x334
    ctx->pc = 0x185d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966476));
label_185d10:
    // 0x185d10: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x185d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x185d14: 0x86a40014  lh          $a0, 0x14($s5)
    ctx->pc = 0x185d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x185d18: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x185d18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x185d1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x185d20: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x185d20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x185d24: 0x92a30013  lbu         $v1, 0x13($s5)
    ctx->pc = 0x185d24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x185d28: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x185D28u;
    {
        const bool branch_taken_0x185d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D28u;
        // 0x185d2c: 0xa283008c  sb          $v1, 0x8C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d28) {
            ctx->pc = 0x185DC0u;
            goto label_185dc0;
        }
    }
    ctx->pc = 0x185D30u;
label_185d30:
    // 0x185d30: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x185d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x185d34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x185d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x185d38: 0xa283008c  sb          $v1, 0x8C($s4)
    ctx->pc = 0x185d38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x185d3c: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x185d40: 0x86c30240  lh          $v1, 0x240($s6)
    ctx->pc = 0x185d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 576)));
    // 0x185d44: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x185d44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x185d48: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x185D48u;
    {
        const bool branch_taken_0x185d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d48) {
            ctx->pc = 0x185D74u;
            goto label_185d74;
        }
    }
    ctx->pc = 0x185D50u;
    // 0x185d50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185d54: 0x8463db1c  lh          $v1, -0x24E4($v1)
    ctx->pc = 0x185d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957852)));
    // 0x185d58: 0xa6a30014  sh          $v1, 0x14($s5)
    ctx->pc = 0x185d58u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x185d5c: 0x2463fccc  addiu       $v1, $v1, -0x334
    ctx->pc = 0x185d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966476));
    // 0x185d60: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x185d60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x185d64: 0x9283008c  lbu         $v1, 0x8C($s4)
    ctx->pc = 0x185d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x185d68: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x185d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x185d6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185D6Cu;
    {
        const bool branch_taken_0x185d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D6Cu;
        // 0x185d70: 0xa283008c  sb          $v1, 0x8C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d6c) {
            ctx->pc = 0x185DC0u;
            goto label_185dc0;
        }
    }
    ctx->pc = 0x185D74u;
label_185d74:
    // 0x185d74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185d78: 0x8463db1e  lh          $v1, -0x24E2($v1)
    ctx->pc = 0x185d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957854)));
    // 0x185d7c: 0xa6a30014  sh          $v1, 0x14($s5)
    ctx->pc = 0x185d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x185d80: 0x24630334  addiu       $v1, $v1, 0x334
    ctx->pc = 0x185d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 820));
    // 0x185d84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x185D84u;
    {
        const bool branch_taken_0x185d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D84u;
        // 0x185d88: 0xa6830000  sh          $v1, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d84) {
            ctx->pc = 0x185DC0u;
            goto label_185dc0;
        }
    }
    ctx->pc = 0x185D8Cu;
label_185d8c:
    // 0x185d8c: 0xa6a30014  sh          $v1, 0x14($s5)
    ctx->pc = 0x185d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x185d90: 0x92a30013  lbu         $v1, 0x13($s5)
    ctx->pc = 0x185d90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x185d94: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x185d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x185d98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x185D98u;
    {
        const bool branch_taken_0x185d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D98u;
        // 0x185d9c: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d98) {
            ctx->pc = 0x185DA4u;
            goto label_185da4;
        }
    }
    ctx->pc = 0x185DA0u;
    // 0x185da0: 0x2404fccc  addiu       $a0, $zero, -0x334
    ctx->pc = 0x185da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966476));
label_185da4:
    // 0x185da4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x185da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x185da8: 0x86a40014  lh          $a0, 0x14($s5)
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x185dac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x185dacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x185db0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x185db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x185db4: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x185db4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x185db8: 0x92a30013  lbu         $v1, 0x13($s5)
    ctx->pc = 0x185db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x185dbc: 0xa283008c  sb          $v1, 0x8C($s4)
    ctx->pc = 0x185dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 3));
label_185dc0:
    // 0x185dc0: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x185dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x185dc4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x185dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x185dc8: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x185dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x185dcc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x185dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x185dd0: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x185dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x185dd4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x185dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x185dd8: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x185dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
    // 0x185ddc: 0x24c6dbb4  addiu       $a2, $a2, -0x244C
    ctx->pc = 0x185ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958004));
    // 0x185de0: 0x92a90000  lbu         $t1, 0x0($s5)
    ctx->pc = 0x185de0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x185de4: 0x24a5db53  addiu       $a1, $a1, -0x24AD
    ctx->pc = 0x185de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957907));
    // 0x185de8: 0x2484db86  addiu       $a0, $a0, -0x247A
    ctx->pc = 0x185de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957958));
    // 0x185dec: 0x24070258  addiu       $a3, $zero, 0x258
    ctx->pc = 0x185decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x185df0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x185df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185df4: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x185df8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x185df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x185dfc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x185dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x185e00: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x185e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x185e04: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x185e04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x185e08: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x185e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x185e0c: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x185e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x185e10: 0x92a80000  lbu         $t0, 0x0($s5)
    ctx->pc = 0x185e10u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x185e14: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x185e14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x185e18: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x185e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x185e1c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x185e20: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x185e24: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x185e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x185e28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x185e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x185e2c: 0xa0b10000  sb          $s1, 0x0($a1)
    ctx->pc = 0x185e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x185e30: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x185e30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x185e34: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x185e38: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x185e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x185e3c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x185e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185e40: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x185e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x185e44: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x185e44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185e48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x185e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x185e4c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x185E4Cu;
    {
        const bool branch_taken_0x185e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x185E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E4Cu;
        // 0x185e50: 0xa4870000  sh          $a3, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e4c) {
            ctx->pc = 0x185E64u;
            goto label_185e64;
        }
    }
    ctx->pc = 0x185E54u;
    // 0x185e54: 0xc0617c4  jal         func_185F10
    ctx->pc = 0x185E54u;
    SET_GPR_U32(ctx, 31, 0x185E5Cu);
    ctx->pc = 0x185E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E54u;
    // 0x185e58: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185F10u, 0x185E54u, 0x185E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E5Cu;
label_185e5c:
    // 0x185e5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x185E5Cu;
    {
        const bool branch_taken_0x185e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e5c) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185E64u;
label_185e64:
    // 0x185e64: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x185e64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x185e68: 0x33c600ff  andi        $a2, $fp, 0xFF
    ctx->pc = 0x185e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x185e6c: 0xc0617ac  jal         func_185EB0
    ctx->pc = 0x185E6Cu;
    SET_GPR_U32(ctx, 31, 0x185E74u);
    ctx->pc = 0x185E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E6Cu;
    // 0x185e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185EB0u, 0x185E6Cu, 0x185E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E74u;
label_185e74:
    // 0x185e74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x185e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_185e78:
    // 0x185e78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x185e78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185e7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x185e7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185e80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x185e80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185e84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185e84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185e88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185e88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185e8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x185E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E9Cu;
        // 0x185ea0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185EA4u;
    // 0x185ea4: 0x0  nop
    ctx->pc = 0x185ea4u;
    // NOP
    // 0x185ea8: 0x0  nop
    ctx->pc = 0x185ea8u;
    // NOP
    // 0x185eac: 0x0  nop
    ctx->pc = 0x185eacu;
    // NOP
    if (ctx->pc == 0x185eacu) { ctx->pc = 0x185eb0u; }
}
