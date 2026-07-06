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

// Function: sub_0027D3F8
// Address: 0x27d3f8 - 0x27e438
void sub_0027D3F8_0x27d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D3F8_0x27d3f8");
#endif

    switch (ctx->pc) {
        case 0x27d468u: goto label_27d468;
        case 0x27d488u: goto label_27d488;
        case 0x27d4d0u: goto label_27d4d0;
        case 0x27d528u: goto label_27d528;
        case 0x27d530u: goto label_27d530;
        case 0x27d540u: goto label_27d540;
        case 0x27d554u: goto label_27d554;
        case 0x27d55cu: goto label_27d55c;
        case 0x27d5b0u: goto label_27d5b0;
        case 0x27d5c0u: goto label_27d5c0;
        case 0x27d5d0u: goto label_27d5d0;
        case 0x27d5d8u: goto label_27d5d8;
        case 0x27d610u: goto label_27d610;
        case 0x27d620u: goto label_27d620;
        case 0x27d630u: goto label_27d630;
        case 0x27d638u: goto label_27d638;
        case 0x27d6b0u: goto label_27d6b0;
        case 0x27d6c8u: goto label_27d6c8;
        case 0x27d6d8u: goto label_27d6d8;
        case 0x27d6e0u: goto label_27d6e0;
        case 0x27d750u: goto label_27d750;
        case 0x27d758u: goto label_27d758;
        case 0x27d7c8u: goto label_27d7c8;
        case 0x27d7d0u: goto label_27d7d0;
        case 0x27d840u: goto label_27d840;
        case 0x27d848u: goto label_27d848;
        case 0x27d8c0u: goto label_27d8c0;
        case 0x27d8c8u: goto label_27d8c8;
        case 0x27d978u: goto label_27d978;
        case 0x27d988u: goto label_27d988;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9b0u: goto label_27d9b0;
        case 0x27d9c8u: goto label_27d9c8;
        case 0x27d9d8u: goto label_27d9d8;
        case 0x27da18u: goto label_27da18;
        case 0x27da28u: goto label_27da28;
        case 0x27da50u: goto label_27da50;
        case 0x27da80u: goto label_27da80;
        case 0x27db04u: goto label_27db04;
        case 0x27db40u: goto label_27db40;
        case 0x27dbd4u: goto label_27dbd4;
        case 0x27dc3cu: goto label_27dc3c;
        case 0x27dc7cu: goto label_27dc7c;
        case 0x27dcccu: goto label_27dccc;
        case 0x27dd08u: goto label_27dd08;
        case 0x27dd18u: goto label_27dd18;
        case 0x27dd28u: goto label_27dd28;
        case 0x27dd38u: goto label_27dd38;
        case 0x27dd48u: goto label_27dd48;
        case 0x27dd58u: goto label_27dd58;
        case 0x27dd68u: goto label_27dd68;
        case 0x27dd78u: goto label_27dd78;
        case 0x27dd88u: goto label_27dd88;
        case 0x27dd98u: goto label_27dd98;
        case 0x27dda8u: goto label_27dda8;
        case 0x27ddb8u: goto label_27ddb8;
        case 0x27ddc8u: goto label_27ddc8;
        case 0x27ddf8u: goto label_27ddf8;
        case 0x27de10u: goto label_27de10;
        case 0x27de40u: goto label_27de40;
        case 0x27de90u: goto label_27de90;
        case 0x27dea8u: goto label_27dea8;
        case 0x27df40u: goto label_27df40;
        case 0x27df50u: goto label_27df50;
        case 0x27df60u: goto label_27df60;
        case 0x27df70u: goto label_27df70;
        case 0x27df80u: goto label_27df80;
        case 0x27df98u: goto label_27df98;
        case 0x27dfa8u: goto label_27dfa8;
        case 0x27dfb8u: goto label_27dfb8;
        case 0x27dfc8u: goto label_27dfc8;
        case 0x27dfd8u: goto label_27dfd8;
        case 0x27dfe8u: goto label_27dfe8;
        case 0x27dff8u: goto label_27dff8;
        case 0x27e008u: goto label_27e008;
        case 0x27e018u: goto label_27e018;
        case 0x27e028u: goto label_27e028;
        case 0x27e038u: goto label_27e038;
        case 0x27e048u: goto label_27e048;
        case 0x27e058u: goto label_27e058;
        case 0x27e068u: goto label_27e068;
        case 0x27e078u: goto label_27e078;
        case 0x27e088u: goto label_27e088;
        case 0x27e098u: goto label_27e098;
        case 0x27e0a8u: goto label_27e0a8;
        case 0x27e0b8u: goto label_27e0b8;
        case 0x27e0ccu: goto label_27e0cc;
        case 0x27e0e8u: goto label_27e0e8;
        case 0x27e0f8u: goto label_27e0f8;
        case 0x27e130u: goto label_27e130;
        case 0x27e140u: goto label_27e140;
        case 0x27e150u: goto label_27e150;
        case 0x27e160u: goto label_27e160;
        case 0x27e170u: goto label_27e170;
        case 0x27e180u: goto label_27e180;
        case 0x27e190u: goto label_27e190;
        case 0x27e1a0u: goto label_27e1a0;
        case 0x27e1b0u: goto label_27e1b0;
        case 0x27e1c0u: goto label_27e1c0;
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1e0u: goto label_27e1e0;
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e200u: goto label_27e200;
        case 0x27e210u: goto label_27e210;
        case 0x27e220u: goto label_27e220;
        case 0x27e230u: goto label_27e230;
        case 0x27e240u: goto label_27e240;
        case 0x27e250u: goto label_27e250;
        case 0x27e260u: goto label_27e260;
        case 0x27e270u: goto label_27e270;
        case 0x27e280u: goto label_27e280;
        case 0x27e290u: goto label_27e290;
        case 0x27e2a0u: goto label_27e2a0;
        case 0x27e2b0u: goto label_27e2b0;
        case 0x27e2c0u: goto label_27e2c0;
        case 0x27e2d0u: goto label_27e2d0;
        case 0x27e2e0u: goto label_27e2e0;
        case 0x27e320u: goto label_27e320;
        case 0x27e330u: goto label_27e330;
        case 0x27e384u: goto label_27e384;
        case 0x27e390u: goto label_27e390;
        case 0x27e3e8u: goto label_27e3e8;
        case 0x27e3f8u: goto label_27e3f8;
        default: break;
    }

    ctx->pc = 0x27d3f8u;

    // 0x27d3f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27d3fc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x27d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x27d400: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x27d400u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27d404: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x27d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x27d408: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27d408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d40c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27d40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27d410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27d410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d414: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27d418: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x27d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x27d41c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27d420: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x27d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x27d424: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x27d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x27d428: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27d42c: 0xe7b60078  swc1        $f22, 0x78($sp)
    ctx->pc = 0x27d42cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27d430: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x27d430u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27d434: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x27d434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27d438: 0xafb70014  sw          $s7, 0x14($sp)
    ctx->pc = 0x27d438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 23));
    // 0x27d43c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27d440: 0x2463d488  addiu       $v1, $v1, -0x2B78
    ctx->pc = 0x27d440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956168));
    // 0x27d444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d448: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D448u;
    {
        const bool branch_taken_0x27d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d448) {
            ctx->pc = 0x27D468u;
            goto label_27d468;
        }
    }
    ctx->pc = 0x27D450u;
    // 0x27d450: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27d450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27d454: 0x2484d49c  addiu       $a0, $a0, -0x2B64
    ctx->pc = 0x27d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956188));
    // 0x27d458: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27d458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27d45c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27d460: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27D460u;
    SET_GPR_U32(ctx, 31, 0x27D468u);
    ctx->pc = 0x27D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D460u;
    // 0x27d464: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27D460u, 0x27D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D468u;
label_27d468:
    // 0x27d468: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27D468u;
    {
        const bool branch_taken_0x27d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d468) {
            ctx->pc = 0x27D49Cu;
            goto label_27d49c;
        }
    }
    ctx->pc = 0x27D470u;
    // 0x27d470: 0x4b7820  add         $t7, $v0, $t3
    ctx->pc = 0x27d470u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x27d474: 0xfc629c22  sd          $v0, -0x63DE($v1)
    ctx->pc = 0x27d474u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294941730), GPR_U64(ctx, 2));
    // 0x27d478: 0xfd48537a  sd          $t0, 0x537A($t2)
    ctx->pc = 0x27d478u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 21370), GPR_U64(ctx, 8));
    // 0x27d47c: 0x8f152e7d  lw          $s5, 0x2E7D($t8)
    ctx->pc = 0x27d47cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 11901)));
    // 0x27d480: 0xc46ee4e  jal         func_11BB938
    ctx->pc = 0x27D480u;
    SET_GPR_U32(ctx, 31, 0x27D488u);
    ctx->pc = 0x27D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D480u;
    // 0x27d484: 0xdeee5957  ld          $t6, 0x5957($s7) (Delay Slot)
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 23), 22871)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BB938u, 0x27D480u, 0x27D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D488u;
label_27d488:
    // 0x27d488: 0x0  nop
    ctx->pc = 0x27d488u;
    // NOP
    // 0x27d48c: 0xb11f6f3e  sdl         $ra, 0x6F3E($t0)
    ctx->pc = 0x27d48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 28478); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 31); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27d490: 0x980b35fa  lwr         $t3, 0x35FA($zero)
    ctx->pc = 0x27d490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13818); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x27d494: 0xb11f6f0a  sdl         $ra, 0x6F0A($t0)
    ctx->pc = 0x27d494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 28426); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 31); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27d498: 0x0  nop
    ctx->pc = 0x27d498u;
    // NOP
label_27d49c:
    // 0x27d49c: 0x843b4421  lh          $k1, 0x4421($at)
    ctx->pc = 0x27d49cu;
    SET_GPR_S32(ctx, 27, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 17441)));
    // 0x27d4a0: 0x463b4421  .word       0x463B4421                   # INVALID     $s1, $k1, 0x4421 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27d4a0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x27D4A0 raw=0x463B4421");
    // 0x27d4a4: 0x463b4421  .word       0x463B4421                   # INVALID     $s1, $k1, 0x4421 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27d4a4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x27D4A4 raw=0x463B4421");
    // 0x27d4a8: 0x463b4421  .word       0x463B4421                   # INVALID     $s1, $k1, 0x4421 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27d4a8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x27D4A8 raw=0x463B4421");
    // 0x27d4ac: 0x4cb1cd2b  .word       0x4CB1CD2B                   # INVALID     $a1, $s1, -0x32D5 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27d4acu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x27D4AC raw=0x4CB1CD2B");
    // 0x27d4b0: 0xa63b4121  sh          $k1, 0x4121($s1)
    ctx->pc = 0x27d4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16673), (uint16_t)GPR_U32(ctx, 27));
    // 0x27d4b4: 0x463b4421  .word       0x463B4421                   # INVALID     $s1, $k1, 0x4421 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27d4b4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x27D4B4 raw=0x463B4421");
    // 0x27d4b8: 0x463b4421  .word       0x463B4421                   # INVALID     $s1, $k1, 0x4421 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27d4b8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x27D4B8 raw=0x463B4421");
    // 0x27d4bc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27d4c0: 0x24a5d4ac  addiu       $a1, $a1, -0x2B54
    ctx->pc = 0x27d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956204));
    // 0x27d4c4: 0xe62f4145  swc1        $f15, 0x4145($s1)
    ctx->pc = 0x27d4c4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16709), bits); }
    // 0x27d4c8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x27D4C8u;
    SET_GPR_U32(ctx, 31, 0x27D4D0u);
    ctx->pc = 0x27D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4C8u;
    // 0x27d4cc: 0xe23b84a1  sc          $k1, -0x7B5F($s1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294935713); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 27)); SET_GPR_S32(ctx, 27, 1); } else { SET_GPR_S32(ctx, 27, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x27D4C8u, 0x27D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4D0u;
label_27d4d0:
    // 0x27d4d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27D4D0u;
    {
        const bool branch_taken_0x27d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4d0) {
            ctx->pc = 0x27D500u;
            goto label_27d500;
        }
    }
    ctx->pc = 0x27D4D8u;
    // 0x27d4d8: 0x8d57937d  lw          $s7, -0x6C83($t2)
    ctx->pc = 0x27d4d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294939517)));
    // 0x27d4dc: 0x847f9b2b  lh          $ra, -0x64D5($v1)
    ctx->pc = 0x27d4dcu;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294941483)));
    // 0x27d4e0: 0x8f820175  lw          $v0, 0x175($gp)
    ctx->pc = 0x27d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 373)));
    // 0x27d4e4: 0x11c5820  add         $t3, $t0, $gp
    ctx->pc = 0x27d4e4u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 28);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x27d4e8: 0x256ad1d0  addiu       $t2, $t3, -0x2E30
    ctx->pc = 0x27d4e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955472));
    // 0x27d4ec: 0xffc24d32  sd          $v0, 0x4D32($fp)
    ctx->pc = 0x27d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 19762), GPR_U64(ctx, 2));
    // 0x27d4f0: 0xb11f6e3f  sdl         $ra, 0x6E3F($t0)
    ctx->pc = 0x27d4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 28223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 31); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27d4f4: 0x980b35fb  lwr         $t3, 0x35FB($zero)
    ctx->pc = 0x27d4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 13819); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x27d4f8: 0xb11f6e0b  sdl         $ra, 0x6E0B($t0)
    ctx->pc = 0x27d4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 28171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 31); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27d4fc: 0x0  nop
    ctx->pc = 0x27d4fcu;
    // NOP
label_27d500:
    // 0x27d500: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27d504: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x27d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x27d508: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27d508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27d50c: 0x2484d4d0  addiu       $a0, $a0, -0x2B30
    ctx->pc = 0x27d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956240));
    // 0x27d510: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27d510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27d514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27d514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d518: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27d518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27d51c: 0x2413fda6  addiu       $s3, $zero, -0x25A
    ctx->pc = 0x27d51cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966694));
    // 0x27d520: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27D520u;
    SET_GPR_U32(ctx, 31, 0x27D528u);
    ctx->pc = 0x27D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D520u;
    // 0x27d524: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27D520u, 0x27D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D528u;
label_27d528:
    // 0x27d528: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x27d528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x27d52c: 0x0  nop
    ctx->pc = 0x27d52cu;
    // NOP
label_27d530:
    // 0x27d530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d534: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d538: 0xc0bf210  jal         func_2FC840
    ctx->pc = 0x27D538u;
    SET_GPR_U32(ctx, 31, 0x27D540u);
    ctx->pc = 0x27D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D538u;
    // 0x27d53c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC840u, 0x27D538u, 0x27D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D540u;
label_27d540:
    // 0x27d540: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x27d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x27d544: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D544u;
    {
        const bool branch_taken_0x27d544 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D544u;
        // 0x27d548: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d544) {
            ctx->pc = 0x27D568u;
            goto label_27d568;
        }
    }
    ctx->pc = 0x27D54Cu;
    // 0x27d54c: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27D54Cu;
    SET_GPR_U32(ctx, 31, 0x27D554u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27D54Cu, 0x27D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D554u;
label_27d554:
    // 0x27d554: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27D554u;
    SET_GPR_U32(ctx, 31, 0x27D55Cu);
    ctx->pc = 0x27D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D554u;
    // 0x27d558: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27D554u, 0x27D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D55Cu;
label_27d55c:
    // 0x27d55c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D55Cu;
    {
        const bool branch_taken_0x27d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D55Cu;
        // 0x27d560: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d55c) {
            ctx->pc = 0x27D578u;
            goto label_27d578;
        }
    }
    ctx->pc = 0x27D564u;
    // 0x27d564: 0x0  nop
    ctx->pc = 0x27d564u;
    // NOP
label_27d568:
    // 0x27d568: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x27d568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27d56c: 0x83a20010  lb          $v0, 0x10($sp)
    ctx->pc = 0x27d56cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d570: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x27d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x27d574: 0x262880b  movn        $s1, $s3, $v0
    ctx->pc = 0x27d574u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
label_27d578:
    // 0x27d578: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x27d578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x27d57c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D57Cu;
    {
        const bool branch_taken_0x27d57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d57c) {
            ctx->pc = 0x27D58Cu;
            goto label_27d58c;
        }
    }
    ctx->pc = 0x27D584u;
    // 0x27d584: 0x621ffea  bgez        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x27D584u;
    {
        const bool branch_taken_0x27d584 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D584u;
        // 0x27d588: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d584) {
            ctx->pc = 0x27D530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d530;
        }
    }
    ctx->pc = 0x27D58Cu;
label_27d58c:
    // 0x27d58c: 0x6200066  bltz        $s1, . + 4 + (0x66 << 2)
    ctx->pc = 0x27D58Cu;
    {
        const bool branch_taken_0x27d58c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x27D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D58Cu;
        // 0x27d590: 0x83a30010  lb          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d58c) {
            ctx->pc = 0x27D728u;
            goto label_27d728;
        }
    }
    ctx->pc = 0x27D594u;
    // 0x27d594: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x27d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x27d598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d59c: 0x9042b7c8  lbu         $v0, -0x4838($v0)
    ctx->pc = 0x27d59cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948808)));
    // 0x27d5a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27d5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x27d5a4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27D5A4u;
    {
        const bool branch_taken_0x27d5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5A4u;
        // 0x27d5a8: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5a4) {
            ctx->pc = 0x27D600u;
            goto label_27d600;
        }
    }
    ctx->pc = 0x27D5ACu;
    // 0x27d5ac: 0x0  nop
    ctx->pc = 0x27d5acu;
    // NOP
label_27d5b0:
    // 0x27d5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d5b8: 0xc0bf210  jal         func_2FC840
    ctx->pc = 0x27D5B8u;
    SET_GPR_U32(ctx, 31, 0x27D5C0u);
    ctx->pc = 0x27D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5B8u;
    // 0x27d5bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC840u, 0x27D5B8u, 0x27D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5C0u;
label_27d5c0:
    // 0x27d5c0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D5C0u;
    {
        const bool branch_taken_0x27d5c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5C0u;
        // 0x27d5c4: 0x83a30010  lb          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5c0) {
            ctx->pc = 0x27D5E0u;
            goto label_27d5e0;
        }
    }
    ctx->pc = 0x27D5C8u;
    // 0x27d5c8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27D5C8u;
    SET_GPR_U32(ctx, 31, 0x27D5D0u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27D5C8u, 0x27D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5D0u;
label_27d5d0:
    // 0x27d5d0: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27D5D0u;
    SET_GPR_U32(ctx, 31, 0x27D5D8u);
    ctx->pc = 0x27D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5D0u;
    // 0x27d5d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27D5D0u, 0x27D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5D8u;
label_27d5d8:
    // 0x27d5d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27d5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5dc: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x27d5dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_27d5e0:
    // 0x27d5e0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x27d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x27d5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d5e8: 0x9042b7c8  lbu         $v0, -0x4838($v0)
    ctx->pc = 0x27d5e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948808)));
    // 0x27d5ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x27d5f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D5F0u;
    {
        const bool branch_taken_0x27d5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d5f0) {
            ctx->pc = 0x27D600u;
            goto label_27d600;
        }
    }
    ctx->pc = 0x27D5F8u;
    // 0x27d5f8: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27D5F8u;
    {
        const bool branch_taken_0x27d5f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5F8u;
        // 0x27d5fc: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5f8) {
            ctx->pc = 0x27D5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d5b0;
        }
    }
    ctx->pc = 0x27D600u;
label_27d600:
    // 0x27d600: 0x6200049  bltz        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x27D600u;
    {
        const bool branch_taken_0x27d600 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x27D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D600u;
        // 0x27d604: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d600) {
            ctx->pc = 0x27D728u;
            goto label_27d728;
        }
    }
    ctx->pc = 0x27D608u;
    // 0x27d608: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x27d608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x27d60c: 0x0  nop
    ctx->pc = 0x27d60cu;
    // NOP
label_27d610:
    // 0x27d610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d614: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d618: 0xc0bf210  jal         func_2FC840
    ctx->pc = 0x27D618u;
    SET_GPR_U32(ctx, 31, 0x27D620u);
    ctx->pc = 0x27D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D618u;
    // 0x27d61c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC840u, 0x27D618u, 0x27D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D620u;
label_27d620:
    // 0x27d620: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D620u;
    {
        const bool branch_taken_0x27d620 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D620u;
        // 0x27d624: 0x83a30010  lb          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d620) {
            ctx->pc = 0x27D640u;
            goto label_27d640;
        }
    }
    ctx->pc = 0x27D628u;
    // 0x27d628: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27D628u;
    SET_GPR_U32(ctx, 31, 0x27D630u);
    ctx->pc = 0x27D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D628u;
    // 0x27d62c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27D628u, 0x27D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D630u;
label_27d630:
    // 0x27d630: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27D630u;
    SET_GPR_U32(ctx, 31, 0x27D638u);
    ctx->pc = 0x27D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D630u;
    // 0x27d634: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27D630u, 0x27D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D638u;
label_27d638:
    // 0x27d638: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27D638u;
    {
        const bool branch_taken_0x27d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D638u;
        // 0x27d63c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d638) {
            ctx->pc = 0x27D678u;
            goto label_27d678;
        }
    }
    ctx->pc = 0x27D640u;
label_27d640:
    // 0x27d640: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x27d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x27d644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d648: 0x9042b7c8  lbu         $v0, -0x4838($v0)
    ctx->pc = 0x27d648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948808)));
    // 0x27d64c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27d64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x27d650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D650u;
    {
        const bool branch_taken_0x27d650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D650u;
        // 0x27d654: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d650) {
            ctx->pc = 0x27D670u;
            goto label_27d670;
        }
    }
    ctx->pc = 0x27D658u;
    // 0x27d658: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27d658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27d65c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x27d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27d660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D664u;
    {
        const bool branch_taken_0x27d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D664u;
        // 0x27d668: 0x2451ffd0  addiu       $s1, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d664) {
            ctx->pc = 0x27D674u;
            goto label_27d674;
        }
    }
    ctx->pc = 0x27D66Cu;
    // 0x27d66c: 0x0  nop
    ctx->pc = 0x27d66cu;
    // NOP
label_27d670:
    // 0x27d670: 0x2411fda6  addiu       $s1, $zero, -0x25A
    ctx->pc = 0x27d670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966694));
label_27d674:
    // 0x27d674: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27d678:
    // 0x27d678: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x27d678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27d67c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D67Cu;
    {
        const bool branch_taken_0x27d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d67c) {
            ctx->pc = 0x27D68Cu;
            goto label_27d68c;
        }
    }
    ctx->pc = 0x27D684u;
    // 0x27d684: 0x621ffe2  bgez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x27D684u;
    {
        const bool branch_taken_0x27d684 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D684u;
        // 0x27d688: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d684) {
            ctx->pc = 0x27D610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d610;
        }
    }
    ctx->pc = 0x27D68Cu;
label_27d68c:
    // 0x27d68c: 0x6200026  bltz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x27D68Cu;
    {
        const bool branch_taken_0x27d68c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x27d68c) {
            ctx->pc = 0x27D728u;
            goto label_27d728;
        }
    }
    ctx->pc = 0x27D694u;
    // 0x27d694: 0x1a200024  blez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x27D694u;
    {
        const bool branch_taken_0x27d694 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x27D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D694u;
        // 0x27d698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d694) {
            ctx->pc = 0x27D728u;
            goto label_27d728;
        }
    }
    ctx->pc = 0x27D69Cu;
    // 0x27d69c: 0x2416fda6  addiu       $s6, $zero, -0x25A
    ctx->pc = 0x27d69cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966694));
    // 0x27d6a0: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x27d6a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27d6a4: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x27d6a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27d6a8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x27d6a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d6ac: 0x83a20010  lb          $v0, 0x10($sp)
    ctx->pc = 0x27d6acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_27d6b0:
    // 0x27d6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6b4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x27d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x27d6b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d6bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27d6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6c0: 0xc0bf210  jal         func_2FC840
    ctx->pc = 0x27D6C0u;
    SET_GPR_U32(ctx, 31, 0x27D6C8u);
    ctx->pc = 0x27D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6C0u;
    // 0x27d6c4: 0xa3a20011  sb          $v0, 0x11($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC840u, 0x27D6C0u, 0x27D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6C8u;
label_27d6c8:
    // 0x27d6c8: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D6C8u;
    {
        const bool branch_taken_0x27d6c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27d6c8) {
            ctx->pc = 0x27D6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D6C8u;
            // 0x27d6cc: 0x83a20010  lb          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D6E8u;
            goto label_27d6e8;
        }
    }
    ctx->pc = 0x27D6D0u;
    // 0x27d6d0: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27D6D0u;
    SET_GPR_U32(ctx, 31, 0x27D6D8u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27D6D0u, 0x27D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6D8u;
label_27d6d8:
    // 0x27d6d8: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27D6D8u;
    SET_GPR_U32(ctx, 31, 0x27D6E0u);
    ctx->pc = 0x27D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6D8u;
    // 0x27d6dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27D6D8u, 0x27D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6E0u;
label_27d6e0:
    // 0x27d6e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27D6E0u;
    {
        const bool branch_taken_0x27d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6E0u;
        // 0x27d6e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6e0) {
            ctx->pc = 0x27D720u;
            goto label_27d720;
        }
    }
    ctx->pc = 0x27D6E8u;
label_27d6e8:
    // 0x27d6e8: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x27d6e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d6ec: 0x14550006  bne         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D6ECu;
    {
        const bool branch_taken_0x27d6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x27D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6ECu;
        // 0x27d6f0: 0x2c2880a  movz        $s1, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6ec) {
            ctx->pc = 0x27D708u;
            goto label_27d708;
        }
    }
    ctx->pc = 0x27D6F4u;
    // 0x27d6f4: 0x83a20011  lb          $v0, 0x11($sp)
    ctx->pc = 0x27d6f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x27d6f8: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D6F8u;
    {
        const bool branch_taken_0x27d6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x27D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6F8u;
        // 0x27d6fc: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6f8) {
            ctx->pc = 0x27D70Cu;
            goto label_27d70c;
        }
    }
    ctx->pc = 0x27D700u;
    // 0x27d700: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27D700u;
    {
        const bool branch_taken_0x27d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D700u;
        // 0x27d704: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d700) {
            ctx->pc = 0x27D718u;
            goto label_27d718;
        }
    }
    ctx->pc = 0x27D708u;
label_27d708:
    // 0x27d708: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x27d708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_27d70c:
    // 0x27d70c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x27d70cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x27d710: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x27d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
    // 0x27d714: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x27d714u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_27d718:
    // 0x27d718: 0x12130003  beq         $s0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D718u;
    {
        const bool branch_taken_0x27d718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x27d718) {
            ctx->pc = 0x27D728u;
            goto label_27d728;
        }
    }
    ctx->pc = 0x27D720u;
label_27d720:
    // 0x27d720: 0x1e20ffe3  bgtz        $s1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27D720u;
    {
        const bool branch_taken_0x27d720 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x27D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D720u;
        // 0x27d724: 0x83a20010  lb          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d720) {
            ctx->pc = 0x27D6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d6b0;
        }
    }
    ctx->pc = 0x27D728u;
label_27d728:
    // 0x27d728: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27d728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27d72c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27d72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27d730: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d734: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27d734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d738: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27d738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27d73c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27d73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27d740: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x27d740u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27d744: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27d744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27d748: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27d748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27d74c: 0x0  nop
    ctx->pc = 0x27d74cu;
    // NOP
label_27d750:
    // 0x27d750: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27D750u;
    SET_GPR_U32(ctx, 31, 0x27D758u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27D750u, 0x27D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D758u;
label_27d758:
    // 0x27d758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d75c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27d75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27d760: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x27d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x27d764: 0x0  nop
    ctx->pc = 0x27d764u;
    // NOP
    // 0x27d768: 0x0  nop
    ctx->pc = 0x27d768u;
    // NOP
    // 0x27d76c: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27d76cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27d770: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27d770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27d774: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27d774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d778: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d77c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d77cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d780: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D780u;
    {
        const bool branch_taken_0x27d780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D780u;
        // 0x27d784: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d780) {
            ctx->pc = 0x27D798u;
            goto label_27d798;
        }
    }
    ctx->pc = 0x27D788u;
    // 0x27d788: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27d788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27d78c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d78cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d790: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d794: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x27d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_27d798:
    // 0x27d798: 0x1200ffed  beqz        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27D798u;
    {
        const bool branch_taken_0x27d798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D798u;
        // 0x27d79c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d798) {
            ctx->pc = 0x27D750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d750;
        }
    }
    ctx->pc = 0x27D7A0u;
    // 0x27d7a0: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27d7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27d7a4: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27d7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27d7a8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d7ac: 0x27b30011  addiu       $s3, $sp, 0x11
    ctx->pc = 0x27d7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 17));
    // 0x27d7b0: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27d7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27d7b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27d7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27d7b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27d7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7bc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27d7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27d7c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27d7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27d7c4: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x27d7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_27d7c8:
    // 0x27d7c8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27D7C8u;
    SET_GPR_U32(ctx, 31, 0x27D7D0u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27D7C8u, 0x27D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7D0u;
label_27d7d0:
    // 0x27d7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d7d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27d7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27d7d8: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x27d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27d7dc: 0x0  nop
    ctx->pc = 0x27d7dcu;
    // NOP
    // 0x27d7e0: 0x0  nop
    ctx->pc = 0x27d7e0u;
    // NOP
    // 0x27d7e4: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27d7e4u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27d7e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27d7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27d7ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27d7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d7f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d7f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d7f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d7f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d7f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D7F8u;
    {
        const bool branch_taken_0x27d7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D7F8u;
        // 0x27d7fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d7f8) {
            ctx->pc = 0x27D810u;
            goto label_27d810;
        }
    }
    ctx->pc = 0x27D800u;
    // 0x27d800: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27d800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27d804: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d808: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d80c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x27d80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_27d810:
    // 0x27d810: 0x1200ffed  beqz        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x27D810u;
    {
        const bool branch_taken_0x27d810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D810u;
        // 0x27d814: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d810) {
            ctx->pc = 0x27D7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d7c8;
        }
    }
    ctx->pc = 0x27D818u;
    // 0x27d818: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27d818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27d81c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27d81cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27d820: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d824: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x27d824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d828: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27d828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27d82c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27d82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27d830: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27d830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d834: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27d834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27d838: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27d838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27d83c: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x27d83cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_27d840:
    // 0x27d840: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27D840u;
    SET_GPR_U32(ctx, 31, 0x27D848u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27D840u, 0x27D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D848u;
label_27d848:
    // 0x27d848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d84c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27d84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27d850: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x27d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27d854: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27d858: 0x0  nop
    ctx->pc = 0x27d858u;
    // NOP
    // 0x27d85c: 0x0  nop
    ctx->pc = 0x27d85cu;
    // NOP
    // 0x27d860: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27d860u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27d864: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27d864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27d868: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27d868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d86c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d86cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d870: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d874: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D874u;
    {
        const bool branch_taken_0x27d874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D874u;
        // 0x27d878: 0x2e030005  sltiu       $v1, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d874) {
            ctx->pc = 0x27D88Cu;
            goto label_27d88c;
        }
    }
    ctx->pc = 0x27D87Cu;
    // 0x27d87c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27d87cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27d880: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d884: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d888: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x27d888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_27d88c:
    // 0x27d88c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27D88Cu;
    {
        const bool branch_taken_0x27d88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D88Cu;
        // 0x27d890: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d88c) {
            ctx->pc = 0x27D840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d840;
        }
    }
    ctx->pc = 0x27D894u;
    // 0x27d894: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27d894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27d898: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27d898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27d89c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d8a0: 0x27b30014  addiu       $s3, $sp, 0x14
    ctx->pc = 0x27d8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x27d8a4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27d8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27d8a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27d8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27d8ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27d8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8b0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27d8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27d8b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27d8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27d8b8: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x27d8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27d8bc: 0x0  nop
    ctx->pc = 0x27d8bcu;
    // NOP
label_27d8c0:
    // 0x27d8c0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x27D8C0u;
    SET_GPR_U32(ctx, 31, 0x27D8C8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x27D8C0u, 0x27D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8C8u;
label_27d8c8:
    // 0x27d8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d8cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27d8ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27d8d0: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x27d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27d8d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27d8d8: 0x0  nop
    ctx->pc = 0x27d8d8u;
    // NOP
    // 0x27d8dc: 0x0  nop
    ctx->pc = 0x27d8dcu;
    // NOP
    // 0x27d8e0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x27d8e0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27d8e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27d8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27d8e8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27d8e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d8ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d8ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d8f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d8f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d8f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27D8F4u;
    {
        const bool branch_taken_0x27d8f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8F4u;
        // 0x27d8f8: 0x2e030004  sltiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8f4) {
            ctx->pc = 0x27D90Cu;
            goto label_27d90c;
        }
    }
    ctx->pc = 0x27D8FCu;
    // 0x27d8fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27d8fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x27d900: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27d900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27d904: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27d904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27d908: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x27d908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_27d90c:
    // 0x27d90c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27D90Cu;
    {
        const bool branch_taken_0x27d90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D90Cu;
        // 0x27d910: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d90c) {
            ctx->pc = 0x27D8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d8c0;
        }
    }
    ctx->pc = 0x27D914u;
    // 0x27d914: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27d914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d918: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d91c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x27d91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27d920: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27d920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d924: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x27d924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27d928: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27d928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d92c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x27d92cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27d930: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x27d930u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27d934: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x27d934u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27d938: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d93c: 0xc7b60078  lwc1        $f22, 0x78($sp)
    ctx->pc = 0x27d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27d940: 0xc7b50070  lwc1        $f21, 0x70($sp)
    ctx->pc = 0x27d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d944: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x27d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d948: 0x3e00008  jr          $ra
    ctx->pc = 0x27D948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D948u;
        // 0x27d94c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D950u;
    // 0x27d950: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27d950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27d954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d958: 0x3e00008  jr          $ra
    ctx->pc = 0x27D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D958u;
        // 0x27d95c: 0xac643550  sw          $a0, 0x3550($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 13648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D960u;
    // 0x27d960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d96c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d970: 0xc0ac54e  jal         func_2B1538
    ctx->pc = 0x27D970u;
    SET_GPR_U32(ctx, 31, 0x27D978u);
    ctx->pc = 0x27D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D970u;
    // 0x27d974: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1538u, 0x27D970u, 0x27D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D978u;
label_27d978:
    // 0x27d978: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x27d978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x27d97c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d980: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x27D980u;
    SET_GPR_U32(ctx, 31, 0x27D988u);
    ctx->pc = 0x27D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D980u;
    // 0x27d984: 0x24a5a258  addiu       $a1, $a1, -0x5DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x27D980u, 0x27D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D988u;
label_27d988:
    // 0x27d988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D988u;
    {
        const bool branch_taken_0x27d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D988u;
        // 0x27d98c: 0x3c0301c9  lui         $v1, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d988) {
            ctx->pc = 0x27D998u;
            goto label_27d998;
        }
    }
    ctx->pc = 0x27D990u;
    // 0x27d990: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27D990u;
    {
        const bool branch_taken_0x27d990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D990u;
        // 0x27d994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d990) {
            ctx->pc = 0x27D9ECu;
            goto label_27d9ec;
        }
    }
    ctx->pc = 0x27D998u;
label_27d998:
    // 0x27d998: 0xc0ac54e  jal         func_2B1538
    ctx->pc = 0x27D998u;
    SET_GPR_U32(ctx, 31, 0x27D9A0u);
    ctx->pc = 0x27D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D998u;
    // 0x27d99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1538u, 0x27D998u, 0x27D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9A0u;
label_27d9a0:
    // 0x27d9a0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x27d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x27d9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9a8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x27D9A8u;
    SET_GPR_U32(ctx, 31, 0x27D9B0u);
    ctx->pc = 0x27D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9A8u;
    // 0x27d9ac: 0x24a5a260  addiu       $a1, $a1, -0x5DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x27D9A8u, 0x27D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9B0u;
label_27d9b0:
    // 0x27d9b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D9B0u;
    {
        const bool branch_taken_0x27d9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9B0u;
        // 0x27d9b4: 0x3c0301c9  lui         $v1, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9b0) {
            ctx->pc = 0x27D9C0u;
            goto label_27d9c0;
        }
    }
    ctx->pc = 0x27D9B8u;
    // 0x27d9b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27D9B8u;
    {
        const bool branch_taken_0x27d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9B8u;
        // 0x27d9bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9b8) {
            ctx->pc = 0x27D9ECu;
            goto label_27d9ec;
        }
    }
    ctx->pc = 0x27D9C0u;
label_27d9c0:
    // 0x27d9c0: 0xc0ac54e  jal         func_2B1538
    ctx->pc = 0x27D9C0u;
    SET_GPR_U32(ctx, 31, 0x27D9C8u);
    ctx->pc = 0x27D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9C0u;
    // 0x27d9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1538u, 0x27D9C0u, 0x27D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9C8u;
label_27d9c8:
    // 0x27d9c8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x27d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x27d9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9d0: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x27D9D0u;
    SET_GPR_U32(ctx, 31, 0x27D9D8u);
    ctx->pc = 0x27D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D9D0u;
    // 0x27d9d4: 0x24a5a268  addiu       $a1, $a1, -0x5D98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x27D9D0u, 0x27D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9D8u;
label_27d9d8:
    // 0x27d9d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D9D8u;
    {
        const bool branch_taken_0x27d9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9D8u;
        // 0x27d9dc: 0x3c0301c9  lui         $v1, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9d8) {
            ctx->pc = 0x27D9E8u;
            goto label_27d9e8;
        }
    }
    ctx->pc = 0x27D9E0u;
    // 0x27d9e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D9E0u;
    {
        const bool branch_taken_0x27d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9E0u;
        // 0x27d9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9e0) {
            ctx->pc = 0x27D9ECu;
            goto label_27d9ec;
        }
    }
    ctx->pc = 0x27D9E8u;
label_27d9e8:
    // 0x27d9e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27d9ec:
    // 0x27d9ec: 0xac624074  sw          $v0, 0x4074($v1)
    ctx->pc = 0x27d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16500), GPR_U32(ctx, 2));
    // 0x27d9f0: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x27d9f4: 0x8e223568  lw          $v0, 0x3568($s1)
    ctx->pc = 0x27d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13672)));
    // 0x27d9f8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27D9F8u;
    {
        const bool branch_taken_0x27d9f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D9F8u;
        // 0x27d9fc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9f8) {
            ctx->pc = 0x27DA48u;
            goto label_27da48;
        }
    }
    ctx->pc = 0x27DA00u;
    // 0x27da00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27da04: 0x8c433570  lw          $v1, 0x3570($v0)
    ctx->pc = 0x27da04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13680)));
    // 0x27da08: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x27DA08u;
    {
        const bool branch_taken_0x27da08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27da08) {
            ctx->pc = 0x27DA48u;
            goto label_27da48;
        }
    }
    ctx->pc = 0x27DA10u;
    // 0x27da10: 0xc09fc10  jal         func_27F040
    ctx->pc = 0x27DA10u;
    SET_GPR_U32(ctx, 31, 0x27DA18u);
    ctx->pc = 0x27F040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F040u, 0x27DA10u, 0x27DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA18u;
label_27da18:
    // 0x27da18: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x27da18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x27da1c: 0x24454280  addiu       $a1, $v0, 0x4280
    ctx->pc = 0x27da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17024));
    // 0x27da20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27da20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da24: 0x0  nop
    ctx->pc = 0x27da24u;
    // NOP
label_27da28:
    // 0x27da28: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27da28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27da2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27da30: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x27da30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x27da34: 0x0  nop
    ctx->pc = 0x27da34u;
    // NOP
    // 0x27da38: 0x0  nop
    ctx->pc = 0x27da38u;
    // NOP
    // 0x27da3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27DA3Cu;
    {
        const bool branch_taken_0x27da3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA3Cu;
        // 0x27da40: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da3c) {
            ctx->pc = 0x27DA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27da28;
        }
    }
    ctx->pc = 0x27DA44u;
    // 0x27da44: 0xae203568  sw          $zero, 0x3568($s1)
    ctx->pc = 0x27da44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13672), GPR_U32(ctx, 0));
label_27da48:
    // 0x27da48: 0xc0ac604  jal         func_2B1810
    ctx->pc = 0x27DA48u;
    SET_GPR_U32(ctx, 31, 0x27DA50u);
    ctx->pc = 0x27DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA48u;
    // 0x27da4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x27DA48u, 0x27DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA50u;
label_27da50:
    // 0x27da50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da54: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x27da54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x27da58: 0x24454278  addiu       $a1, $v0, 0x4278
    ctx->pc = 0x27da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17016));
    // 0x27da5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27da60: 0x14640011  bne         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27DA60u;
    {
        const bool branch_taken_0x27da60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA60u;
        // 0x27da64: 0x28821132  slti        $v0, $a0, 0x1132 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4402) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da60) {
            ctx->pc = 0x27DAA8u;
            goto label_27daa8;
        }
    }
    ctx->pc = 0x27DA68u;
    // 0x27da68: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x27da68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x27da6c: 0x8cc2355c  lw          $v0, 0x355C($a2)
    ctx->pc = 0x27da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13660)));
    // 0x27da70: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x27DA70u;
    {
        const bool branch_taken_0x27da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA70u;
        // 0x27da74: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da70) {
            ctx->pc = 0x27DEC8u;
            goto label_27dec8;
        }
    }
    ctx->pc = 0x27DA78u;
    // 0x27da78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27da78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da7c: 0x24454078  addiu       $a1, $v0, 0x4078
    ctx->pc = 0x27da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16504));
label_27da80:
    // 0x27da80: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27da84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27da84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27da88: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x27da88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x27da8c: 0x0  nop
    ctx->pc = 0x27da8cu;
    // NOP
    // 0x27da90: 0x0  nop
    ctx->pc = 0x27da90u;
    // NOP
    // 0x27da94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27DA94u;
    {
        const bool branch_taken_0x27da94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA94u;
        // 0x27da98: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da94) {
            ctx->pc = 0x27DA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27da80;
        }
    }
    ctx->pc = 0x27DA9Cu;
    // 0x27da9c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x27DA9Cu;
    {
        const bool branch_taken_0x27da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA9Cu;
        // 0x27daa0: 0xacc0355c  sw          $zero, 0x355C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 13660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da9c) {
            ctx->pc = 0x27DEC8u;
            goto label_27dec8;
        }
    }
    ctx->pc = 0x27DAA4u;
    // 0x27daa4: 0x0  nop
    ctx->pc = 0x27daa4u;
    // NOP
label_27daa8:
    // 0x27daa8: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x27DAA8u;
    {
        const bool branch_taken_0x27daa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAA8u;
        // 0x27daac: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27daa8) {
            ctx->pc = 0x27DBE0u;
            goto label_27dbe0;
        }
    }
    ctx->pc = 0x27DAB0u;
    // 0x27dab0: 0x28821130  slti        $v0, $a0, 0x1130
    ctx->pc = 0x27dab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4400) ? 1 : 0);
    // 0x27dab4: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x27DAB4u;
    {
        const bool branch_taken_0x27dab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAB4u;
        // 0x27dab8: 0x28821054  slti        $v0, $a0, 0x1054 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dab4) {
            ctx->pc = 0x27DD10u;
            goto label_27dd10;
        }
    }
    ctx->pc = 0x27DABCu;
    // 0x27dabc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27DABCu;
    {
        const bool branch_taken_0x27dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DABCu;
        // 0x27dac0: 0x24021090  addiu       $v0, $zero, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dabc) {
            ctx->pc = 0x27DB48u;
            goto label_27db48;
        }
    }
    ctx->pc = 0x27DAC4u;
    // 0x27dac4: 0x28821050  slti        $v0, $a0, 0x1050
    ctx->pc = 0x27dac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4176) ? 1 : 0);
    // 0x27dac8: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x27DAC8u;
    {
        const bool branch_taken_0x27dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAC8u;
        // 0x27dacc: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dac8) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DAD0u;
    // 0x27dad0: 0x28821022  slti        $v0, $a0, 0x1022
    ctx->pc = 0x27dad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4130) ? 1 : 0);
    // 0x27dad4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27DAD4u;
    {
        const bool branch_taken_0x27dad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAD4u;
        // 0x27dad8: 0x28821030  slti        $v0, $a0, 0x1030 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4144) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dad4) {
            ctx->pc = 0x27DB10u;
            goto label_27db10;
        }
    }
    ctx->pc = 0x27DADCu;
    // 0x27dadc: 0x28821020  slti        $v0, $a0, 0x1020
    ctx->pc = 0x27dadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4128) ? 1 : 0);
    // 0x27dae0: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x27DAE0u;
    {
        const bool branch_taken_0x27dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAE0u;
        // 0x27dae4: 0x28821012  slti        $v0, $a0, 0x1012 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dae0) {
            ctx->pc = 0x27DD80u;
            goto label_27dd80;
        }
    }
    ctx->pc = 0x27DAE8u;
    // 0x27dae8: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x27DAE8u;
    {
        const bool branch_taken_0x27dae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAE8u;
        // 0x27daec: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dae8) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DAF0u;
    // 0x27daf0: 0x28821010  slti        $v0, $a0, 0x1010
    ctx->pc = 0x27daf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4112) ? 1 : 0);
    // 0x27daf4: 0x544000b7  bnel        $v0, $zero, . + 4 + (0xB7 << 2)
    ctx->pc = 0x27DAF4u;
    {
        const bool branch_taken_0x27daf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27daf4) {
            ctx->pc = 0x27DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DAF4u;
            // 0x27daf8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DAFCu;
    // 0x27dafc: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DAFCu;
    SET_GPR_U32(ctx, 31, 0x27DB04u);
    ctx->pc = 0x27DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DAFCu;
    // 0x27db00: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DAFCu, 0x27DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB04u;
label_27db04:
    // 0x27db04: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x27DB04u;
    {
        const bool branch_taken_0x27db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB04u;
        // 0x27db08: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db04) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DB0Cu;
    // 0x27db0c: 0x0  nop
    ctx->pc = 0x27db0cu;
    // NOP
label_27db10:
    // 0x27db10: 0x144000ae  bnez        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x27DB10u;
    {
        const bool branch_taken_0x27db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB10u;
        // 0x27db14: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db10) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DB18u;
    // 0x27db18: 0x28821032  slti        $v0, $a0, 0x1032
    ctx->pc = 0x27db18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4146) ? 1 : 0);
    // 0x27db1c: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x27DB1Cu;
    {
        const bool branch_taken_0x27db1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB1Cu;
        // 0x27db20: 0x28821042  slti        $v0, $a0, 0x1042 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4162) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db1c) {
            ctx->pc = 0x27DD90u;
            goto label_27dd90;
        }
    }
    ctx->pc = 0x27DB24u;
    // 0x27db24: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x27DB24u;
    {
        const bool branch_taken_0x27db24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB24u;
        // 0x27db28: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db24) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DB2Cu;
    // 0x27db2c: 0x28821040  slti        $v0, $a0, 0x1040
    ctx->pc = 0x27db2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4160) ? 1 : 0);
    // 0x27db30: 0x544000a8  bnel        $v0, $zero, . + 4 + (0xA8 << 2)
    ctx->pc = 0x27DB30u;
    {
        const bool branch_taken_0x27db30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db30) {
            ctx->pc = 0x27DB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DB30u;
            // 0x27db34: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DB38u;
    // 0x27db38: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DB38u;
    SET_GPR_U32(ctx, 31, 0x27DB40u);
    ctx->pc = 0x27DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB38u;
    // 0x27db3c: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DB38u, 0x27DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB40u;
label_27db40:
    // 0x27db40: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x27DB40u;
    {
        const bool branch_taken_0x27db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB40u;
        // 0x27db44: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db40) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DB48u;
label_27db48:
    // 0x27db48: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x27DB48u;
    {
        const bool branch_taken_0x27db48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB48u;
        // 0x27db4c: 0x28821091  slti        $v0, $a0, 0x1091 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4241) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db48) {
            ctx->pc = 0x27DDC8u;
            goto label_27ddc8;
        }
    }
    ctx->pc = 0x27DB50u;
    // 0x27db50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27DB50u;
    {
        const bool branch_taken_0x27db50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB50u;
        // 0x27db54: 0x28821112  slti        $v0, $a0, 0x1112 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4370) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db50) {
            ctx->pc = 0x27DB90u;
            goto label_27db90;
        }
    }
    ctx->pc = 0x27DB58u;
    // 0x27db58: 0x28821060  slti        $v0, $a0, 0x1060
    ctx->pc = 0x27db58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4192) ? 1 : 0);
    // 0x27db5c: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x27DB5Cu;
    {
        const bool branch_taken_0x27db5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB5Cu;
        // 0x27db60: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db5c) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DB64u;
    // 0x27db64: 0x28821062  slti        $v0, $a0, 0x1062
    ctx->pc = 0x27db64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4194) ? 1 : 0);
    // 0x27db68: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x27DB68u;
    {
        const bool branch_taken_0x27db68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB68u;
        // 0x27db6c: 0x28821072  slti        $v0, $a0, 0x1072 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4210) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db68) {
            ctx->pc = 0x27DDA0u;
            goto label_27dda0;
        }
    }
    ctx->pc = 0x27DB70u;
    // 0x27db70: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x27DB70u;
    {
        const bool branch_taken_0x27db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB70u;
        // 0x27db74: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db70) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DB78u;
    // 0x27db78: 0x28821070  slti        $v0, $a0, 0x1070
    ctx->pc = 0x27db78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4208) ? 1 : 0);
    // 0x27db7c: 0x54400095  bnel        $v0, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x27DB7Cu;
    {
        const bool branch_taken_0x27db7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db7c) {
            ctx->pc = 0x27DB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DB7Cu;
            // 0x27db80: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DB84u;
    // 0x27db84: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x27DB84u;
    {
        const bool branch_taken_0x27db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db84) {
            ctx->pc = 0x27DDC0u;
            goto label_27ddc0;
        }
    }
    ctx->pc = 0x27DB8Cu;
    // 0x27db8c: 0x0  nop
    ctx->pc = 0x27db8cu;
    // NOP
label_27db90:
    // 0x27db90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DB90u;
    {
        const bool branch_taken_0x27db90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB90u;
        // 0x27db94: 0x28821122  slti        $v0, $a0, 0x1122 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db90) {
            ctx->pc = 0x27DBB8u;
            goto label_27dbb8;
        }
    }
    ctx->pc = 0x27DB98u;
    // 0x27db98: 0x28821110  slti        $v0, $a0, 0x1110
    ctx->pc = 0x27db98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4368) ? 1 : 0);
    // 0x27db9c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x27DB9Cu;
    {
        const bool branch_taken_0x27db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB9Cu;
        // 0x27dba0: 0x24021091  addiu       $v0, $zero, 0x1091 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db9c) {
            ctx->pc = 0x27DD00u;
            goto label_27dd00;
        }
    }
    ctx->pc = 0x27DBA4u;
    // 0x27dba4: 0x10820082  beq         $a0, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x27DBA4u;
    {
        const bool branch_taken_0x27dba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBA4u;
        // 0x27dba8: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dba4) {
            ctx->pc = 0x27DDB0u;
            goto label_27ddb0;
        }
    }
    ctx->pc = 0x27DBACu;
    // 0x27dbac: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x27DBACu;
    {
        const bool branch_taken_0x27dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBACu;
        // 0x27dbb0: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbac) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DBB4u;
    // 0x27dbb4: 0x0  nop
    ctx->pc = 0x27dbb4u;
    // NOP
label_27dbb8:
    // 0x27dbb8: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x27DBB8u;
    {
        const bool branch_taken_0x27dbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBB8u;
        // 0x27dbbc: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbb8) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DBC0u;
    // 0x27dbc0: 0x28821120  slti        $v0, $a0, 0x1120
    ctx->pc = 0x27dbc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4384) ? 1 : 0);
    // 0x27dbc4: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x27DBC4u;
    {
        const bool branch_taken_0x27dbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBC4u;
        // 0x27dbc8: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbc4) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DBCCu;
    // 0x27dbcc: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DBCCu;
    SET_GPR_U32(ctx, 31, 0x27DBD4u);
    ctx->pc = 0x27DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBCCu;
    // 0x27dbd0: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DBCCu, 0x27DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBD4u;
label_27dbd4:
    // 0x27dbd4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x27DBD4u;
    {
        const bool branch_taken_0x27dbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBD4u;
        // 0x27dbd8: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbd4) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DBDCu;
    // 0x27dbdc: 0x0  nop
    ctx->pc = 0x27dbdcu;
    // NOP
label_27dbe0:
    // 0x27dbe0: 0x28821192  slti        $v0, $a0, 0x1192
    ctx->pc = 0x27dbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4498) ? 1 : 0);
    // 0x27dbe4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27DBE4u;
    {
        const bool branch_taken_0x27dbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBE4u;
        // 0x27dbe8: 0x288211c2  slti        $v0, $a0, 0x11C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4546) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbe4) {
            ctx->pc = 0x27DC88u;
            goto label_27dc88;
        }
    }
    ctx->pc = 0x27DBECu;
    // 0x27dbec: 0x28821190  slti        $v0, $a0, 0x1190
    ctx->pc = 0x27dbecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4496) ? 1 : 0);
    // 0x27dbf0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x27DBF0u;
    {
        const bool branch_taken_0x27dbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBF0u;
        // 0x27dbf4: 0x28821162  slti        $v0, $a0, 0x1162 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4450) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbf0) {
            ctx->pc = 0x27DD40u;
            goto label_27dd40;
        }
    }
    ctx->pc = 0x27DBF8u;
    // 0x27dbf8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27DBF8u;
    {
        const bool branch_taken_0x27dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBF8u;
        // 0x27dbfc: 0x28821170  slti        $v0, $a0, 0x1170 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4464) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbf8) {
            ctx->pc = 0x27DC48u;
            goto label_27dc48;
        }
    }
    ctx->pc = 0x27DC00u;
    // 0x27dc00: 0x28821160  slti        $v0, $a0, 0x1160
    ctx->pc = 0x27dc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4448) ? 1 : 0);
    // 0x27dc04: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x27DC04u;
    {
        const bool branch_taken_0x27dc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC04u;
        // 0x27dc08: 0x28821140  slti        $v0, $a0, 0x1140 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4416) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc04) {
            ctx->pc = 0x27DD30u;
            goto label_27dd30;
        }
    }
    ctx->pc = 0x27DC0Cu;
    // 0x27dc0c: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x27DC0Cu;
    {
        const bool branch_taken_0x27dc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC0Cu;
        // 0x27dc10: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc0c) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DC14u;
    // 0x27dc14: 0x28821142  slti        $v0, $a0, 0x1142
    ctx->pc = 0x27dc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4418) ? 1 : 0);
    // 0x27dc18: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x27DC18u;
    {
        const bool branch_taken_0x27dc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC18u;
        // 0x27dc1c: 0x28821152  slti        $v0, $a0, 0x1152 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4434) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc18) {
            ctx->pc = 0x27DD20u;
            goto label_27dd20;
        }
    }
    ctx->pc = 0x27DC20u;
    // 0x27dc20: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x27DC20u;
    {
        const bool branch_taken_0x27dc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC20u;
        // 0x27dc24: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc20) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DC28u;
    // 0x27dc28: 0x28821150  slti        $v0, $a0, 0x1150
    ctx->pc = 0x27dc28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4432) ? 1 : 0);
    // 0x27dc2c: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x27DC2Cu;
    {
        const bool branch_taken_0x27dc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dc2c) {
            ctx->pc = 0x27DC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DC2Cu;
            // 0x27dc30: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DC34u;
    // 0x27dc34: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DC34u;
    SET_GPR_U32(ctx, 31, 0x27DC3Cu);
    ctx->pc = 0x27DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC34u;
    // 0x27dc38: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DC34u, 0x27DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC3Cu;
label_27dc3c:
    // 0x27dc3c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x27DC3Cu;
    {
        const bool branch_taken_0x27dc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC3Cu;
        // 0x27dc40: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc3c) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DC44u;
    // 0x27dc44: 0x0  nop
    ctx->pc = 0x27dc44u;
    // NOP
label_27dc48:
    // 0x27dc48: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x27DC48u;
    {
        const bool branch_taken_0x27dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC48u;
        // 0x27dc4c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc48) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DC50u;
    // 0x27dc50: 0x28821173  slti        $v0, $a0, 0x1173
    ctx->pc = 0x27dc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4467) ? 1 : 0);
    // 0x27dc54: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x27DC54u;
    {
        const bool branch_taken_0x27dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC54u;
        // 0x27dc58: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc54) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DC5Cu;
    // 0x27dc5c: 0x28821182  slti        $v0, $a0, 0x1182
    ctx->pc = 0x27dc5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4482) ? 1 : 0);
    // 0x27dc60: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x27DC60u;
    {
        const bool branch_taken_0x27dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc60) {
            ctx->pc = 0x27DC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DC60u;
            // 0x27dc64: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DC68u;
    // 0x27dc68: 0x28821180  slti        $v0, $a0, 0x1180
    ctx->pc = 0x27dc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4480) ? 1 : 0);
    // 0x27dc6c: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x27DC6Cu;
    {
        const bool branch_taken_0x27dc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dc6c) {
            ctx->pc = 0x27DC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DC6Cu;
            // 0x27dc70: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DC74u;
    // 0x27dc74: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DC74u;
    SET_GPR_U32(ctx, 31, 0x27DC7Cu);
    ctx->pc = 0x27DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC74u;
    // 0x27dc78: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DC74u, 0x27DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC7Cu;
label_27dc7c:
    // 0x27dc7c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x27DC7Cu;
    {
        const bool branch_taken_0x27dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC7Cu;
        // 0x27dc80: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc7c) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DC84u;
    // 0x27dc84: 0x0  nop
    ctx->pc = 0x27dc84u;
    // NOP
label_27dc88:
    // 0x27dc88: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27DC88u;
    {
        const bool branch_taken_0x27dc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC88u;
        // 0x27dc8c: 0x288211d0  slti        $v0, $a0, 0x11D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4560) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc88) {
            ctx->pc = 0x27DCD8u;
            goto label_27dcd8;
        }
    }
    ctx->pc = 0x27DC90u;
    // 0x27dc90: 0x288211c0  slti        $v0, $a0, 0x11C0
    ctx->pc = 0x27dc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4544) ? 1 : 0);
    // 0x27dc94: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27DC94u;
    {
        const bool branch_taken_0x27dc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC94u;
        // 0x27dc98: 0x288211a0  slti        $v0, $a0, 0x11A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc94) {
            ctx->pc = 0x27DD60u;
            goto label_27dd60;
        }
    }
    ctx->pc = 0x27DC9Cu;
    // 0x27dc9c: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x27DC9Cu;
    {
        const bool branch_taken_0x27dc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC9Cu;
        // 0x27dca0: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc9c) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DCA4u;
    // 0x27dca4: 0x288211a2  slti        $v0, $a0, 0x11A2
    ctx->pc = 0x27dca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4514) ? 1 : 0);
    // 0x27dca8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x27DCA8u;
    {
        const bool branch_taken_0x27dca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCA8u;
        // 0x27dcac: 0x288211b2  slti        $v0, $a0, 0x11B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dca8) {
            ctx->pc = 0x27DD50u;
            goto label_27dd50;
        }
    }
    ctx->pc = 0x27DCB0u;
    // 0x27dcb0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x27DCB0u;
    {
        const bool branch_taken_0x27dcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCB0u;
        // 0x27dcb4: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcb0) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DCB8u;
    // 0x27dcb8: 0x288211b0  slti        $v0, $a0, 0x11B0
    ctx->pc = 0x27dcb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4528) ? 1 : 0);
    // 0x27dcbc: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x27DCBCu;
    {
        const bool branch_taken_0x27dcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dcbc) {
            ctx->pc = 0x27DCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DCBCu;
            // 0x27dcc0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DCC4u;
    // 0x27dcc4: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DCC4u;
    SET_GPR_U32(ctx, 31, 0x27DCCCu);
    ctx->pc = 0x27DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCC4u;
    // 0x27dcc8: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DCC4u, 0x27DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCCCu;
label_27dccc:
    // 0x27dccc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x27DCCCu;
    {
        const bool branch_taken_0x27dccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCCCu;
        // 0x27dcd0: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dccc) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DCD4u;
    // 0x27dcd4: 0x0  nop
    ctx->pc = 0x27dcd4u;
    // NOP
label_27dcd8:
    // 0x27dcd8: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x27DCD8u;
    {
        const bool branch_taken_0x27dcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCD8u;
        // 0x27dcdc: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcd8) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DCE0u;
    // 0x27dce0: 0x288211d2  slti        $v0, $a0, 0x11D2
    ctx->pc = 0x27dce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4562) ? 1 : 0);
    // 0x27dce4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27DCE4u;
    {
        const bool branch_taken_0x27dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCE4u;
        // 0x27dce8: 0x28821212  slti        $v0, $a0, 0x1212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4626) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dce4) {
            ctx->pc = 0x27DD70u;
            goto label_27dd70;
        }
    }
    ctx->pc = 0x27DCECu;
    // 0x27dcec: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27DCECu;
    {
        const bool branch_taken_0x27dcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCECu;
        // 0x27dcf0: 0x2630355c  addiu       $s0, $s1, 0x355C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcec) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DCF4u;
    // 0x27dcf4: 0x28821210  slti        $v0, $a0, 0x1210
    ctx->pc = 0x27dcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4624) ? 1 : 0);
    // 0x27dcf8: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x27DCF8u;
    {
        const bool branch_taken_0x27dcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dcf8) {
            ctx->pc = 0x27DCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DCF8u;
            // 0x27dcfc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DDD4u;
            goto label_27ddd4;
        }
    }
    ctx->pc = 0x27DD00u;
label_27dd00:
    // 0x27dd00: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD00u;
    SET_GPR_U32(ctx, 31, 0x27DD08u);
    ctx->pc = 0x27DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD00u;
    // 0x27dd04: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD00u, 0x27DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD08u;
label_27dd08:
    // 0x27dd08: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27DD08u;
    {
        const bool branch_taken_0x27dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD08u;
        // 0x27dd0c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd08) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD10u;
label_27dd10:
    // 0x27dd10: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD10u;
    SET_GPR_U32(ctx, 31, 0x27DD18u);
    ctx->pc = 0x27DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD10u;
    // 0x27dd14: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD10u, 0x27DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD18u;
label_27dd18:
    // 0x27dd18: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27DD18u;
    {
        const bool branch_taken_0x27dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD18u;
        // 0x27dd1c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd18) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD20u;
label_27dd20:
    // 0x27dd20: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD20u;
    SET_GPR_U32(ctx, 31, 0x27DD28u);
    ctx->pc = 0x27DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD20u;
    // 0x27dd24: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD20u, 0x27DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD28u;
label_27dd28:
    // 0x27dd28: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27DD28u;
    {
        const bool branch_taken_0x27dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD28u;
        // 0x27dd2c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd28) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD30u;
label_27dd30:
    // 0x27dd30: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD30u;
    SET_GPR_U32(ctx, 31, 0x27DD38u);
    ctx->pc = 0x27DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD30u;
    // 0x27dd34: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD30u, 0x27DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD38u;
label_27dd38:
    // 0x27dd38: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27DD38u;
    {
        const bool branch_taken_0x27dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD38u;
        // 0x27dd3c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd38) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD40u;
label_27dd40:
    // 0x27dd40: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD40u;
    SET_GPR_U32(ctx, 31, 0x27DD48u);
    ctx->pc = 0x27DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD40u;
    // 0x27dd44: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD40u, 0x27DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD48u;
label_27dd48:
    // 0x27dd48: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27DD48u;
    {
        const bool branch_taken_0x27dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD48u;
        // 0x27dd4c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd48) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD50u;
label_27dd50:
    // 0x27dd50: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD50u;
    SET_GPR_U32(ctx, 31, 0x27DD58u);
    ctx->pc = 0x27DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD50u;
    // 0x27dd54: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD50u, 0x27DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD58u;
label_27dd58:
    // 0x27dd58: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27DD58u;
    {
        const bool branch_taken_0x27dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD58u;
        // 0x27dd5c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd58) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD60u;
label_27dd60:
    // 0x27dd60: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD60u;
    SET_GPR_U32(ctx, 31, 0x27DD68u);
    ctx->pc = 0x27DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD60u;
    // 0x27dd64: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD60u, 0x27DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD68u;
label_27dd68:
    // 0x27dd68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27DD68u;
    {
        const bool branch_taken_0x27dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD68u;
        // 0x27dd6c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd68) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD70u;
label_27dd70:
    // 0x27dd70: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD70u;
    SET_GPR_U32(ctx, 31, 0x27DD78u);
    ctx->pc = 0x27DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD70u;
    // 0x27dd74: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD70u, 0x27DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD78u;
label_27dd78:
    // 0x27dd78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27DD78u;
    {
        const bool branch_taken_0x27dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD78u;
        // 0x27dd7c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd78) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD80u;
label_27dd80:
    // 0x27dd80: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD80u;
    SET_GPR_U32(ctx, 31, 0x27DD88u);
    ctx->pc = 0x27DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD80u;
    // 0x27dd84: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD80u, 0x27DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD88u;
label_27dd88:
    // 0x27dd88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27DD88u;
    {
        const bool branch_taken_0x27dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD88u;
        // 0x27dd8c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd88) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DD90u;
label_27dd90:
    // 0x27dd90: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DD90u;
    SET_GPR_U32(ctx, 31, 0x27DD98u);
    ctx->pc = 0x27DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD90u;
    // 0x27dd94: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DD90u, 0x27DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD98u;
label_27dd98:
    // 0x27dd98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27DD98u;
    {
        const bool branch_taken_0x27dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD98u;
        // 0x27dd9c: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd98) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DDA0u;
label_27dda0:
    // 0x27dda0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DDA0u;
    SET_GPR_U32(ctx, 31, 0x27DDA8u);
    ctx->pc = 0x27DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDA0u;
    // 0x27dda4: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DDA0u, 0x27DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDA8u;
label_27dda8:
    // 0x27dda8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27DDA8u;
    {
        const bool branch_taken_0x27dda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDA8u;
        // 0x27ddac: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dda8) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DDB0u;
label_27ddb0:
    // 0x27ddb0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DDB0u;
    SET_GPR_U32(ctx, 31, 0x27DDB8u);
    ctx->pc = 0x27DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDB0u;
    // 0x27ddb4: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DDB0u, 0x27DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDB8u;
label_27ddb8:
    // 0x27ddb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27DDB8u;
    {
        const bool branch_taken_0x27ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDB8u;
        // 0x27ddbc: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddb8) {
            ctx->pc = 0x27DDCCu;
            goto label_27ddcc;
        }
    }
    ctx->pc = 0x27DDC0u;
label_27ddc0:
    // 0x27ddc0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DDC0u;
    SET_GPR_U32(ctx, 31, 0x27DDC8u);
    ctx->pc = 0x27DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDC0u;
    // 0x27ddc4: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DDC0u, 0x27DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDC8u;
label_27ddc8:
    // 0x27ddc8: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_27ddcc:
    // 0x27ddcc: 0x2630355c  addiu       $s0, $s1, 0x355C
    ctx->pc = 0x27ddccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13660));
label_27ddd0:
    // 0x27ddd0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ddd4:
    // 0x27ddd4: 0x58a00023  blezl       $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x27DDD4u;
    {
        const bool branch_taken_0x27ddd4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x27ddd4) {
            ctx->pc = 0x27DDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DDD4u;
            // 0x27ddd8: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DE64u;
            goto label_27de64;
        }
    }
    ctx->pc = 0x27DDDCu;
    // 0x27dddc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27dde0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27dde4: 0x8c433570  lw          $v1, 0x3570($v0)
    ctx->pc = 0x27dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13680)));
    // 0x27dde8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DDE8u;
    {
        const bool branch_taken_0x27dde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27dde8) {
            ctx->pc = 0x27DDFCu;
            goto label_27ddfc;
        }
    }
    ctx->pc = 0x27DDF0u;
    // 0x27ddf0: 0xc09fc10  jal         func_27F040
    ctx->pc = 0x27DDF0u;
    SET_GPR_U32(ctx, 31, 0x27DDF8u);
    ctx->pc = 0x27F040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F040u, 0x27DDF0u, 0x27DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDF8u;
label_27ddf8:
    // 0x27ddf8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ddfc:
    // 0x27ddfc: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x27DDFCu;
    {
        const bool branch_taken_0x27ddfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDFCu;
        // 0x27de00: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddfc) {
            ctx->pc = 0x27DE60u;
            goto label_27de60;
        }
    }
    ctx->pc = 0x27DE04u;
    // 0x27de04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27de04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de08: 0x244542b8  addiu       $a1, $v0, 0x42B8
    ctx->pc = 0x27de08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17080));
    // 0x27de0c: 0x0  nop
    ctx->pc = 0x27de0cu;
    // NOP
label_27de10:
    // 0x27de10: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27de10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27de14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27de18: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x27de18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x27de1c: 0x0  nop
    ctx->pc = 0x27de1cu;
    // NOP
    // 0x27de20: 0x0  nop
    ctx->pc = 0x27de20u;
    // NOP
    // 0x27de24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27DE24u;
    {
        const bool branch_taken_0x27de24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE24u;
        // 0x27de28: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de24) {
            ctx->pc = 0x27DE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27de10;
        }
    }
    ctx->pc = 0x27DE2Cu;
    // 0x27de2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27de30: 0x3c0301c9  lui         $v1, 0x1C9
    ctx->pc = 0x27de30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)457 << 16));
    // 0x27de34: 0xac40356c  sw          $zero, 0x356C($v0)
    ctx->pc = 0x27de34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13676), GPR_U32(ctx, 0));
    // 0x27de38: 0x24654078  addiu       $a1, $v1, 0x4078
    ctx->pc = 0x27de38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16504));
    // 0x27de3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27de3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27de40:
    // 0x27de40: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27de44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27de48: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x27de48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x27de4c: 0x0  nop
    ctx->pc = 0x27de4cu;
    // NOP
    // 0x27de50: 0x0  nop
    ctx->pc = 0x27de50u;
    // NOP
    // 0x27de54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27DE54u;
    {
        const bool branch_taken_0x27de54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE54u;
        // 0x27de58: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de54) {
            ctx->pc = 0x27DE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27de40;
        }
    }
    ctx->pc = 0x27DE5Cu;
    // 0x27de5c: 0xae20355c  sw          $zero, 0x355C($s1)
    ctx->pc = 0x27de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13660), GPR_U32(ctx, 0));
label_27de60:
    // 0x27de60: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x27de60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_27de64:
    // 0x27de64: 0x26303560  addiu       $s0, $s1, 0x3560
    ctx->pc = 0x27de64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13664));
    // 0x27de68: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27de68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27de6c: 0x58a00017  blezl       $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x27DE6Cu;
    {
        const bool branch_taken_0x27de6c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x27de6c) {
            ctx->pc = 0x27DE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DE6Cu;
            // 0x27de70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DECCu;
            goto label_27decc;
        }
    }
    ctx->pc = 0x27DE74u;
    // 0x27de74: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27de74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27de78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27de7c: 0x8c433570  lw          $v1, 0x3570($v0)
    ctx->pc = 0x27de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13680)));
    // 0x27de80: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DE80u;
    {
        const bool branch_taken_0x27de80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27de80) {
            ctx->pc = 0x27DE94u;
            goto label_27de94;
        }
    }
    ctx->pc = 0x27DE88u;
    // 0x27de88: 0xc09fc10  jal         func_27F040
    ctx->pc = 0x27DE88u;
    SET_GPR_U32(ctx, 31, 0x27DE90u);
    ctx->pc = 0x27F040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F040u, 0x27DE88u, 0x27DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE90u;
label_27de90:
    // 0x27de90: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27de90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27de94:
    // 0x27de94: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x27DE94u;
    {
        const bool branch_taken_0x27de94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE94u;
        // 0x27de98: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de94) {
            ctx->pc = 0x27DEC8u;
            goto label_27dec8;
        }
    }
    ctx->pc = 0x27DE9Cu;
    // 0x27de9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27de9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dea0: 0x24454178  addiu       $a1, $v0, 0x4178
    ctx->pc = 0x27dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16760));
    // 0x27dea4: 0x0  nop
    ctx->pc = 0x27dea4u;
    // NOP
label_27dea8:
    // 0x27dea8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27deac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27deacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27deb0: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x27deb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x27deb4: 0x0  nop
    ctx->pc = 0x27deb4u;
    // NOP
    // 0x27deb8: 0x0  nop
    ctx->pc = 0x27deb8u;
    // NOP
    // 0x27debc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27DEBCu;
    {
        const bool branch_taken_0x27debc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEBCu;
        // 0x27dec0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27debc) {
            ctx->pc = 0x27DEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dea8;
        }
    }
    ctx->pc = 0x27DEC4u;
    // 0x27dec4: 0xae203560  sw          $zero, 0x3560($s1)
    ctx->pc = 0x27dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13664), GPR_U32(ctx, 0));
label_27dec8:
    // 0x27dec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27dec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27decc:
    // 0x27decc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27deccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ded0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27ded0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ded4: 0x3e00008  jr          $ra
    ctx->pc = 0x27DED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DED4u;
        // 0x27ded8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DEDCu;
    // 0x27dedc: 0x0  nop
    ctx->pc = 0x27dedcu;
    // NOP
    // 0x27dee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27dee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27dee8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27dee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27deec: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x27deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x27def0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27def4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27def8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27def8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27defc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27df00: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x27DF00u;
    {
        const bool branch_taken_0x27df00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF00u;
        // 0x27df04: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df00) {
            ctx->pc = 0x27E418u;
            goto label_27e418;
        }
    }
    ctx->pc = 0x27DF08u;
    // 0x27df08: 0x32130008  andi        $s3, $s0, 0x8
    ctx->pc = 0x27df08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x27df0c: 0x1260007a  beqz        $s3, . + 4 + (0x7A << 2)
    ctx->pc = 0x27DF0Cu;
    {
        const bool branch_taken_0x27df0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF0Cu;
        // 0x27df10: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df0c) {
            ctx->pc = 0x27E0F8u;
            goto label_27e0f8;
        }
    }
    ctx->pc = 0x27DF14u;
    // 0x27df14: 0x2c620065  sltiu       $v0, $v1, 0x65
    ctx->pc = 0x27df14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x27df18: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x27DF18u;
    {
        const bool branch_taken_0x27df18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df18) {
            ctx->pc = 0x27DF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DF18u;
            // 0x27df1c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DF20u;
    // 0x27df20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27df20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27df24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27df24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27df28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27df2c: 0x8c63a270  lw          $v1, -0x5D90($v1)
    ctx->pc = 0x27df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943344)));
    // 0x27df30: 0x600008  jr          $v1
    ctx->pc = 0x27DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DF38u: goto label_27df38;
            case 0x27DF48u: goto label_27df48;
            case 0x27DF58u: goto label_27df58;
            case 0x27DF68u: goto label_27df68;
            case 0x27DF78u: goto label_27df78;
            case 0x27DF88u: goto label_27df88;
            case 0x27DF90u: goto label_27df90;
            case 0x27DFA0u: goto label_27dfa0;
            case 0x27DFB0u: goto label_27dfb0;
            case 0x27DFC0u: goto label_27dfc0;
            case 0x27DFD0u: goto label_27dfd0;
            case 0x27DFE0u: goto label_27dfe0;
            case 0x27DFF0u: goto label_27dff0;
            case 0x27E000u: goto label_27e000;
            case 0x27E010u: goto label_27e010;
            case 0x27E020u: goto label_27e020;
            case 0x27E030u: goto label_27e030;
            case 0x27E040u: goto label_27e040;
            case 0x27E050u: goto label_27e050;
            case 0x27E060u: goto label_27e060;
            case 0x27E070u: goto label_27e070;
            case 0x27E080u: goto label_27e080;
            case 0x27E090u: goto label_27e090;
            case 0x27E0A0u: goto label_27e0a0;
            case 0x27E0B0u: goto label_27e0b0;
            case 0x27E0C0u: goto label_27e0c0;
            case 0x27E0E0u: goto label_27e0e0;
            case 0x27E0F0u: goto label_27e0f0;
            case 0x27E0F8u: goto label_27e0f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DF30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27DF38u;
label_27df38:
    // 0x27df38: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DF38u;
    SET_GPR_U32(ctx, 31, 0x27DF40u);
    ctx->pc = 0x27DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF38u;
    // 0x27df3c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DF38u, 0x27DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF40u;
label_27df40:
    // 0x27df40: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x27DF40u;
    {
        const bool branch_taken_0x27df40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF40u;
        // 0x27df44: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df40) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DF48u;
label_27df48:
    // 0x27df48: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DF48u;
    SET_GPR_U32(ctx, 31, 0x27DF50u);
    ctx->pc = 0x27DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF48u;
    // 0x27df4c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DF48u, 0x27DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF50u;
label_27df50:
    // 0x27df50: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x27DF50u;
    {
        const bool branch_taken_0x27df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF50u;
        // 0x27df54: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df50) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DF58u;
label_27df58:
    // 0x27df58: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DF58u;
    SET_GPR_U32(ctx, 31, 0x27DF60u);
    ctx->pc = 0x27DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF58u;
    // 0x27df5c: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DF58u, 0x27DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF60u;
label_27df60:
    // 0x27df60: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x27DF60u;
    {
        const bool branch_taken_0x27df60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF60u;
        // 0x27df64: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df60) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DF68u;
label_27df68:
    // 0x27df68: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DF68u;
    SET_GPR_U32(ctx, 31, 0x27DF70u);
    ctx->pc = 0x27DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF68u;
    // 0x27df6c: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DF68u, 0x27DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF70u;
label_27df70:
    // 0x27df70: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x27DF70u;
    {
        const bool branch_taken_0x27df70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF70u;
        // 0x27df74: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df70) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DF78u;
label_27df78:
    // 0x27df78: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DF78u;
    SET_GPR_U32(ctx, 31, 0x27DF80u);
    ctx->pc = 0x27DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF78u;
    // 0x27df7c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DF78u, 0x27DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF80u;
label_27df80:
    // 0x27df80: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x27DF80u;
    {
        const bool branch_taken_0x27df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF80u;
        // 0x27df84: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df80) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DF88u;
label_27df88:
    // 0x27df88: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x27DF88u;
    {
        const bool branch_taken_0x27df88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF88u;
        // 0x27df8c: 0x24040045  addiu       $a0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df88) {
            ctx->pc = 0x27E0C4u;
            goto label_27e0c4;
        }
    }
    ctx->pc = 0x27DF90u;
label_27df90:
    // 0x27df90: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DF90u;
    SET_GPR_U32(ctx, 31, 0x27DF98u);
    ctx->pc = 0x27DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF90u;
    // 0x27df94: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DF90u, 0x27DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF98u;
label_27df98:
    // 0x27df98: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x27DF98u;
    {
        const bool branch_taken_0x27df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF98u;
        // 0x27df9c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df98) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DFA0u;
label_27dfa0:
    // 0x27dfa0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DFA0u;
    SET_GPR_U32(ctx, 31, 0x27DFA8u);
    ctx->pc = 0x27DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFA0u;
    // 0x27dfa4: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DFA0u, 0x27DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFA8u;
label_27dfa8:
    // 0x27dfa8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x27DFA8u;
    {
        const bool branch_taken_0x27dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFA8u;
        // 0x27dfac: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfa8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DFB0u;
label_27dfb0:
    // 0x27dfb0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DFB0u;
    SET_GPR_U32(ctx, 31, 0x27DFB8u);
    ctx->pc = 0x27DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFB0u;
    // 0x27dfb4: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DFB0u, 0x27DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFB8u;
label_27dfb8:
    // 0x27dfb8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27DFB8u;
    {
        const bool branch_taken_0x27dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFB8u;
        // 0x27dfbc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfb8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DFC0u;
label_27dfc0:
    // 0x27dfc0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DFC0u;
    SET_GPR_U32(ctx, 31, 0x27DFC8u);
    ctx->pc = 0x27DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFC0u;
    // 0x27dfc4: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DFC0u, 0x27DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFC8u;
label_27dfc8:
    // 0x27dfc8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x27DFC8u;
    {
        const bool branch_taken_0x27dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFC8u;
        // 0x27dfcc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfc8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DFD0u;
label_27dfd0:
    // 0x27dfd0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DFD0u;
    SET_GPR_U32(ctx, 31, 0x27DFD8u);
    ctx->pc = 0x27DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFD0u;
    // 0x27dfd4: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DFD0u, 0x27DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFD8u;
label_27dfd8:
    // 0x27dfd8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x27DFD8u;
    {
        const bool branch_taken_0x27dfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFD8u;
        // 0x27dfdc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfd8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DFE0u;
label_27dfe0:
    // 0x27dfe0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DFE0u;
    SET_GPR_U32(ctx, 31, 0x27DFE8u);
    ctx->pc = 0x27DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFE0u;
    // 0x27dfe4: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DFE0u, 0x27DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFE8u;
label_27dfe8:
    // 0x27dfe8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x27DFE8u;
    {
        const bool branch_taken_0x27dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFE8u;
        // 0x27dfec: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfe8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27DFF0u;
label_27dff0:
    // 0x27dff0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27DFF0u;
    SET_GPR_U32(ctx, 31, 0x27DFF8u);
    ctx->pc = 0x27DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFF0u;
    // 0x27dff4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27DFF0u, 0x27DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFF8u;
label_27dff8:
    // 0x27dff8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27DFF8u;
    {
        const bool branch_taken_0x27dff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFF8u;
        // 0x27dffc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dff8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E000u;
label_27e000:
    // 0x27e000: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E000u;
    SET_GPR_U32(ctx, 31, 0x27E008u);
    ctx->pc = 0x27E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E000u;
    // 0x27e004: 0x24040081  addiu       $a0, $zero, 0x81 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E000u, 0x27E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E008u;
label_27e008:
    // 0x27e008: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27E008u;
    {
        const bool branch_taken_0x27e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E008u;
        // 0x27e00c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e008) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E010u;
label_27e010:
    // 0x27e010: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E010u;
    SET_GPR_U32(ctx, 31, 0x27E018u);
    ctx->pc = 0x27E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E010u;
    // 0x27e014: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E010u, 0x27E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E018u;
label_27e018:
    // 0x27e018: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27E018u;
    {
        const bool branch_taken_0x27e018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E018u;
        // 0x27e01c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e018) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E020u;
label_27e020:
    // 0x27e020: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E020u;
    SET_GPR_U32(ctx, 31, 0x27E028u);
    ctx->pc = 0x27E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E020u;
    // 0x27e024: 0x24040083  addiu       $a0, $zero, 0x83 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E020u, 0x27E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E028u;
label_27e028:
    // 0x27e028: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27E028u;
    {
        const bool branch_taken_0x27e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E028u;
        // 0x27e02c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e028) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E030u;
label_27e030:
    // 0x27e030: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E030u;
    SET_GPR_U32(ctx, 31, 0x27E038u);
    ctx->pc = 0x27E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E030u;
    // 0x27e034: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E030u, 0x27E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E038u;
label_27e038:
    // 0x27e038: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27E038u;
    {
        const bool branch_taken_0x27e038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E038u;
        // 0x27e03c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e038) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E040u;
label_27e040:
    // 0x27e040: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E040u;
    SET_GPR_U32(ctx, 31, 0x27E048u);
    ctx->pc = 0x27E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E040u;
    // 0x27e044: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E040u, 0x27E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E048u;
label_27e048:
    // 0x27e048: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27E048u;
    {
        const bool branch_taken_0x27e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E048u;
        // 0x27e04c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e048) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E050u;
label_27e050:
    // 0x27e050: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E050u;
    SET_GPR_U32(ctx, 31, 0x27E058u);
    ctx->pc = 0x27E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E050u;
    // 0x27e054: 0x24040086  addiu       $a0, $zero, 0x86 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E050u, 0x27E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E058u;
label_27e058:
    // 0x27e058: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27E058u;
    {
        const bool branch_taken_0x27e058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E058u;
        // 0x27e05c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e058) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E060u;
label_27e060:
    // 0x27e060: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E060u;
    SET_GPR_U32(ctx, 31, 0x27E068u);
    ctx->pc = 0x27E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E060u;
    // 0x27e064: 0x24040087  addiu       $a0, $zero, 0x87 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E060u, 0x27E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E068u;
label_27e068:
    // 0x27e068: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27E068u;
    {
        const bool branch_taken_0x27e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E068u;
        // 0x27e06c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e068) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E070u;
label_27e070:
    // 0x27e070: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E070u;
    SET_GPR_U32(ctx, 31, 0x27E078u);
    ctx->pc = 0x27E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E070u;
    // 0x27e074: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E070u, 0x27E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E078u;
label_27e078:
    // 0x27e078: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27E078u;
    {
        const bool branch_taken_0x27e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E078u;
        // 0x27e07c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e078) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E080u;
label_27e080:
    // 0x27e080: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E080u;
    SET_GPR_U32(ctx, 31, 0x27E088u);
    ctx->pc = 0x27E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E080u;
    // 0x27e084: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E080u, 0x27E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E088u;
label_27e088:
    // 0x27e088: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27E088u;
    {
        const bool branch_taken_0x27e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E088u;
        // 0x27e08c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e088) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E090u;
label_27e090:
    // 0x27e090: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E090u;
    SET_GPR_U32(ctx, 31, 0x27E098u);
    ctx->pc = 0x27E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E090u;
    // 0x27e094: 0x2404008a  addiu       $a0, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E090u, 0x27E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E098u;
label_27e098:
    // 0x27e098: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27E098u;
    {
        const bool branch_taken_0x27e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E098u;
        // 0x27e09c: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e098) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E0A0u;
label_27e0a0:
    // 0x27e0a0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E0A0u;
    SET_GPR_U32(ctx, 31, 0x27E0A8u);
    ctx->pc = 0x27E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0A0u;
    // 0x27e0a4: 0x2404008b  addiu       $a0, $zero, 0x8B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E0A0u, 0x27E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0A8u;
label_27e0a8:
    // 0x27e0a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27E0A8u;
    {
        const bool branch_taken_0x27e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0A8u;
        // 0x27e0ac: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0a8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E0B0u;
label_27e0b0:
    // 0x27e0b0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E0B0u;
    SET_GPR_U32(ctx, 31, 0x27E0B8u);
    ctx->pc = 0x27E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0B0u;
    // 0x27e0b4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E0B0u, 0x27E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0B8u;
label_27e0b8:
    // 0x27e0b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27E0B8u;
    {
        const bool branch_taken_0x27e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0B8u;
        // 0x27e0bc: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0b8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E0C0u;
label_27e0c0:
    // 0x27e0c0: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_27e0c4:
    // 0x27e0c4: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E0C4u;
    SET_GPR_U32(ctx, 31, 0x27E0CCu);
    ctx->pc = 0x27E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0C4u;
    // 0x27e0c8: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E0C4u, 0x27E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0CCu;
label_27e0cc:
    // 0x27e0cc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27e0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e0d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27E0D4u;
    {
        const bool branch_taken_0x27e0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0D4u;
        // 0x27e0d8: 0xac623564  sw          $v0, 0x3564($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 13668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0d4) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E0DCu;
    // 0x27e0dc: 0x0  nop
    ctx->pc = 0x27e0dcu;
    // NOP
label_27e0e0:
    // 0x27e0e0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E0E0u;
    SET_GPR_U32(ctx, 31, 0x27E0E8u);
    ctx->pc = 0x27E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0E0u;
    // 0x27e0e4: 0x24040062  addiu       $a0, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E0E0u, 0x27E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0E8u;
label_27e0e8:
    // 0x27e0e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E0E8u;
    {
        const bool branch_taken_0x27e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0E8u;
        // 0x27e0ec: 0x32110004  andi        $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0e8) {
            ctx->pc = 0x27E0FCu;
            goto label_27e0fc;
        }
    }
    ctx->pc = 0x27E0F0u;
label_27e0f0:
    // 0x27e0f0: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E0F0u;
    SET_GPR_U32(ctx, 31, 0x27E0F8u);
    ctx->pc = 0x27E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0F0u;
    // 0x27e0f4: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E0F0u, 0x27E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0F8u;
label_27e0f8:
    // 0x27e0f8: 0x32110004  andi        $s1, $s0, 0x4
    ctx->pc = 0x27e0f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_27e0fc:
    // 0x27e0fc: 0x12200078  beqz        $s1, . + 4 + (0x78 << 2)
    ctx->pc = 0x27E0FCu;
    {
        const bool branch_taken_0x27e0fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0FCu;
        // 0x27e100: 0x324600ff  andi        $a2, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0fc) {
            ctx->pc = 0x27E2E0u;
            goto label_27e2e0;
        }
    }
    ctx->pc = 0x27E104u;
    // 0x27e104: 0x2cc20065  sltiu       $v0, $a2, 0x65
    ctx->pc = 0x27e104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x27e108: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x27E108u;
    {
        const bool branch_taken_0x27e108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E108u;
        // 0x27e10c: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e108) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E110u;
    // 0x27e110: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x27e110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27e114: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27e114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27e118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e11c: 0x8c63a410  lw          $v1, -0x5BF0($v1)
    ctx->pc = 0x27e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943760)));
    // 0x27e120: 0x600008  jr          $v1
    ctx->pc = 0x27E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E128u: goto label_27e128;
            case 0x27E138u: goto label_27e138;
            case 0x27E148u: goto label_27e148;
            case 0x27E158u: goto label_27e158;
            case 0x27E168u: goto label_27e168;
            case 0x27E178u: goto label_27e178;
            case 0x27E188u: goto label_27e188;
            case 0x27E198u: goto label_27e198;
            case 0x27E1A8u: goto label_27e1a8;
            case 0x27E1B8u: goto label_27e1b8;
            case 0x27E1C8u: goto label_27e1c8;
            case 0x27E1D8u: goto label_27e1d8;
            case 0x27E1E8u: goto label_27e1e8;
            case 0x27E1F8u: goto label_27e1f8;
            case 0x27E208u: goto label_27e208;
            case 0x27E218u: goto label_27e218;
            case 0x27E228u: goto label_27e228;
            case 0x27E238u: goto label_27e238;
            case 0x27E248u: goto label_27e248;
            case 0x27E258u: goto label_27e258;
            case 0x27E268u: goto label_27e268;
            case 0x27E278u: goto label_27e278;
            case 0x27E288u: goto label_27e288;
            case 0x27E298u: goto label_27e298;
            case 0x27E2A8u: goto label_27e2a8;
            case 0x27E2B8u: goto label_27e2b8;
            case 0x27E2C8u: goto label_27e2c8;
            case 0x27E2D8u: goto label_27e2d8;
            case 0x27E2E0u: goto label_27e2e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27E128u;
label_27e128:
    // 0x27e128: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E128u;
    SET_GPR_U32(ctx, 31, 0x27E130u);
    ctx->pc = 0x27E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E128u;
    // 0x27e12c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E128u, 0x27E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E130u;
label_27e130:
    // 0x27e130: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x27E130u;
    {
        const bool branch_taken_0x27e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E130u;
        // 0x27e134: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e130) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E138u;
label_27e138:
    // 0x27e138: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E138u;
    SET_GPR_U32(ctx, 31, 0x27E140u);
    ctx->pc = 0x27E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E138u;
    // 0x27e13c: 0x24040051  addiu       $a0, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E138u, 0x27E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E140u;
label_27e140:
    // 0x27e140: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x27E140u;
    {
        const bool branch_taken_0x27e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E140u;
        // 0x27e144: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e140) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E148u;
label_27e148:
    // 0x27e148: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E148u;
    SET_GPR_U32(ctx, 31, 0x27E150u);
    ctx->pc = 0x27E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E148u;
    // 0x27e14c: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E148u, 0x27E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E150u;
label_27e150:
    // 0x27e150: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27E150u;
    {
        const bool branch_taken_0x27e150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E150u;
        // 0x27e154: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e150) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E158u;
label_27e158:
    // 0x27e158: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E158u;
    SET_GPR_U32(ctx, 31, 0x27E160u);
    ctx->pc = 0x27E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E158u;
    // 0x27e15c: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E158u, 0x27E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E160u;
label_27e160:
    // 0x27e160: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x27E160u;
    {
        const bool branch_taken_0x27e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E160u;
        // 0x27e164: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e160) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E168u;
label_27e168:
    // 0x27e168: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E168u;
    SET_GPR_U32(ctx, 31, 0x27E170u);
    ctx->pc = 0x27E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E168u;
    // 0x27e16c: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E168u, 0x27E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E170u;
label_27e170:
    // 0x27e170: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x27E170u;
    {
        const bool branch_taken_0x27e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E170u;
        // 0x27e174: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e170) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E178u;
label_27e178:
    // 0x27e178: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E178u;
    SET_GPR_U32(ctx, 31, 0x27E180u);
    ctx->pc = 0x27E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E178u;
    // 0x27e17c: 0x24040055  addiu       $a0, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E178u, 0x27E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E180u;
label_27e180:
    // 0x27e180: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x27E180u;
    {
        const bool branch_taken_0x27e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E180u;
        // 0x27e184: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e180) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E188u;
label_27e188:
    // 0x27e188: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E188u;
    SET_GPR_U32(ctx, 31, 0x27E190u);
    ctx->pc = 0x27E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E188u;
    // 0x27e18c: 0x24040056  addiu       $a0, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E188u, 0x27E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E190u;
label_27e190:
    // 0x27e190: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x27E190u;
    {
        const bool branch_taken_0x27e190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E190u;
        // 0x27e194: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e190) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E198u;
label_27e198:
    // 0x27e198: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E198u;
    SET_GPR_U32(ctx, 31, 0x27E1A0u);
    ctx->pc = 0x27E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E198u;
    // 0x27e19c: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E198u, 0x27E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1A0u;
label_27e1a0:
    // 0x27e1a0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27E1A0u;
    {
        const bool branch_taken_0x27e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1A0u;
        // 0x27e1a4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1a0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E1A8u;
label_27e1a8:
    // 0x27e1a8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E1A8u;
    SET_GPR_U32(ctx, 31, 0x27E1B0u);
    ctx->pc = 0x27E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1A8u;
    // 0x27e1ac: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E1A8u, 0x27E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1B0u;
label_27e1b0:
    // 0x27e1b0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x27E1B0u;
    {
        const bool branch_taken_0x27e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1B0u;
        // 0x27e1b4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1b0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E1B8u;
label_27e1b8:
    // 0x27e1b8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E1B8u;
    SET_GPR_U32(ctx, 31, 0x27E1C0u);
    ctx->pc = 0x27E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1B8u;
    // 0x27e1bc: 0x24040059  addiu       $a0, $zero, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E1B8u, 0x27E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1C0u;
label_27e1c0:
    // 0x27e1c0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x27E1C0u;
    {
        const bool branch_taken_0x27e1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1C0u;
        // 0x27e1c4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1c0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E1C8u;
label_27e1c8:
    // 0x27e1c8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E1C8u;
    SET_GPR_U32(ctx, 31, 0x27E1D0u);
    ctx->pc = 0x27E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1C8u;
    // 0x27e1cc: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E1C8u, 0x27E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1D0u;
label_27e1d0:
    // 0x27e1d0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x27E1D0u;
    {
        const bool branch_taken_0x27e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1D0u;
        // 0x27e1d4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1d0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E1D8u;
label_27e1d8:
    // 0x27e1d8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E1D8u;
    SET_GPR_U32(ctx, 31, 0x27E1E0u);
    ctx->pc = 0x27E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1D8u;
    // 0x27e1dc: 0x2404005b  addiu       $a0, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E1D8u, 0x27E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1E0u;
label_27e1e0:
    // 0x27e1e0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x27E1E0u;
    {
        const bool branch_taken_0x27e1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1E0u;
        // 0x27e1e4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1e0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E1E8u;
label_27e1e8:
    // 0x27e1e8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E1E8u;
    SET_GPR_U32(ctx, 31, 0x27E1F0u);
    ctx->pc = 0x27E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1E8u;
    // 0x27e1ec: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E1E8u, 0x27E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1F0u;
label_27e1f0:
    // 0x27e1f0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27E1F0u;
    {
        const bool branch_taken_0x27e1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1F0u;
        // 0x27e1f4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1f0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E1F8u;
label_27e1f8:
    // 0x27e1f8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E1F8u;
    SET_GPR_U32(ctx, 31, 0x27E200u);
    ctx->pc = 0x27E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1F8u;
    // 0x27e1fc: 0x24040091  addiu       $a0, $zero, 0x91 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E1F8u, 0x27E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E200u;
label_27e200:
    // 0x27e200: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27E200u;
    {
        const bool branch_taken_0x27e200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E200u;
        // 0x27e204: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e200) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E208u;
label_27e208:
    // 0x27e208: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E208u;
    SET_GPR_U32(ctx, 31, 0x27E210u);
    ctx->pc = 0x27E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E208u;
    // 0x27e20c: 0x24040092  addiu       $a0, $zero, 0x92 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E208u, 0x27E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E210u;
label_27e210:
    // 0x27e210: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27E210u;
    {
        const bool branch_taken_0x27e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E210u;
        // 0x27e214: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e210) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E218u;
label_27e218:
    // 0x27e218: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E218u;
    SET_GPR_U32(ctx, 31, 0x27E220u);
    ctx->pc = 0x27E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E218u;
    // 0x27e21c: 0x24040093  addiu       $a0, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E218u, 0x27E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E220u;
label_27e220:
    // 0x27e220: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27E220u;
    {
        const bool branch_taken_0x27e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e220) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E228u;
label_27e228:
    // 0x27e228: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E228u;
    SET_GPR_U32(ctx, 31, 0x27E230u);
    ctx->pc = 0x27E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E228u;
    // 0x27e22c: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E228u, 0x27E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E230u;
label_27e230:
    // 0x27e230: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27E230u;
    {
        const bool branch_taken_0x27e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E230u;
        // 0x27e234: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e230) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E238u;
label_27e238:
    // 0x27e238: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E238u;
    SET_GPR_U32(ctx, 31, 0x27E240u);
    ctx->pc = 0x27E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E238u;
    // 0x27e23c: 0x24040095  addiu       $a0, $zero, 0x95 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E238u, 0x27E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E240u;
label_27e240:
    // 0x27e240: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27E240u;
    {
        const bool branch_taken_0x27e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E240u;
        // 0x27e244: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e240) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E248u;
label_27e248:
    // 0x27e248: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E248u;
    SET_GPR_U32(ctx, 31, 0x27E250u);
    ctx->pc = 0x27E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E248u;
    // 0x27e24c: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E248u, 0x27E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E250u;
label_27e250:
    // 0x27e250: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27E250u;
    {
        const bool branch_taken_0x27e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E250u;
        // 0x27e254: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e250) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E258u;
label_27e258:
    // 0x27e258: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E258u;
    SET_GPR_U32(ctx, 31, 0x27E260u);
    ctx->pc = 0x27E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E258u;
    // 0x27e25c: 0x24040097  addiu       $a0, $zero, 0x97 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E258u, 0x27E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E260u;
label_27e260:
    // 0x27e260: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27E260u;
    {
        const bool branch_taken_0x27e260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E260u;
        // 0x27e264: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e260) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E268u;
label_27e268:
    // 0x27e268: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E268u;
    SET_GPR_U32(ctx, 31, 0x27E270u);
    ctx->pc = 0x27E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E268u;
    // 0x27e26c: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E268u, 0x27E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E270u;
label_27e270:
    // 0x27e270: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27E270u;
    {
        const bool branch_taken_0x27e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E270u;
        // 0x27e274: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e270) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E278u;
label_27e278:
    // 0x27e278: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E278u;
    SET_GPR_U32(ctx, 31, 0x27E280u);
    ctx->pc = 0x27E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E278u;
    // 0x27e27c: 0x24040099  addiu       $a0, $zero, 0x99 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E278u, 0x27E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E280u;
label_27e280:
    // 0x27e280: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27E280u;
    {
        const bool branch_taken_0x27e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E280u;
        // 0x27e284: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e280) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E288u;
label_27e288:
    // 0x27e288: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E288u;
    SET_GPR_U32(ctx, 31, 0x27E290u);
    ctx->pc = 0x27E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E288u;
    // 0x27e28c: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E288u, 0x27E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E290u;
label_27e290:
    // 0x27e290: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27E290u;
    {
        const bool branch_taken_0x27e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E290u;
        // 0x27e294: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e290) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E298u;
label_27e298:
    // 0x27e298: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E298u;
    SET_GPR_U32(ctx, 31, 0x27E2A0u);
    ctx->pc = 0x27E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E298u;
    // 0x27e29c: 0x2404009b  addiu       $a0, $zero, 0x9B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E298u, 0x27E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2A0u;
label_27e2a0:
    // 0x27e2a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27E2A0u;
    {
        const bool branch_taken_0x27e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2A0u;
        // 0x27e2a4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2a0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E2A8u;
label_27e2a8:
    // 0x27e2a8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E2A8u;
    SET_GPR_U32(ctx, 31, 0x27E2B0u);
    ctx->pc = 0x27E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2A8u;
    // 0x27e2ac: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E2A8u, 0x27E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2B0u;
label_27e2b0:
    // 0x27e2b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27E2B0u;
    {
        const bool branch_taken_0x27e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2B0u;
        // 0x27e2b4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2b0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E2B8u;
label_27e2b8:
    // 0x27e2b8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E2B8u;
    SET_GPR_U32(ctx, 31, 0x27E2C0u);
    ctx->pc = 0x27E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2B8u;
    // 0x27e2bc: 0x24040071  addiu       $a0, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E2B8u, 0x27E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2C0u;
label_27e2c0:
    // 0x27e2c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E2C0u;
    {
        const bool branch_taken_0x27e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C0u;
        // 0x27e2c4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2c0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E2C8u;
label_27e2c8:
    // 0x27e2c8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E2C8u;
    SET_GPR_U32(ctx, 31, 0x27E2D0u);
    ctx->pc = 0x27E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2C8u;
    // 0x27e2cc: 0x24040072  addiu       $a0, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E2C8u, 0x27E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2D0u;
label_27e2d0:
    // 0x27e2d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E2D0u;
    {
        const bool branch_taken_0x27e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2D0u;
        // 0x27e2d4: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2d0) {
            ctx->pc = 0x27E2E4u;
            goto label_27e2e4;
        }
    }
    ctx->pc = 0x27E2D8u;
label_27e2d8:
    // 0x27e2d8: 0xc09fc30  jal         func_27F0C0
    ctx->pc = 0x27E2D8u;
    SET_GPR_U32(ctx, 31, 0x27E2E0u);
    ctx->pc = 0x27E2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E2D8u;
    // 0x27e2dc: 0x24040073  addiu       $a0, $zero, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C0u, 0x27E2D8u, 0x27E2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2E0u;
label_27e2e0:
    // 0x27e2e0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x27e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_27e2e4:
    // 0x27e2e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e2e8: 0x8c434074  lw          $v1, 0x4074($v0)
    ctx->pc = 0x27e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16500)));
    // 0x27e2ec: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27E2ECu;
    {
        const bool branch_taken_0x27e2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2ECu;
        // 0x27e2f0: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2ec) {
            ctx->pc = 0x27E358u;
            goto label_27e358;
        }
    }
    ctx->pc = 0x27E2F4u;
    // 0x27e2f4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27e2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x27e2f8: 0x8e023568  lw          $v0, 0x3568($s0)
    ctx->pc = 0x27e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13672)));
    // 0x27e2fc: 0x58400047  blezl       $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x27E2FCu;
    {
        const bool branch_taken_0x27e2fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27e2fc) {
            ctx->pc = 0x27E300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E2FCu;
            // 0x27e300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E41Cu;
            goto label_27e41c;
        }
    }
    ctx->pc = 0x27E304u;
    // 0x27e304: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27e304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27e308: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27e30c: 0x8c433570  lw          $v1, 0x3570($v0)
    ctx->pc = 0x27e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13680)));
    // 0x27e310: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E310u;
    {
        const bool branch_taken_0x27e310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27e310) {
            ctx->pc = 0x27E314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E310u;
            // 0x27e314: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E324u;
            goto label_27e324;
        }
    }
    ctx->pc = 0x27E318u;
    // 0x27e318: 0xc09fc10  jal         func_27F040
    ctx->pc = 0x27E318u;
    SET_GPR_U32(ctx, 31, 0x27E320u);
    ctx->pc = 0x27F040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F040u, 0x27E318u, 0x27E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E320u;
label_27e320:
    // 0x27e320: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x27e320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_27e324:
    // 0x27e324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e328: 0x24454280  addiu       $a1, $v0, 0x4280
    ctx->pc = 0x27e328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17024));
    // 0x27e32c: 0x0  nop
    ctx->pc = 0x27e32cu;
    // NOP
label_27e330:
    // 0x27e330: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27e334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e338: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x27e338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x27e33c: 0x0  nop
    ctx->pc = 0x27e33cu;
    // NOP
    // 0x27e340: 0x0  nop
    ctx->pc = 0x27e340u;
    // NOP
    // 0x27e344: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E344u;
    {
        const bool branch_taken_0x27e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E344u;
        // 0x27e348: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e344) {
            ctx->pc = 0x27E330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e330;
        }
    }
    ctx->pc = 0x27E34Cu;
    // 0x27e34c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x27E34Cu;
    {
        const bool branch_taken_0x27e34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E34Cu;
        // 0x27e350: 0xae003568  sw          $zero, 0x3568($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 13672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e34c) {
            ctx->pc = 0x27E418u;
            goto label_27e418;
        }
    }
    ctx->pc = 0x27E354u;
    // 0x27e354: 0x0  nop
    ctx->pc = 0x27e354u;
    // NOP
label_27e358:
    // 0x27e358: 0x8e02355c  lw          $v0, 0x355C($s0)
    ctx->pc = 0x27e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13660)));
    // 0x27e35c: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27E35Cu;
    {
        const bool branch_taken_0x27e35c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27e35c) {
            ctx->pc = 0x27E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E35Cu;
            // 0x27e360: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E3BCu;
            goto label_27e3bc;
        }
    }
    ctx->pc = 0x27E364u;
    // 0x27e364: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27E364u;
    {
        const bool branch_taken_0x27e364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E364u;
        // 0x27e368: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e364) {
            ctx->pc = 0x27E3B8u;
            goto label_27e3b8;
        }
    }
    ctx->pc = 0x27E36Cu;
    // 0x27e36c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27e370: 0x8c433570  lw          $v1, 0x3570($v0)
    ctx->pc = 0x27e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13680)));
    // 0x27e374: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E374u;
    {
        const bool branch_taken_0x27e374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27e374) {
            ctx->pc = 0x27E378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E374u;
            // 0x27e378: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E388u;
            goto label_27e388;
        }
    }
    ctx->pc = 0x27E37Cu;
    // 0x27e37c: 0xc09fc10  jal         func_27F040
    ctx->pc = 0x27E37Cu;
    SET_GPR_U32(ctx, 31, 0x27E384u);
    ctx->pc = 0x27F040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F040u, 0x27E37Cu, 0x27E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E384u;
label_27e384:
    // 0x27e384: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x27e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_27e388:
    // 0x27e388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27e388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e38c: 0x24454078  addiu       $a1, $v0, 0x4078
    ctx->pc = 0x27e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16504));
label_27e390:
    // 0x27e390: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27e394: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27e394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e398: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x27e398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x27e39c: 0x0  nop
    ctx->pc = 0x27e39cu;
    // NOP
    // 0x27e3a0: 0x0  nop
    ctx->pc = 0x27e3a0u;
    // NOP
    // 0x27e3a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E3A4u;
    {
        const bool branch_taken_0x27e3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3A4u;
        // 0x27e3a8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3a4) {
            ctx->pc = 0x27E390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e390;
        }
    }
    ctx->pc = 0x27E3ACu;
    // 0x27e3ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27E3ACu;
    {
        const bool branch_taken_0x27e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3ACu;
        // 0x27e3b0: 0xae00355c  sw          $zero, 0x355C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 13660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3ac) {
            ctx->pc = 0x27E418u;
            goto label_27e418;
        }
    }
    ctx->pc = 0x27E3B4u;
    // 0x27e3b4: 0x0  nop
    ctx->pc = 0x27e3b4u;
    // NOP
label_27e3b8:
    // 0x27e3b8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_27e3bc:
    // 0x27e3bc: 0x8e023560  lw          $v0, 0x3560($s0)
    ctx->pc = 0x27e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13664)));
    // 0x27e3c0: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27E3C0u;
    {
        const bool branch_taken_0x27e3c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27e3c0) {
            ctx->pc = 0x27E3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E3C0u;
            // 0x27e3c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E41Cu;
            goto label_27e41c;
        }
    }
    ctx->pc = 0x27E3C8u;
    // 0x27e3c8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E3C8u;
    {
        const bool branch_taken_0x27e3c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3C8u;
        // 0x27e3cc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3c8) {
            ctx->pc = 0x27E418u;
            goto label_27e418;
        }
    }
    ctx->pc = 0x27E3D0u;
    // 0x27e3d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27e3d4: 0x8c433570  lw          $v1, 0x3570($v0)
    ctx->pc = 0x27e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13680)));
    // 0x27e3d8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E3D8u;
    {
        const bool branch_taken_0x27e3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x27e3d8) {
            ctx->pc = 0x27E3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E3D8u;
            // 0x27e3dc: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E3ECu;
            goto label_27e3ec;
        }
    }
    ctx->pc = 0x27E3E0u;
    // 0x27e3e0: 0xc09fc10  jal         func_27F040
    ctx->pc = 0x27E3E0u;
    SET_GPR_U32(ctx, 31, 0x27E3E8u);
    ctx->pc = 0x27F040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F040u, 0x27E3E0u, 0x27E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3E8u;
label_27e3e8:
    // 0x27e3e8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x27e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_27e3ec:
    // 0x27e3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27e3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3f0: 0x24454178  addiu       $a1, $v0, 0x4178
    ctx->pc = 0x27e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16760));
    // 0x27e3f4: 0x0  nop
    ctx->pc = 0x27e3f4u;
    // NOP
label_27e3f8:
    // 0x27e3f8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27e3fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e400: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x27e400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x27e404: 0x0  nop
    ctx->pc = 0x27e404u;
    // NOP
    // 0x27e408: 0x0  nop
    ctx->pc = 0x27e408u;
    // NOP
    // 0x27e40c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E40Cu;
    {
        const bool branch_taken_0x27e40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E40Cu;
        // 0x27e410: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e40c) {
            ctx->pc = 0x27E3F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e3f8;
        }
    }
    ctx->pc = 0x27E414u;
    // 0x27e414: 0xae003560  sw          $zero, 0x3560($s0)
    ctx->pc = 0x27e414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13664), GPR_U32(ctx, 0));
label_27e418:
    // 0x27e418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27e418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e41c:
    // 0x27e41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27e41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27e420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27e420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e424: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27e424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27e428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27e428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E42Cu;
        // 0x27e430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E434u;
    // 0x27e434: 0x0  nop
    ctx->pc = 0x27e434u;
    // NOP
}
