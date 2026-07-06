#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2A98
// Address: 0x2e2a98 - 0x2e2dd0
void sub_002E2A98_0x2e2a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2A98_0x2e2a98");
#endif

    switch (ctx->pc) {
        case 0x2e2af4u: goto label_2e2af4;
        case 0x2e2b6cu: goto label_2e2b6c;
        case 0x2e2b90u: goto label_2e2b90;
        case 0x2e2bb8u: goto label_2e2bb8;
        case 0x2e2bd8u: goto label_2e2bd8;
        case 0x2e2c10u: goto label_2e2c10;
        case 0x2e2c88u: goto label_2e2c88;
        case 0x2e2d00u: goto label_2e2d00;
        case 0x2e2d9cu: goto label_2e2d9c;
        default: break;
    }

    ctx->pc = 0x2e2a98u;

    // 0x2e2a98: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2e2a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2e2a9c: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2e2a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2e2aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2aa4: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x2e2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x2e2aa8: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2e2aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2e2aac: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x2e2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x2e2ab0: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x2e2ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x2e2ab4: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x2e2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x2e2ab8: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x2e2ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x2e2abc: 0xe7b601a8  swc1        $f22, 0x1A8($sp)
    ctx->pc = 0x2e2abcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2e2ac0: 0xe7b501a0  swc1        $f21, 0x1A0($sp)
    ctx->pc = 0x2e2ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2e2ac4: 0xe7b40198  swc1        $f20, 0x198($sp)
    ctx->pc = 0x2e2ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2e2ac8: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e2acc: 0x24632b14  addiu       $v1, $v1, 0x2B14
    ctx->pc = 0x2e2accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11028));
    // 0x2e2ad0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2ad4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2AD4u;
    {
        const bool branch_taken_0x2e2ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ad4) {
            ctx->pc = 0x2E2AF4u;
            goto label_2e2af4;
        }
    }
    ctx->pc = 0x2E2ADCu;
    // 0x2e2adc: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2ae0: 0x24842b28  addiu       $a0, $a0, 0x2B28
    ctx->pc = 0x2e2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11048));
    // 0x2e2ae4: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e2ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e2ae8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e2ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e2aec: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2AECu;
    SET_GPR_U32(ctx, 31, 0x2E2AF4u);
    ctx->pc = 0x2E2AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2AECu;
            // 0x2e2af0: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AF4u; }
        if (ctx->pc != 0x2E2AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2AF4u; }
        if (ctx->pc != 0x2E2AF4u) { return; }
    }
    ctx->pc = 0x2E2AF4u;
label_2e2af4:
    // 0x2e2af4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E2AF4u;
    {
        const bool branch_taken_0x2e2af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2af4) {
            ctx->pc = 0x2E2B28u;
            goto label_2e2b28;
        }
    }
    ctx->pc = 0x2E2AFCu;
    // 0x2e2afc: 0xdda5370f  ld          $a1, 0x370F($t5)
    ctx->pc = 0x2e2afcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 13), 14095)));
    // 0x2e2b00: 0x8deb87fd  lw          $t3, -0x7803($t7)
    ctx->pc = 0x2e2b00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294936573)));
    // 0x2e2b04: 0x2775c3e8  addiu       $s5, $k1, -0x3C18
    ctx->pc = 0x2e2b04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 27), 4294951912));
    // 0x2e2b08: 0x857ee573  lh          $fp, -0x1A8D($t3)
    ctx->pc = 0x2e2b08u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294960499)));
    // 0x2e2b0c: 0xff8f4182  sd          $t7, 0x4182($gp)
    ctx->pc = 0x2e2b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 16770), GPR_U64(ctx, 15));
    // 0x2e2b10: 0xfd4d8932  sd          $t5, -0x76CE($t2)
    ctx->pc = 0x2e2b10u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294936882), GPR_U64(ctx, 13));
    // 0x2e2b14: 0x0  nop
    ctx->pc = 0x2e2b14u;
    // NOP
    // 0x2e2b18: 0xd734522b  ldc1        $f20, 0x522B($t9)
    ctx->pc = 0x2e2b18u;
    // Unhandled opcode: 0x35
    // 0x2e2b1c: 0xca15fc78  lwc2        $21, -0x388($s0)
    ctx->pc = 0x2e2b1cu;
    // Unhandled opcode: 0x32
    // 0x2e2b20: 0xd734500f  ldc1        $f20, 0x500F($t9)
    ctx->pc = 0x2e2b20u;
    // Unhandled opcode: 0x35
    // 0x2e2b24: 0x0  nop
    ctx->pc = 0x2e2b24u;
    // NOP
label_2e2b28:
    // 0x2e2b28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e2b2c: 0x2446e228  addiu       $a2, $v0, -0x1DD8
    ctx->pc = 0x2e2b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959656));
    // 0x2e2b30: 0x3463ec8c  ori         $v1, $v1, 0xEC8C
    ctx->pc = 0x2e2b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60556);
    // 0x2e2b34: 0xa7f7b44a  sh          $s7, -0x4BB6($ra)
    ctx->pc = 0x2e2b34u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 4294947914), (uint16_t)GPR_U32(ctx, 23));
    // 0x2e2b38: 0xa7ebd6cc  sh          $t3, -0x2934($ra)
    ctx->pc = 0x2e2b38u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 4294956748), (uint16_t)GPR_U32(ctx, 11));
    // 0x2e2b3c: 0xa6f3a6cc  sh          $s3, -0x5934($s7)
    ctx->pc = 0x2e2b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294944460), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2b40: 0x6fe395dc  ldr         $v1, -0x6A24($ra)
    ctx->pc = 0x2e2b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294940124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e2b44: 0xb5e3e6dc  sdr         $v1, -0x1924($t7)
    ctx->pc = 0x2e2b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294960860); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2b48: 0x31e3e50d  andi        $v1, $t7, 0xE50D
    ctx->pc = 0x2e2b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)58637);
    // 0x2e2b4c: 0x2d9c1421  sltiu       $gp, $t4, 0x1421
    ctx->pc = 0x2e2b4cu;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)5153) ? 1 : 0);
    // 0x2e2b50: 0x77e3f5dc  .word       0x77E3F5DC                   # INVALID     $ra, $v1, -0xA24 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2b50u;
    // Unhandled opcode: 0x1D
    // 0x2e2b54: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e2b58: 0xa6f3a44a  sh          $s3, -0x5BB6($s7)
    ctx->pc = 0x2e2b58u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294943818), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2b5c: 0x24a5e220  addiu       $a1, $a1, -0x1DE0
    ctx->pc = 0x2e2b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959648));
    // 0x2e2b60: 0xa6fba44a  sh          $k1, -0x5BB6($s7)
    ctx->pc = 0x2e2b60u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294943818), (uint16_t)GPR_U32(ctx, 27));
    // 0x2e2b64: 0xc0b8126  jal         func_2E0498
    ctx->pc = 0x2E2B64u;
    SET_GPR_U32(ctx, 31, 0x2E2B6Cu);
    ctx->pc = 0x2E2B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B64u;
            // 0x2e2b68: 0x35e3b7df  ori         $v1, $t7, 0xB7DF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)47071);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (runtime->hasFunction(0x2E0498u)) {
        auto targetFn = runtime->lookupFunction(0x2E0498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B6Cu; }
        if (ctx->pc != 0x2E2B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0498_0x2e0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B6Cu; }
        if (ctx->pc != 0x2E2B6Cu) { return; }
    }
    ctx->pc = 0x2E2B6Cu;
label_2e2b6c:
    // 0x2e2b6c: 0x25e395de  addiu       $v1, $t7, -0x6A22
    ctx->pc = 0x2e2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940126));
    // 0x2e2b70: 0xa67be44a  sh          $k1, -0x1BB6($s3)
    ctx->pc = 0x2e2b70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294960202), (uint16_t)GPR_U32(ctx, 27));
    // 0x2e2b74: 0xb59c3ea3  sdr         $gp, 0x3EA3($t4)
    ctx->pc = 0x2e2b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16035); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 28); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2b78: 0x2fe3b450  sltiu       $v1, $ra, -0x4BB0
    ctx->pc = 0x2e2b78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 31) < (uint64_t)(int64_t)(int32_t)4294947920) ? 1 : 0);
    // 0x2e2b7c: 0x3463ee4c  ori         $v1, $v1, 0xEE4C
    ctx->pc = 0x2e2b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61004);
    // 0x2e2b80: 0xa6f3b44a  sh          $s3, -0x4BB6($s7)
    ctx->pc = 0x2e2b80u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294947914), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2b84: 0x3d9db6bc  .word       0x3D9DB6BC                   # lui         $sp, 0xB6BC # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2b84u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)46780 << 16));
    // 0x2e2b88: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E2B88u;
    SET_GPR_U32(ctx, 31, 0x2E2B90u);
    ctx->pc = 0x2E2B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2B88u;
            // 0x2e2b8c: 0xb59c3ea3  sdr         $gp, 0x3EA3($t4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16035); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 28); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (runtime->hasFunction(0x2E0E80u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B90u; }
        if (ctx->pc != 0x2E2B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E80_0x2e0e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2B90u; }
        if (ctx->pc != 0x2E2B90u) { return; }
    }
    ctx->pc = 0x2E2B90u;
label_2e2b90:
    // 0x2e2b90: 0x3d9db63c  .word       0x3D9DB63C                   # lui         $sp, 0xB63C # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)46652 << 16));
    // 0x2e2b94: 0xa7f3fc4c  sh          $s3, -0x3B4($ra)
    ctx->pc = 0x2e2b94u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 4294966348), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2b98: 0x3463ee4c  ori         $v1, $v1, 0xEE4C
    ctx->pc = 0x2e2b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61004);
    // 0x2e2b9c: 0x35e3b69c  ori         $v1, $t7, 0xB69C
    ctx->pc = 0x2e2b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)46748);
    // 0x2e2ba0: 0xa6fba44a  sh          $k1, -0x5BB6($s7)
    ctx->pc = 0x2e2ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294943818), (uint16_t)GPR_U32(ctx, 27));
    // 0x2e2ba4: 0x35e3b78d  ori         $v1, $t7, 0xB78D
    ctx->pc = 0x2e2ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)46989);
    // 0x2e2ba8: 0xa6c3f44a  sh          $v1, -0xBB6($s6)
    ctx->pc = 0x2e2ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4294964298), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2bac: 0x35e3b09c  ori         $v1, $t7, 0xB09C
    ctx->pc = 0x2e2bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)45212);
    // 0x2e2bb0: 0xc0b851a  jal         func_2E1468
    ctx->pc = 0x2E2BB0u;
    SET_GPR_U32(ctx, 31, 0x2E2BB8u);
    ctx->pc = 0x2E2BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BB0u;
            // 0x2e2bb4: 0x34636174  ori         $v1, $v1, 0x6174 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24948);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1468u;
    if (runtime->hasFunction(0x2E1468u)) {
        auto targetFn = runtime->lookupFunction(0x2E1468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BB8u; }
        if (ctx->pc != 0x2E2BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1468_0x2e1468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BB8u; }
        if (ctx->pc != 0x2E2BB8u) { return; }
    }
    ctx->pc = 0x2E2BB8u;
label_2e2bb8:
    // 0x2e2bb8: 0x25e39458  addiu       $v1, $t7, -0x6BA8
    ctx->pc = 0x2e2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939736));
    // 0x2e2bbc: 0x606365f4  daddi       $v1, $v1, 0x65F4
    ctx->pc = 0x2e2bbcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 3); int64_t imm = (int64_t)(int32_t)26100; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x2e2bc0: 0x35e3b556  ori         $v1, $t7, 0xB556
    ctx->pc = 0x2e2bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)46422);
    // 0x2e2bc4: 0xade3855e  sw          $v1, -0x7AA2($t7)
    ctx->pc = 0x2e2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294935902), GPR_U32(ctx, 3));
    // 0x2e2bc8: 0xa673e44a  sh          $s3, -0x1BB6($s3)
    ctx->pc = 0x2e2bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294960202), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2bcc: 0xa6f7f44a  sh          $s7, -0xBB6($s7)
    ctx->pc = 0x2e2bccu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294964298), (uint16_t)GPR_U32(ctx, 23));
    // 0x2e2bd0: 0xc0b8a58  jal         func_2E2960
    ctx->pc = 0x2E2BD0u;
    SET_GPR_U32(ctx, 31, 0x2E2BD8u);
    ctx->pc = 0x2E2BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BD0u;
            // 0x2e2bd4: 0x35e3b756  ori         $v1, $t7, 0xB756 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)46934);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2960u;
    if (runtime->hasFunction(0x2E2960u)) {
        auto targetFn = runtime->lookupFunction(0x2E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BD8u; }
        if (ctx->pc != 0x2E2BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2960_0x2e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2BD8u; }
        if (ctx->pc != 0x2E2BD8u) { return; }
    }
    ctx->pc = 0x2E2BD8u;
label_2e2bd8:
    // 0x2e2bd8: 0xb1e39edc  sdl         $v1, -0x6124($t7)
    ctx->pc = 0x2e2bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294942428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2bdc: 0xb9c4b4a3  swr         $a0, -0x4B5D($t6)
    ctx->pc = 0x2e2bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294948003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e2be0: 0xbd9c24a3  cache       0x1C, 0x24A3($t4)
    ctx->pc = 0x2e2be0u;
    // CACHE instruction (ignored)
    // 0x2e2be4: 0x5bbf4dc  .word       0x05BBF4DC                   # INVALID     $t5, $k1, -0xB24 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2e2be4u;
    // Unhandled REGIMM instruction: 0x1B
    // 0x2e2be8: 0xa62fe44a  sh          $t7, -0x1BB6($s1)
    ctx->pc = 0x2e2be8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294960202), (uint16_t)GPR_U32(ctx, 15));
    // 0x2e2bec: 0x39c2349c  xori        $v0, $t6, 0x349C
    ctx->pc = 0x2e2becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)13468);
    // 0x2e2bf0: 0x5b7f4dc  .word       0x05B7F4DC                   # INVALID     $t5, $s7, -0xB24 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2e2bf0u;
    // Unhandled REGIMM instruction: 0x17
    // 0x2e2bf4: 0xa7a3b44a  sh          $v1, -0x4BB6($sp)
    ctx->pc = 0x2e2bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4294947914), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2bf8: 0x39c434dc  xori        $a0, $t6, 0x34DC
    ctx->pc = 0x2e2bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)13532);
    // 0x2e2bfc: 0x5b3f4dc  bgezall     $t5, . + 4 + (-0xB24 << 2)
    ctx->pc = 0x2E2BFCu;
    {
        const bool branch_taken_0x2e2bfc = (GPR_S32(ctx, 13) >= 0);
        if (branch_taken_0x2e2bfc) {
            SET_GPR_U32(ctx, 31, 0x2E2C04u);
            ctx->pc = 0x2E2C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2BFCu;
            // 0x2e2c00: 0x39a3bd5c  xori        $v1, $t5, 0xBD5C (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)48476);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFF70u;
            return;
        }
    }
    ctx->pc = 0x2E2C04u;
    // 0x2e2c04: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
    // 0x2e2c08: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E2C08u;
    SET_GPR_U32(ctx, 31, 0x2E2C10u);
    ctx->pc = 0x2E2C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C08u;
            // 0x2e2c0c: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2C10u; }
        if (ctx->pc != 0x2E2C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2C10u; }
        if (ctx->pc != 0x2E2C10u) { return; }
    }
    ctx->pc = 0x2E2C10u;
label_2e2c10:
    // 0x2e2c10: 0x5e3f55c  bgezl       $t7, . + 4 + (-0xAA4 << 2)
    ctx->pc = 0x2E2C10u;
    {
        const bool branch_taken_0x2e2c10 = (GPR_S32(ctx, 15) >= 0);
        if (branch_taken_0x2e2c10) {
            ctx->pc = 0x2E2C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C10u;
            // 0x2e2c14: 0x4e3f44c  bgezl       $a3, . + 4 + (-0xBB4 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2DFD48 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0184u;
            return;
        }
    }
    ctx->pc = 0x2E2C18u;
    // 0x2e2c18: 0xa6f38c4c  sh          $s3, -0x73B4($s7)
    ctx->pc = 0x2e2c18u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294937676), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2c1c: 0xb4e3bc5c  sdr         $v1, -0x43A4($a3)
    ctx->pc = 0x2e2c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294949980); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2c20: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
    // 0x2e2c24: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
    // 0x2e2c28: 0x84e3bf5d  lh          $v1, -0x40A3($a3)
    ctx->pc = 0x2e2c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294950749)));
    // 0x2e2c2c: 0x4e3bedd  bgezl       $a3, . + 4 + (-0x4123 << 2)
    ctx->pc = 0x2E2C2Cu;
    {
        const bool branch_taken_0x2e2c2c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2c2c) {
            ctx->pc = 0x2E2C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C2Cu;
            // 0x2e2c30: 0x4b3b447  bgezall     $a1, . + 4 + (-0x4BB9 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2CFD50 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D27A4u;
            return;
        }
    }
    ctx->pc = 0x2E2C34u;
    // 0x2e2c34: 0x4e3b46e  bgezl       $a3, . + 4 + (-0x4B92 << 2)
    ctx->pc = 0x2E2C34u;
    {
        const bool branch_taken_0x2e2c34 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2c34) {
            ctx->pc = 0x2E2C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C34u;
            // 0x2e2c38: 0x5e7b55c  .word       0x05E7B55C                   # INVALID     $t7, $a3, -0x4AA4 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x7
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFDF0u;
            return;
        }
    }
    ctx->pc = 0x2E2C3Cu;
    // 0x2e2c3c: 0x8563b45e  lh          $v1, -0x4BA2($t3)
    ctx->pc = 0x2e2c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294947934)));
    // 0x2e2c40: 0x32e3b5d6  andi        $v1, $s7, 0xB5D6
    ctx->pc = 0x2e2c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)46550);
    // 0x2e2c44: 0x84e3be5c  lh          $v1, -0x41A4($a3)
    ctx->pc = 0x2e2c44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294950492)));
    // 0x2e2c48: 0x4e3b46e  bgezl       $a3, . + 4 + (-0x4B92 << 2)
    ctx->pc = 0x2E2C48u;
    {
        const bool branch_taken_0x2e2c48 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2c48) {
            ctx->pc = 0x2E2C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C48u;
            // 0x2e2c4c: 0x5e7b55c  .word       0x05E7B55C                   # INVALID     $t7, $a3, -0x4AA4 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x7
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE04u;
            return;
        }
    }
    ctx->pc = 0x2E2C50u;
    // 0x2e2c50: 0xa7eb9d4e  sh          $t3, -0x62B2($ra)
    ctx->pc = 0x2e2c50u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 4294942030), (uint16_t)GPR_U32(ctx, 11));
    // 0x2e2c54: 0x2d9c042a  sltiu       $gp, $t4, 0x42A
    ctx->pc = 0x2e2c54u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)1066) ? 1 : 0);
    // 0x2e2c58: 0x77e3f55c  .word       0x77E3F55C                   # INVALID     $ra, $v1, -0xAA4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2c58u;
    // Unhandled opcode: 0x1D
    // 0x2e2c5c: 0xb9c4b4a3  swr         $a0, -0x4B5D($t6)
    ctx->pc = 0x2e2c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294948003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e2c60: 0xbd9c24a3  cache       0x1C, 0x24A3($t4)
    ctx->pc = 0x2e2c60u;
    // CACHE instruction (ignored)
    // 0x2e2c64: 0x5bbf4dc  .word       0x05BBF4DC                   # INVALID     $t5, $k1, -0xB24 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2e2c64u;
    // Unhandled REGIMM instruction: 0x1B
    // 0x2e2c68: 0xa7a3b44a  sh          $v1, -0x4BB6($sp)
    ctx->pc = 0x2e2c68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4294947914), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2c6c: 0x39c2349c  xori        $v0, $t6, 0x349C
    ctx->pc = 0x2e2c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)13468);
    // 0x2e2c70: 0x5b7f4dc  .word       0x05B7F4DC                   # INVALID     $t5, $s7, -0xB24 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2e2c70u;
    // Unhandled REGIMM instruction: 0x17
    // 0x2e2c74: 0x39a3bd5c  xori        $v1, $t5, 0xBD5C
    ctx->pc = 0x2e2c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)48476);
    // 0x2e2c78: 0x39c434dc  xori        $a0, $t6, 0x34DC
    ctx->pc = 0x2e2c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)13532);
    // 0x2e2c7c: 0x5b3f4dc  bgezall     $t5, . + 4 + (-0xB24 << 2)
    ctx->pc = 0x2E2C7Cu;
    {
        const bool branch_taken_0x2e2c7c = (GPR_S32(ctx, 13) >= 0);
        if (branch_taken_0x2e2c7c) {
            SET_GPR_U32(ctx, 31, 0x2E2C84u);
            ctx->pc = 0x2E2C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C7Cu;
            // 0x2e2c80: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DFFF0u;
            return;
        }
    }
    ctx->pc = 0x2E2C84u;
    // 0x2e2c84: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
label_2e2c88:
    // 0x2e2c88: 0x5e3f55c  bgezl       $t7, . + 4 + (-0xAA4 << 2)
    ctx->pc = 0x2E2C88u;
    {
        const bool branch_taken_0x2e2c88 = (GPR_S32(ctx, 15) >= 0);
        if (branch_taken_0x2e2c88) {
            ctx->pc = 0x2E2C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C88u;
            // 0x2e2c8c: 0x4e3f44c  bgezl       $a3, . + 4 + (-0xBB4 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2DFDC0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E01FCu;
            return;
        }
    }
    ctx->pc = 0x2E2C90u;
    // 0x2e2c90: 0xa6f3fc4c  sh          $s3, -0x3B4($s7)
    ctx->pc = 0x2e2c90u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294966348), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2c94: 0xb4e3bc5c  sdr         $v1, -0x43A4($a3)
    ctx->pc = 0x2e2c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294949980); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2c98: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
    // 0x2e2c9c: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
    // 0x2e2ca0: 0x84e3bf5d  lh          $v1, -0x40A3($a3)
    ctx->pc = 0x2e2ca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294950749)));
    // 0x2e2ca4: 0x4e3bedd  bgezl       $a3, . + 4 + (-0x4123 << 2)
    ctx->pc = 0x2E2CA4u;
    {
        const bool branch_taken_0x2e2ca4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2ca4) {
            ctx->pc = 0x2E2CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CA4u;
            // 0x2e2ca8: 0x4b3b447  bgezall     $a1, . + 4 + (-0x4BB9 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2CFDC8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D281Cu;
            return;
        }
    }
    ctx->pc = 0x2E2CACu;
    // 0x2e2cac: 0x4e3b46e  bgezl       $a3, . + 4 + (-0x4B92 << 2)
    ctx->pc = 0x2E2CACu;
    {
        const bool branch_taken_0x2e2cac = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2cac) {
            ctx->pc = 0x2E2CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CACu;
            // 0x2e2cb0: 0x5e7b55c  .word       0x05E7B55C                   # INVALID     $t7, $a3, -0x4AA4 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x7
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE68u;
            return;
        }
    }
    ctx->pc = 0x2E2CB4u;
    // 0x2e2cb4: 0x8563b45e  lh          $v1, -0x4BA2($t3)
    ctx->pc = 0x2e2cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294947934)));
    // 0x2e2cb8: 0x32e3b59c  andi        $v1, $s7, 0xB59C
    ctx->pc = 0x2e2cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)46492);
    // 0x2e2cbc: 0x84e3be5c  lh          $v1, -0x41A4($a3)
    ctx->pc = 0x2e2cbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294950492)));
    // 0x2e2cc0: 0x4e3b46e  bgezl       $a3, . + 4 + (-0x4B92 << 2)
    ctx->pc = 0x2E2CC0u;
    {
        const bool branch_taken_0x2e2cc0 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2cc0) {
            ctx->pc = 0x2E2CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CC0u;
            // 0x2e2cc4: 0x5e7b55c  .word       0x05E7B55C                   # INVALID     $t7, $a3, -0x4AA4 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x7
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFE7Cu;
            return;
        }
    }
    ctx->pc = 0x2E2CC8u;
    // 0x2e2cc8: 0xa7eb9d4e  sh          $t3, -0x62B2($ra)
    ctx->pc = 0x2e2cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 4294942030), (uint16_t)GPR_U32(ctx, 11));
    // 0x2e2ccc: 0x2d9c042a  sltiu       $gp, $t4, 0x42A
    ctx->pc = 0x2e2cccu;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)1066) ? 1 : 0);
    // 0x2e2cd0: 0x77e3f55c  .word       0x77E3F55C                   # INVALID     $ra, $v1, -0xAA4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2cd0u;
    // Unhandled opcode: 0x1D
    // 0x2e2cd4: 0xb9c4b4a3  swr         $a0, -0x4B5D($t6)
    ctx->pc = 0x2e2cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294948003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e2cd8: 0xbd9c24a3  cache       0x1C, 0x24A3($t4)
    ctx->pc = 0x2e2cd8u;
    // CACHE instruction (ignored)
    // 0x2e2cdc: 0x5bbf4dc  .word       0x05BBF4DC                   # INVALID     $t5, $k1, -0xB24 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2e2cdcu;
    // Unhandled REGIMM instruction: 0x1B
    // 0x2e2ce0: 0xa7a3b44a  sh          $v1, -0x4BB6($sp)
    ctx->pc = 0x2e2ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4294947914), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2ce4: 0x39c2349c  xori        $v0, $t6, 0x349C
    ctx->pc = 0x2e2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)13468);
    // 0x2e2ce8: 0x5b7f4dc  .word       0x05B7F4DC                   # INVALID     $t5, $s7, -0xB24 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2e2ce8u;
    // Unhandled REGIMM instruction: 0x17
    // 0x2e2cec: 0x39a3bd5c  xori        $v1, $t5, 0xBD5C
    ctx->pc = 0x2e2cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)48476);
    // 0x2e2cf0: 0x39c434dc  xori        $a0, $t6, 0x34DC
    ctx->pc = 0x2e2cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)13532);
    // 0x2e2cf4: 0x5b3f4dc  bgezall     $t5, . + 4 + (-0xB24 << 2)
    ctx->pc = 0x2E2CF4u;
    {
        const bool branch_taken_0x2e2cf4 = (GPR_S32(ctx, 13) >= 0);
        if (branch_taken_0x2e2cf4) {
            SET_GPR_U32(ctx, 31, 0x2E2CFCu);
            ctx->pc = 0x2E2CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CF4u;
            // 0x2e2cf8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0068u;
            return;
        }
    }
    ctx->pc = 0x2E2CFCu;
    // 0x2e2cfc: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
label_2e2d00:
    // 0x2e2d00: 0x5e3f55c  bgezl       $t7, . + 4 + (-0xAA4 << 2)
    ctx->pc = 0x2E2D00u;
    {
        const bool branch_taken_0x2e2d00 = (GPR_S32(ctx, 15) >= 0);
        if (branch_taken_0x2e2d00) {
            ctx->pc = 0x2E2D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D00u;
            // 0x2e2d04: 0x4e3f44c  bgezl       $a3, . + 4 + (-0xBB4 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2DFE38 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E0274u;
            return;
        }
    }
    ctx->pc = 0x2E2D08u;
    // 0x2e2d08: 0xa6f3ac4c  sh          $s3, -0x53B4($s7)
    ctx->pc = 0x2e2d08u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294945868), (uint16_t)GPR_U32(ctx, 19));
    // 0x2e2d0c: 0xb4e3bc5c  sdr         $v1, -0x43A4($a3)
    ctx->pc = 0x2e2d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294949980); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2d10: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
    // 0x2e2d14: 0x27e3b45c  addiu       $v1, $ra, -0x4BA4
    ctx->pc = 0x2e2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 31), 4294947932));
    // 0x2e2d18: 0x84e3bf5d  lh          $v1, -0x40A3($a3)
    ctx->pc = 0x2e2d18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294950749)));
    // 0x2e2d1c: 0x4e3bedd  bgezl       $a3, . + 4 + (-0x4123 << 2)
    ctx->pc = 0x2E2D1Cu;
    {
        const bool branch_taken_0x2e2d1c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2d1c) {
            ctx->pc = 0x2E2D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D1Cu;
            // 0x2e2d20: 0x4b3b447  bgezall     $a1, . + 4 + (-0x4BB9 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2CFE40 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2894u;
            return;
        }
    }
    ctx->pc = 0x2E2D24u;
    // 0x2e2d24: 0x4e3b46e  bgezl       $a3, . + 4 + (-0x4B92 << 2)
    ctx->pc = 0x2E2D24u;
    {
        const bool branch_taken_0x2e2d24 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2d24) {
            ctx->pc = 0x2E2D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D24u;
            // 0x2e2d28: 0x5e7b55c  .word       0x05E7B55C                   # INVALID     $t7, $a3, -0x4AA4 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x7
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFEE0u;
            return;
        }
    }
    ctx->pc = 0x2E2D2Cu;
    // 0x2e2d2c: 0x8563b45e  lh          $v1, -0x4BA2($t3)
    ctx->pc = 0x2e2d2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294947934)));
    // 0x2e2d30: 0x30e3b58d  andi        $v1, $a3, 0xB58D
    ctx->pc = 0x2e2d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)46477);
    // 0x2e2d34: 0x84e3be5c  lh          $v1, -0x41A4($a3)
    ctx->pc = 0x2e2d34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294950492)));
    // 0x2e2d38: 0x4e3b46e  bgezl       $a3, . + 4 + (-0x4B92 << 2)
    ctx->pc = 0x2E2D38u;
    {
        const bool branch_taken_0x2e2d38 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2e2d38) {
            ctx->pc = 0x2E2D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D38u;
            // 0x2e2d3c: 0x5e7b55c  .word       0x05E7B55C                   # INVALID     $t7, $a3, -0x4AA4 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x7
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFEF4u;
            return;
        }
    }
    ctx->pc = 0x2E2D40u;
    // 0x2e2d40: 0xa7eb9d4e  sh          $t3, -0x62B2($ra)
    ctx->pc = 0x2e2d40u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 4294942030), (uint16_t)GPR_U32(ctx, 11));
    // 0x2e2d44: 0x2d9c042a  sltiu       $gp, $t4, 0x42A
    ctx->pc = 0x2e2d44u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)1066) ? 1 : 0);
    // 0x2e2d48: 0x77e3f55c  .word       0x77E3F55C                   # INVALID     $ra, $v1, -0xAA4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2d48u;
    // Unhandled opcode: 0x1D
    // 0x2e2d4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2D4Cu;
    {
        const bool branch_taken_0x2e2d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d4c) {
            ctx->pc = 0x2E2D7Cu;
            goto label_2e2d7c;
        }
    }
    ctx->pc = 0x2E2D54u;
    // 0x2e2d54: 0x8e827d15  lw          $v0, 0x7D15($s4)
    ctx->pc = 0x2e2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32021)));
    // 0x2e2d58: 0x8eea867d  lw          $t2, -0x7983($s7)
    ctx->pc = 0x2e2d58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936189)));
    // 0x2e2d5c: 0xff308c6a  sd          $s0, -0x7396($t9)
    ctx->pc = 0x2e2d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 4294937706), GPR_U64(ctx, 16));
    // 0x2e2d60: 0x868367fb  lh          $v1, 0x67FB($s4)
    ctx->pc = 0x2e2d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26619)));
    // 0x2e2d64: 0xdd9ce347  ld          $gp, -0x1CB9($t4)
    ctx->pc = 0x2e2d64u;
    SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 12), 4294959943)));
    // 0x2e2d68: 0x276dbbc0  addiu       $t5, $k1, -0x4440
    ctx->pc = 0x2e2d68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 27), 4294949824));
    // 0x2e2d6c: 0xd73b2254  ldc1        $f27, 0x2254($t9)
    ctx->pc = 0x2e2d6cu;
    // Unhandled opcode: 0x35
    // 0x2e2d70: 0xca15fc79  lwc2        $21, -0x387($s0)
    ctx->pc = 0x2e2d70u;
    // Unhandled opcode: 0x32
    // 0x2e2d74: 0xd73b2070  ldc1        $f27, 0x2070($t9)
    ctx->pc = 0x2e2d74u;
    // Unhandled opcode: 0x35
    // 0x2e2d78: 0x0  nop
    ctx->pc = 0x2e2d78u;
    // NOP
label_2e2d7c:
    // 0x2e2d7c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e2d80: 0x24422d6c  addiu       $v0, $v0, 0x2D6C
    ctx->pc = 0x2e2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11628));
    // 0x2e2d84: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2d88: 0x24842d4c  addiu       $a0, $a0, 0x2D4C
    ctx->pc = 0x2e2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11596));
    // 0x2e2d8c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e2d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2d90: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2d94: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2D94u;
    SET_GPR_U32(ctx, 31, 0x2E2D9Cu);
    ctx->pc = 0x2E2D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D94u;
            // 0x2e2d98: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2D9Cu; }
        if (ctx->pc != 0x2E2D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2D9Cu; }
        if (ctx->pc != 0x2E2D9Cu) { return; }
    }
    ctx->pc = 0x2E2D9Cu;
label_2e2d9c:
    // 0x2e2d9c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2e2d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2da0: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2e2da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2e2da4: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x2e2da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2e2da8: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2e2da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2e2dac: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x2e2dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2e2db0: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x2e2db0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2e2db4: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x2e2db4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2e2db8: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x2e2db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2e2dbc: 0xc7b601a8  lwc1        $f22, 0x1A8($sp)
    ctx->pc = 0x2e2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e2dc0: 0xc7b501a0  lwc1        $f21, 0x1A0($sp)
    ctx->pc = 0x2e2dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e2dc4: 0xc7b40198  lwc1        $f20, 0x198($sp)
    ctx->pc = 0x2e2dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DC8u;
            // 0x2e2dcc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2DD0u;
    ctx->pc = 0x2e2dd0u;
}
