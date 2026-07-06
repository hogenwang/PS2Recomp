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

// Function: sub_002DB878
// Address: 0x2db878 - 0x2dba48
void sub_002DB878_0x2db878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB878_0x2db878");
#endif

    switch (ctx->pc) {
        case 0x2db8ccu: goto label_2db8cc;
        case 0x2db8e4u: goto label_2db8e4;
        case 0x2db918u: goto label_2db918;
        case 0x2db980u: goto label_2db980;
        case 0x2dba1cu: goto label_2dba1c;
        default: break;
    }

    ctx->pc = 0x2db878u;

    // 0x2db878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2db87c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2db87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2db880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db884: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2db884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2db888: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2db888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2db88c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2db88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2db890: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2db890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2db894: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x2db894u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2db898: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2db898u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2db89c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2db89cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2db8a0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db8a4: 0x2463b8ec  addiu       $v1, $v1, -0x4714
    ctx->pc = 0x2db8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949100));
    // 0x2db8a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db8ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB8ACu;
    {
        const bool branch_taken_0x2db8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db8ac) {
            ctx->pc = 0x2DB8CCu;
            goto label_2db8cc;
        }
    }
    ctx->pc = 0x2DB8B4u;
    // 0x2db8b4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db8b8: 0x2484b900  addiu       $a0, $a0, -0x4700
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949120));
    // 0x2db8bc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db8c0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db8c4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB8C4u;
    SET_GPR_U32(ctx, 31, 0x2DB8CCu);
    ctx->pc = 0x2DB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8C4u;
    // 0x2db8c8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB8C4u, 0x2DB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8CCu;
label_2db8cc:
    // 0x2db8cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB8CCu;
    {
        const bool branch_taken_0x2db8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8cc) {
            ctx->pc = 0x2DB900u;
            goto label_2db900;
        }
    }
    ctx->pc = 0x2DB8D4u;
    // 0x2db8d4: 0xdf4ea36f  ld          $t6, -0x5C91($k0)
    ctx->pc = 0x2db8d4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 26), 4294943599)));
    // 0x2db8d8: 0x8cbde455  lw          $sp, -0x1BAB($a1)
    ctx->pc = 0x2db8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960213)));
    // 0x2db8dc: 0xc6da313  jal         func_1B68C4C
    ctx->pc = 0x2DB8DCu;
    SET_GPR_U32(ctx, 31, 0x2DB8E4u);
    ctx->pc = 0x2DB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8DCu;
    // 0x2db8e0: 0xa1686c71  sb          $t0, 0x6C71($t3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 11), 27761), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B68C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B68C4Cu, 0x2DB8DCu, 0x2DB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8E4u;
label_2db8e4:
    // 0x2db8e4: 0xfd2505d2  sd          $a1, 0x5D2($t1)
    ctx->pc = 0x2db8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 1490), GPR_U64(ctx, 5));
    // 0x2db8e8: 0x8fd8634d  lw          $t8, 0x634D($fp)
    ctx->pc = 0x2db8e8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 25421)));
    // 0x2db8ec: 0x0  nop
    ctx->pc = 0x2db8ecu;
    // NOP
    // 0x2db8f0: 0x7665252a  .word       0x7665252A                   # INVALID     $s3, $a1, 0x252A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2db8f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DB8F0 raw=0x7665252A");
    // 0x2db8f4: 0xc712eeb6  lwc1        $f18, -0x114A($t8)
    ctx->pc = 0x2db8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294962870)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db8f8: 0x766525e6  .word       0x766525E6                   # INVALID     $s3, $a1, 0x25E6 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2db8f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DB8F8 raw=0x766525E6");
    // 0x2db8fc: 0x0  nop
    ctx->pc = 0x2db8fcu;
    // NOP
label_2db900:
    // 0x2db900: 0x7673e023  .word       0x7673E023                   # INVALID     $s3, $s3, -0x1FDD # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2db900u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DB900 raw=0x7673E023");
    // 0x2db904: 0x7073d031  .word       0x7073D031                   # pmthl.lw    $v1 # 0013D000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x2db904u;
    { __m128i val = GPR_VEC(ctx, 3); ctx->lo = _mm_extract_epi32(val, 0); ctx->hi = _mm_extract_epi32(val, 1); }
    // 0x2db908: 0x3c33ae60  .word       0x3C33AE60                   # lui         $s3, 0xAE60 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2db908u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)44640 << 16));
    // 0x2db90c: 0xf09dc028  scd         $sp, -0x3FD8($a0)
    ctx->pc = 0x2db90cu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2DB90C raw=0xF09DC028");
    // 0x2db910: 0xc0b76e0  jal         func_2DDB80
    ctx->pc = 0x2DB910u;
    SET_GPR_U32(ctx, 31, 0x2DB918u);
    ctx->pc = 0x2DB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB910u;
    // 0x2db914: 0x7d43a861  sq          $v1, -0x579F($t2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294944865), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDB80u, 0x2DB910u, 0x2DB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB918u;
label_2db918:
    // 0x2db918: 0xfc73a023  sd          $s3, -0x5FDD($v1)
    ctx->pc = 0x2db918u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294942755), GPR_U64(ctx, 19));
    // 0x2db91c: 0x7c73a83b  sq          $s3, -0x57C5($v1)
    ctx->pc = 0x2db91cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294944827), GPR_VEC(ctx, 19));
    // 0x2db920: 0x1a72b63a  .word       0x1A72B63A                   # blez        $s3, . + 4 + (-0x49C6 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DB920u;
    {
        const bool branch_taken_0x2db920 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2DB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB920u;
        // 0x2db924: 0x3073e632  andi        $s3, $v1, 0xE632 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)58930);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db920) {
            ctx->pc = 0x2C920Cu;
            return;
        }
    }
    ctx->pc = 0x2DB928u;
    // 0x2db928: 0x7c23a861  sq          $v1, -0x579F($at)
    ctx->pc = 0x2db928u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294944865), GPR_VEC(ctx, 3));
    // 0x2db92c: 0x7c73a83b  sq          $s3, -0x57C5($v1)
    ctx->pc = 0x2db92cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294944827), GPR_VEC(ctx, 19));
    // 0x2db930: 0xf653a878  sdc1        $f19, -0x5788($s2)
    ctx->pc = 0x2db930u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DB930 raw=0xF653A878");
    // 0x2db934: 0x7633ac79  .word       0x7633AC79                   # INVALID     $s1, $s3, -0x5387 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2db934u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DB934 raw=0x7633AC79");
    // 0x2db938: 0xfa72883b  sqc2        $vf18, -0x77C5($s3)
    ctx->pc = 0x2db938u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4294936635), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x2db93c: 0x3673e038  ori         $s3, $s3, 0xE038
    ctx->pc = 0x2db93cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)57400);
    // 0x2db940: 0x3873f82a  xori        $s3, $v1, 0xF82A
    ctx->pc = 0x2db940u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)63530);
    // 0x2db944: 0xfd8d81cf  sd          $t5, -0x7E31($t4)
    ctx->pc = 0x2db944u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 4294934991), GPR_U64(ctx, 13));
    // 0x2db948: 0x7a72e83a  lq          $s2, -0x17C6($s3)
    ctx->pc = 0x2db948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 19), 4294961210)));
    // 0x2db94c: 0x7eefd1c5  sq          $t7, -0x2E3B($s7)
    ctx->pc = 0x2db94cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294955461), GPR_VEC(ctx, 15));
    // 0x2db950: 0x3f8dc1c5  .word       0x3F8DC1C5                   # lui         $t5, 0xC1C5 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2db950u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)49605 << 16));
    // 0x2db954: 0x7f13203a  sq          $s3, 0x203A($t8)
    ctx->pc = 0x2db954u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 8250), GPR_VEC(ctx, 19));
    // 0x2db958: 0x3d53ae60  .word       0x3D53AE60                   # lui         $s3, 0xAE60 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2db958u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)44640 << 16));
    // 0x2db95c: 0x7ef5d13b  sq          $s5, -0x2EC5($s7)
    ctx->pc = 0x2db95cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294955323), GPR_VEC(ctx, 21));
    // 0x2db960: 0x7f23203a  sq          $v1, 0x203A($t9)
    ctx->pc = 0x2db960u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 8250), GPR_VEC(ctx, 3));
    // 0x2db964: 0x7d73a861  sq          $s3, -0x579F($t3)
    ctx->pc = 0x2db964u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 4294944865), GPR_VEC(ctx, 19));
    // 0x2db968: 0x7eedd03b  sq          $t5, -0x2FC5($s7)
    ctx->pc = 0x2db968u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294955067), GPR_VEC(ctx, 13));
    // 0x2db96c: 0x7f33203a  sq          $s3, 0x203A($t9)
    ctx->pc = 0x2db96cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 8250), GPR_VEC(ctx, 19));
    // 0x2db970: 0x5f73d03b  .word       0x5F73D03B                   # bgtzl       $k1, . + 4 + (-0x2FC5 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DB970u;
    {
        const bool branch_taken_0x2db970 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2db970) {
            ctx->pc = 0x2DB974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB970u;
            // 0x2db974: 0x7c73a83b  sq          $s3, -0x57C5($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 4294944827), GPR_VEC(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFA60u;
            return;
        }
    }
    ctx->pc = 0x2DB978u;
    // 0x2db978: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DB978u;
    SET_GPR_U32(ctx, 31, 0x2DB980u);
    ctx->pc = 0x2DB97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB978u;
    // 0x2db97c: 0x7c73a83b  sq          $s3, -0x57C5($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294944827), GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DB978u, 0x2DB980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB980u;
label_2db980:
    // 0x2db980: 0x7873203a  lq          $s3, 0x203A($v1)
    ctx->pc = 0x2db980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 3), 8250)));
    // 0x2db984: 0x7c73247a  sq          $s3, 0x247A($v1)
    ctx->pc = 0x2db984u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 9338), GPR_VEC(ctx, 19));
    // 0x2db988: 0xdc33ac79  ld          $s3, -0x5387($at)
    ctx->pc = 0x2db988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 1), 4294945913)));
    // 0x2db98c: 0x5c73e439  .word       0x5C73E439                   # bgtzl       $v1, . + 4 + (-0x1BC7 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DB98Cu;
    {
        const bool branch_taken_0x2db98c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2db98c) {
            ctx->pc = 0x2DB990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB98Cu;
            // 0x2db990: 0x7c73a83b  sq          $s3, -0x57C5($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 4294944827), GPR_VEC(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4A74u;
            return;
        }
    }
    ctx->pc = 0x2DB994u;
    // 0x2db994: 0x7c73a83b  sq          $s3, -0x57C5($v1)
    ctx->pc = 0x2db994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294944827), GPR_VEC(ctx, 19));
    // 0x2db998: 0x5073243d  beql        $v1, $s3, . + 4 + (0x243D << 2)
    ctx->pc = 0x2DB998u;
    {
        const bool branch_taken_0x2db998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x2db998) {
            ctx->pc = 0x2DB99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB998u;
            // 0x2db99c: 0x5673243f  bnel        $s3, $s3, . + 4 + (0x243F << 2) (Delay Slot)
            // Likely branch instruction at 0x2DB99C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4A90u;
            return;
        }
    }
    ctx->pc = 0x2DB9A0u;
    // 0x2db9a0: 0x7d332457  sq          $s3, 0x2457($t1)
    ctx->pc = 0x2db9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 9303), GPR_VEC(ctx, 19));
    // 0x2db9a4: 0x7c7324f3  sq          $s3, 0x24F3($v1)
    ctx->pc = 0x2db9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 9459), GPR_VEC(ctx, 19));
    // 0x2db9a8: 0x7863203b  lq          $v1, 0x203B($v1)
    ctx->pc = 0x2db9a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 8251)));
    // 0x2db9ac: 0x7c732231  sq          $s3, 0x2231($v1)
    ctx->pc = 0x2db9acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8753), GPR_VEC(ctx, 19));
    // 0x2db9b0: 0x7a73f423  lq          $s3, -0xBDD($s3)
    ctx->pc = 0x2db9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 19), 4294964259)));
    // 0x2db9b4: 0x54732439  bnel        $v1, $s3, . + 4 + (0x2439 << 2)
    ctx->pc = 0x2DB9B4u;
    {
        const bool branch_taken_0x2db9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2db9b4) {
            ctx->pc = 0x2DB9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9B4u;
            // 0x2db9b8: 0x7c7324f3  sq          $s3, 0x24F3($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 9459), GPR_VEC(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4A9Cu;
            return;
        }
    }
    ctx->pc = 0x2DB9BCu;
    // 0x2db9bc: 0x7863203b  lq          $v1, 0x203B($v1)
    ctx->pc = 0x2db9bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 8251)));
    // 0x2db9c0: 0xde53a871  ld          $s3, -0x578F($s2)
    ctx->pc = 0x2db9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 4294944881)));
    // 0x2db9c4: 0xbd8d81e3  cache       0x0D, -0x7E1D($t4)
    ctx->pc = 0x2db9c4u;
    // CACHE instruction (ignored)
    // 0x2db9c8: 0x7872e83a  lq          $s2, -0x17C6($v1)
    ctx->pc = 0x2db9c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 4294961210)));
    // 0x2db9cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB9CCu;
    {
        const bool branch_taken_0x2db9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db9cc) {
            ctx->pc = 0x2DB9FCu;
            goto label_2db9fc;
        }
    }
    ctx->pc = 0x2DB9D4u;
    // 0x2db9d4: 0xddd87cb7  ld          $t8, 0x7CB7($t6)
    ctx->pc = 0x2db9d4u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 14), 31927)));
    // 0x2db9d8: 0x8e82029d  lw          $v0, 0x29D($s4)
    ctx->pc = 0x2db9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 669)));
    // 0x2db9dc: 0x87ec0c2b  lh          $t4, 0xC2B($ra)
    ctx->pc = 0x2db9dcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 31), 3115)));
    // 0x2db9e0: 0x8e1d8045  lw          $sp, -0x7FBB($s0)
    ctx->pc = 0x2db9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294934597)));
    // 0x2db9e4: 0x1cab820  add         $s7, $t6, $t2
    ctx->pc = 0x2db9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 14);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x2db9e8: 0xffa55062  sd          $a1, 0x5062($sp)
    ctx->pc = 0x2db9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 20578), GPR_U64(ctx, 5));
    // 0x2db9ec: 0x7a252566  lq          $a1, 0x2566($s1)
    ctx->pc = 0x2db9ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 9574)));
    // 0x2db9f0: 0xc712eeb7  lwc1        $f18, -0x1149($t8)
    ctx->pc = 0x2db9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294962871)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db9f4: 0x7a2525aa  lq          $a1, 0x25AA($s1)
    ctx->pc = 0x2db9f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 9642)));
    // 0x2db9f8: 0x0  nop
    ctx->pc = 0x2db9f8u;
    // NOP
label_2db9fc:
    // 0x2db9fc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dba00: 0x2442b9ec  addiu       $v0, $v0, -0x4614
    ctx->pc = 0x2dba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949356));
    // 0x2dba04: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dba04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dba08: 0x2484b9cc  addiu       $a0, $a0, -0x4634
    ctx->pc = 0x2dba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949324));
    // 0x2dba0c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dba0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dba10: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dba14: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DBA14u;
    SET_GPR_U32(ctx, 31, 0x2DBA1Cu);
    ctx->pc = 0x2DBA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA14u;
    // 0x2dba18: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DBA14u, 0x2DBA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA1Cu;
label_2dba1c:
    // 0x2dba1c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dba1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dba20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dba24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dba24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dba28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2dba28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dba2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2dba2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dba30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dba34: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2dba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dba38: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2dba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dba3c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2dba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dba40: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA40u;
        // 0x2dba44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBA48u;
}
