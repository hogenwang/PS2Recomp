#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E3988
// Address: 0x2e3988 - 0x2e3fd0
void sub_002E3988_0x2e3988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3988_0x2e3988");
#endif

    switch (ctx->pc) {
        case 0x2e3a34u: goto label_2e3a34;
        case 0x2e3ac8u: goto label_2e3ac8;
        case 0x2e3ad0u: goto label_2e3ad0;
        case 0x2e3af4u: goto label_2e3af4;
        case 0x2e3b18u: goto label_2e3b18;
        case 0x2e3b60u: goto label_2e3b60;
        case 0x2e3b84u: goto label_2e3b84;
        case 0x2e3bb8u: goto label_2e3bb8;
        case 0x2e3bc0u: goto label_2e3bc0;
        case 0x2e3bdcu: goto label_2e3bdc;
        case 0x2e3be0u: goto label_2e3be0;
        case 0x2e3be4u: goto label_2e3be4;
        case 0x2e3c04u: goto label_2e3c04;
        case 0x2e3c14u: goto label_2e3c14;
        case 0x2e3c38u: goto label_2e3c38;
        case 0x2e3c4cu: goto label_2e3c4c;
        case 0x2e3c50u: goto label_2e3c50;
        case 0x2e3c54u: goto label_2e3c54;
        case 0x2e3c80u: goto label_2e3c80;
        case 0x2e3c84u: goto label_2e3c84;
        case 0x2e3c8cu: goto label_2e3c8c;
        case 0x2e3ca8u: goto label_2e3ca8;
        case 0x2e3cacu: goto label_2e3cac;
        case 0x2e3cb4u: goto label_2e3cb4;
        case 0x2e3ce0u: goto label_2e3ce0;
        case 0x2e3d18u: goto label_2e3d18;
        case 0x2e3d44u: goto label_2e3d44;
        case 0x2e3d54u: goto label_2e3d54;
        case 0x2e3d80u: goto label_2e3d80;
        case 0x2e3d94u: goto label_2e3d94;
        case 0x2e3da0u: goto label_2e3da0;
        case 0x2e3db0u: goto label_2e3db0;
        case 0x2e3e08u: goto label_2e3e08;
        case 0x2e3e2cu: goto label_2e3e2c;
        case 0x2e3e80u: goto label_2e3e80;
        case 0x2e3ea4u: goto label_2e3ea4;
        case 0x2e3eecu: goto label_2e3eec;
        case 0x2e3f1cu: goto label_2e3f1c;
        case 0x2e3f68u: goto label_2e3f68;
        case 0x2e3f84u: goto label_2e3f84;
        case 0x2e3f94u: goto label_2e3f94;
        case 0x2e3fa8u: goto label_2e3fa8;
        case 0x2e3fb4u: goto label_2e3fb4;
        default: break;
    }

    ctx->pc = 0x2e3988u;

    // 0x2e3988: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e3988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e398c: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x2e398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2e3990: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2e3990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2e3994: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e3994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3998: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2e3998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2e399c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e399cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39a0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x2e39a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x2e39a4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2e39a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e39a8: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x2e39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x2e39ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2e39acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39b0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2e39b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2e39b4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x2e39b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39b8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2e39b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2e39bc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2e39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2e39c0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2e39c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2e39c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e39c8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2e39c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2e39cc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2e39ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2e39d0: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2e39d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2e39d4: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2e39d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2e39d8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e39d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2e39dc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e39dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2e39e0: 0xafdd0058  sw          $sp, 0x58($fp)
    ctx->pc = 0x2e39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 29));
    // 0x2e39e4: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x2e39e4u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2e39e8: 0x93c200f8  lbu         $v0, 0xF8($fp)
    ctx->pc = 0x2e39e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 248)));
    // 0x2e39ec: 0xafc50040  sw          $a1, 0x40($fp)
    ctx->pc = 0x2e39ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 5));
    // 0x2e39f0: 0xafc70044  sw          $a3, 0x44($fp)
    ctx->pc = 0x2e39f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 7));
    // 0x2e39f4: 0xafc90048  sw          $t1, 0x48($fp)
    ctx->pc = 0x2e39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 9));
    // 0x2e39f8: 0xafca004c  sw          $t2, 0x4C($fp)
    ctx->pc = 0x2e39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 10));
    // 0x2e39fc: 0xafcb0050  sw          $t3, 0x50($fp)
    ctx->pc = 0x2e39fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 11));
    // 0x2e3a00: 0xafc20054  sw          $v0, 0x54($fp)
    ctx->pc = 0x2e3a00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 2));
    // 0x2e3a04: 0xafdd005c  sw          $sp, 0x5C($fp)
    ctx->pc = 0x2e3a04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 92), GPR_U32(ctx, 29));
    // 0x2e3a08: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e3a0c: 0x24633a54  addiu       $v1, $v1, 0x3A54
    ctx->pc = 0x2e3a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14932));
    // 0x2e3a10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3a14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3A14u;
    {
        const bool branch_taken_0x2e3a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a14) {
            ctx->pc = 0x2E3A34u;
            goto label_2e3a34;
        }
    }
    ctx->pc = 0x2E3A1Cu;
    // 0x2e3a1c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e3a20: 0x24843a68  addiu       $a0, $a0, 0x3A68
    ctx->pc = 0x2e3a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14952));
    // 0x2e3a24: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e3a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e3a28: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e3a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e3a2c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E3A2Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A34u);
    ctx->pc = 0x2E3A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A2Cu;
            // 0x2e3a30: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A34u; }
        if (ctx->pc != 0x2E3A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A34u; }
        if (ctx->pc != 0x2E3A34u) { return; }
    }
    ctx->pc = 0x2E3A34u;
label_2e3a34:
    // 0x2e3a34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E3A34u;
    {
        const bool branch_taken_0x2e3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a34) {
            ctx->pc = 0x2E3A68u;
            goto label_2e3a68;
        }
    }
    ctx->pc = 0x2E3A3Cu;
    // 0x2e3a3c: 0x8e7020  add         $t6, $a0, $t6
    ctx->pc = 0x2e3a3cu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2e3a40: 0x84a2b56b  lh          $v0, -0x4A95($a1)
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294948203)));
    // 0x2e3a44: 0x8fd6ab7d  lw          $s6, -0x5483($fp)
    ctx->pc = 0x2e3a44u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945661)));
    // 0x2e3a48: 0xdccd0d4f  ld          $t5, 0xD4F($a2)
    ctx->pc = 0x2e3a48u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 3407)));
    // 0x2e3a4c: 0xfcf5916a  sd          $s5, -0x6E96($a3)
    ctx->pc = 0x2e3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294938986), GPR_U64(ctx, 21));
    // 0x2e3a50: 0xfecfefe2  sd          $t7, -0x101E($s6)
    ctx->pc = 0x2e3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294963170), GPR_U64(ctx, 15));
    // 0x2e3a54: 0x0  nop
    ctx->pc = 0x2e3a54u;
    // NOP
    // 0x2e3a58: 0x6ef55d9c  ldr         $s5, 0x5D9C($s7)
    ctx->pc = 0x2e3a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 23964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x2e3a5c: 0xcb188a50  lwc2        $24, -0x75B0($t8)
    ctx->pc = 0x2e3a5cu;
    // Unhandled opcode: 0x32
    // 0x2e3a60: 0x6ef559f8  ldr         $s5, 0x59F8($s7)
    ctx->pc = 0x2e3a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 23032); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x2e3a64: 0x0  nop
    ctx->pc = 0x2e3a64u;
    // NOP
label_2e3a68:
    // 0x2e3a68: 0x7abb1b3e  lq          $k1, 0x1B3E($s5)
    ctx->pc = 0x2e3a68u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 21), 6974)));
    // 0x2e3a6c: 0x1e2b1144  .word       0x1E2B1144                   # bgtz        $s1, . + 4 + (0x1144 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3A6Cu;
    {
        const bool branch_taken_0x2e3a6c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2E3A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A6Cu;
            // 0x2e3a70: 0x76da1d6c  .word       0x76DA1D6C                   # INVALID     $s6, $k0, 0x1D6C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x1D
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a6c) {
            ctx->pc = 0x2E7F80u;
            return;
        }
    }
    ctx->pc = 0x2E3A74u;
    // 0x2e3a74: 0x76d01d4c  .word       0x76D01D4C                   # INVALID     $s6, $s0, 0x1D4C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e3a74u;
    // Unhandled opcode: 0x1D
    // 0x2e3a78: 0x6bbb11ce  ldl         $k1, 0x11CE($sp)
    ctx->pc = 0x2e3a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4558); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
    // 0x2e3a7c: 0x68da15fc  ldl         $k0, 0x15FC($a2)
    ctx->pc = 0x2e3a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 5628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem << shift)); }
    // 0x2e3a80: 0x5adb191d  .word       0x5ADB191D                   # blezl       $s6, . + 4 + (0x191D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3A80u;
    {
        const bool branch_taken_0x2e3a80 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3a80) {
            ctx->pc = 0x2E3A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A80u;
            // 0x2e3a84: 0x6a3b1346  ldl         $k1, 0x1346($s1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9EF8u;
            return;
        }
    }
    ctx->pc = 0x2E3A88u;
    // 0x2e3a88: 0x5a3b1346  .word       0x5A3B1346                   # blezl       $s1, . + 4 + (0x1346 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3A88u;
    {
        const bool branch_taken_0x2e3a88 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2e3a88) {
            ctx->pc = 0x2E3A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A88u;
            // 0x2e3a8c: 0x50db1dbd  beql        $a2, $k1, . + 4 + (0x1DBD << 2) (Delay Slot)
        // Likely branch instruction at 0x2E3A8C - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E87A4u;
            return;
        }
    }
    ctx->pc = 0x2E3A90u;
    // 0x2e3a90: 0x68ab104e  ldl         $t3, 0x104E($a1)
    ctx->pc = 0x2e3a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4174); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2e3a94: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3A94u;
    {
        const bool branch_taken_0x2e3a94 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3a94) {
            ctx->pc = 0x2E3A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A94u;
            // 0x2e3a98: 0x451ffdbf  .word       0x451FFDBF                   # INVALID     $t0, $ra, -0x241 # 00000000 <InstrIdType: CPU_COP1_BC1> (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFC8u;
            return;
        }
    }
    ctx->pc = 0x2E3A9Cu;
    // 0x2e3a9c: 0x4594efbf  .word       0x4594EFBF                   # INVALID     $t4, $s4, -0x1041 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2e3a9cu;
    // Unhandled FPU instruction: format 0xC, function 0x3F
    // 0x2e3aa0: 0x4a901548  vmaddx.y    $vf21, $vf2, $vf16x
    ctx->pc = 0x2e3aa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3aa4: 0x58e3979c  .word       0x58E3979C                   # blezl       $a3, . + 4 + (-0x6864 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3AA4u;
    {
        const bool branch_taken_0x2e3aa4 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3aa4) {
            ctx->pc = 0x2E3AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AA4u;
            // 0x2e3aa8: 0x421f2d4f  .word       0x421F2D4F                   # INVALID     $s0, $ra, 0x2D4F # 00000000 <InstrIdType: CPU_COP0_TLB> (Delay Slot)
        // Unhandled COP0 CO-OP: 0xF
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9918u;
            return;
        }
    }
    ctx->pc = 0x2E3AACu;
    // 0x2e3aac: 0x4a919548  vmaddx.y    $vf21, $vf18, $vf17x
    ctx->pc = 0x2e3aacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3ab0: 0x58e2179c  .word       0x58E2179C                   # blezl       $a3, . + 4 + (0x179C << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3AB0u;
    {
        const bool branch_taken_0x2e3ab0 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3ab0) {
            ctx->pc = 0x2E3AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AB0u;
            // 0x2e3ab4: 0x4a1fed4f  vmsubw      $vf21, $vf29, $vf31w (Delay Slot)
        { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9924u;
            return;
        }
    }
    ctx->pc = 0x2E3AB8u;
    // 0x2e3ab8: 0x4a911548  vmaddx.y    $vf21, $vf2, $vf17x
    ctx->pc = 0x2e3ab8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3abc: 0x58d31d9c  .word       0x58D31D9C                   # blezl       $a2, . + 4 + (0x1D9C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3ABCu;
    {
        const bool branch_taken_0x2e3abc = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3abc) {
            ctx->pc = 0x2E3AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3ABCu;
            // 0x2e3ac0: 0xa131c4f  j           func_84C713C (Delay Slot)
        // J 0x84C713C - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB130u;
            return;
        }
    }
    ctx->pc = 0x2E3AC4u;
    // 0x2e3ac4: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_2e3ac8:
    if (ctx->pc == 0x2E3AC8u) {
        ctx->pc = 0x2E3AC8u;
            // 0x2e3ac8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->pc = 0x2E3ACCu;
        goto label_fallthrough_0x2e3ac4;
    }
    ctx->pc = 0x2E3AC4u;
    {
        const bool branch_taken_0x2e3ac4 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3ac4) {
            ctx->pc = 0x2E3AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AC4u;
            // 0x2e3ac8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFF8u;
            return;
        }
    }
label_fallthrough_0x2e3ac4:
    ctx->pc = 0x2E3ACCu;
    // 0x2e3acc: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_2e3ad0:
    if (ctx->pc == 0x2E3AD0u) {
        ctx->pc = 0x2E3AD0u;
            // 0x2e3ad0: 0x7a9b1548  lq          $k1, 0x1548($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 5448)));
        ctx->pc = 0x2E3AD4u;
        goto label_fallthrough_0x2e3acc;
    }
    ctx->pc = 0x2E3ACCu;
    {
        const bool branch_taken_0x2e3acc = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3acc) {
            ctx->pc = 0x2E3AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3ACCu;
            // 0x2e3ad0: 0x7a9b1548  lq          $k1, 0x1548($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 5448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB000u;
            return;
        }
    }
label_fallthrough_0x2e3acc:
    ctx->pc = 0x2E3AD4u;
    // 0x2e3ad4: 0x58bb1548  .word       0x58BB1548                   # blezl       $a1, . + 4 + (0x1548 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3AD4u;
    {
        const bool branch_taken_0x2e3ad4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2e3ad4) {
            ctx->pc = 0x2E3AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AD4u;
            // 0x2e3ad8: 0x58f9185c  .word       0x58F9185C                   # blezl       $a3, . + 4 + (0x185C << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3AD8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8FF8u;
            return;
        }
    }
    ctx->pc = 0x2E3ADCu;
    // 0x2e3adc: 0x5abb1c5e  .word       0x5ABB1C5E                   # blezl       $s5, . + 4 + (0x1C5E << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3ADCu;
    {
        const bool branch_taken_0x2e3adc = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2e3adc) {
            ctx->pc = 0x2E3AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3ADCu;
            // 0x2e3ae0: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3AE0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC58u;
            return;
        }
    }
    ctx->pc = 0x2E3AE4u;
    // 0x2e3ae4: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3AE4u;
    {
        const bool branch_taken_0x2e3ae4 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3ae4) {
            ctx->pc = 0x2E3AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AE4u;
            // 0x2e3ae8: 0x3abb1c78  xori        $k1, $s5, 0x1C78 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)7288);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB018u;
            return;
        }
    }
    ctx->pc = 0x2E3AECu;
    // 0x2e3aec: 0xabb1c68  j           func_AEC71A0
    ctx->pc = 0x2E3AECu;
    ctx->pc = 0x2E3AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AECu;
            // 0x2e3af0: 0x59b11d28  .word       0x59B11D28                   # blezl       $t5, . + 4 + (0x1D28 << 2) # 00110000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3AF0 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xAEC71A0u;
    {
        auto targetFn = runtime->lookupFunction(0xAEC71A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3AF4u;
label_2e3af4:
    // 0x2e3af4: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3AF4u;
    {
        const bool branch_taken_0x2e3af4 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2e3af4) {
            ctx->pc = 0x2E3AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AF4u;
            // 0x2e3af8: 0x7a9b9d48  lq          $k1, -0x62B8($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF18u;
            return;
        }
    }
    ctx->pc = 0x2E3AFCu;
    // 0x2e3afc: 0x5a8b1d18  .word       0x5A8B1D18                   # blezl       $s4, . + 4 + (0x1D18 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3AFCu;
    {
        const bool branch_taken_0x2e3afc = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e3afc) {
            ctx->pc = 0x2E3B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AFCu;
            // 0x2e3b00: 0x6a7b1dce  ldl         $k1, 0x1DCE($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7630); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF60u;
            return;
        }
    }
    ctx->pc = 0x2E3B04u;
    // 0x2e3b04: 0x1abb1c58  .word       0x1ABB1C58                   # blez        $s5, . + 4 + (0x1C58 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B04u;
    {
        const bool branch_taken_0x2e3b04 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E3B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B04u;
            // 0x2e3b08: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3B08 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b04) {
            ctx->pc = 0x2EAC68u;
            return;
        }
    }
    ctx->pc = 0x2E3B0Cu;
    // 0x2e3b0c: 0x7a9b9d48  lq          $k1, -0x62B8($s4)
    ctx->pc = 0x2e3b0cu;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
    // 0x2e3b10: 0x8da181c  j           func_3686070
    ctx->pc = 0x2E3B10u;
    ctx->pc = 0x2E3B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B10u;
            // 0x2e3b14: 0x5494eb8d  bnel        $a0, $s4, . + 4 + (-0x1473 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E3B14 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3686070u;
    {
        auto targetFn = runtime->lookupFunction(0x3686070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3B18u;
label_2e3b18:
    // 0x2e3b18: 0x7adb1546  lq          $k1, 0x1546($s6)
    ctx->pc = 0x2e3b18u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 22), 5446)));
    // 0x2e3b1c: 0x7afb1f45  lq          $k1, 0x1F45($s7)
    ctx->pc = 0x2e3b1cu;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 23), 8005)));
    // 0x2e3b20: 0x58d31d9c  .word       0x58D31D9C                   # blezl       $a2, . + 4 + (0x1D9C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B20u;
    {
        const bool branch_taken_0x2e3b20 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3b20) {
            ctx->pc = 0x2E3B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B20u;
            // 0x2e3b24: 0x6f2b1104  ldr         $t3, 0x1104($t9) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4356); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB194u;
            return;
        }
    }
    ctx->pc = 0x2E3B28u;
    // 0x2e3b28: 0x7a131c4f  lq          $s3, 0x1C4F($s0)
    ctx->pc = 0x2e3b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 16), 7247)));
    // 0x2e3b2c: 0x72da1d4c  .word       0x72DA1D4C                   # INVALID     $s6, $k0, 0x1D4C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e3b2cu;
    // Unhandled MMI instruction: function 0xC
    // 0x2e3b30: 0x451ffdbf  .word       0x451FFDBF                   # INVALID     $t0, $ra, -0x241 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2e3b30u;
    // FPU branch instruction - handled elsewhere
    // 0x2e3b34: 0x4594efbf  .word       0x4594EFBF                   # INVALID     $t4, $s4, -0x1041 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2e3b34u;
    // Unhandled FPU instruction: format 0xC, function 0x3F
    // 0x2e3b38: 0x4a901548  vmaddx.y    $vf21, $vf2, $vf16x
    ctx->pc = 0x2e3b38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3b3c: 0x78da1b5c  lq          $k0, 0x1B5C($a2)
    ctx->pc = 0x2e3b3cu;
    SET_GPR_VEC(ctx, 26, READ128(ADD32(GPR_U32(ctx, 6), 7004)));
    // 0x2e3b40: 0x421f2d4f  .word       0x421F2D4F                   # INVALID     $s0, $ra, 0x2D4F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2e3b40u;
    // Unhandled COP0 CO-OP: 0xF
    // 0x2e3b44: 0x4a919548  vmaddx.y    $vf21, $vf18, $vf17x
    ctx->pc = 0x2e3b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3b48: 0x4a1fed4f  vmsubw      $vf21, $vf29, $vf31w
    ctx->pc = 0x2e3b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3b4c: 0x4a911548  vmaddx.y    $vf21, $vf2, $vf17x
    ctx->pc = 0x2e3b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3b50: 0x7afb1f46  lq          $k1, 0x1F46($s7)
    ctx->pc = 0x2e3b50u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 23), 8006)));
    // 0x2e3b54: 0x4abb1ece  vmsubz.yw   $vf27, $vf3, $vf27z
    ctx->pc = 0x2e3b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3b58: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E3B58u;
    SET_GPR_U32(ctx, 31, 0x2E3B60u);
    ctx->pc = 0x2E3B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B58u;
            // 0x2e3b5c: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3B5C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B60u; }
        if (ctx->pc != 0x2E3B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B60u; }
        if (ctx->pc != 0x2E3B60u) { return; }
    }
    ctx->pc = 0x2E3B60u;
label_2e3b60:
    // 0x2e3b60: 0x7a9b1548  lq          $k1, 0x1548($s4)
    ctx->pc = 0x2e3b60u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 5448)));
    // 0x2e3b64: 0x58bb1548  .word       0x58BB1548                   # blezl       $a1, . + 4 + (0x1548 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B64u;
    {
        const bool branch_taken_0x2e3b64 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2e3b64) {
            ctx->pc = 0x2E3B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B64u;
            // 0x2e3b68: 0x58f91e5c  .word       0x58F91E5C                   # blezl       $a3, . + 4 + (0x1E5C << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3B68 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9088u;
            return;
        }
    }
    ctx->pc = 0x2E3B6Cu;
    // 0x2e3b6c: 0x5abb1c5e  .word       0x5ABB1C5E                   # blezl       $s5, . + 4 + (0x1C5E << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B6Cu;
    {
        const bool branch_taken_0x2e3b6c = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2e3b6c) {
            ctx->pc = 0x2E3B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B6Cu;
            // 0x2e3b70: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3B70 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EACE8u;
            return;
        }
    }
    ctx->pc = 0x2E3B74u;
    // 0x2e3b74: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B74u;
    {
        const bool branch_taken_0x2e3b74 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3b74) {
            ctx->pc = 0x2E3B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B74u;
            // 0x2e3b78: 0x3abb1c78  xori        $k1, $s5, 0x1C78 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)7288);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB0A8u;
            return;
        }
    }
    ctx->pc = 0x2E3B7Cu;
    // 0x2e3b7c: 0xabb1c68  j           func_AEC71A0
    ctx->pc = 0x2E3B7Cu;
    ctx->pc = 0x2E3B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B7Cu;
            // 0x2e3b80: 0x59b11d28  .word       0x59B11D28                   # blezl       $t5, . + 4 + (0x1D28 << 2) # 00110000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3B80 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xAEC71A0u;
    {
        auto targetFn = runtime->lookupFunction(0xAEC71A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3B84u;
label_2e3b84:
    // 0x2e3b84: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B84u;
    {
        const bool branch_taken_0x2e3b84 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2e3b84) {
            ctx->pc = 0x2E3B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B84u;
            // 0x2e3b88: 0x7a9b9d48  lq          $k1, -0x62B8($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFA8u;
            return;
        }
    }
    ctx->pc = 0x2E3B8Cu;
    // 0x2e3b8c: 0x5a8b1d18  .word       0x5A8B1D18                   # blezl       $s4, . + 4 + (0x1D18 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B8Cu;
    {
        const bool branch_taken_0x2e3b8c = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e3b8c) {
            ctx->pc = 0x2E3B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B8Cu;
            // 0x2e3b90: 0x6a7b1dce  ldl         $k1, 0x1DCE($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7630); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFF0u;
            return;
        }
    }
    ctx->pc = 0x2E3B94u;
    // 0x2e3b94: 0x1abb1c58  .word       0x1ABB1C58                   # blez        $s5, . + 4 + (0x1C58 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3B94u;
    {
        const bool branch_taken_0x2e3b94 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E3B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B94u;
            // 0x2e3b98: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3B98 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b94) {
            ctx->pc = 0x2EACF8u;
            return;
        }
    }
    ctx->pc = 0x2E3B9Cu;
    // 0x2e3b9c: 0x7a9b9d48  lq          $k1, -0x62B8($s4)
    ctx->pc = 0x2e3b9cu;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
    // 0x2e3ba0: 0x78da181c  lq          $k0, 0x181C($a2)
    ctx->pc = 0x2e3ba0u;
    SET_GPR_VEC(ctx, 26, READ128(ADD32(GPR_U32(ctx, 6), 6172)));
    // 0x2e3ba4: 0x5494eb8d  bnel        $a0, $s4, . + 4 + (-0x1473 << 2)
    ctx->pc = 0x2E3BA4u;
    {
        const bool branch_taken_0x2e3ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3ba4) {
            ctx->pc = 0x2E3BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BA4u;
            // 0x2e3ba8: 0x7adb1546  lq          $k1, 0x1546($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 22), 5446)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE9DCu;
            return;
        }
    }
    ctx->pc = 0x2E3BACu;
    // 0x2e3bac: 0x4abb1ece  vmsubz.yw   $vf27, $vf3, $vf27z
    ctx->pc = 0x2e3bacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3bb0: 0xe2b1184  jal         func_8AC4610
    ctx->pc = 0x2E3BB0u;
    SET_GPR_U32(ctx, 31, 0x2E3BB8u);
    ctx->pc = 0x2E3BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BB0u;
            // 0x2e3bb4: 0x3f2b1144  .word       0x3F2B1144                   # lui         $t3, 0x1144 # 03200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4420 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x8AC4610u;
    {
        auto targetFn = runtime->lookupFunction(0x8AC4610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BB8u; }
        if (ctx->pc != 0x2E3BB8u) { return; }
    }
    ctx->pc = 0x2E3BB8u;
label_2e3bb8:
    // 0x2e3bb8: 0xc0b8e56  jal         func_2E3958
    ctx->pc = 0x2E3BB8u;
    SET_GPR_U32(ctx, 31, 0x2E3BC0u);
    ctx->pc = 0x2E3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BB8u;
            // 0x2e3bbc: 0x58f91f9c  .word       0x58F91F9C                   # blezl       $a3, . + 4 + (0x1F9C << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3BBC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3958u;
    if (runtime->hasFunction(0x2E3958u)) {
        auto targetFn = runtime->lookupFunction(0x2E3958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BC0u; }
        if (ctx->pc != 0x2E3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3958_0x2e3958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BC0u; }
        if (ctx->pc != 0x2E3BC0u) { return; }
    }
    ctx->pc = 0x2E3BC0u;
label_2e3bc0:
    // 0x2e3bc0: 0x5e9b19dc  .word       0x5E9B19DC                   # bgtzl       $s4, . + 4 + (0x19DC << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3BC0u;
    {
        const bool branch_taken_0x2e3bc0 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x2e3bc0) {
            ctx->pc = 0x2E3BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BC0u;
            // 0x2e3bc4: 0x3abb1fce  xori        $k1, $s5, 0x1FCE (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)8142);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA334u;
            return;
        }
    }
    ctx->pc = 0x2E3BC8u;
    // 0x2e3bc8: 0x5afb1bdd  .word       0x5AFB1BDD                   # blezl       $s7, . + 4 + (0x1BDD << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3BC8u;
    {
        const bool branch_taken_0x2e3bc8 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x2e3bc8) {
            ctx->pc = 0x2E3BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BC8u;
            // 0x2e3bcc: 0x58d99d9c  .word       0x58D99D9C                   # blezl       $a2, . + 4 + (-0x6264 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3BCC - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAB40u;
            return;
        }
    }
    ctx->pc = 0x2E3BD0u;
    // 0x2e3bd0: 0x6e2b1104  ldr         $t3, 0x1104($s1)
    ctx->pc = 0x2e3bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4356); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2e3bd4: 0x8d9115c  j           func_3644570
    ctx->pc = 0x2E3BD4u;
    ctx->pc = 0x2E3BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BD4u;
            // 0x2e3bd8: 0x8da1b5c  j           func_3686D70 (Delay Slot)
        // J 0x3686D70 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3644570u;
    {
        auto targetFn = runtime->lookupFunction(0x3644570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3BDCu;
label_2e3bdc:
    // 0x2e3bdc: 0xa9b175e  j           func_A6C5D78
label_2e3be0:
    if (ctx->pc == 0x2E3BE0u) {
        ctx->pc = 0x2E3BE0u;
            // 0x2e3be0: 0x6adb1945  ldl         $k1, 0x1945($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 6469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->pc = 0x2E3BE4u;
        goto label_2e3be4;
    }
    ctx->pc = 0x2E3BDCu;
    ctx->pc = 0x2E3BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BDCu;
            // 0x2e3be0: 0x6adb1945  ldl         $k1, 0x1945($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 6469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
    ctx->pc = 0xA6C5D78u;
    {
        auto targetFn = runtime->lookupFunction(0xA6C5D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3BE4u;
label_2e3be4:
    // 0x2e3be4: 0x68da16fc  ldl         $k0, 0x16FC($a2)
    ctx->pc = 0x2e3be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 5884); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem << shift)); }
    // 0x2e3be8: 0x5594e9dd  bnel        $t4, $s4, . + 4 + (-0x1623 << 2)
    ctx->pc = 0x2E3BE8u;
    {
        const bool branch_taken_0x2e3be8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3be8) {
            ctx->pc = 0x2E3BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BE8u;
            // 0x2e3bec: 0x6adb1546  ldl         $k1, 0x1546($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 5446); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE360u;
            return;
        }
    }
    ctx->pc = 0x2E3BF0u;
    // 0x2e3bf0: 0x1e2b11c4  .word       0x1E2B11C4                   # bgtz        $s1, . + 4 + (0x11C4 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3BF0u;
    {
        const bool branch_taken_0x2e3bf0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2E3BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BF0u;
            // 0x2e3bf4: 0x58e8119c  .word       0x58E8119C                   # blezl       $a3, . + 4 + (0x119C << 2) # 00080000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3BF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bf0) {
            ctx->pc = 0x2E8304u;
            return;
        }
    }
    ctx->pc = 0x2E3BF8u;
    // 0x2e3bf8: 0x52b1144  tltiu       $t1, 0x1144
    ctx->pc = 0x2e3bf8u;
    if (GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4420) { runtime->handleTrap(rdram, ctx); }
    // 0x2e3bfc: 0xc0b8104  jal         func_2E0410
    ctx->pc = 0x2E3BFCu;
    SET_GPR_U32(ctx, 31, 0x2E3C04u);
    ctx->pc = 0x2E3C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BFCu;
            // 0x2e3c00: 0x2a9b1d0e  slti        $k1, $s4, 0x1D0E (Delay Slot)
        SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7438) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0410u;
    if (runtime->hasFunction(0x2E0410u)) {
        auto targetFn = runtime->lookupFunction(0x2E0410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C04u; }
        if (ctx->pc != 0x2E3C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0410_0x2e0410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C04u; }
        if (ctx->pc != 0x2E3C04u) { return; }
    }
    ctx->pc = 0x2E3C04u;
label_2e3c04:
    // 0x2e3c04: 0x599b19cc  .word       0x599B19CC                   # blezl       $t4, . + 4 + (0x19CC << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C04u;
    {
        const bool branch_taken_0x2e3c04 = (GPR_S32(ctx, 12) <= 0);
        if (branch_taken_0x2e3c04) {
            ctx->pc = 0x2E3C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C04u;
            // 0x2e3c08: 0x1f2b1184  .word       0x1F2B1184                   # bgtz        $t9, . + 4 + (0x1184 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3C08 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA338u;
            return;
        }
    }
    ctx->pc = 0x2E3C0Cu;
    // 0x2e3c0c: 0xbab11ce  j           func_EAC4738
    ctx->pc = 0x2E3C0Cu;
    ctx->pc = 0x2E3C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C0Cu;
            // 0x2e3c10: 0xfa3b1344  sqc2        $vf27, 0x1344($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 4932), _mm_castps_si128(ctx->vu0_vf[27]));
        ctx->in_delay_slot = false;
    ctx->pc = 0xEAC4738u;
    {
        auto targetFn = runtime->lookupFunction(0xEAC4738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3C14u;
label_2e3c14:
    // 0x2e3c14: 0x3aab11ce  xori        $t3, $s5, 0x11CE
    ctx->pc = 0x2e3c14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)4558);
    // 0x2e3c18: 0x5a9b14ce  .word       0x5A9B14CE                   # blezl       $s4, . + 4 + (0x14CE << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C18u;
    {
        const bool branch_taken_0x2e3c18 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e3c18) {
            ctx->pc = 0x2E3C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C18u;
            // 0x2e3c1c: 0x2bab114e  slti        $t3, $sp, 0x114E (Delay Slot)
        SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 29) < (int64_t)(int32_t)4430) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F54u;
            return;
        }
    }
    ctx->pc = 0x2E3C20u;
    // 0x2e3c20: 0xf584e9ce  sdc1        $f4, -0x1632($t4)
    ctx->pc = 0x2e3c20u;
    // Unhandled opcode: 0x3D
    // 0x2e3c24: 0x58f91d9c  .word       0x58F91D9C                   # blezl       $a3, . + 4 + (0x1D9C << 2) # 00190000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C24u;
    {
        const bool branch_taken_0x2e3c24 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3c24) {
            ctx->pc = 0x2E3C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C24u;
            // 0x2e3c28: 0xf6de1d6c  sdc1        $f30, 0x1D6C($s6) (Delay Slot)
        // Unhandled opcode: 0x3D
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB298u;
            return;
        }
    }
    ctx->pc = 0x2E3C2Cu;
    // 0x2e3c2c: 0x58ff1d9c  .word       0x58FF1D9C                   # blezl       $a3, . + 4 + (0x1D9C << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C2Cu;
    {
        const bool branch_taken_0x2e3c2c = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3c2c) {
            ctx->pc = 0x2E3C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C2Cu;
            // 0x2e3c30: 0xc0b81d4  jal         func_2E0750 (Delay Slot)
        // JAL 0x2E0750 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB2A0u;
            return;
        }
    }
    ctx->pc = 0x2E3C34u;
    // 0x2e3c34: 0x58ef919c  .word       0x58EF919C                   # blezl       $a3, . + 4 + (-0x6E64 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
label_2e3c38:
    if (ctx->pc == 0x2E3C38u) {
        ctx->pc = 0x2E3C38u;
            // 0x2e3c38: 0x589b19fc  .word       0x589B19FC                   # blezl       $a0, . + 4 + (0x19FC << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3C38 - Handled by branch logic
        ctx->pc = 0x2E3C3Cu;
        goto label_fallthrough_0x2e3c34;
    }
    ctx->pc = 0x2E3C34u;
    {
        const bool branch_taken_0x2e3c34 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3c34) {
            ctx->pc = 0x2E3C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C34u;
            // 0x2e3c38: 0x589b19fc  .word       0x589B19FC                   # blezl       $a0, . + 4 + (0x19FC << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3C38 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C82A8u;
            return;
        }
    }
label_fallthrough_0x2e3c34:
    ctx->pc = 0x2E3C3Cu;
    // 0x2e3c3c: 0x58d99d9c  .word       0x58D99D9C                   # blezl       $a2, . + 4 + (-0x6264 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C3Cu;
    {
        const bool branch_taken_0x2e3c3c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3c3c) {
            ctx->pc = 0x2E3C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C3Cu;
            // 0x2e3c40: 0x6f2b1184  ldr         $t3, 0x1184($t9) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4484); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB2B0u;
            return;
        }
    }
    ctx->pc = 0x2E3C44u;
    // 0x2e3c44: 0x8f9155c  j           func_3E45570
    ctx->pc = 0x2E3C44u;
    ctx->pc = 0x2E3C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C44u;
            // 0x2e3c48: 0x8da1b5c  j           func_3686D70 (Delay Slot)
        // J 0x3686D70 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E45570u;
    {
        auto targetFn = runtime->lookupFunction(0x3E45570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3C4Cu;
label_2e3c4c:
    // 0x2e3c4c: 0xa9b175e  j           func_A6C5D78
label_2e3c50:
    if (ctx->pc == 0x2E3C50u) {
        ctx->pc = 0x2E3C50u;
            // 0x2e3c50: 0x6adb1945  ldl         $k1, 0x1945($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 6469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->pc = 0x2E3C54u;
        goto label_2e3c54;
    }
    ctx->pc = 0x2E3C4Cu;
    ctx->pc = 0x2E3C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C4Cu;
            // 0x2e3c50: 0x6adb1945  ldl         $k1, 0x1945($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 6469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
    ctx->pc = 0xA6C5D78u;
    {
        auto targetFn = runtime->lookupFunction(0xA6C5D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3C54u;
label_2e3c54:
    // 0x2e3c54: 0x7a5b17ce  lq          $k1, 0x17CE($s2)
    ctx->pc = 0x2e3c54u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 18), 6094)));
    // 0x2e3c58: 0x5594e9dd  bnel        $t4, $s4, . + 4 + (-0x1623 << 2)
    ctx->pc = 0x2E3C58u;
    {
        const bool branch_taken_0x2e3c58 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3c58) {
            ctx->pc = 0x2E3C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C58u;
            // 0x2e3c5c: 0x6adb1546  ldl         $k1, 0x1546($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 5446); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE3D0u;
            return;
        }
    }
    ctx->pc = 0x2E3C60u;
    // 0x2e3c60: 0x1f2b1184  .word       0x1F2B1184                   # bgtz        $t9, . + 4 + (0x1184 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C60u;
    {
        const bool branch_taken_0x2e3c60 = (GPR_S32(ctx, 25) > 0);
        ctx->pc = 0x2E3C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C60u;
            // 0x2e3c64: 0x3abb11ce  xori        $k1, $s5, 0x11CE (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)4558);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c60) {
            ctx->pc = 0x2E8274u;
            return;
        }
    }
    ctx->pc = 0x2E3C68u;
    // 0x2e3c68: 0x4abb14ce  vmsubz.yw   $vf19, $vf2, $vf27z
    ctx->pc = 0x2e3c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[27], ctx->vu0_vf[27], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3c6c: 0x58d99d9c  .word       0x58D99D9C                   # blezl       $a2, . + 4 + (-0x6264 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C6Cu;
    {
        const bool branch_taken_0x2e3c6c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3c6c) {
            ctx->pc = 0x2E3C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C6Cu;
            // 0x2e3c70: 0x5adb11cd  .word       0x5ADB11CD                   # blezl       $s6, . + 4 + (0x11CD << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3C70 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB2E0u;
            return;
        }
    }
    ctx->pc = 0x2E3C74u;
    // 0x2e3c74: 0x2b9b154e  slti        $k1, $gp, 0x154E
    ctx->pc = 0x2e3c74u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 28) < (int64_t)(int32_t)5454) ? 1 : 0);
    // 0x2e3c78: 0x8da135c  j           func_3684D70
    ctx->pc = 0x2E3C78u;
    ctx->pc = 0x2E3C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C78u;
            // 0x2e3c7c: 0x8f91f5c  j           func_3E47D70 (Delay Slot)
        // J 0x3E47D70 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3684D70u;
    {
        auto targetFn = runtime->lookupFunction(0x3684D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3C80u;
label_2e3c80:
    // 0x2e3c80: 0x6adb1945  ldl         $k1, 0x1945($s6)
    ctx->pc = 0x2e3c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 6469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
label_2e3c84:
    // 0x2e3c84: 0xa9b175e  j           func_A6C5D78
    ctx->pc = 0x2E3C84u;
    ctx->pc = 0x2E3C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C84u;
            // 0x2e3c88: 0x38da17fc  xori        $k0, $a2, 0x17FC (Delay Slot)
        SET_GPR_U64(ctx, 26, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)6140);
        ctx->in_delay_slot = false;
    ctx->pc = 0xA6C5D78u;
    {
        auto targetFn = runtime->lookupFunction(0xA6C5D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3C8Cu;
label_2e3c8c:
    // 0x2e3c8c: 0x5594e9ed  bnel        $t4, $s4, . + 4 + (-0x1613 << 2)
    ctx->pc = 0x2E3C8Cu;
    {
        const bool branch_taken_0x2e3c8c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3c8c) {
            ctx->pc = 0x2E3C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C8Cu;
            // 0x2e3c90: 0x6adb1546  ldl         $k1, 0x1546($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 5446); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE444u;
            return;
        }
    }
    ctx->pc = 0x2E3C94u;
    // 0x2e3c94: 0x38fa145c  xori        $k0, $a3, 0x145C
    ctx->pc = 0x2e3c94u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)5212);
    // 0x2e3c98: 0x58d99d9c  .word       0x58D99D9C                   # blezl       $a2, . + 4 + (-0x6264 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3C98u;
    {
        const bool branch_taken_0x2e3c98 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3c98) {
            ctx->pc = 0x2E3C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C98u;
            // 0x2e3c9c: 0x3b9b194e  xori        $k1, $gp, 0x194E (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)6478);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB30Cu;
            return;
        }
    }
    ctx->pc = 0x2E3CA0u;
    // 0x2e3ca0: 0x8fa1d5c  j           func_3E87570
    ctx->pc = 0x2E3CA0u;
    ctx->pc = 0x2E3CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CA0u;
            // 0x2e3ca4: 0x8d9115c  j           func_3644570 (Delay Slot)
        // J 0x3644570 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E87570u;
    {
        auto targetFn = runtime->lookupFunction(0x3E87570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3CA8u;
label_2e3ca8:
    // 0x2e3ca8: 0x6adb1945  ldl         $k1, 0x1945($s6)
    ctx->pc = 0x2e3ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 6469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
label_2e3cac:
    // 0x2e3cac: 0xa9b175e  j           func_A6C5D78
    ctx->pc = 0x2E3CACu;
    ctx->pc = 0x2E3CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CACu;
            // 0x2e3cb0: 0x7a5b17ce  lq          $k1, 0x17CE($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 18), 6094)));
        ctx->in_delay_slot = false;
    ctx->pc = 0xA6C5D78u;
    {
        auto targetFn = runtime->lookupFunction(0xA6C5D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3CB4u;
label_2e3cb4:
    // 0x2e3cb4: 0x5594e9ed  bnel        $t4, $s4, . + 4 + (-0x1613 << 2)
    ctx->pc = 0x2E3CB4u;
    {
        const bool branch_taken_0x2e3cb4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3cb4) {
            ctx->pc = 0x2E3CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CB4u;
            // 0x2e3cb8: 0x6adb1546  ldl         $k1, 0x1546($s6) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 22), 5446); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE46Cu;
            return;
        }
    }
    ctx->pc = 0x2E3CBCu;
    // 0x2e3cbc: 0xca3b1344  lwc2        $27, 0x1344($s1)
    ctx->pc = 0x2e3cbcu;
    // Unhandled opcode: 0x32
    // 0x2e3cc0: 0x1bbb15ce  .word       0x1BBB15CE                   # blez        $sp, . + 4 + (0x15CE << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3CC0u;
    {
        const bool branch_taken_0x2e3cc0 = (GPR_S32(ctx, 29) <= 0);
        ctx->pc = 0x2E3CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CC0u;
            // 0x2e3cc4: 0x58f9959c  .word       0x58F9959C                   # blezl       $a3, . + 4 + (-0x6A64 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3CC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cc0) {
            ctx->pc = 0x2E93FCu;
            return;
        }
    }
    ctx->pc = 0x2E3CC8u;
    // 0x2e3cc8: 0x58d8959c  .word       0x58D8959C                   # blezl       $a2, . + 4 + (-0x6A64 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3CC8u;
    {
        const bool branch_taken_0x2e3cc8 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3cc8) {
            ctx->pc = 0x2E3CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CC8u;
            // 0x2e3ccc: 0xc484efce  lwc1        $f4, -0x1032($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963150)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C933Cu;
            return;
        }
    }
    ctx->pc = 0x2E3CD0u;
    // 0x2e3cd0: 0x3b9b174e  xori        $k1, $gp, 0x174E
    ctx->pc = 0x2e3cd0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)5966);
    // 0x2e3cd4: 0xc6df9d6c  lwc1        $f31, -0x6294($s6)
    ctx->pc = 0x2e3cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294942060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2e3cd8: 0xc0b8230  jal         func_2E08C0
    ctx->pc = 0x2E3CD8u;
    SET_GPR_U32(ctx, 31, 0x2E3CE0u);
    ctx->pc = 0x2E3CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CD8u;
            // 0x2e3cdc: 0x58ff1f9c  .word       0x58FF1F9C                   # blezl       $a3, . + 4 + (0x1F9C << 2) # 001F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3CDC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E08C0u;
    if (runtime->hasFunction(0x2E08C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E08C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CE0u; }
        if (ctx->pc != 0x2E3CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E08C0_0x2e08c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CE0u; }
        if (ctx->pc != 0x2E3CE0u) { return; }
    }
    ctx->pc = 0x2E3CE0u;
label_2e3ce0:
    // 0x2e3ce0: 0x6a9b191c  ldl         $k1, 0x191C($s4)
    ctx->pc = 0x2e3ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 6428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
    // 0x2e3ce4: 0x68ab104e  ldl         $t3, 0x104E($a1)
    ctx->pc = 0x2e3ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4174); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2e3ce8: 0x594ecbe  .word       0x0594ECBE                   # INVALID     $t4, $s4, -0x1342 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2e3ce8u;
    // Unhandled REGIMM instruction: 0x14
    // 0x2e3cec: 0x5bdb1d3d  .word       0x5BDB1D3D                   # blezl       $fp, . + 4 + (0x1D3D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3CECu;
    {
        const bool branch_taken_0x2e3cec = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2e3cec) {
            ctx->pc = 0x2E3CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CECu;
            // 0x2e3cf0: 0x68ab104e  ldl         $t3, 0x104E($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4174); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1E4u;
            return;
        }
    }
    ctx->pc = 0x2E3CF4u;
    // 0x2e3cf4: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3CF4u;
    {
        const bool branch_taken_0x2e3cf4 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3cf4) {
            ctx->pc = 0x2E3CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CF4u;
            // 0x2e3cf8: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB228u;
            return;
        }
    }
    ctx->pc = 0x2E3CFCu;
    // 0x2e3cfc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e3cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e3d00: 0x2484e2d0  addiu       $a0, $a0, -0x1D30
    ctx->pc = 0x2e3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959824));
    // 0x2e3d04: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x2e3d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x2e3d08: 0x58f81b9c  .word       0x58F81B9C                   # blezl       $a3, . + 4 + (0x1B9C << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3D08u;
    {
        const bool branch_taken_0x2e3d08 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3d08) {
            ctx->pc = 0x2E3D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D08u;
            // 0x2e3d0c: 0x2a9b1d0e  slti        $k1, $s4, 0x1D0E (Delay Slot)
        SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7438) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAB7Cu;
            return;
        }
    }
    ctx->pc = 0x2E3D10u;
    // 0x2e3d10: 0xc0b8104  jal         func_2E0410
    ctx->pc = 0x2E3D10u;
    SET_GPR_U32(ctx, 31, 0x2E3D18u);
    ctx->pc = 0x2E3D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D10u;
            // 0x2e3d14: 0x594ecbe  .word       0x0594ECBE                   # INVALID     $t4, $s4, -0x1342 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x14
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0410u;
    if (runtime->hasFunction(0x2E0410u)) {
        auto targetFn = runtime->lookupFunction(0x2E0410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D18u; }
        if (ctx->pc != 0x2E3D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0410_0x2e0410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D18u; }
        if (ctx->pc != 0x2E3D18u) { return; }
    }
    ctx->pc = 0x2E3D18u;
label_2e3d18:
    // 0x2e3d18: 0x5a9b198c  .word       0x5A9B198C                   # blezl       $s4, . + 4 + (0x198C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3D18u;
    {
        const bool branch_taken_0x2e3d18 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e3d18) {
            ctx->pc = 0x2E3D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D18u;
            // 0x2e3d1c: 0x58f91f9c  .word       0x58F91F9C                   # blezl       $a3, . + 4 + (0x1F9C << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3D1C - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA34Cu;
            return;
        }
    }
    ctx->pc = 0x2E3D20u;
    // 0x2e3d20: 0xfa3b1344  sqc2        $vf27, 0x1344($s1)
    ctx->pc = 0x2e3d20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4932), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x2e3d24: 0x58f99b9c  .word       0x58F99B9C                   # blezl       $a3, . + 4 + (-0x6464 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3D24u;
    {
        const bool branch_taken_0x2e3d24 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3d24) {
            ctx->pc = 0x2E3D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D24u;
            // 0x2e3d28: 0x39ab114e  xori        $t3, $t5, 0x114E (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4430);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB98u;
            return;
        }
    }
    ctx->pc = 0x2E3D2Cu;
    // 0x2e3d2c: 0xf584e9ce  sdc1        $f4, -0x1632($t4)
    ctx->pc = 0x2e3d2cu;
    // Unhandled opcode: 0x3D
    // 0x2e3d30: 0x28ab11ce  slti        $t3, $a1, 0x11CE
    ctx->pc = 0x2e3d30u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4558) ? 1 : 0);
    // 0x2e3d34: 0xf6de1d6c  sdc1        $f30, 0x1D6C($s6)
    ctx->pc = 0x2e3d34u;
    // Unhandled opcode: 0x3D
    // 0x2e3d38: 0x58df159c  .word       0x58DF159C                   # blezl       $a2, . + 4 + (0x159C << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3D38u;
    {
        const bool branch_taken_0x2e3d38 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3d38) {
            ctx->pc = 0x2E3D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D38u;
            // 0x2e3d3c: 0xc0b81d4  jal         func_2E0750 (Delay Slot)
        // JAL 0x2E0750 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E93ACu;
            return;
        }
    }
    ctx->pc = 0x2E3D40u;
    // 0x2e3d40: 0xc9ab11ce  lwc2        $11, 0x11CE($t5)
    ctx->pc = 0x2e3d40u;
    // Unhandled opcode: 0x32
label_2e3d44:
    // 0x2e3d44: 0x7a5b194e  lq          $k1, 0x194E($s2)
    ctx->pc = 0x2e3d44u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 18), 6478)));
    // 0x2e3d48: 0x7ad19dec  lq          $s1, -0x6214($s6)
    ctx->pc = 0x2e3d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 22), 4294942188)));
    // 0x2e3d4c: 0xe2b1144  jal         func_8AC4510
    ctx->pc = 0x2E3D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D54u);
    ctx->pc = 0x2E3D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D4Cu;
            // 0x2e3d50: 0x58db175d  .word       0x58DB175D                   # blezl       $a2, . + 4 + (0x175D << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3D50 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x8AC4510u;
    {
        auto targetFn = runtime->lookupFunction(0x8AC4510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D54u; }
        if (ctx->pc != 0x2E3D54u) { return; }
    }
    ctx->pc = 0x2E3D54u;
label_2e3d54:
    // 0x2e3d54: 0x58d31d9c  .word       0x58D31D9C                   # blezl       $a2, . + 4 + (0x1D9C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3D54u;
    {
        const bool branch_taken_0x2e3d54 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3d54) {
            ctx->pc = 0x2E3D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D54u;
            // 0x2e3d58: 0x451ffdbf  .word       0x451FFDBF                   # INVALID     $t0, $ra, -0x241 # 00000000 <InstrIdType: CPU_COP1_BC1> (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3C8u;
            return;
        }
    }
    ctx->pc = 0x2E3D5Cu;
    // 0x2e3d5c: 0x4594efbf  .word       0x4594EFBF                   # INVALID     $t4, $s4, -0x1041 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2e3d5cu;
    // Unhandled FPU instruction: format 0xC, function 0x3F
    // 0x2e3d60: 0x4a901548  vmaddx.y    $vf21, $vf2, $vf16x
    ctx->pc = 0x2e3d60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3d64: 0x4a131c4f  vmsubw      $vf17, $vf3, $vf19w
    ctx->pc = 0x2e3d64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3d68: 0x421f2d4f  .word       0x421F2D4F                   # INVALID     $s0, $ra, 0x2D4F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2e3d68u;
    // Unhandled COP0 CO-OP: 0xF
    // 0x2e3d6c: 0x4a919548  vmaddx.y    $vf21, $vf18, $vf17x
    ctx->pc = 0x2e3d6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3d70: 0x4a1fed4f  vmsubw      $vf21, $vf29, $vf31w
    ctx->pc = 0x2e3d70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3d74: 0x4a911548  vmaddx.y    $vf21, $vf2, $vf17x
    ctx->pc = 0x2e3d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3d78: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E3D78u;
    SET_GPR_U32(ctx, 31, 0x2E3D80u);
    ctx->pc = 0x2E3D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D78u;
            // 0x2e3d7c: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3D7C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D80u; }
        if (ctx->pc != 0x2E3D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D80u; }
        if (ctx->pc != 0x2E3D80u) { return; }
    }
    ctx->pc = 0x2E3D80u;
label_2e3d80:
    // 0x2e3d80: 0x7a9b1548  lq          $k1, 0x1548($s4)
    ctx->pc = 0x2e3d80u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 5448)));
    // 0x2e3d84: 0x58bb1548  .word       0x58BB1548                   # blezl       $a1, . + 4 + (0x1548 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3D84u;
    {
        const bool branch_taken_0x2e3d84 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2e3d84) {
            ctx->pc = 0x2E3D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D84u;
            // 0x2e3d88: 0x7f2b1184  sq          $t3, 0x1184($t9) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 25), 4484), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E92A8u;
            return;
        }
    }
    ctx->pc = 0x2E3D8Cu;
    // 0x2e3d8c: 0xe2b1144  jal         func_8AC4510
    ctx->pc = 0x2E3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D94u);
    ctx->pc = 0x2E3D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D8Cu;
            // 0x2e3d90: 0x58d9185c  .word       0x58D9185C                   # blezl       $a2, . + 4 + (0x185C << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3D90 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x8AC4510u;
    {
        auto targetFn = runtime->lookupFunction(0x8AC4510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D94u; }
        if (ctx->pc != 0x2E3D94u) { return; }
    }
    ctx->pc = 0x2E3D94u;
label_2e3d94:
    // 0x2e3d94: 0x5abb1c5e  .word       0x5ABB1C5E                   # blezl       $s5, . + 4 + (0x1C5E << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3D94u;
    {
        const bool branch_taken_0x2e3d94 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2e3d94) {
            ctx->pc = 0x2E3D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D94u;
            // 0x2e3d98: 0x8fa9dfc  j           func_3EA77F0 (Delay Slot)
        // J 0x3EA77F0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF10u;
            return;
        }
    }
    ctx->pc = 0x2E3D9Cu;
    // 0x2e3d9c: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_2e3da0:
    if (ctx->pc == 0x2E3DA0u) {
        ctx->pc = 0x2E3DA0u;
            // 0x2e3da0: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3DA0 - Handled by branch logic
        ctx->pc = 0x2E3DA4u;
        goto label_fallthrough_0x2e3d9c;
    }
    ctx->pc = 0x2E3D9Cu;
    {
        const bool branch_taken_0x2e3d9c = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3d9c) {
            ctx->pc = 0x2E3DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D9Cu;
            // 0x2e3da0: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3DA0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB2D0u;
            return;
        }
    }
label_fallthrough_0x2e3d9c:
    ctx->pc = 0x2E3DA4u;
    // 0x2e3da4: 0x3abb1c78  xori        $k1, $s5, 0x1C78
    ctx->pc = 0x2e3da4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)7288);
    // 0x2e3da8: 0xabb1c68  j           func_AEC71A0
    ctx->pc = 0x2E3DA8u;
    ctx->pc = 0x2E3DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DA8u;
            // 0x2e3dac: 0x59b11d28  .word       0x59B11D28                   # blezl       $t5, . + 4 + (0x1D28 << 2) # 00110000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3DAC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xAEC71A0u;
    {
        auto targetFn = runtime->lookupFunction(0xAEC71A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3DB0u;
label_2e3db0:
    // 0x2e3db0: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3DB0u;
    {
        const bool branch_taken_0x2e3db0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2e3db0) {
            ctx->pc = 0x2E3DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DB0u;
            // 0x2e3db4: 0x7a9b9d48  lq          $k1, -0x62B8($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1D4u;
            return;
        }
    }
    ctx->pc = 0x2E3DB8u;
    // 0x2e3db8: 0x5a8b1d18  .word       0x5A8B1D18                   # blezl       $s4, . + 4 + (0x1D18 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3DB8u;
    {
        const bool branch_taken_0x2e3db8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e3db8) {
            ctx->pc = 0x2E3DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DB8u;
            // 0x2e3dbc: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3DBC - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB21Cu;
            return;
        }
    }
    ctx->pc = 0x2E3DC0u;
    // 0x2e3dc0: 0x1abb1c58  .word       0x1ABB1C58                   # blez        $s5, . + 4 + (0x1C58 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3DC0u;
    {
        const bool branch_taken_0x2e3dc0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E3DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DC0u;
            // 0x2e3dc4: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3DC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3dc0) {
            ctx->pc = 0x2EAF24u;
            return;
        }
    }
    ctx->pc = 0x2E3DC8u;
    // 0x2e3dc8: 0x7a9b9d48  lq          $k1, -0x62B8($s4)
    ctx->pc = 0x2e3dc8u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
    // 0x2e3dcc: 0x48da181c  .word       0x48DA181C                   # ctc2.ni     $k0, $vi3 # 0000001C <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2e3dccu;
    ctx->vu0_r = _mm_castsi128_ps(GPR_VEC(ctx, 26));
    // 0x2e3dd0: 0x5494ebdd  bnel        $a0, $s4, . + 4 + (-0x1423 << 2)
    ctx->pc = 0x2E3DD0u;
    {
        const bool branch_taken_0x2e3dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3dd0) {
            ctx->pc = 0x2E3DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DD0u;
            // 0x2e3dd4: 0x7adb1546  lq          $k1, 0x1546($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 22), 5446)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DED48u;
            return;
        }
    }
    ctx->pc = 0x2E3DD8u;
    // 0x2e3dd8: 0x451ffdbf  .word       0x451FFDBF                   # INVALID     $t0, $ra, -0x241 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2e3dd8u;
    // FPU branch instruction - handled elsewhere
    // 0x2e3ddc: 0x4594efbf  .word       0x4594EFBF                   # INVALID     $t4, $s4, -0x1041 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2e3ddcu;
    // Unhandled FPU instruction: format 0xC, function 0x3F
    // 0x2e3de0: 0x4a901548  vmaddx.y    $vf21, $vf2, $vf16x
    ctx->pc = 0x2e3de0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3de4: 0x58e2119c  .word       0x58E2119C                   # blezl       $a3, . + 4 + (0x119C << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3DE4u;
    {
        const bool branch_taken_0x2e3de4 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e3de4) {
            ctx->pc = 0x2E3DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DE4u;
            // 0x2e3de8: 0x421f2d4f  .word       0x421F2D4F                   # INVALID     $s0, $ra, 0x2D4F # 00000000 <InstrIdType: CPU_COP0_TLB> (Delay Slot)
        // Unhandled COP0 CO-OP: 0xF
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8458u;
            return;
        }
    }
    ctx->pc = 0x2E3DECu;
    // 0x2e3dec: 0x4a919548  vmaddx.y    $vf21, $vf18, $vf17x
    ctx->pc = 0x2e3decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3df0: 0x58d31d9c  .word       0x58D31D9C                   # blezl       $a2, . + 4 + (0x1D9C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3DF0u;
    {
        const bool branch_taken_0x2e3df0 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3df0) {
            ctx->pc = 0x2E3DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DF0u;
            // 0x2e3df4: 0x4a1fed4f  vmsubw      $vf21, $vf29, $vf31w (Delay Slot)
        { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB464u;
            return;
        }
    }
    ctx->pc = 0x2E3DF8u;
    // 0x2e3df8: 0x4a911548  vmaddx.y    $vf21, $vf2, $vf17x
    ctx->pc = 0x2e3df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3dfc: 0x4a131c4f  vmsubw      $vf17, $vf3, $vf19w
    ctx->pc = 0x2e3dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3e00: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E3E00u;
    SET_GPR_U32(ctx, 31, 0x2E3E08u);
    ctx->pc = 0x2E3E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E00u;
            // 0x2e3e04: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E04 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E08u; }
        if (ctx->pc != 0x2E3E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E08u; }
        if (ctx->pc != 0x2E3E08u) { return; }
    }
    ctx->pc = 0x2E3E08u;
label_2e3e08:
    // 0x2e3e08: 0x7a9b1548  lq          $k1, 0x1548($s4)
    ctx->pc = 0x2e3e08u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 5448)));
    // 0x2e3e0c: 0x58bb1548  .word       0x58BB1548                   # blezl       $a1, . + 4 + (0x1548 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E0Cu;
    {
        const bool branch_taken_0x2e3e0c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2e3e0c) {
            ctx->pc = 0x2E3E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E0Cu;
            // 0x2e3e10: 0x58f9185c  .word       0x58F9185C                   # blezl       $a3, . + 4 + (0x185C << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E10 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9330u;
            return;
        }
    }
    ctx->pc = 0x2E3E14u;
    // 0x2e3e14: 0x5abb1c5e  .word       0x5ABB1C5E                   # blezl       $s5, . + 4 + (0x1C5E << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E14u;
    {
        const bool branch_taken_0x2e3e14 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2e3e14) {
            ctx->pc = 0x2E3E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E14u;
            // 0x2e3e18: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E18 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAF90u;
            return;
        }
    }
    ctx->pc = 0x2E3E1Cu;
    // 0x2e3e1c: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E1Cu;
    {
        const bool branch_taken_0x2e3e1c = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3e1c) {
            ctx->pc = 0x2E3E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E1Cu;
            // 0x2e3e20: 0x3abb1c78  xori        $k1, $s5, 0x1C78 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)7288);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB350u;
            return;
        }
    }
    ctx->pc = 0x2E3E24u;
    // 0x2e3e24: 0xabb1c68  j           func_AEC71A0
    ctx->pc = 0x2E3E24u;
    ctx->pc = 0x2E3E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E24u;
            // 0x2e3e28: 0x59b11d28  .word       0x59B11D28                   # blezl       $t5, . + 4 + (0x1D28 << 2) # 00110000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E28 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xAEC71A0u;
    {
        auto targetFn = runtime->lookupFunction(0xAEC71A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3E2Cu;
label_2e3e2c:
    // 0x2e3e2c: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E2Cu;
    {
        const bool branch_taken_0x2e3e2c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2e3e2c) {
            ctx->pc = 0x2E3E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E2Cu;
            // 0x2e3e30: 0x7a9b9d48  lq          $k1, -0x62B8($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB250u;
            return;
        }
    }
    ctx->pc = 0x2E3E34u;
    // 0x2e3e34: 0x5a8b1d18  .word       0x5A8B1D18                   # blezl       $s4, . + 4 + (0x1D18 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E34u;
    {
        const bool branch_taken_0x2e3e34 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e3e34) {
            ctx->pc = 0x2E3E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E34u;
            // 0x2e3e38: 0x687b1d4e  ldl         $k1, 0x1D4E($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7502); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB298u;
            return;
        }
    }
    ctx->pc = 0x2E3E3Cu;
    // 0x2e3e3c: 0x1abb1c58  .word       0x1ABB1C58                   # blez        $s5, . + 4 + (0x1C58 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E3Cu;
    {
        const bool branch_taken_0x2e3e3c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E3E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E3Cu;
            // 0x2e3e40: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E40 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e3c) {
            ctx->pc = 0x2EAFA0u;
            return;
        }
    }
    ctx->pc = 0x2E3E44u;
    // 0x2e3e44: 0x7a9b9d48  lq          $k1, -0x62B8($s4)
    ctx->pc = 0x2e3e44u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
    // 0x2e3e48: 0x48da181c  .word       0x48DA181C                   # ctc2.ni     $k0, $vi3 # 0000001C <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2e3e48u;
    ctx->vu0_r = _mm_castsi128_ps(GPR_VEC(ctx, 26));
    // 0x2e3e4c: 0x5494eb8d  bnel        $a0, $s4, . + 4 + (-0x1473 << 2)
    ctx->pc = 0x2E3E4Cu;
    {
        const bool branch_taken_0x2e3e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3e4c) {
            ctx->pc = 0x2E3E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E4Cu;
            // 0x2e3e50: 0x7adb1546  lq          $k1, 0x1546($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 22), 5446)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEC84u;
            return;
        }
    }
    ctx->pc = 0x2E3E54u;
    // 0x2e3e54: 0x451ffdbf  .word       0x451FFDBF                   # INVALID     $t0, $ra, -0x241 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2e3e54u;
    // FPU branch instruction - handled elsewhere
    // 0x2e3e58: 0x4594efbf  .word       0x4594EFBF                   # INVALID     $t4, $s4, -0x1041 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2e3e58u;
    // Unhandled FPU instruction: format 0xC, function 0x3F
    // 0x2e3e5c: 0x4a901548  vmaddx.y    $vf21, $vf2, $vf16x
    ctx->pc = 0x2e3e5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3e60: 0x58d31d9c  .word       0x58D31D9C                   # blezl       $a2, . + 4 + (0x1D9C << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E60u;
    {
        const bool branch_taken_0x2e3e60 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2e3e60) {
            ctx->pc = 0x2E3E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E60u;
            // 0x2e3e64: 0x421f2d4f  .word       0x421F2D4F                   # INVALID     $s0, $ra, 0x2D4F # 00000000 <InstrIdType: CPU_COP0_TLB> (Delay Slot)
        // Unhandled COP0 CO-OP: 0xF
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB4D4u;
            return;
        }
    }
    ctx->pc = 0x2E3E68u;
    // 0x2e3e68: 0x4a919548  vmaddx.y    $vf21, $vf18, $vf17x
    ctx->pc = 0x2e3e68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3e6c: 0x4a131c4f  vmsubw      $vf17, $vf3, $vf19w
    ctx->pc = 0x2e3e6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3e70: 0x4a1fed4f  vmsubw      $vf21, $vf29, $vf31w
    ctx->pc = 0x2e3e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3e74: 0x4a911548  vmaddx.y    $vf21, $vf2, $vf17x
    ctx->pc = 0x2e3e74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3e78: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E3E78u;
    SET_GPR_U32(ctx, 31, 0x2E3E80u);
    ctx->pc = 0x2E3E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E78u;
            // 0x2e3e7c: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E7C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E80u; }
        if (ctx->pc != 0x2E3E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E80u; }
        if (ctx->pc != 0x2E3E80u) { return; }
    }
    ctx->pc = 0x2E3E80u;
label_2e3e80:
    // 0x2e3e80: 0x7a9b1548  lq          $k1, 0x1548($s4)
    ctx->pc = 0x2e3e80u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 5448)));
    // 0x2e3e84: 0x58bb1548  .word       0x58BB1548                   # blezl       $a1, . + 4 + (0x1548 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E84u;
    {
        const bool branch_taken_0x2e3e84 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2e3e84) {
            ctx->pc = 0x2E3E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E84u;
            // 0x2e3e88: 0x58f91a5c  .word       0x58F91A5C                   # blezl       $a3, . + 4 + (0x1A5C << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E88 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E93A8u;
            return;
        }
    }
    ctx->pc = 0x2E3E8Cu;
    // 0x2e3e8c: 0x5abb1c5e  .word       0x5ABB1C5E                   # blezl       $s5, . + 4 + (0x1C5E << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E8Cu;
    {
        const bool branch_taken_0x2e3e8c = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2e3e8c) {
            ctx->pc = 0x2E3E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E8Cu;
            // 0x2e3e90: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3E90 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB008u;
            return;
        }
    }
    ctx->pc = 0x2E3E94u;
    // 0x2e3e94: 0x5adb1d4c  .word       0x5ADB1D4C                   # blezl       $s6, . + 4 + (0x1D4C << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3E94u;
    {
        const bool branch_taken_0x2e3e94 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2e3e94) {
            ctx->pc = 0x2E3E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E94u;
            // 0x2e3e98: 0x3abb1c78  xori        $k1, $s5, 0x1C78 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)7288);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3C8u;
            return;
        }
    }
    ctx->pc = 0x2E3E9Cu;
    // 0x2e3e9c: 0xabb1c68  j           func_AEC71A0
    ctx->pc = 0x2E3E9Cu;
    ctx->pc = 0x2E3EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E9Cu;
            // 0x2e3ea0: 0x59b11d28  .word       0x59B11D28                   # blezl       $t5, . + 4 + (0x1D28 << 2) # 00110000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3EA0 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xAEC71A0u;
    {
        auto targetFn = runtime->lookupFunction(0xAEC71A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E3EA4u;
label_2e3ea4:
    // 0x2e3ea4: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3EA4u;
    {
        const bool branch_taken_0x2e3ea4 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2e3ea4) {
            ctx->pc = 0x2E3EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EA4u;
            // 0x2e3ea8: 0x7a9b9d48  lq          $k1, -0x62B8($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB2C8u;
            return;
        }
    }
    ctx->pc = 0x2E3EACu;
    // 0x2e3eac: 0x5a8b1d18  .word       0x5A8B1D18                   # blezl       $s4, . + 4 + (0x1D18 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3EACu;
    {
        const bool branch_taken_0x2e3eac = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e3eac) {
            ctx->pc = 0x2E3EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EACu;
            // 0x2e3eb0: 0x683b1d4e  ldl         $k1, 0x1D4E($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 7502); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 27, (GPR_U64(ctx, 27) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB310u;
            return;
        }
    }
    ctx->pc = 0x2E3EB4u;
    // 0x2e3eb4: 0x1abb1c58  .word       0x1ABB1C58                   # blez        $s5, . + 4 + (0x1C58 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E3EB4u;
    {
        const bool branch_taken_0x2e3eb4 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2E3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EB4u;
            // 0x2e3eb8: 0x5cbb1d08  .word       0x5CBB1D08                   # bgtzl       $a1, . + 4 + (0x1D08 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E3EB8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3eb4) {
            ctx->pc = 0x2EB018u;
            return;
        }
    }
    ctx->pc = 0x2E3EBCu;
    // 0x2e3ebc: 0x7a9b9d48  lq          $k1, -0x62B8($s4)
    ctx->pc = 0x2e3ebcu;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 20), 4294942024)));
    // 0x2e3ec0: 0x48da181c  .word       0x48DA181C                   # ctc2.ni     $k0, $vi3 # 0000001C <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2e3ec0u;
    ctx->vu0_r = _mm_castsi128_ps(GPR_VEC(ctx, 26));
    // 0x2e3ec4: 0x5494eb8d  bnel        $a0, $s4, . + 4 + (-0x1473 << 2)
    ctx->pc = 0x2E3EC4u;
    {
        const bool branch_taken_0x2e3ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2e3ec4) {
            ctx->pc = 0x2E3EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EC4u;
            // 0x2e3ec8: 0x7adb1546  lq          $k1, 0x1546($s6) (Delay Slot)
        SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 22), 5446)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DECFCu;
            return;
        }
    }
    ctx->pc = 0x2E3ECCu;
    // 0x2e3ecc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3ECCu;
    {
        const bool branch_taken_0x2e3ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ecc) {
            ctx->pc = 0x2E3EFCu;
            goto label_2e3efc;
        }
    }
    ctx->pc = 0x2E3ED4u;
    // 0x2e3ed4: 0xfe5244c2  sd          $s2, 0x44C2($s2)
    ctx->pc = 0x2e3ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 17602), GPR_U64(ctx, 18));
    // 0x2e3ed8: 0xa2c26611  sb          $v0, 0x6611($s6)
    ctx->pc = 0x2e3ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 26129), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3edc: 0x87bfffb3  lh          $ra, -0x4D($sp)
    ctx->pc = 0x2e3edcu;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4294967219)));
    // 0x2e3ee0: 0xde261fff  ld          $a2, 0x1FFF($s1)
    ctx->pc = 0x2e3ee0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 8191)));
    // 0x2e3ee4: 0xc7dca5b  jal         func_1F7296C
    ctx->pc = 0x2E3EE4u;
    SET_GPR_U32(ctx, 31, 0x2E3EECu);
    ctx->pc = 0x2E3EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EE4u;
            // 0x2e3ee8: 0x849313b3  lh          $s3, 0x13B3($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5043)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7296Cu;
    {
        auto targetFn = runtime->lookupFunction(0x1F7296Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3EECu; }
        if (ctx->pc != 0x2E3EECu) { return; }
    }
    ctx->pc = 0x2E3EECu;
label_2e3eec:
    // 0x2e3eec: 0x6ec9d55f  ldr         $t1, -0x2AA1($s6)
    ctx->pc = 0x2e3eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4294956383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2e3ef0: 0xcb188a51  lwc2        $24, -0x75AF($t8)
    ctx->pc = 0x2e3ef0u;
    // Unhandled opcode: 0x32
    // 0x2e3ef4: 0x6ec9d13b  ldr         $t1, -0x2EC5($s6)
    ctx->pc = 0x2e3ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4294955323); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2e3ef8: 0x0  nop
    ctx->pc = 0x2e3ef8u;
    // NOP
label_2e3efc:
    // 0x2e3efc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e3f00: 0x24423eec  addiu       $v0, $v0, 0x3EEC
    ctx->pc = 0x2e3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16108));
    // 0x2e3f04: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e3f08: 0x24843ecc  addiu       $a0, $a0, 0x3ECC
    ctx->pc = 0x2e3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16076));
    // 0x2e3f0c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e3f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e3f10: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e3f14: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E3F14u;
    SET_GPR_U32(ctx, 31, 0x2E3F1Cu);
    ctx->pc = 0x2E3F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F14u;
            // 0x2e3f18: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F1Cu; }
        if (ctx->pc != 0x2E3F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F1Cu; }
        if (ctx->pc != 0x2E3F1Cu) { return; }
    }
    ctx->pc = 0x2E3F1Cu;
label_2e3f1c:
    // 0x2e3f1c: 0x8fdd0058  lw          $sp, 0x58($fp)
    ctx->pc = 0x2e3f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x2e3f20: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2e3f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f24: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x2e3f24u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f28: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2e3f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3f2c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2e3f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e3f30: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2e3f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e3f34: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2e3f34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e3f38: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2e3f38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e3f3c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2e3f3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3f40: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2e3f40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e3f44: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x2e3f44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2e3f48: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2e3f48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e3f4c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2e3f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e3f50: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2e3f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e3f54: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e3f58: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e3f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F5Cu;
            // 0x2e3f60: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3F64u;
    // 0x2e3f64: 0x0  nop
    ctx->pc = 0x2e3f64u;
    // NOP
label_2e3f68:
    // 0x2e3f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e3f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3f7c: 0xc09ec24  jal         func_27B090
    ctx->pc = 0x2E3F7Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F84u);
    ctx->pc = 0x2E3F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F7Cu;
            // 0x2e3f80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B090u;
    if (runtime->hasFunction(0x27B090u)) {
        auto targetFn = runtime->lookupFunction(0x27B090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F84u; }
        if (ctx->pc != 0x2E3F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B090_0x27b090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F84u; }
        if (ctx->pc != 0x2E3F84u) { return; }
    }
    ctx->pc = 0x2E3F84u;
label_2e3f84:
    // 0x2e3f84: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3F84u;
    {
        const bool branch_taken_0x2e3f84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E3F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F84u;
            // 0x2e3f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f84) {
            ctx->pc = 0x2E3FB4u;
            goto label_2e3fb4;
        }
    }
    ctx->pc = 0x2E3F8Cu;
    // 0x2e3f8c: 0xc0b921c  jal         func_2E4870
    ctx->pc = 0x2E3F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F94u);
    ctx->pc = 0x2E4870u;
    if (runtime->hasFunction(0x2E4870u)) {
        auto targetFn = runtime->lookupFunction(0x2E4870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F94u; }
        if (ctx->pc != 0x2E3F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4870_0x2e4870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F94u; }
        if (ctx->pc != 0x2E3F94u) { return; }
    }
    ctx->pc = 0x2E3F94u;
label_2e3f94:
    // 0x2e3f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3f98: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3F98u;
    {
        const bool branch_taken_0x2e3f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E3F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F98u;
            // 0x2e3f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f98) {
            ctx->pc = 0x2E3FACu;
            goto label_2e3fac;
        }
    }
    ctx->pc = 0x2E3FA0u;
    // 0x2e3fa0: 0xc045946  jal         func_116518
    ctx->pc = 0x2E3FA0u;
    SET_GPR_U32(ctx, 31, 0x2E3FA8u);
    ctx->pc = 0x116518u;
    if (runtime->hasFunction(0x116518u)) {
        auto targetFn = runtime->lookupFunction(0x116518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FA8u; }
        if (ctx->pc != 0x2E3FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116518_0x116518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FA8u; }
        if (ctx->pc != 0x2E3FA8u) { return; }
    }
    ctx->pc = 0x2E3FA8u;
label_2e3fa8:
    // 0x2e3fa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e3fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3fac:
    // 0x2e3fac: 0xc09ecdc  jal         func_27B370
    ctx->pc = 0x2E3FACu;
    SET_GPR_U32(ctx, 31, 0x2E3FB4u);
    ctx->pc = 0x27B370u;
    if (runtime->hasFunction(0x27B370u)) {
        auto targetFn = runtime->lookupFunction(0x27B370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FB4u; }
        if (ctx->pc != 0x2E3FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B370_0x27b370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FB4u; }
        if (ctx->pc != 0x2E3FB4u) { return; }
    }
    ctx->pc = 0x2E3FB4u;
label_2e3fb4:
    // 0x2e3fb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e3fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e3fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FC4u;
            // 0x2e3fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3FCCu;
    // 0x2e3fcc: 0x0  nop
    ctx->pc = 0x2e3fccu;
    // NOP
    ctx->pc = 0x2e3fd0u;
}
