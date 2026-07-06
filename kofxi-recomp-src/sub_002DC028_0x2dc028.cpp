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

// Function: sub_002DC028
// Address: 0x2dc028 - 0x2dc240
void sub_002DC028_0x2dc028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC028_0x2dc028");
#endif

    switch (ctx->pc) {
        case 0x2dc080u: goto label_2dc080;
        case 0x2dc090u: goto label_2dc090;
        case 0x2dc0a0u: goto label_2dc0a0;
        case 0x2dc0c0u: goto label_2dc0c0;
        case 0x2dc0f8u: goto label_2dc0f8;
        case 0x2dc110u: goto label_2dc110;
        case 0x2dc13cu: goto label_2dc13c;
        case 0x2dc178u: goto label_2dc178;
        case 0x2dc1e8u: goto label_2dc1e8;
        case 0x2dc214u: goto label_2dc214;
        default: break;
    }

    ctx->pc = 0x2dc028u;

    // 0x2dc028: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dc028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2dc02c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2dc02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2dc030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dc030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc034: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2dc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2dc038: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2dc038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc03c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2dc03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2dc040: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2dc040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2dc044: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2dc044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2dc048: 0xe7b60098  swc1        $f22, 0x98($sp)
    ctx->pc = 0x2dc048u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2dc04c: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x2dc04cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2dc050: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x2dc050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2dc054: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dc054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dc058: 0x2463c0a0  addiu       $v1, $v1, -0x3F60
    ctx->pc = 0x2dc058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951072));
    // 0x2dc05c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc060: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC060u;
    {
        const bool branch_taken_0x2dc060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc060) {
            ctx->pc = 0x2DC080u;
            goto label_2dc080;
        }
    }
    ctx->pc = 0x2DC068u;
    // 0x2dc068: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc06c: 0x2484c0b4  addiu       $a0, $a0, -0x3F4C
    ctx->pc = 0x2dc06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951092));
    // 0x2dc070: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dc070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dc074: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dc074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dc078: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC078u;
    SET_GPR_U32(ctx, 31, 0x2DC080u);
    ctx->pc = 0x2DC07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC078u;
    // 0x2dc07c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DC078u, 0x2DC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC080u;
label_2dc080:
    // 0x2dc080: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DC080u;
    {
        const bool branch_taken_0x2dc080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc080) {
            ctx->pc = 0x2DC0B4u;
            goto label_2dc0b4;
        }
    }
    ctx->pc = 0x2DC088u;
    // 0x2dc088: 0xc922744  jal         func_2489D10
    ctx->pc = 0x2DC088u;
    SET_GPR_U32(ctx, 31, 0x2DC090u);
    ctx->pc = 0x2DC08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC088u;
    // 0x2dc08c: 0xa278f841  sb          $t8, -0x7BF($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294965313), (uint8_t)GPR_U32(ctx, 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489D10u, 0x2DC088u, 0x2DC090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC090u;
label_2dc090:
    // 0x2dc090: 0xde0ca127  ld          $t4, -0x5ED9($s0)
    ctx->pc = 0x2dc090u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 16), 4294943015)));
    // 0x2dc094: 0xa29029a9  sb          $s0, 0x29A9($s4)
    ctx->pc = 0x2dc094u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10665), (uint8_t)GPR_U32(ctx, 16));
    // 0x2dc098: 0xc783f4c  jal         func_1E0FD30
    ctx->pc = 0x2DC098u;
    SET_GPR_U32(ctx, 31, 0x2DC0A0u);
    ctx->pc = 0x2DC09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC098u;
    // 0x2dc09c: 0xdf76dd2f  ld          $s6, -0x22D1($k1) (Delay Slot)
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 27), 4294958383)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0FD30u, 0x2DC098u, 0x2DC0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0A0u;
label_2dc0a0:
    // 0x2dc0a0: 0x0  nop
    ctx->pc = 0x2dc0a0u;
    // NOP
    // 0x2dc0a4: 0xa25ce5c3  sb          $gp, -0x1A3D($s2)
    ctx->pc = 0x2dc0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294960579), (uint8_t)GPR_U32(ctx, 28));
    // 0x2dc0a8: 0xc712f2d4  lwc1        $f18, -0xD2C($t8)
    ctx->pc = 0x2dc0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc0ac: 0xa25ce4d3  sb          $gp, -0x1B2D($s2)
    ctx->pc = 0x2dc0acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294960339), (uint8_t)GPR_U32(ctx, 28));
    // 0x2dc0b0: 0x0  nop
    ctx->pc = 0x2dc0b0u;
    // NOP
label_2dc0b4:
    // 0x2dc0b4: 0x402700b0  .word       0x402700B0                   # dmfc0       $a3, Index # 000000B0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dc0b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x2DC0B4 raw=0x402700B0");
    // 0x2dc0b8: 0xc0b7536  jal         func_2DD4D8
    ctx->pc = 0x2DC0B8u;
    SET_GPR_U32(ctx, 31, 0x2DC0C0u);
    ctx->pc = 0x2DC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC0B8u;
    // 0x2dc0bc: 0x2d022000  sltiu       $v0, $t0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD4D8u, 0x2DC0B8u, 0x2DC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0C0u;
label_2dc0c0:
    // 0x2dc0c0: 0x1240003  .word       0x01240003                   # sra         $zero, $a0, 0 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc0c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 0));
    // 0x2dc0c4: 0x1f140043  .word       0x1F140043                   # bgtz        $t8, . + 4 + (0x43 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DC0C4u;
    {
        const bool branch_taken_0x2dc0c4 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x2DC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0C4u;
        // 0x2dc0c8: 0x302700b1  andi        $a3, $at, 0xB1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)177);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0c4) {
            ctx->pc = 0x2DC1D4u;
            goto label_2dc1d4;
        }
    }
    ctx->pc = 0x2DC0CCu;
    // 0x2dc0cc: 0x2d002800  sltiu       $zero, $t0, 0x2800
    ctx->pc = 0x2dc0ccu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10240) ? 1 : 0);
    // 0x2dc0d0: 0x21021005  addi        $v0, $t0, 0x1005
    ctx->pc = 0x2dc0d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4101, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x2dc0d4: 0x21022025  addi        $v0, $t0, 0x2025
    ctx->pc = 0x2dc0d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)8229, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x2dc0d8: 0x900043  .word       0x00900043                   # sra         $zero, $s0, 1 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc0d8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2dc0dc: 0x12400a5  .word       0x012400A5                   # or          $zero, $t1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc0dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x2dc0e0: 0x82c00a2  j           func_B00288
    ctx->pc = 0x2DC0E0u;
    ctx->pc = 0x2DC0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC0E0u;
    // 0x2dc0e4: 0xfa14ff40  sqc2        $vf20, -0xC0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967104), _mm_castps_si128(ctx->vu0_vf[20]));
    ctx->in_delay_slot = false;
    ctx->pc = 0xB00288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB00288u, 0x2DC0E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC0E8u;
    // 0x2dc0e8: 0xa00083  .word       0x00A00083                   # sra         $zero, $zero, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc0e8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
    // 0x2dc0ec: 0x102700a4  beq         $at, $a3, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2DC0ECu;
    {
        const bool branch_taken_0x2dc0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 7));
        ctx->pc = 0x2DC0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0ECu;
        // 0x2dc0f0: 0xc0b6fc4  jal         func_2DBF10 (Delay Slot)
        // JAL 0x2DBF10 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0ec) {
            ctx->pc = 0x2DC380u;
            return;
        }
    }
    ctx->pc = 0x2DC0F4u;
    // 0x2dc0f4: 0xff24ff13  sd          $a0, -0xED($t9)
    ctx->pc = 0x2dc0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 4294967059), GPR_U64(ctx, 4));
label_2dc0f8:
    // 0x2dc0f8: 0x12040040  beq         $s0, $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2DC0F8u;
    {
        const bool branch_taken_0x2dc0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0F8u;
        // 0x2dc0fc: 0x3c09003c  lui         $t1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0f8) {
            ctx->pc = 0x2DC1FCu;
            goto label_2dc1fc;
        }
    }
    ctx->pc = 0x2DC100u;
    // 0x2dc100: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2dc100u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2dc104: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dc104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dc108: 0x2240003  .word       0x02240003                   # sra         $zero, $a0, 0 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc108u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 0));
    // 0x2dc10c: 0x2442e040  addiu       $v0, $v0, -0x1FC0
    ctx->pc = 0x2dc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959168));
label_2dc110:
    // 0x2dc110: 0x2d022040  sltiu       $v0, $t0, 0x2040
    ctx->pc = 0x2dc110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8256) ? 1 : 0);
    // 0x2dc114: 0x2529e000  addiu       $t1, $t1, -0x2000
    ctx->pc = 0x2dc114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959104));
    // 0x2dc118: 0x2d025020  sltiu       $v0, $t0, 0x5020
    ctx->pc = 0x2dc118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)20512) ? 1 : 0);
    // 0x2dc11c: 0x256be020  addiu       $t3, $t3, -0x1FE0
    ctx->pc = 0x2dc11cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959136));
    // 0x2dc120: 0x38240005  xori        $a0, $at, 0x5
    ctx->pc = 0x2dc120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)5);
    // 0x2dc124: 0x502700a6  beql        $at, $a3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2DC124u;
    {
        const bool branch_taken_0x2dc124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 7));
        if (branch_taken_0x2dc124) {
            ctx->pc = 0x2DC128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC124u;
            // 0x2dc128: 0x102700a7  beq         $at, $a3, . + 4 + (0xA7 << 2) (Delay Slot)
            // Likely branch instruction at 0x2DC128 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC3C0u;
            return;
        }
    }
    ctx->pc = 0x2DC12Cu;
    // 0x2dc12c: 0x20240008  addi        $a0, $at, 0x8
    ctx->pc = 0x2dc12cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x2dc130: 0xaf00a2  .word       0x00AF00A2                   # sub         $zero, $a1, $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc130u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 5), GPR_U32(ctx, 15), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    // 0x2dc134: 0xc0b8e62  jal         func_2E3988
    ctx->pc = 0x2DC134u;
    SET_GPR_U32(ctx, 31, 0x2DC13Cu);
    ctx->pc = 0x2DC138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC134u;
    // 0x2dc138: 0x8af00a3  j           func_2BC028C (Delay Slot)
    // J 0x2BC028C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3988u, 0x2DC134u, 0x2DC13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC13Cu;
label_2dc13c:
    // 0x2dc13c: 0x280042  .word       0x00280042                   # srl         $zero, $t0, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc13cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x2dc140: 0xa009802  j           func_8026008
    ctx->pc = 0x2DC140u;
    ctx->pc = 0x2DC144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC140u;
    // 0x2dc144: 0xff3c4e01  sd          $gp, 0x4E01($t9) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 25), 19969), GPR_U64(ctx, 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8026008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8026008u, 0x2DC140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DC148u;
    // 0x2dc148: 0xff34ff21  sd          $s4, -0xDF($t9)
    ctx->pc = 0x2dc148u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 4294967073), GPR_U64(ctx, 20));
    // 0x2dc14c: 0x44b081  .word       0x0044B081                   # INVALID     $v0, $a0, -0x4F7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc14cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2DC14C raw=0x0044B081");
    // 0x2dc150: 0x102700b2  beq         $at, $a3, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2DC150u;
    {
        const bool branch_taken_0x2dc150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 7));
        ctx->pc = 0x2DC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC150u;
        // 0x2dc154: 0x803c4301  lb          $gp, 0x4301($at) (Delay Slot)
        SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17153)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc150) {
            ctx->pc = 0x2DC41Cu;
            return;
        }
    }
    ctx->pc = 0x2DC158u;
    // 0x2dc158: 0x44a881  .word       0x0044A881                   # INVALID     $v0, $a0, -0x577F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc158u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2DC158 raw=0x0044A881");
    // 0x2dc15c: 0x2d008000  sltiu       $zero, $t0, -0x8000
    ctx->pc = 0x2dc15cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x2dc160: 0x3c4f01  .word       0x003C4F01                   # INVALID     $at, $gp, 0x4F01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc160u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2DC160 raw=0x003C4F01");
    // 0x2dc164: 0x44a081  .word       0x0044A081                   # INVALID     $v0, $a0, -0x5F7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc164u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2DC164 raw=0x0044A081");
    // 0x2dc168: 0x3c8011  .word       0x003C8011                   # mthi        $at # 001C8000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc168u;
    ctx->hi = GPR_U64(ctx, 1);
    // 0x2dc16c: 0x0  nop
    ctx->pc = 0x2dc16cu;
    // NOP
    // 0x2dc170: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DC170u;
    SET_GPR_U32(ctx, 31, 0x2DC178u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DC170u, 0x2DC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC178u;
label_2dc178:
    // 0x2dc178: 0x440082  .word       0x00440082                   # srl         $zero, $a0, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc178u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x2dc17c: 0x20460080  addi        $a2, $v0, 0x80
    ctx->pc = 0x2dc17cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)128, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x2dc180: 0x21022050  addi        $v0, $t0, 0x2050
    ctx->pc = 0x2dc180u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)8272, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x2dc184: 0x1260010  .word       0x01260010                   # mfhi        $zero # 01260000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc184u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x2dc188: 0x0  nop
    ctx->pc = 0x2dc188u;
    // NOP
    // 0x2dc18c: 0x0  nop
    ctx->pc = 0x2dc18cu;
    // NOP
    // 0x2dc190: 0x3460016  dsrlv       $zero, $a2, $k0
    ctx->pc = 0x2dc190u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) >> (GPR_U32(ctx, 26) & 0x3F));
    // 0x2dc194: 0x2460015  .word       0x02460015                   # INVALID     $s2, $a2, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc194u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2DC194 raw=0x02460015");
    // 0x2dc198: 0x3646a000  ori         $a2, $s2, 0xA000
    ctx->pc = 0x2dc198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)40960);
    // 0x2dc19c: 0x64460000  daddiu      $a2, $v0, 0x0
    ctx->pc = 0x2dc19cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)0);
    // 0x2dc1a0: 0x440802  .word       0x00440802                   # srl         $at, $a0, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x2dc1a4: 0x5450000  .word       0x05450000                   # INVALID     $t2, $a1, 0x0 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2dc1a4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2DC1A4 raw=0x05450000");
    // 0x2dc1a8: 0x202e0003  addi        $t6, $at, 0x3
    ctx->pc = 0x2dc1a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x2dc1ac: 0x1460014  dsllv       $zero, $a2, $t2
    ctx->pc = 0x2dc1acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (GPR_U32(ctx, 10) & 0x3F));
    // 0x2dc1b0: 0x64460000  daddiu      $a2, $v0, 0x0
    ctx->pc = 0x2dc1b0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)0);
    // 0x2dc1b4: 0x440802  .word       0x00440802                   # srl         $at, $a0, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x2dc1b8: 0x25001051  addiu       $zero, $t0, 0x1051
    ctx->pc = 0x2dc1b8u;
    // NOP (addiu $zero, ...)
    // 0x2dc1bc: 0xec14ff60  .word       0xEC14FF60                   # INVALID     $zero, $s4, -0xA0 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc1bcu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DC1BC raw=0xEC14FF60");
    // 0x2dc1c0: 0xa00082  .word       0x00A00082                   # srl         $zero, $zero, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc1c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
    // 0x2dc1c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC1C4u;
    {
        const bool branch_taken_0x2dc1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc1c4) {
            ctx->pc = 0x2DC1F4u;
            goto label_2dc1f4;
        }
    }
    ctx->pc = 0x2DC1CCu;
    // 0x2dc1cc: 0xde77f7ff  ld          $s7, -0x801($s3)
    ctx->pc = 0x2dc1ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 19), 4294965247)));
    // 0x2dc1d0: 0x25edd4d8  addiu       $t5, $t7, -0x2B28
    ctx->pc = 0x2dc1d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956248));
label_2dc1d4:
    // 0x2dc1d4: 0x8db18d25  lw          $s1, -0x72DB($t5)
    ctx->pc = 0x2dc1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294937893)));
    // 0x2dc1d8: 0x254266b0  addiu       $v0, $t2, 0x66B0
    ctx->pc = 0x2dc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 26288));
    // 0x2dc1dc: 0x84f1d85b  lh          $s1, -0x27A5($a3)
    ctx->pc = 0x2dc1dcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294957147)));
    // 0x2dc1e0: 0xc040258  jal         func_100960
    ctx->pc = 0x2DC1E0u;
    SET_GPR_U32(ctx, 31, 0x2DC1E8u);
    ctx->pc = 0x2DC1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1E0u;
    // 0x2dc1e4: 0xa25ce53c  sb          $gp, -0x1AC4($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294960444), (uint8_t)GPR_U32(ctx, 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100960u, 0x2DC1E0u, 0x2DC1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1E8u;
label_2dc1e8:
    // 0x2dc1e8: 0xc712f2d5  lwc1        $f18, -0xD2B($t8)
    ctx->pc = 0x2dc1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963925)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc1ec: 0xa25ce42c  sb          $gp, -0x1BD4($s2)
    ctx->pc = 0x2dc1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294960172), (uint8_t)GPR_U32(ctx, 28));
    // 0x2dc1f0: 0x0  nop
    ctx->pc = 0x2dc1f0u;
    // NOP
label_2dc1f4:
    // 0x2dc1f4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dc1f8: 0x2442c1e4  addiu       $v0, $v0, -0x3E1C
    ctx->pc = 0x2dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951396));
label_2dc1fc:
    // 0x2dc1fc: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc200: 0x2484c1c4  addiu       $a0, $a0, -0x3E3C
    ctx->pc = 0x2dc200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951364));
    // 0x2dc204: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dc204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc208: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dc208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dc20c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC20Cu;
    SET_GPR_U32(ctx, 31, 0x2DC214u);
    ctx->pc = 0x2DC210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC20Cu;
    // 0x2dc210: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DC20Cu, 0x2DC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC214u;
label_2dc214:
    // 0x2dc214: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dc214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc218: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2dc218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc21c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2dc21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dc220: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2dc220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dc224: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2dc224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2dc228: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2dc228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dc22c: 0xc7b60098  lwc1        $f22, 0x98($sp)
    ctx->pc = 0x2dc22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dc230: 0xc7b50090  lwc1        $f21, 0x90($sp)
    ctx->pc = 0x2dc230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dc234: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x2dc234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc238: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC238u;
        // 0x2dc23c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC240u;
}
