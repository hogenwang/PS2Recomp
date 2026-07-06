#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DEB18
// Address: 0x2deb18 - 0x2df1c0
void sub_002DEB18_0x2deb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEB18_0x2deb18");
#endif

    switch (ctx->pc) {
        case 0x2deb7cu: goto label_2deb7c;
        case 0x2debe4u: goto label_2debe4;
        case 0x2dec18u: goto label_2dec18;
        case 0x2dec3cu: goto label_2dec3c;
        case 0x2dec6cu: goto label_2dec6c;
        case 0x2dec80u: goto label_2dec80;
        case 0x2dec84u: goto label_2dec84;
        case 0x2dec9cu: goto label_2dec9c;
        case 0x2decc8u: goto label_2decc8;
        case 0x2decccu: goto label_2deccc;
        case 0x2decdcu: goto label_2decdc;
        case 0x2decfcu: goto label_2decfc;
        case 0x2ded00u: goto label_2ded00;
        case 0x2ded0cu: goto label_2ded0c;
        case 0x2ded18u: goto label_2ded18;
        case 0x2ded24u: goto label_2ded24;
        case 0x2ded2cu: goto label_2ded2c;
        case 0x2ded48u: goto label_2ded48;
        case 0x2ded60u: goto label_2ded60;
        case 0x2ded70u: goto label_2ded70;
        case 0x2dedd8u: goto label_2dedd8;
        case 0x2dede4u: goto label_2dede4;
        case 0x2dede8u: goto label_2dede8;
        case 0x2dee50u: goto label_2dee50;
        case 0x2deec8u: goto label_2deec8;
        case 0x2def40u: goto label_2def40;
        case 0x2def50u: goto label_2def50;
        case 0x2defdcu: goto label_2defdc;
        case 0x2df018u: goto label_2df018;
        case 0x2df050u: goto label_2df050;
        case 0x2df054u: goto label_2df054;
        case 0x2df064u: goto label_2df064;
        case 0x2df088u: goto label_2df088;
        case 0x2df0bcu: goto label_2df0bc;
        case 0x2df0c0u: goto label_2df0c0;
        case 0x2df0c8u: goto label_2df0c8;
        case 0x2df0ccu: goto label_2df0cc;
        case 0x2df0d4u: goto label_2df0d4;
        case 0x2df0dcu: goto label_2df0dc;
        case 0x2df0e0u: goto label_2df0e0;
        case 0x2df0e4u: goto label_2df0e4;
        case 0x2df0e8u: goto label_2df0e8;
        case 0x2df0ecu: goto label_2df0ec;
        case 0x2df0f0u: goto label_2df0f0;
        case 0x2df0f8u: goto label_2df0f8;
        case 0x2df0fcu: goto label_2df0fc;
        case 0x2df100u: goto label_2df100;
        case 0x2df104u: goto label_2df104;
        case 0x2df108u: goto label_2df108;
        case 0x2df10cu: goto label_2df10c;
        case 0x2df110u: goto label_2df110;
        case 0x2df114u: goto label_2df114;
        case 0x2df11cu: goto label_2df11c;
        case 0x2df120u: goto label_2df120;
        case 0x2df124u: goto label_2df124;
        case 0x2df128u: goto label_2df128;
        case 0x2df134u: goto label_2df134;
        case 0x2df138u: goto label_2df138;
        case 0x2df140u: goto label_2df140;
        case 0x2df144u: goto label_2df144;
        case 0x2df150u: goto label_2df150;
        case 0x2df160u: goto label_2df160;
        case 0x2df198u: goto label_2df198;
        default: break;
    }

    ctx->pc = 0x2deb18u;

    // 0x2deb18: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2deb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2deb1c: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x2deb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x2deb20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2deb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deb24: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x2deb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2deb28: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x2deb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x2deb2c: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x2deb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x2deb30: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x2deb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2deb34: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x2deb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x2deb38: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x2deb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x2deb3c: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x2deb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x2deb40: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2deb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2deb44: 0xe7b60128  swc1        $f22, 0x128($sp)
    ctx->pc = 0x2deb44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2deb48: 0xe7b50120  swc1        $f21, 0x120($sp)
    ctx->pc = 0x2deb48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2deb4c: 0xe7b40118  swc1        $f20, 0x118($sp)
    ctx->pc = 0x2deb4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2deb50: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2deb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2deb54: 0x2463eb9c  addiu       $v1, $v1, -0x1464
    ctx->pc = 0x2deb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962076));
    // 0x2deb58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2deb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2deb5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DEB5Cu;
    {
        const bool branch_taken_0x2deb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2deb5c) {
            ctx->pc = 0x2DEB7Cu;
            goto label_2deb7c;
        }
    }
    ctx->pc = 0x2DEB64u;
    // 0x2deb64: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2deb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2deb68: 0x2484ebb0  addiu       $a0, $a0, -0x1450
    ctx->pc = 0x2deb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962096));
    // 0x2deb6c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2deb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2deb70: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2deb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2deb74: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DEB74u;
    SET_GPR_U32(ctx, 31, 0x2DEB7Cu);
    ctx->pc = 0x2DEB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB74u;
            // 0x2deb78: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB7Cu; }
        if (ctx->pc != 0x2DEB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB7Cu; }
        if (ctx->pc != 0x2DEB7Cu) { return; }
    }
    ctx->pc = 0x2DEB7Cu;
label_2deb7c:
    // 0x2deb7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DEB7Cu;
    {
        const bool branch_taken_0x2deb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deb7c) {
            ctx->pc = 0x2DEBB0u;
            goto label_2debb0;
        }
    }
    ctx->pc = 0x2DEB84u;
    // 0x2deb84: 0xa3c8cf89  sb          $t0, -0x3077($fp)
    ctx->pc = 0x2deb84u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294954889), (uint8_t)GPR_U32(ctx, 8));
    // 0x2deb88: 0xdff15ce7  ld          $s1, 0x5CE7($ra)
    ctx->pc = 0x2deb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 31), 23783)));
    // 0x2deb8c: 0xffc2333a  sd          $v0, 0x333A($fp)
    ctx->pc = 0x2deb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 13114), GPR_U64(ctx, 2));
    // 0x2deb90: 0x27ec2570  addiu       $t4, $ra, 0x2570
    ctx->pc = 0x2deb90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 31), 9584));
    // 0x2deb94: 0xdd4a23d7  ld          $t2, 0x23D7($t2)
    ctx->pc = 0x2deb94u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 9175)));
    // 0x2deb98: 0x8fc21a1d  lw          $v0, 0x1A1D($fp)
    ctx->pc = 0x2deb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6685)));
    // 0x2deb9c: 0x0  nop
    ctx->pc = 0x2deb9cu;
    // NOP
    // 0x2deba0: 0xb5fa1ab6  sdr         $k0, 0x1AB6($t7)
    ctx->pc = 0x2deba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 6838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2deba4: 0xc7131924  lwc1        $f19, 0x1924($t8)
    ctx->pc = 0x2deba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 6436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2deba8: 0xb5fa196a  sdr         $k0, 0x196A($t7)
    ctx->pc = 0x2deba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 6506); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2debac: 0x0  nop
    ctx->pc = 0x2debacu;
    // NOP
label_2debb0:
    // 0x2debb0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2debb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2debb4: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2debb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2debb8: 0xd1c38d48  lld         $v1, -0x72B8($t6)
    ctx->pc = 0x2debb8u;
    // Unhandled opcode: 0x34
    // 0x2debbc: 0x41c32b48  .word       0x41C32B48                   # INVALID     $t6, $v1, 0x2B48 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2debbcu;
    // Unhandled COP0 instruction format: 0xE
    // 0x2debc0: 0xa7c9ada8  sh          $t1, -0x5258($fp)
    ctx->pc = 0x2debc0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294946216), (uint16_t)GPR_U32(ctx, 9));
    // 0x2debc4: 0xd33cad17  lld         $gp, -0x52E9($t9)
    ctx->pc = 0x2debc4u;
    // Unhandled opcode: 0x34
    // 0x2debc8: 0x51c16b28  beql        $t6, $at, . + 4 + (0x6B28 << 2)
    ctx->pc = 0x2DEBC8u;
    {
        const bool branch_taken_0x2debc8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 1));
        if (branch_taken_0x2debc8) {
            ctx->pc = 0x2DEBCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBC8u;
            // 0x2debcc: 0xa7c5ad88  sh          $a1, -0x5278($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294946184), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F986Cu;
            return;
        }
    }
    ctx->pc = 0x2DEBD0u;
    // 0x2debd0: 0x51c6092c  beql        $t6, $a2, . + 4 + (0x92C << 2)
    ctx->pc = 0x2DEBD0u;
    {
        const bool branch_taken_0x2debd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2debd0) {
            ctx->pc = 0x2DEBD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBD0u;
            // 0x2debd4: 0x1c6092d  .word       0x01C6092D                   # daddu       $at, $t6, $a2 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1084u;
            return;
        }
    }
    ctx->pc = 0x2DEBD8u;
    // 0x2debd8: 0xd1cbade8  lld         $t3, -0x5218($t6)
    ctx->pc = 0x2debd8u;
    // Unhandled opcode: 0x34
    // 0x2debdc: 0xc0b9406  jal         func_2E5018
    ctx->pc = 0x2DEBDCu;
    SET_GPR_U32(ctx, 31, 0x2DEBE4u);
    ctx->pc = 0x2DEBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBDCu;
            // 0x2debe0: 0x1c60939  .word       0x01C60939                   # INVALID     $t6, $a2, 0x939 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // Unhandled SPECIAL instruction: 0x39
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5018u;
    if (runtime->hasFunction(0x2E5018u)) {
        auto targetFn = runtime->lookupFunction(0x2E5018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBE4u; }
        if (ctx->pc != 0x2DEBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5018_0x2e5018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBE4u; }
        if (ctx->pc != 0x2DEBE4u) { return; }
    }
    ctx->pc = 0x2DEBE4u;
label_2debe4:
    // 0x2debe4: 0x59c32b28  .word       0x59C32B28                   # blezl       $t6, . + 4 + (0x2B28 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DEBE4u;
    {
        const bool branch_taken_0x2debe4 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x2debe4) {
            ctx->pc = 0x2DEBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBE4u;
            // 0x2debe8: 0xa7c5ad88  sh          $a1, -0x5278($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294946184), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E9888u;
            return;
        }
    }
    ctx->pc = 0x2DEBECu;
    // 0x2debec: 0x51c20b28  beql        $t6, $v0, . + 4 + (0xB28 << 2)
    ctx->pc = 0x2DEBECu;
    {
        const bool branch_taken_0x2debec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        if (branch_taken_0x2debec) {
            ctx->pc = 0x2DEBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBECu;
            // 0x2debf0: 0xd30e4d17  lld         $t6, 0x4D17($t8) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1890u;
            return;
        }
    }
    ctx->pc = 0x2DEBF4u;
    // 0x2debf4: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2)
    ctx->pc = 0x2DEBF4u;
    {
        const bool branch_taken_0x2debf4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 3));
        if (branch_taken_0x2debf4) {
            ctx->pc = 0x2DEBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBF4u;
            // 0x2debf8: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9098u;
            return;
        }
    }
    ctx->pc = 0x2DEBFCu;
    // 0x2debfc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2debfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2dec00: 0x2484e0f0  addiu       $a0, $a0, -0x1F10
    ctx->pc = 0x2dec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959344));
    // 0x2dec04: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x2dec04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
    // 0x2dec08: 0x5c6092e  .word       0x05C6092E                   # INVALID     $t6, $a2, 0x92E # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2dec08u;
    // Unhandled REGIMM instruction: 0x6
    // 0x2dec0c: 0xd1c32dc8  lld         $v1, 0x2DC8($t6)
    ctx->pc = 0x2dec0cu;
    // Unhandled opcode: 0x34
    // 0x2dec10: 0xc0b8104  jal         func_2E0410
    ctx->pc = 0x2DEC10u;
    SET_GPR_U32(ctx, 31, 0x2DEC18u);
    ctx->pc = 0x2DEC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC10u;
            // 0x2dec14: 0x5c6093a  .word       0x05C6093A                   # INVALID     $t6, $a2, 0x93A # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x6
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0410u;
    if (runtime->hasFunction(0x2E0410u)) {
        auto targetFn = runtime->lookupFunction(0x2E0410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC18u; }
        if (ctx->pc != 0x2DEC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0410_0x2e0410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC18u; }
        if (ctx->pc != 0x2DEC18u) { return; }
    }
    ctx->pc = 0x2DEC18u;
label_2dec18:
    // 0x2dec18: 0xd9c30948  lqc2        $vf3, 0x948($t6)
    ctx->pc = 0x2dec18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 2376)));
    // 0x2dec1c: 0xa7d1ade8  sh          $s1, -0x5218($fp)
    ctx->pc = 0x2dec1cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294946280), (uint16_t)GPR_U32(ctx, 17));
    // 0x2dec20: 0xd30e4d17  lld         $t6, 0x4D17($t8)
    ctx->pc = 0x2dec20u;
    // Unhandled opcode: 0x34
    // 0x2dec24: 0xa7d1ade8  sh          $s1, -0x5218($fp)
    ctx->pc = 0x2dec24u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294946280), (uint16_t)GPR_U32(ctx, 17));
    // 0x2dec28: 0x51cb8b28  beql        $t6, $t3, . + 4 + (-0x74D8 << 2)
    ctx->pc = 0x2DEC28u;
    {
        const bool branch_taken_0x2dec28 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 11));
        if (branch_taken_0x2dec28) {
            ctx->pc = 0x2DEC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC28u;
            // 0x2dec2c: 0xa7c1adc8  sh          $at, -0x5238($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294946248), (uint16_t)GPR_U32(ctx, 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C18CCu;
            return;
        }
    }
    ctx->pc = 0x2DEC30u;
    // 0x2dec30: 0x51c6092d  beql        $t6, $a2, . + 4 + (0x92D << 2)
    ctx->pc = 0x2DEC30u;
    {
        const bool branch_taken_0x2dec30 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2dec30) {
            ctx->pc = 0x2DEC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC30u;
            // 0x2dec34: 0x9c60938  j           func_71824E0 (Delay Slot)
        // J 0x71824E0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E10E8u;
            return;
        }
    }
    ctx->pc = 0x2DEC38u;
    // 0x2dec38: 0x15c7898a  bne         $t6, $a3, . + 4 + (-0x7676 << 2)
label_2dec3c:
    if (ctx->pc == 0x2DEC3Cu) {
        ctx->pc = 0x2DEC3Cu;
            // 0x2dec3c: 0x11c7898c  beq         $t6, $a3, . + 4 + (-0x7674 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEC3C - Handled by branch logic
        ctx->pc = 0x2DEC40u;
        goto label_fallthrough_0x2dec38;
    }
    ctx->pc = 0x2DEC38u;
    {
        const bool branch_taken_0x2dec38 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DEC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC38u;
            // 0x2dec3c: 0x11c7898c  beq         $t6, $a3, . + 4 + (-0x7674 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEC3C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec38) {
            ctx->pc = 0x2C1264u;
            return;
        }
    }
label_fallthrough_0x2dec38:
    ctx->pc = 0x2DEC40u;
    // 0x2dec40: 0x59c3bb48  .word       0x59C3BB48                   # blezl       $t6, . + 4 + (-0x44B8 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DEC40u;
    {
        const bool branch_taken_0x2dec40 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x2dec40) {
            ctx->pc = 0x2DEC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC40u;
            // 0x2dec44: 0xc5c38d88  lwc1        $f3, -0x7278($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294937992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD964u;
            return;
        }
    }
    ctx->pc = 0x2DEC48u;
    // 0x2dec48: 0xc5cbac68  lwc1        $f11, -0x5398($t6)
    ctx->pc = 0x2dec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294945896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2dec4c: 0xd93ceb37  lqc2        $vf28, -0x14C9($t1)
    ctx->pc = 0x2dec4cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 4294961975)));
    // 0x2dec50: 0x41c3bd48  .word       0x41C3BD48                   # INVALID     $t6, $v1, -0x42B8 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dec50u;
    // Unhandled COP0 instruction format: 0xE
    // 0x2dec54: 0x11c6092c  beq         $t6, $a2, . + 4 + (0x92C << 2)
    ctx->pc = 0x2DEC54u;
    {
        const bool branch_taken_0x2dec54 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DEC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC54u;
            // 0x2dec58: 0xa5cbad88  sh          $t3, -0x5278($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 4294946184), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec54) {
            ctx->pc = 0x2E1108u;
            return;
        }
    }
    ctx->pc = 0x2DEC5Cu;
    // 0x2dec5c: 0x11c6092e  beq         $t6, $a2, . + 4 + (0x92E << 2)
    ctx->pc = 0x2DEC5Cu;
    {
        const bool branch_taken_0x2dec5c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DEC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC5Cu;
            // 0x2dec60: 0xa5caadc8  sh          $t2, -0x5238($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 4294946248), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec5c) {
            ctx->pc = 0x2E1118u;
            return;
        }
    }
    ctx->pc = 0x2DEC64u;
    // 0x2dec64: 0xc0b8148  jal         func_2E0520
    ctx->pc = 0x2DEC64u;
    SET_GPR_U32(ctx, 31, 0x2DEC6Cu);
    ctx->pc = 0x2DEC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC64u;
            // 0x2dec68: 0xd0c34d28  lld         $v1, 0x4D28($a2) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0520u;
    if (runtime->hasFunction(0x2E0520u)) {
        auto targetFn = runtime->lookupFunction(0x2E0520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC6Cu; }
        if (ctx->pc != 0x2DEC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0520_0x2e0520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC6Cu; }
        if (ctx->pc != 0x2DEC6Cu) { return; }
    }
    ctx->pc = 0x2DEC6Cu;
label_2dec6c:
    // 0x2dec6c: 0xd9c00928  lqc2        $vf0, 0x928($t6)
    ctx->pc = 0x2dec6cu;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 2344)));
    // 0x2dec70: 0xa5dbad88  sh          $k1, -0x5278($t6)
    ctx->pc = 0x2dec70u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4294946184), (uint16_t)GPR_U32(ctx, 27));
    // 0x2dec74: 0xa5daada8  sh          $k0, -0x5258($t6)
    ctx->pc = 0x2dec74u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4294946216), (uint16_t)GPR_U32(ctx, 26));
    // 0x2dec78: 0xc0b7340  jal         func_2DCD00
    ctx->pc = 0x2DEC78u;
    SET_GPR_U32(ctx, 31, 0x2DEC80u);
    ctx->pc = 0x2DEC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC78u;
            // 0x2dec7c: 0xd1c2ade8  lld         $v0, -0x5218($t6) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD00u;
    if (runtime->hasFunction(0x2DCD00u)) {
        auto targetFn = runtime->lookupFunction(0x2DCD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC80u; }
        if (ctx->pc != 0x2DEC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DCD00_0x2dcd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC80u; }
        if (ctx->pc != 0x2DEC80u) { return; }
    }
    ctx->pc = 0x2DEC80u;
label_2dec80:
    // 0x2dec80: 0x59c3cb28  .word       0x59C3CB28                   # blezl       $t6, . + 4 + (-0x34D8 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_2dec84:
    if (ctx->pc == 0x2DEC84u) {
        ctx->pc = 0x2DEC84u;
            // 0x2dec84: 0xa7c1adc8  sh          $at, -0x5238($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294946248), (uint16_t)GPR_U32(ctx, 1));
        ctx->pc = 0x2DEC88u;
        goto label_fallthrough_0x2dec80;
    }
    ctx->pc = 0x2DEC80u;
    {
        const bool branch_taken_0x2dec80 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x2dec80) {
            ctx->pc = 0x2DEC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC80u;
            // 0x2dec84: 0xa7c1adc8  sh          $at, -0x5238($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294946248), (uint16_t)GPR_U32(ctx, 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1924u;
            return;
        }
    }
label_fallthrough_0x2dec80:
    ctx->pc = 0x2DEC88u;
    // 0x2dec88: 0x51c68b28  beql        $t6, $a2, . + 4 + (-0x74D8 << 2)
    ctx->pc = 0x2DEC88u;
    {
        const bool branch_taken_0x2dec88 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2dec88) {
            ctx->pc = 0x2DEC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC88u;
            // 0x2dec8c: 0x51c60939  beql        $t6, $a2, . + 4 + (0x939 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEC8C - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C192Cu;
            return;
        }
    }
    ctx->pc = 0x2DEC90u;
    // 0x2dec90: 0x51c6092d  beql        $t6, $a2, . + 4 + (0x92D << 2)
    ctx->pc = 0x2DEC90u;
    {
        const bool branch_taken_0x2dec90 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2dec90) {
            ctx->pc = 0x2DEC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC90u;
            // 0x2dec94: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEC94 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1148u;
            return;
        }
    }
    ctx->pc = 0x2DEC98u;
    // 0x2dec98: 0x15c7898a  bne         $t6, $a3, . + 4 + (-0x7676 << 2)
label_2dec9c:
    if (ctx->pc == 0x2DEC9Cu) {
        ctx->pc = 0x2DEC9Cu;
            // 0x2dec9c: 0x11c7898c  beq         $t6, $a3, . + 4 + (-0x7674 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEC9C - Handled by branch logic
        ctx->pc = 0x2DECA0u;
        goto label_fallthrough_0x2dec98;
    }
    ctx->pc = 0x2DEC98u;
    {
        const bool branch_taken_0x2dec98 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 7));
        ctx->pc = 0x2DEC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC98u;
            // 0x2dec9c: 0x11c7898c  beq         $t6, $a3, . + 4 + (-0x7674 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEC9C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec98) {
            ctx->pc = 0x2C12C4u;
            return;
        }
    }
label_fallthrough_0x2dec98:
    ctx->pc = 0x2DECA0u;
    // 0x2deca0: 0x59c3bb48  .word       0x59C3BB48                   # blezl       $t6, . + 4 + (-0x44B8 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DECA0u;
    {
        const bool branch_taken_0x2deca0 = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x2deca0) {
            ctx->pc = 0x2DECA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECA0u;
            // 0x2deca4: 0xc5c38d88  lwc1        $f3, -0x7278($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294937992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD9C4u;
            return;
        }
    }
    ctx->pc = 0x2DECA8u;
    // 0x2deca8: 0xc5cbac68  lwc1        $f11, -0x5398($t6)
    ctx->pc = 0x2deca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4294945896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2decac: 0xd93ceb37  lqc2        $vf28, -0x14C9($t1)
    ctx->pc = 0x2decacu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 4294961975)));
    // 0x2decb0: 0x41c3bd48  .word       0x41C3BD48                   # INVALID     $t6, $v1, -0x42B8 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2decb0u;
    // Unhandled COP0 instruction format: 0xE
    // 0x2decb4: 0x11c6092c  beq         $t6, $a2, . + 4 + (0x92C << 2)
    ctx->pc = 0x2DECB4u;
    {
        const bool branch_taken_0x2decb4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECB4u;
            // 0x2decb8: 0x19c6092d  .word       0x19C6092D                   # blez        $t6, . + 4 + (0x92D << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DECB8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2decb4) {
            ctx->pc = 0x2E1168u;
            return;
        }
    }
    ctx->pc = 0x2DECBCu;
    // 0x2decbc: 0x41c6092e  .word       0x41C6092E                   # INVALID     $t6, $a2, 0x92E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2decbcu;
    // Unhandled COP0 instruction format: 0xE
    // 0x2decc0: 0xa5c4adc8  sh          $a0, -0x5238($t6)
    ctx->pc = 0x2decc0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4294946248), (uint16_t)GPR_U32(ctx, 4));
    // 0x2decc4: 0xc0b8248  jal         func_2E0920
label_2decc8:
    if (ctx->pc == 0x2DECC8u) {
        ctx->pc = 0x2DECC8u;
            // 0x2decc8: 0xd0c34d28  lld         $v1, 0x4D28($a2) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->pc = 0x2DECCCu;
        goto label_2deccc;
    }
    ctx->pc = 0x2DECC4u;
    SET_GPR_U32(ctx, 31, 0x2DECCCu);
    ctx->pc = 0x2DECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECC4u;
            // 0x2decc8: 0xd0c34d28  lld         $v1, 0x4D28($a2) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0920u;
    if (runtime->hasFunction(0x2E0920u)) {
        auto targetFn = runtime->lookupFunction(0x2E0920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DECCCu; }
        if (ctx->pc != 0x2DECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0920_0x2e0920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DECCCu; }
        if (ctx->pc != 0x2DECCCu) { return; }
    }
    ctx->pc = 0x2DECCCu;
label_2deccc:
    // 0x2deccc: 0xd9c36928  lqc2        $vf3, 0x6928($t6)
    ctx->pc = 0x2decccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 26920)));
    // 0x2decd0: 0xd30e4d17  lld         $t6, 0x4D17($t8)
    ctx->pc = 0x2decd0u;
    // Unhandled opcode: 0x34
    // 0x2decd4: 0xc0b6e92  jal         func_2DBA48
    ctx->pc = 0x2DECD4u;
    SET_GPR_U32(ctx, 31, 0x2DECDCu);
    ctx->pc = 0x2DECD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECD4u;
            // 0x2decd8: 0x25c6092c  addiu       $a2, $t6, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA48u;
    if (runtime->hasFunction(0x2DBA48u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DECDCu; }
        if (ctx->pc != 0x2DECDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA48_0x2dba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DECDCu; }
        if (ctx->pc != 0x2DECDCu) { return; }
    }
    ctx->pc = 0x2DECDCu;
label_2decdc:
    // 0x2decdc: 0xd9c32948  lqc2        $vf3, 0x2948($t6)
    ctx->pc = 0x2decdcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 10568)));
    // 0x2dece0: 0xa7c1adc8  sh          $at, -0x5238($fp)
    ctx->pc = 0x2dece0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4294946248), (uint16_t)GPR_U32(ctx, 1));
    // 0x2dece4: 0xd30e4d17  lld         $t6, 0x4D17($t8)
    ctx->pc = 0x2dece4u;
    // Unhandled opcode: 0x34
    // 0x2dece8: 0x51c18b28  beql        $t6, $at, . + 4 + (-0x74D8 << 2)
    ctx->pc = 0x2DECE8u;
    {
        const bool branch_taken_0x2dece8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 1));
        if (branch_taken_0x2dece8) {
            ctx->pc = 0x2DECECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECE8u;
            // 0x2decec: 0xa7c1adc8  sh          $at, -0x5238($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 4294946248), (uint16_t)GPR_U32(ctx, 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C198Cu;
            return;
        }
    }
    ctx->pc = 0x2DECF0u;
    // 0x2decf0: 0x1dc6092c  .word       0x1DC6092C                   # bgtz        $t6, . + 4 + (0x92C << 2) # 00060000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DECF0u;
    {
        const bool branch_taken_0x2decf0 = (GPR_S32(ctx, 14) > 0);
        ctx->pc = 0x2DECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECF0u;
            // 0x2decf4: 0xc0b7882  jal         func_2DE208 (Delay Slot)
        // JAL 0x2DE208 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2decf0) {
            ctx->pc = 0x2E11A4u;
            return;
        }
    }
    ctx->pc = 0x2DECF8u;
    // 0x2decf8: 0xdc6092d  jal         func_71824B4
label_2decfc:
    if (ctx->pc == 0x2DECFCu) {
        ctx->pc = 0x2DECFCu;
            // 0x2decfc: 0x59c60939  .word       0x59C60939                   # blezl       $t6, . + 4 + (0x939 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DECFC - Handled by branch logic
        ctx->pc = 0x2DED00u;
        goto label_2ded00;
    }
    ctx->pc = 0x2DECF8u;
    SET_GPR_U32(ctx, 31, 0x2DED00u);
    ctx->pc = 0x2DECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECF8u;
            // 0x2decfc: 0x59c60939  .word       0x59C60939                   # blezl       $t6, . + 4 + (0x939 << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DECFC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x71824B4u;
    {
        auto targetFn = runtime->lookupFunction(0x71824B4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED00u; }
        if (ctx->pc != 0x2DED00u) { return; }
    }
    ctx->pc = 0x2DED00u;
label_2ded00:
    // 0x2ded00: 0x95c2c928  lhu         $v0, -0x36D8($t6)
    ctx->pc = 0x2ded00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294953256)));
    // 0x2ded04: 0x25c6092c  addiu       $a2, $t6, 0x92C
    ctx->pc = 0x2ded04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 2348));
    // 0x2ded08: 0xa5d0ad88  sh          $s0, -0x5278($t6)
    ctx->pc = 0x2ded08u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4294946184), (uint16_t)GPR_U32(ctx, 16));
label_2ded0c:
    // 0x2ded0c: 0xd1c1ade8  lld         $at, -0x5218($t6)
    ctx->pc = 0x2ded0cu;
    // Unhandled opcode: 0x34
    // 0x2ded10: 0xc0b7340  jal         func_2DCD00
    ctx->pc = 0x2DED10u;
    SET_GPR_U32(ctx, 31, 0x2DED18u);
    ctx->pc = 0x2DED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED10u;
            // 0x2ded14: 0x51c60939  beql        $t6, $a2, . + 4 + (0x939 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DED14 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD00u;
    if (runtime->hasFunction(0x2DCD00u)) {
        auto targetFn = runtime->lookupFunction(0x2DCD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED18u; }
        if (ctx->pc != 0x2DED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DCD00_0x2dcd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED18u; }
        if (ctx->pc != 0x2DED18u) { return; }
    }
    ctx->pc = 0x2DED18u;
label_2ded18:
    // 0x2ded18: 0xd9c30b28  lqc2        $vf3, 0xB28($t6)
    ctx->pc = 0x2ded18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 2856)));
    // 0x2ded1c: 0xdc6092c  jal         func_71824B0
    ctx->pc = 0x2DED1Cu;
    SET_GPR_U32(ctx, 31, 0x2DED24u);
    ctx->pc = 0x2DED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED1Cu;
            // 0x2ded20: 0xa5d6ad88  sh          $s6, -0x5278($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 4294946184), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x71824B0u;
    {
        auto targetFn = runtime->lookupFunction(0x71824B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED24u; }
        if (ctx->pc != 0x2DED24u) { return; }
    }
    ctx->pc = 0x2DED24u;
label_2ded24:
    // 0x2ded24: 0xc0b7340  jal         func_2DCD00
    ctx->pc = 0x2DED24u;
    SET_GPR_U32(ctx, 31, 0x2DED2Cu);
    ctx->pc = 0x2DED28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED24u;
            // 0x2ded28: 0xd1c7ade8  lld         $a3, -0x5218($t6) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD00u;
    if (runtime->hasFunction(0x2DCD00u)) {
        auto targetFn = runtime->lookupFunction(0x2DCD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED2Cu; }
        if (ctx->pc != 0x2DED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DCD00_0x2dcd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED2Cu; }
        if (ctx->pc != 0x2DED2Cu) { return; }
    }
    ctx->pc = 0x2DED2Cu;
label_2ded2c:
    // 0x2ded2c: 0xdbc38c08  lqc2        $vf3, -0x73F8($fp)
    ctx->pc = 0x2ded2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294937608)));
    // 0x2ded30: 0xd11c4e01  lld         $gp, 0x4E01($t0)
    ctx->pc = 0x2ded30u;
    // Unhandled opcode: 0x34
    // 0x2ded34: 0xd53c4f17  ldc1        $f28, 0x4F17($t1)
    ctx->pc = 0x2ded34u;
    // Unhandled opcode: 0x35
    // 0x2ded38: 0xc1c3a11e  ll          $v1, -0x5EE2($t6)
    ctx->pc = 0x2ded38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943006); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2ded3c: 0x25c6093b  addiu       $a2, $t6, 0x93B
    ctx->pc = 0x2ded3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 2363));
    // 0x2ded40: 0xd1b3ae00  lld         $s3, -0x5200($t5)
    ctx->pc = 0x2ded40u;
    // Unhandled opcode: 0x34
    // 0x2ded44: 0xc1c3a11d  ll          $v1, -0x5EE3($t6)
    ctx->pc = 0x2ded44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943005); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2ded48:
    // 0x2ded48: 0x51c60938  beql        $t6, $a2, . + 4 + (0x938 << 2)
    ctx->pc = 0x2DED48u;
    {
        const bool branch_taken_0x2ded48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ded48) {
            ctx->pc = 0x2DED4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED48u;
            // 0x2ded4c: 0xd123ae01  lld         $v1, -0x51FF($t1) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E122Cu;
            return;
        }
    }
    ctx->pc = 0x2DED50u;
    // 0x2ded50: 0xc1c3a11c  ll          $v1, -0x5EE4($t6)
    ctx->pc = 0x2ded50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943004); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2ded54: 0xd3c3ae78  lld         $v1, -0x5188($fp)
    ctx->pc = 0x2ded54u;
    // Unhandled opcode: 0x34
    // 0x2ded58: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DED58u;
    SET_GPR_U32(ctx, 31, 0x2DED60u);
    ctx->pc = 0x2DED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED58u;
            // 0x2ded5c: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DED5C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED60u; }
        if (ctx->pc != 0x2DED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED60u; }
        if (ctx->pc != 0x2DED60u) { return; }
    }
    ctx->pc = 0x2DED60u;
label_2ded60:
    // 0x2ded60: 0xc1c3a168  ll          $v1, -0x5E98($t6)
    ctx->pc = 0x2ded60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943080); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2ded64: 0x81c7a128  lb          $a3, -0x5ED8($t6)
    ctx->pc = 0x2ded64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294943016)));
    // 0x2ded68: 0x1fc7892c  .word       0x1FC7892C                   # bgtz        $fp, . + 4 + (-0x76D4 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DED68u;
    {
        const bool branch_taken_0x2ded68 = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x2DED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED68u;
            // 0x2ded6c: 0x93c38d28  lbu         $v1, -0x72D8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294937896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded68) {
            ctx->pc = 0x2C121Cu;
            return;
        }
    }
    ctx->pc = 0x2DED70u;
label_2ded70:
    // 0x2ded70: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2)
    ctx->pc = 0x2DED70u;
    {
        const bool branch_taken_0x2ded70 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ded70) {
            ctx->pc = 0x2DED74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED70u;
            // 0x2ded74: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DED74 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9214u;
            return;
        }
    }
    ctx->pc = 0x2DED78u;
    // 0x2ded78: 0x93c3c1e8  lbu         $v1, -0x3E18($fp)
    ctx->pc = 0x2ded78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294951400)));
    // 0x2ded7c: 0x93c3e188  lbu         $v1, -0x1E78($fp)
    ctx->pc = 0x2ded7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294959496)));
    // 0x2ded80: 0x91c5613c  lbu         $a1, 0x613C($t6)
    ctx->pc = 0x2ded80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 24892)));
    // 0x2ded84: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2ded84u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2ded88: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2ded88u;
    // Unhandled opcode: 0x34
    // 0x2ded8c: 0xf1c30128  scd         $v1, 0x128($t6)
    ctx->pc = 0x2ded8cu;
    // Unhandled opcode: 0x3C
    // 0x2ded90: 0x91c1ac48  lbu         $at, -0x53B8($t6)
    ctx->pc = 0x2ded90u;
    SET_GPR_U32(ctx, 1, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294945864)));
    // 0x2ded94: 0x93c381a8  lbu         $v1, -0x7E58($fp)
    ctx->pc = 0x2ded94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294934952)));
    // 0x2ded98: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2ded98u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2ded9c: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2ded9cu;
    // Unhandled opcode: 0x34
    // 0x2deda0: 0x5bc7096a  .word       0x5BC7096A                   # blezl       $fp, . + 4 + (0x96A << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DEDA0u;
    {
        const bool branch_taken_0x2deda0 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2deda0) {
            ctx->pc = 0x2DEDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDA0u;
            // 0x2deda4: 0xdd3e2b37  ld          $fp, 0x2B37($t1) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 9), 11063)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E134Cu;
            return;
        }
    }
    ctx->pc = 0x2DEDA8u;
    // 0x2deda8: 0x41c3bd68  .word       0x41C3BD68                   # INVALID     $t6, $v1, -0x4298 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2deda8u;
    // Unhandled COP0 instruction format: 0xE
    // 0x2dedac: 0xd11c4e01  lld         $gp, 0x4E01($t0)
    ctx->pc = 0x2dedacu;
    // Unhandled opcode: 0x34
    // 0x2dedb0: 0xd53c4f17  ldc1        $f28, 0x4F17($t1)
    ctx->pc = 0x2dedb0u;
    // Unhandled opcode: 0x35
    // 0x2dedb4: 0xc1c3a11e  ll          $v1, -0x5EE2($t6)
    ctx->pc = 0x2dedb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943006); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dedb8: 0x51c60938  beql        $t6, $a2, . + 4 + (0x938 << 2)
    ctx->pc = 0x2DEDB8u;
    {
        const bool branch_taken_0x2dedb8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2dedb8) {
            ctx->pc = 0x2DEDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDB8u;
            // 0x2dedbc: 0xd1b3ae00  lld         $s3, -0x5200($t5) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E129Cu;
            return;
        }
    }
    ctx->pc = 0x2DEDC0u;
    // 0x2dedc0: 0xc1c3a11d  ll          $v1, -0x5EE3($t6)
    ctx->pc = 0x2dedc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943005); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dedc4: 0xd3c3ae78  lld         $v1, -0x5188($fp)
    ctx->pc = 0x2dedc4u;
    // Unhandled opcode: 0x34
    // 0x2dedc8: 0xd123ae01  lld         $v1, -0x51FF($t1)
    ctx->pc = 0x2dedc8u;
    // Unhandled opcode: 0x34
    // 0x2dedcc: 0xc1c3a11c  ll          $v1, -0x5EE4($t6)
    ctx->pc = 0x2dedccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943004); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dedd0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DEDD0u;
    SET_GPR_U32(ctx, 31, 0x2DEDD8u);
    ctx->pc = 0x2DEDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDD0u;
            // 0x2dedd4: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEDD4 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDD8u; }
        if (ctx->pc != 0x2DEDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDD8u; }
        if (ctx->pc != 0x2DEDD8u) { return; }
    }
    ctx->pc = 0x2DEDD8u;
label_2dedd8:
    // 0x2dedd8: 0xc1c3a168  ll          $v1, -0x5E98($t6)
    ctx->pc = 0x2dedd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943080); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2deddc: 0x81c7a128  lb          $a3, -0x5ED8($t6)
    ctx->pc = 0x2deddcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294943016)));
    // 0x2dede0: 0xfc7892c  jal         func_F1E24B0
label_2dede4:
    if (ctx->pc == 0x2DEDE4u) {
        ctx->pc = 0x2DEDE4u;
            // 0x2dede4: 0x93c38d28  lbu         $v1, -0x72D8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294937896)));
        ctx->pc = 0x2DEDE8u;
        goto label_2dede8;
    }
    ctx->pc = 0x2DEDE0u;
    SET_GPR_U32(ctx, 31, 0x2DEDE8u);
    ctx->pc = 0x2DEDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDE0u;
            // 0x2dede4: 0x93c38d28  lbu         $v1, -0x72D8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294937896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0xF1E24B0u;
    {
        auto targetFn = runtime->lookupFunction(0xF1E24B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEDE8u; }
        if (ctx->pc != 0x2DEDE8u) { return; }
    }
    ctx->pc = 0x2DEDE8u;
label_2dede8:
    // 0x2dede8: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2)
    ctx->pc = 0x2DEDE8u;
    {
        const bool branch_taken_0x2dede8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dede8) {
            ctx->pc = 0x2DEDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDE8u;
            // 0x2dedec: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEDEC - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C928Cu;
            return;
        }
    }
    ctx->pc = 0x2DEDF0u;
    // 0x2dedf0: 0x93c3c1e8  lbu         $v1, -0x3E18($fp)
    ctx->pc = 0x2dedf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294951400)));
    // 0x2dedf4: 0x93c3e188  lbu         $v1, -0x1E78($fp)
    ctx->pc = 0x2dedf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294959496)));
    // 0x2dedf8: 0x91c5613c  lbu         $a1, 0x613C($t6)
    ctx->pc = 0x2dedf8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 24892)));
    // 0x2dedfc: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2dedfcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2dee00: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2dee00u;
    // Unhandled opcode: 0x34
    // 0x2dee04: 0xf1c30128  scd         $v1, 0x128($t6)
    ctx->pc = 0x2dee04u;
    // Unhandled opcode: 0x3C
    // 0x2dee08: 0x91c7ac48  lbu         $a3, -0x53B8($t6)
    ctx->pc = 0x2dee08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294945864)));
    // 0x2dee0c: 0x93c381a8  lbu         $v1, -0x7E58($fp)
    ctx->pc = 0x2dee0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294934952)));
    // 0x2dee10: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2dee10u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2dee14: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2dee14u;
    // Unhandled opcode: 0x34
    // 0x2dee18: 0x5bc7096a  .word       0x5BC7096A                   # blezl       $fp, . + 4 + (0x96A << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DEE18u;
    {
        const bool branch_taken_0x2dee18 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2dee18) {
            ctx->pc = 0x2DEE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE18u;
            // 0x2dee1c: 0xdd3e2b37  ld          $fp, 0x2B37($t1) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 9), 11063)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E13C4u;
            return;
        }
    }
    ctx->pc = 0x2DEE20u;
    // 0x2dee20: 0x41c3bd68  .word       0x41C3BD68                   # INVALID     $t6, $v1, -0x4298 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dee20u;
    // Unhandled COP0 instruction format: 0xE
    // 0x2dee24: 0xd11c4e01  lld         $gp, 0x4E01($t0)
    ctx->pc = 0x2dee24u;
    // Unhandled opcode: 0x34
    // 0x2dee28: 0xd53c4f17  ldc1        $f28, 0x4F17($t1)
    ctx->pc = 0x2dee28u;
    // Unhandled opcode: 0x35
    // 0x2dee2c: 0xc1c3a11e  ll          $v1, -0x5EE2($t6)
    ctx->pc = 0x2dee2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943006); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dee30: 0x51c60938  beql        $t6, $a2, . + 4 + (0x938 << 2)
    ctx->pc = 0x2DEE30u;
    {
        const bool branch_taken_0x2dee30 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2dee30) {
            ctx->pc = 0x2DEE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE30u;
            // 0x2dee34: 0xd1b3ae00  lld         $s3, -0x5200($t5) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1314u;
            return;
        }
    }
    ctx->pc = 0x2DEE38u;
    // 0x2dee38: 0xc1c3a11d  ll          $v1, -0x5EE3($t6)
    ctx->pc = 0x2dee38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943005); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dee3c: 0xd3c3ae78  lld         $v1, -0x5188($fp)
    ctx->pc = 0x2dee3cu;
    // Unhandled opcode: 0x34
    // 0x2dee40: 0xd123ae01  lld         $v1, -0x51FF($t1)
    ctx->pc = 0x2dee40u;
    // Unhandled opcode: 0x34
    // 0x2dee44: 0xc1c3a11c  ll          $v1, -0x5EE4($t6)
    ctx->pc = 0x2dee44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943004); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dee48: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DEE48u;
    SET_GPR_U32(ctx, 31, 0x2DEE50u);
    ctx->pc = 0x2DEE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE48u;
            // 0x2dee4c: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEE4C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE50u; }
        if (ctx->pc != 0x2DEE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE50u; }
        if (ctx->pc != 0x2DEE50u) { return; }
    }
    ctx->pc = 0x2DEE50u;
label_2dee50:
    // 0x2dee50: 0xc1c3a168  ll          $v1, -0x5E98($t6)
    ctx->pc = 0x2dee50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943080); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dee54: 0x81c7a128  lb          $a3, -0x5ED8($t6)
    ctx->pc = 0x2dee54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294943016)));
    // 0x2dee58: 0x3c7892c  .word       0x03C7892C                   # dadd        $s1, $fp, $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dee58u;
    { int64_t a = (int64_t)GPR_S64(ctx, 30); int64_t b = (int64_t)GPR_S64(ctx, 7); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
    // 0x2dee5c: 0x93c38d28  lbu         $v1, -0x72D8($fp)
    ctx->pc = 0x2dee5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294937896)));
    // 0x2dee60: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2)
    ctx->pc = 0x2DEE60u;
    {
        const bool branch_taken_0x2dee60 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dee60) {
            ctx->pc = 0x2DEE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE60u;
            // 0x2dee64: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEE64 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9304u;
            return;
        }
    }
    ctx->pc = 0x2DEE68u;
    // 0x2dee68: 0x93c3c1e8  lbu         $v1, -0x3E18($fp)
    ctx->pc = 0x2dee68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294951400)));
    // 0x2dee6c: 0x93c3e188  lbu         $v1, -0x1E78($fp)
    ctx->pc = 0x2dee6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294959496)));
    // 0x2dee70: 0x91c5613c  lbu         $a1, 0x613C($t6)
    ctx->pc = 0x2dee70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 24892)));
    // 0x2dee74: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2dee74u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2dee78: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2dee78u;
    // Unhandled opcode: 0x34
    // 0x2dee7c: 0xf1c30128  scd         $v1, 0x128($t6)
    ctx->pc = 0x2dee7cu;
    // Unhandled opcode: 0x3C
    // 0x2dee80: 0x91cbac48  lbu         $t3, -0x53B8($t6)
    ctx->pc = 0x2dee80u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294945864)));
    // 0x2dee84: 0x93c381a8  lbu         $v1, -0x7E58($fp)
    ctx->pc = 0x2dee84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294934952)));
    // 0x2dee88: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2dee88u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2dee8c: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2dee8cu;
    // Unhandled opcode: 0x34
    // 0x2dee90: 0x5bc7096a  .word       0x5BC7096A                   # blezl       $fp, . + 4 + (0x96A << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DEE90u;
    {
        const bool branch_taken_0x2dee90 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2dee90) {
            ctx->pc = 0x2DEE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE90u;
            // 0x2dee94: 0xdd3e2b37  ld          $fp, 0x2B37($t1) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 9), 11063)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E143Cu;
            return;
        }
    }
    ctx->pc = 0x2DEE98u;
    // 0x2dee98: 0x41c3bd68  .word       0x41C3BD68                   # INVALID     $t6, $v1, -0x4298 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dee98u;
    // Unhandled COP0 instruction format: 0xE
    // 0x2dee9c: 0xd11c4e01  lld         $gp, 0x4E01($t0)
    ctx->pc = 0x2dee9cu;
    // Unhandled opcode: 0x34
    // 0x2deea0: 0xd53c4f17  ldc1        $f28, 0x4F17($t1)
    ctx->pc = 0x2deea0u;
    // Unhandled opcode: 0x35
    // 0x2deea4: 0xc1c3a11e  ll          $v1, -0x5EE2($t6)
    ctx->pc = 0x2deea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943006); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2deea8: 0x51c60938  beql        $t6, $a2, . + 4 + (0x938 << 2)
    ctx->pc = 0x2DEEA8u;
    {
        const bool branch_taken_0x2deea8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2deea8) {
            ctx->pc = 0x2DEEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEEA8u;
            // 0x2deeac: 0xd1b3ae00  lld         $s3, -0x5200($t5) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E138Cu;
            return;
        }
    }
    ctx->pc = 0x2DEEB0u;
    // 0x2deeb0: 0xc1c3a11d  ll          $v1, -0x5EE3($t6)
    ctx->pc = 0x2deeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943005); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2deeb4: 0xd3c3ae78  lld         $v1, -0x5188($fp)
    ctx->pc = 0x2deeb4u;
    // Unhandled opcode: 0x34
    // 0x2deeb8: 0xd123ae01  lld         $v1, -0x51FF($t1)
    ctx->pc = 0x2deeb8u;
    // Unhandled opcode: 0x34
    // 0x2deebc: 0xc1c3a11c  ll          $v1, -0x5EE4($t6)
    ctx->pc = 0x2deebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943004); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2deec0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DEEC0u;
    SET_GPR_U32(ctx, 31, 0x2DEEC8u);
    ctx->pc = 0x2DEEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEEC0u;
            // 0x2deec4: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEEC4 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEC8u; }
        if (ctx->pc != 0x2DEEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEC8u; }
        if (ctx->pc != 0x2DEEC8u) { return; }
    }
    ctx->pc = 0x2DEEC8u;
label_2deec8:
    // 0x2deec8: 0xc1c3a168  ll          $v1, -0x5E98($t6)
    ctx->pc = 0x2deec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943080); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2deecc: 0x81c7a128  lb          $a3, -0x5ED8($t6)
    ctx->pc = 0x2deeccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294943016)));
    // 0x2deed0: 0x7c7892c  .word       0x07C7892C                   # INVALID     $fp, $a3, -0x76D4 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2deed0u;
    // Unhandled REGIMM instruction: 0x7
    // 0x2deed4: 0x93c38d28  lbu         $v1, -0x72D8($fp)
    ctx->pc = 0x2deed4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294937896)));
    // 0x2deed8: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2)
    ctx->pc = 0x2DEED8u;
    {
        const bool branch_taken_0x2deed8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 3));
        if (branch_taken_0x2deed8) {
            ctx->pc = 0x2DEEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEED8u;
            // 0x2deedc: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEEDC - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C937Cu;
            return;
        }
    }
    ctx->pc = 0x2DEEE0u;
    // 0x2deee0: 0x93c3c1e8  lbu         $v1, -0x3E18($fp)
    ctx->pc = 0x2deee0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294951400)));
    // 0x2deee4: 0x93c3e188  lbu         $v1, -0x1E78($fp)
    ctx->pc = 0x2deee4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294959496)));
    // 0x2deee8: 0x91c5613c  lbu         $a1, 0x613C($t6)
    ctx->pc = 0x2deee8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 24892)));
    // 0x2deeec: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2deeecu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2deef0: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2deef0u;
    // Unhandled opcode: 0x34
    // 0x2deef4: 0xf1c30128  scd         $v1, 0x128($t6)
    ctx->pc = 0x2deef4u;
    // Unhandled opcode: 0x3C
    // 0x2deef8: 0x91c7ac48  lbu         $a3, -0x53B8($t6)
    ctx->pc = 0x2deef8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294945864)));
    // 0x2deefc: 0x93c381a8  lbu         $v1, -0x7E58($fp)
    ctx->pc = 0x2deefcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294934952)));
    // 0x2def00: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2def00u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2def04: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2def04u;
    // Unhandled opcode: 0x34
    // 0x2def08: 0x5bc7096a  .word       0x5BC7096A                   # blezl       $fp, . + 4 + (0x96A << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DEF08u;
    {
        const bool branch_taken_0x2def08 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2def08) {
            ctx->pc = 0x2DEF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF08u;
            // 0x2def0c: 0xdd3e2b37  ld          $fp, 0x2B37($t1) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 9), 11063)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E14B4u;
            return;
        }
    }
    ctx->pc = 0x2DEF10u;
    // 0x2def10: 0x41c3bd68  .word       0x41C3BD68                   # INVALID     $t6, $v1, -0x4298 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2def10u;
    // Unhandled COP0 instruction format: 0xE
    // 0x2def14: 0xd11c4e01  lld         $gp, 0x4E01($t0)
    ctx->pc = 0x2def14u;
    // Unhandled opcode: 0x34
    // 0x2def18: 0xd53c4f17  ldc1        $f28, 0x4F17($t1)
    ctx->pc = 0x2def18u;
    // Unhandled opcode: 0x35
    // 0x2def1c: 0xc1c3a11e  ll          $v1, -0x5EE2($t6)
    ctx->pc = 0x2def1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943006); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2def20: 0x51c60938  beql        $t6, $a2, . + 4 + (0x938 << 2)
    ctx->pc = 0x2DEF20u;
    {
        const bool branch_taken_0x2def20 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 6));
        if (branch_taken_0x2def20) {
            ctx->pc = 0x2DEF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF20u;
            // 0x2def24: 0xd1b3ae00  lld         $s3, -0x5200($t5) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1404u;
            return;
        }
    }
    ctx->pc = 0x2DEF28u;
    // 0x2def28: 0xc1c3a11d  ll          $v1, -0x5EE3($t6)
    ctx->pc = 0x2def28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943005); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2def2c: 0xd3c3ae78  lld         $v1, -0x5188($fp)
    ctx->pc = 0x2def2cu;
    // Unhandled opcode: 0x34
    // 0x2def30: 0xd123ae01  lld         $v1, -0x51FF($t1)
    ctx->pc = 0x2def30u;
    // Unhandled opcode: 0x34
    // 0x2def34: 0xc1c3a11c  ll          $v1, -0x5EE4($t6)
    ctx->pc = 0x2def34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943004); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2def38: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DEF38u;
    SET_GPR_U32(ctx, 31, 0x2DEF40u);
    ctx->pc = 0x2DEF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF38u;
            // 0x2def3c: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEF3C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF40u; }
        if (ctx->pc != 0x2DEF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF40u; }
        if (ctx->pc != 0x2DEF40u) { return; }
    }
    ctx->pc = 0x2DEF40u;
label_2def40:
    // 0x2def40: 0xc1c3a168  ll          $v1, -0x5E98($t6)
    ctx->pc = 0x2def40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294943080); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2def44: 0x81c7a128  lb          $a3, -0x5ED8($t6)
    ctx->pc = 0x2def44u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294943016)));
    // 0x2def48: 0xbc7892c  j           func_F1E24B0
    ctx->pc = 0x2DEF48u;
    ctx->pc = 0x2DEF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF48u;
            // 0x2def4c: 0x93c38d28  lbu         $v1, -0x72D8($fp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294937896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0xF1E24B0u;
    {
        auto targetFn = runtime->lookupFunction(0xF1E24B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DEF50u;
label_2def50:
    // 0x2def50: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2)
    ctx->pc = 0x2DEF50u;
    {
        const bool branch_taken_0x2def50 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 3));
        if (branch_taken_0x2def50) {
            ctx->pc = 0x2DEF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF50u;
            // 0x2def54: 0x51c3a928  beql        $t6, $v1, . + 4 + (-0x56D8 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DEF54 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C93F4u;
            return;
        }
    }
    ctx->pc = 0x2DEF58u;
    // 0x2def58: 0x93c3c1e8  lbu         $v1, -0x3E18($fp)
    ctx->pc = 0x2def58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294951400)));
    // 0x2def5c: 0x93c3e188  lbu         $v1, -0x1E78($fp)
    ctx->pc = 0x2def5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294959496)));
    // 0x2def60: 0x91c5613c  lbu         $a1, 0x613C($t6)
    ctx->pc = 0x2def60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 24892)));
    // 0x2def64: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2def64u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2def68: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2def68u;
    // Unhandled opcode: 0x34
    // 0x2def6c: 0xf1c30128  scd         $v1, 0x128($t6)
    ctx->pc = 0x2def6cu;
    // Unhandled opcode: 0x3C
    // 0x2def70: 0x91cbac48  lbu         $t3, -0x53B8($t6)
    ctx->pc = 0x2def70u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294945864)));
    // 0x2def74: 0x93c381a8  lbu         $v1, -0x7E58($fp)
    ctx->pc = 0x2def74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294934952)));
    // 0x2def78: 0x91cf2128  lbu         $t7, 0x2128($t6)
    ctx->pc = 0x2def78u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 8488)));
    // 0x2def7c: 0xd1c3a169  lld         $v1, -0x5E97($t6)
    ctx->pc = 0x2def7cu;
    // Unhandled opcode: 0x34
    // 0x2def80: 0x5bc7096a  .word       0x5BC7096A                   # blezl       $fp, . + 4 + (0x96A << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DEF80u;
    {
        const bool branch_taken_0x2def80 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2def80) {
            ctx->pc = 0x2DEF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF80u;
            // 0x2def84: 0xdd3e2b37  ld          $fp, 0x2B37($t1) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 9), 11063)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E152Cu;
            return;
        }
    }
    ctx->pc = 0x2DEF88u;
    // 0x2def88: 0x41c3bd68  .word       0x41C3BD68                   # INVALID     $t6, $v1, -0x4298 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2def88u;
    // Unhandled COP0 instruction format: 0xE
    // 0x2def8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DEF8Cu;
    {
        const bool branch_taken_0x2def8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2def8c) {
            ctx->pc = 0x2DEFBCu;
            goto label_2defbc;
        }
    }
    ctx->pc = 0x2DEF94u;
    // 0x2def94: 0xfd70102a  sd          $s0, 0x102A($t3)
    ctx->pc = 0x2def94u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 4138), GPR_U64(ctx, 16));
    // 0x2def98: 0xffcdd4e2  sd          $t5, -0x2B1E($fp)
    ctx->pc = 0x2def98u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294956258), GPR_U64(ctx, 13));
    // 0x2def9c: 0x8fc76bcd  lw          $a3, 0x6BCD($fp)
    ctx->pc = 0x2def9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27597)));
    // 0x2defa0: 0x2743b5c8  addiu       $v1, $k0, -0x4A38
    ctx->pc = 0x2defa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 26), 4294948296));
    // 0x2defa4: 0x250303f0  addiu       $v1, $t0, 0x3F0
    ctx->pc = 0x2defa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1008));
    // 0x2defa8: 0xdd56611f  ld          $s6, 0x611F($t2)
    ctx->pc = 0x2defa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 10), 24863)));
    // 0x2defac: 0xb5fa16ba  sdr         $k0, 0x16BA($t7)
    ctx->pc = 0x2defacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5818); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2defb0: 0xc7131925  lwc1        $f19, 0x1925($t8)
    ctx->pc = 0x2defb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 6437)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2defb4: 0xb5fa1566  sdr         $k0, 0x1566($t7)
    ctx->pc = 0x2defb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 5478); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2defb8: 0x0  nop
    ctx->pc = 0x2defb8u;
    // NOP
label_2defbc:
    // 0x2defbc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2defbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2defc0: 0x2442efac  addiu       $v0, $v0, -0x1054
    ctx->pc = 0x2defc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963116));
    // 0x2defc4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2defc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2defc8: 0x2484ef8c  addiu       $a0, $a0, -0x1074
    ctx->pc = 0x2defc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963084));
    // 0x2defcc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2defccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2defd0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2defd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2defd4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DEFD4u;
    SET_GPR_U32(ctx, 31, 0x2DEFDCu);
    ctx->pc = 0x2DEFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEFD4u;
            // 0x2defd8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFDCu; }
        if (ctx->pc != 0x2DEFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEFDCu; }
        if (ctx->pc != 0x2DEFDCu) { return; }
    }
    ctx->pc = 0x2DEFDCu;
label_2defdc:
    // 0x2defdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2defdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defe0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2defe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2defe4: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x2defe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2defe8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2defe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2defec: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x2defecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2deff0: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2deff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2deff4: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x2deff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2deff8: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x2deff8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2deffc: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x2deffcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2df000: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2df000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2df004: 0xc7b60128  lwc1        $f22, 0x128($sp)
    ctx->pc = 0x2df004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2df008: 0xc7b50120  lwc1        $f21, 0x120($sp)
    ctx->pc = 0x2df008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2df00c: 0xc7b40118  lwc1        $f20, 0x118($sp)
    ctx->pc = 0x2df00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2df010: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF010u;
            // 0x2df014: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF018u;
label_2df018:
    // 0x2df018: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2df018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2df01c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2df01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2df020: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2df020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2df024: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2df024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2df028: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2df028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2df02c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2df02cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2df030: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2df030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2df034: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2df034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2df038: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2df038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2df03c: 0x2463f084  addiu       $v1, $v1, -0xF7C
    ctx->pc = 0x2df03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963332));
    // 0x2df040: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2df040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2df044: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF044u;
    {
        const bool branch_taken_0x2df044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df044) {
            ctx->pc = 0x2DF064u;
            goto label_2df064;
        }
    }
    ctx->pc = 0x2DF04Cu;
    // 0x2df04c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2df04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
label_2df050:
    // 0x2df050: 0x2484f098  addiu       $a0, $a0, -0xF68
    ctx->pc = 0x2df050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963352));
label_2df054:
    // 0x2df054: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2df054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2df058: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2df058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2df05c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DF05Cu;
    SET_GPR_U32(ctx, 31, 0x2DF064u);
    ctx->pc = 0x2DF060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF05Cu;
            // 0x2df060: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF064u; }
        if (ctx->pc != 0x2DF064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF064u; }
        if (ctx->pc != 0x2DF064u) { return; }
    }
    ctx->pc = 0x2DF064u;
label_2df064:
    // 0x2df064: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DF064u;
    {
        const bool branch_taken_0x2df064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df064) {
            ctx->pc = 0x2DF098u;
            goto label_2df098;
        }
    }
    ctx->pc = 0x2DF06Cu;
    // 0x2df06c: 0x87b6f623  lh          $s6, -0x9DD($sp)
    ctx->pc = 0x2df06cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4294964771)));
    // 0x2df070: 0xa22e4059  sb          $t6, 0x4059($s1)
    ctx->pc = 0x2df070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16473), (uint8_t)GPR_U32(ctx, 14));
    // 0x2df074: 0x8ea88425  lw          $t0, -0x7BDB($s5)
    ctx->pc = 0x2df074u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935589)));
    // 0x2df078: 0x8fa7072d  lw          $a3, 0x72D($sp)
    ctx->pc = 0x2df078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1837)));
    // 0x2df07c: 0xffdbfba2  sd          $k1, -0x45E($fp)
    ctx->pc = 0x2df07cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294966178), GPR_U64(ctx, 27));
    // 0x2df080: 0xc6ab03b  jal         func_1AAC0EC
    ctx->pc = 0x2DF080u;
    SET_GPR_U32(ctx, 31, 0x2DF088u);
    ctx->pc = 0x1AAC0ECu;
    {
        auto targetFn = runtime->lookupFunction(0x1AAC0ECu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF088u; }
        if (ctx->pc != 0x2DF088u) { return; }
    }
    ctx->pc = 0x2DF088u;
label_2df088:
    // 0x2df088: 0xc92da347  lwc2        $13, -0x5CB9($t1)
    ctx->pc = 0x2df088u;
    // Unhandled opcode: 0x32
    // 0x2df08c: 0xc7131c7e  lwc1        $f19, 0x1C7E($t8)
    ctx->pc = 0x2df08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 7294)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2df090: 0xc92da3f7  lwc2        $13, -0x5C09($t1)
    ctx->pc = 0x2df090u;
    // Unhandled opcode: 0x32
    // 0x2df094: 0x0  nop
    ctx->pc = 0x2df094u;
    // NOP
label_2df098:
    // 0x2df098: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2df098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2df09c: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2df09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2df0a0: 0x89f4fd13  lwl         $s4, -0x2ED($t7)
    ctx->pc = 0x2df0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294966547); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 20) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 20, (int32_t)merged); }
    // 0x2df0a4: 0x4954ff17  .word       0x4954FF17                   # INVALID     $t2, $s4, -0xE9 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2df0a4u;
    // Unhandled COP2 format: 0xA
    // 0x2df0a8: 0x961b1d57  lhu         $k1, 0x1D57($s0)
    ctx->pc = 0x2df0a8u;
    SET_GPR_U32(ctx, 27, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7511)));
    // 0x2df0ac: 0xf21ddd0b  scd         $sp, -0x22F5($s0)
    ctx->pc = 0x2df0acu;
    // Unhandled opcode: 0x3C
    // 0x2df0b0: 0xd61f1d8b  ldc1        $f31, 0x1D8B($s0)
    ctx->pc = 0x2df0b0u;
    // Unhandled opcode: 0x35
    // 0x2df0b4: 0x9fe3f16  j           func_7F8FC58
    ctx->pc = 0x2DF0B4u;
    ctx->pc = 0x2DF0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0B4u;
            // 0x2df0b8: 0x95aa383  j           func_56A8E0C (Delay Slot)
        // J 0x56A8E0C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7F8FC58u;
    {
        auto targetFn = runtime->lookupFunction(0x7F8FC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF0BCu;
label_2df0bc:
    // 0x2df0bc: 0xe7fdfd17  swc1        $f29, -0x2E9($ra)
    ctx->pc = 0x2df0bcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 31), 4294966551), bits); }
label_2df0c0:
    // 0x2df0c0: 0x9fe5f16  j           func_7F97C58
    ctx->pc = 0x2DF0C0u;
    ctx->pc = 0x2DF0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0C0u;
            // 0x2df0c4: 0x95aed03  j           func_56BB40C (Delay Slot)
        // J 0x56BB40C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7F97C58u;
    {
        auto targetFn = runtime->lookupFunction(0x7F97C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF0C8u;
label_2df0c8:
    // 0x2df0c8: 0xf5fddd17  sdc1        $f29, -0x22E9($t7)
    ctx->pc = 0x2df0c8u;
    // Unhandled opcode: 0x3D
label_2df0cc:
    // 0x2df0cc: 0x9fe7f16  j           func_7F9FC58
    ctx->pc = 0x2DF0CCu;
    ctx->pc = 0x2DF0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0CCu;
            // 0x2df0d0: 0xe9fefd57  swc2        $30, -0x2A9($t7) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
    ctx->pc = 0x7F9FC58u;
    {
        auto targetFn = runtime->lookupFunction(0x7F9FC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF0D4u;
label_2df0d4:
    // 0x2df0d4: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DF0D4u;
    ctx->pc = 0x2DF0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0D4u;
            // 0x2df0d8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    {
        auto targetFn = runtime->lookupFunction(0x7E3B45Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF0DCu;
label_2df0dc:
    // 0x2df0dc: 0x9f8ed17  j           func_7E3B45C
label_2df0e0:
    if (ctx->pc == 0x2DF0E0u) {
        ctx->pc = 0x2DF0E0u;
            // 0x2df0e0: 0x9f0ff16  j           func_7C3FC58 (Delay Slot)
        // J 0x7C3FC58 - Handled by branch logic
        ctx->pc = 0x2DF0E4u;
        goto label_2df0e4;
    }
    ctx->pc = 0x2DF0DCu;
    ctx->pc = 0x2DF0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0DCu;
            // 0x2df0e0: 0x9f0ff16  j           func_7C3FC58 (Delay Slot)
        // J 0x7C3FC58 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    {
        auto targetFn = runtime->lookupFunction(0x7E3B45Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF0E4u;
label_2df0e4:
    // 0x2df0e4: 0x978f716  j           func_5E3DC58
label_2df0e8:
    if (ctx->pc == 0x2DF0E8u) {
        ctx->pc = 0x2DF0E8u;
            // 0x2df0e8: 0x9786453  j           func_5E1914C (Delay Slot)
        // J 0x5E1914C - Handled by branch logic
        ctx->pc = 0x2DF0ECu;
        goto label_2df0ec;
    }
    ctx->pc = 0x2DF0E4u;
    ctx->pc = 0x2DF0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0E4u;
            // 0x2df0e8: 0x9786453  j           func_5E1914C (Delay Slot)
        // J 0x5E1914C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x5E3DC58u;
    {
        auto targetFn = runtime->lookupFunction(0x5E3DC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF0ECu;
label_2df0ec:
    // 0x2df0ec: 0x89f8f553  lwl         $t8, -0xAAD($t7)
    ctx->pc = 0x2df0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294964563); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
label_2df0f0:
    // 0x2df0f0: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2DF0F0u;
    ctx->pc = 0x2DF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0F0u;
            // 0x2df0f4: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
        // J 0x7E3B45C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    {
        auto targetFn = runtime->lookupFunction(0x7E3B45Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF0F8u;
label_2df0f8:
    // 0x2df0f8: 0x9e0f55a  j           func_783D568
label_2df0fc:
    if (ctx->pc == 0x2DF0FCu) {
        ctx->pc = 0x2DF0FCu;
            // 0x2df0fc: 0x9ecf55e  j           func_7B3D578 (Delay Slot)
        // J 0x7B3D578 - Handled by branch logic
        ctx->pc = 0x2DF100u;
        goto label_2df100;
    }
    ctx->pc = 0x2DF0F8u;
    ctx->pc = 0x2DF0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0F8u;
            // 0x2df0fc: 0x9ecf55e  j           func_7B3D578 (Delay Slot)
        // J 0x7B3D578 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x783D568u;
    {
        auto targetFn = runtime->lookupFunction(0x783D568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF100u;
label_2df100:
    // 0x2df100: 0x93a750e  j           func_4E9D438
label_2df104:
    if (ctx->pc == 0x2DF104u) {
        ctx->pc = 0x2DF104u;
            // 0x2df104: 0x878f506  j           func_1E3D418 (Delay Slot)
        // J 0x1E3D418 - Handled by branch logic
        ctx->pc = 0x2DF108u;
        goto label_2df108;
    }
    ctx->pc = 0x2DF100u;
    ctx->pc = 0x2DF104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF100u;
            // 0x2df104: 0x878f506  j           func_1E3D418 (Delay Slot)
        // J 0x1E3D418 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E9D438u;
    {
        auto targetFn = runtime->lookupFunction(0x4E9D438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF108u;
label_2df108:
    // 0x2df108: 0x9f0dd16  j           func_7C37458
label_2df10c:
    if (ctx->pc == 0x2DF10Cu) {
        ctx->pc = 0x2DF10Cu;
            // 0x2df10c: 0x9f8f902  j           func_7E3E408 (Delay Slot)
        // J 0x7E3E408 - Handled by branch logic
        ctx->pc = 0x2DF110u;
        goto label_2df110;
    }
    ctx->pc = 0x2DF108u;
    ctx->pc = 0x2DF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF108u;
            // 0x2df10c: 0x9f8f902  j           func_7E3E408 (Delay Slot)
        // J 0x7E3E408 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7C37458u;
    {
        auto targetFn = runtime->lookupFunction(0x7C37458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF110u;
label_2df110:
    // 0x2df110: 0xa8f4f517  swl         $s4, -0xAE9($a3)
    ctx->pc = 0x2df110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294964503); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2df114:
    // 0x2df114: 0x9e8f552  j           func_7A3D548
    ctx->pc = 0x2DF114u;
    ctx->pc = 0x2DF118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF114u;
            // 0x2df118: 0x878f506  j           func_1E3D418 (Delay Slot)
        // J 0x1E3D418 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7A3D548u;
    {
        auto targetFn = runtime->lookupFunction(0x7A3D548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF11Cu;
label_2df11c:
    // 0x2df11c: 0x9f0dd16  j           func_7C37458
label_2df120:
    if (ctx->pc == 0x2DF120u) {
        ctx->pc = 0x2DF120u;
            // 0x2df120: 0x97cac43  j           func_5F2B10C (Delay Slot)
        // J 0x5F2B10C - Handled by branch logic
        ctx->pc = 0x2DF124u;
        goto label_2df124;
    }
    ctx->pc = 0x2DF11Cu;
    ctx->pc = 0x2DF120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF11Cu;
            // 0x2df120: 0x97cac43  j           func_5F2B10C (Delay Slot)
        // J 0x5F2B10C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7C37458u;
    {
        auto targetFn = runtime->lookupFunction(0x7C37458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF124u;
label_2df124:
    // 0x2df124: 0x565b1c87  bnel        $s2, $k1, . + 4 + (0x1C87 << 2)
label_2df128:
    if (ctx->pc == 0x2DF128u) {
        ctx->pc = 0x2DF128u;
            // 0x2df128: 0x89f0ef15  lwl         $s0, -0x10EB($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294962965); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
        ctx->pc = 0x2DF12Cu;
        goto label_fallthrough_0x2df124;
    }
    ctx->pc = 0x2DF124u;
    {
        const bool branch_taken_0x2df124 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 27));
        if (branch_taken_0x2df124) {
            ctx->pc = 0x2DF128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF124u;
            // 0x2df128: 0x89f0ef15  lwl         $s0, -0x10EB($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294962965); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E6344u;
            return;
        }
    }
label_fallthrough_0x2df124:
    ctx->pc = 0x2DF12Cu;
    // 0x2df12c: 0x9586d03  j           func_561B40C
    ctx->pc = 0x2DF12Cu;
    ctx->pc = 0x2DF130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF12Cu;
            // 0x2df130: 0x9584383  j           func_5610E0C (Delay Slot)
        // J 0x5610E0C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x561B40Cu;
    {
        auto targetFn = runtime->lookupFunction(0x561B40Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF134u;
label_2df134:
    // 0x2df134: 0x88e0fd17  lwl         $zero, -0x2E9($a3)
    ctx->pc = 0x2df134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294966551); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_2df138:
    // 0x2df138: 0xc0b93ea  jal         func_2E4FA8
    ctx->pc = 0x2DF138u;
    SET_GPR_U32(ctx, 31, 0x2DF140u);
    ctx->pc = 0x2DF13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF138u;
            // 0x2df13c: 0x95aed03  j           func_56BB40C (Delay Slot)
        // J 0x56BB40C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FA8u;
    if (runtime->hasFunction(0x2E4FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2E4FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF140u; }
        if (ctx->pc != 0x2DF140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4FA8_0x2e4fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF140u; }
        if (ctx->pc != 0x2DF140u) { return; }
    }
    ctx->pc = 0x2DF140u;
label_2df140:
    // 0x2df140: 0x90571d0b  lbu         $s7, 0x1D0B($v0)
    ctx->pc = 0x2df140u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7435)));
label_2df144:
    // 0x2df144: 0x9d2ec9b  j           func_74BB26C
    ctx->pc = 0x2DF144u;
    ctx->pc = 0x2DF148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF144u;
            // 0x2df148: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2DF148 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x74BB26Cu;
    {
        auto targetFn = runtime->lookupFunction(0x74BB26Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DF14Cu;
    // 0x2df14c: 0x0  nop
    ctx->pc = 0x2df14cu;
    // NOP
label_2df150:
    // 0x2df150: 0x868ed503  lh          $t6, -0x2AFD($s4)
    ctx->pc = 0x2df150u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294956291)));
    // 0x2df154: 0x87ca2323  lh          $t2, 0x2323($fp)
    ctx->pc = 0x2df154u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8995)));
    // 0x2df158: 0xc471abd  jal         func_11C6AF4
    ctx->pc = 0x2DF158u;
    SET_GPR_U32(ctx, 31, 0x2DF160u);
    ctx->pc = 0x2DF15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF158u;
            // 0x2df15c: 0x8ff6f6cd  lw          $s6, -0x933($ra) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 31), 4294964941)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6AF4u;
    {
        auto targetFn = runtime->lookupFunction(0x11C6AF4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF160u; }
        if (ctx->pc != 0x2DF160u) { return; }
    }
    ctx->pc = 0x2DF160u;
label_2df160:
    // 0x2df160: 0x8453f30b  lh          $s3, -0xCF5($v0)
    ctx->pc = 0x2df160u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963979)));
    // 0x2df164: 0xa34638d1  sb          $a2, 0x38D1($k0)
    ctx->pc = 0x2df164u;
    WRITE8(ADD32(GPR_U32(ctx, 26), 14545), (uint8_t)GPR_U32(ctx, 6));
    // 0x2df168: 0xc92d743a  lwc2        $13, 0x743A($t1)
    ctx->pc = 0x2df168u;
    // Unhandled opcode: 0x32
    // 0x2df16c: 0xc7131c7f  lwc1        $f19, 0x1C7F($t8)
    ctx->pc = 0x2df16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 7295)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2df170: 0xc92d748a  lwc2        $13, 0x748A($t1)
    ctx->pc = 0x2df170u;
    // Unhandled opcode: 0x32
    // 0x2df174: 0x0  nop
    ctx->pc = 0x2df174u;
    // NOP
label_2df178:
    // 0x2df178: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2df178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2df17c: 0x2442f168  addiu       $v0, $v0, -0xE98
    ctx->pc = 0x2df17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963560));
    // 0x2df180: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2df180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2df184: 0x2484f148  addiu       $a0, $a0, -0xEB8
    ctx->pc = 0x2df184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963528));
    // 0x2df188: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2df188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df18c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2df18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2df190: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DF190u;
    SET_GPR_U32(ctx, 31, 0x2DF198u);
    ctx->pc = 0x2DF194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF190u;
            // 0x2df194: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF198u; }
        if (ctx->pc != 0x2DF198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF198u; }
        if (ctx->pc != 0x2DF198u) { return; }
    }
    ctx->pc = 0x2DF198u;
label_2df198:
    // 0x2df198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df19c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2df19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2df1a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2df1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df1a4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2df1a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df1a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2df1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2df1ac: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2df1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2df1b0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2df1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2df1b4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2df1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2df1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF1B8u;
            // 0x2df1bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF1C0u;
    ctx->pc = 0x2df1c0u;
}
