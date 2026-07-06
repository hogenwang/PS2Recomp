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

// Function: sub_002DCE38
// Address: 0x2dce38 - 0x2dcfa8
void sub_002DCE38_0x2dce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCE38_0x2dce38");
#endif

    switch (ctx->pc) {
        case 0x2dce7cu: goto label_2dce7c;
        case 0x2dce90u: goto label_2dce90;
        case 0x2dcf8cu: goto label_2dcf8c;
        default: break;
    }

    ctx->pc = 0x2dce38u;

    // 0x2dce38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dce3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dce40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dce40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dce48: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2dce48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dce4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dce50: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dce50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dce54: 0x2463ce9c  addiu       $v1, $v1, -0x3164
    ctx->pc = 0x2dce54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954652));
    // 0x2dce58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dce5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCE5Cu;
    {
        const bool branch_taken_0x2dce5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dce5c) {
            ctx->pc = 0x2DCE7Cu;
            goto label_2dce7c;
        }
    }
    ctx->pc = 0x2DCE64u;
    // 0x2dce64: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dce64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dce68: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x2dce68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x2dce6c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dce70: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dce70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dce74: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCE74u;
    SET_GPR_U32(ctx, 31, 0x2DCE7Cu);
    ctx->pc = 0x2DCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE74u;
    // 0x2dce78: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DCE74u, 0x2DCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE7Cu;
label_2dce7c:
    // 0x2dce7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DCE7Cu;
    {
        const bool branch_taken_0x2dce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce7c) {
            ctx->pc = 0x2DCEB0u;
            goto label_2dceb0;
        }
    }
    ctx->pc = 0x2DCE84u;
    // 0x2dce84: 0x3445020  add         $t2, $k0, $a0
    ctx->pc = 0x2dce84u;
    {     int32_t rs_val = GPR_S32(ctx, 26);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x2dce88: 0xccebbac  jal         func_33AEEB0
    ctx->pc = 0x2DCE88u;
    SET_GPR_U32(ctx, 31, 0x2DCE90u);
    ctx->pc = 0x2DCE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE88u;
    // 0x2dce8c: 0xdd54c2d7  ld          $s4, -0x3D29($t2) (Delay Slot)
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 10), 4294951639)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AEEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AEEB0u, 0x2DCE88u, 0x2DCE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE90u;
label_2dce90:
    // 0x2dce90: 0xfc4a0afa  sd          $t2, 0xAFA($v0)
    ctx->pc = 0x2dce90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 2810), GPR_U64(ctx, 10));
    // 0x2dce94: 0x2c45820  add         $t3, $s6, $a0
    ctx->pc = 0x2dce94u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x2dce98: 0x1b46020  add         $t4, $t5, $s4
    ctx->pc = 0x2dce98u;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x2dce9c: 0x0  nop
    ctx->pc = 0x2dce9cu;
    // NOP
    // 0x2dcea0: 0xb6766307  sdr         $s6, 0x6307($s3)
    ctx->pc = 0x2dcea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcea4: 0x0  nop
    ctx->pc = 0x2dcea4u;
    // NOP
    // 0x2dcea8: 0xb676638b  sdr         $s6, 0x638B($s3)
    ctx->pc = 0x2dcea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dceac: 0x0  nop
    ctx->pc = 0x2dceacu;
    // NOP
label_2dceb0:
    // 0x2dceb0: 0x7467cb76  .word       0x7467CB76                   # INVALID     $v1, $a3, -0x348A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dceb0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCEB0 raw=0x7467CB76");
    // 0x2dceb4: 0x57c7fe36  bnel        $fp, $a3, . + 4 + (-0x1CA << 2)
    ctx->pc = 0x2DCEB4u;
    {
        const bool branch_taken_0x2dceb4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 7));
        if (branch_taken_0x2dceb4) {
            ctx->pc = 0x2DCEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCEB4u;
            // 0x2dceb8: 0xb4c7fd36  sdr         $a3, -0x2CA($a2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294966582); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC790u;
            return;
        }
    }
    ctx->pc = 0x2DCEBCu;
    // 0x2dcebc: 0x7787ed66  .word       0x7787ED66                   # INVALID     $gp, $a3, -0x129A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcebcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCEBC raw=0x7787ED66");
    // 0x2dcec0: 0x5062efb6  beql        $v1, $v0, . + 4 + (-0x104A << 2)
    ctx->pc = 0x2DCEC0u;
    {
        const bool branch_taken_0x2dcec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dcec0) {
            ctx->pc = 0x2DCEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCEC0u;
            // 0x2dcec4: 0x5607fd36  bnel        $s0, $a3, . + 4 + (-0x2CA << 2) (Delay Slot)
            // Likely branch instruction at 0x2DCEC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8D9Cu;
            return;
        }
    }
    ctx->pc = 0x2DCEC8u;
    // 0x2dcec8: 0x7547eb76  .word       0x7547EB76                   # INVALID     $t2, $a3, -0x148A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcec8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCEC8 raw=0x7547EB76");
    // 0x2dcecc: 0x7727e57a  .word       0x7727E57A                   # INVALID     $t9, $a3, -0x1A86 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dceccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCECC raw=0x7727E57A");
    // 0x2dced0: 0xbb80b74  j           func_EE02DD0
    ctx->pc = 0x2DCED0u;
    ctx->pc = 0x2DCED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCED0u;
    // 0x2dced4: 0x5107fd36  beql        $t0, $a3, . + 4 + (-0x2CA << 2) (Delay Slot)
    // Likely branch instruction at 0x2DCED4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xEE02DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEE02DD0u, 0x2DCED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DCED8u;
    // 0x2dced8: 0x7047eb76  .word       0x7047EB76                   # psrlh       $sp, $a3, 13 # 00400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dced8u;
    SET_GPR_VEC(ctx, 29, _mm_srli_epi16(GPR_VEC(ctx, 7), 13));
    // 0x2dcedc: 0x76a7e57a  .word       0x76A7E57A                   # INVALID     $s5, $a3, -0x1A86 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcedcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCEDC raw=0x76A7E57A");
    // 0x2dcee0: 0xbb80b74  j           func_EE02DD0
    ctx->pc = 0x2DCEE0u;
    ctx->pc = 0x2DCEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEE0u;
    // 0x2dcee4: 0xb1c7fd36  sdl         $a3, -0x2CA($t6) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294966582); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xEE02DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEE02DD0u, 0x2DCEE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DCEE8u;
    // 0x2dcee8: 0x7407eb76  .word       0x7407EB76                   # INVALID     $zero, $a3, -0x148A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcee8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCEE8 raw=0x7407EB76");
    // 0x2dceec: 0x7627e566  .word       0x7627E566                   # INVALID     $s1, $a3, -0x1A9A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dceecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCEEC raw=0x7627E566");
    // 0x2dcef0: 0xbb80b74  j           func_EE02DD0
    ctx->pc = 0x2DCEF0u;
    ctx->pc = 0x2DCEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEF0u;
    // 0x2dcef4: 0x7449e876  .word       0x7449E876                   # INVALID     $v0, $t1, -0x178A # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCEF4 raw=0x7449E876");
    ctx->in_delay_slot = false;
    ctx->pc = 0xEE02DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEE02DD0u, 0x2DCEF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DCEF8u;
    // 0x2dcef8: 0x5447fe62  bnel        $v0, $a3, . + 4 + (-0x19E << 2)
    ctx->pc = 0x2DCEF8u;
    {
        const bool branch_taken_0x2dcef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2dcef8) {
            ctx->pc = 0x2DCEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCEF8u;
            // 0x2dcefc: 0x6447e97e  daddiu      $a3, $v0, -0x1682 (Delay Slot)
            SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294961534);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC884u;
            return;
        }
    }
    ctx->pc = 0x2DCF00u;
    // 0x2dcf00: 0x7587e57a  .word       0x7587E57A                   # INVALID     $t4, $a3, -0x1A86 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcf00u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCF00 raw=0x7587E57A");
    // 0x2dcf04: 0xbb80b74  j           func_EE02DD0
    ctx->pc = 0x2DCF04u;
    ctx->pc = 0x2DCF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF04u;
    // 0x2dcf08: 0x5647fd36  bnel        $s2, $a3, . + 4 + (-0x2CA << 2) (Delay Slot)
    // Likely branch instruction at 0x2DCF08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xEE02DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEE02DD0u, 0x2DCF04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DCF0Cu;
    // 0x2dcf0c: 0x64580976  daddiu      $t8, $v0, 0x976
    ctx->pc = 0x2dcf0cu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2422);
    // 0x2dcf10: 0x74c7e5fa  .word       0x74C7E5FA                   # INVALID     $a2, $a3, -0x1A06 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcf10u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCF10 raw=0x74C7E5FA");
    // 0x2dcf14: 0x74c7fe62  .word       0x74C7FE62                   # INVALID     $a2, $a3, -0x19E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcf14u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCF14 raw=0x74C7FE62");
    // 0x2dcf18: 0xb547e57a  sdr         $a3, -0x1A86($t2)
    ctx->pc = 0x2dcf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294960506); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcf1c: 0xbb80b74  j           func_EE02DD0
    ctx->pc = 0x2DCF1Cu;
    ctx->pc = 0x2DCF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF1Cu;
    // 0x2dcf20: 0x74c7fe62  .word       0x74C7FE62                   # INVALID     $a2, $a3, -0x19E # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DCF20 raw=0x74C7FE62");
    ctx->in_delay_slot = false;
    ctx->pc = 0xEE02DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEE02DD0u, 0x2DCF1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2DCF24u;
    // 0x2dcf24: 0x7065efb6  .word       0x7065EFB6                   # psrlh       $sp, $a1, 30 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dcf24u;
    SET_GPR_VEC(ctx, 29, _mm_srli_epi16(GPR_VEC(ctx, 5), 30));
    // 0x2dcf28: 0x5747fd7e  bnel        $k0, $a3, . + 4 + (-0x282 << 2)
    ctx->pc = 0x2DCF28u;
    {
        const bool branch_taken_0x2dcf28 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 7));
        if (branch_taken_0x2dcf28) {
            ctx->pc = 0x2DCF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCF28u;
            // 0x2dcf2c: 0x5427a8fa  bnel        $at, $a3, . + 4 + (-0x5706 << 2) (Delay Slot)
            // Likely branch instruction at 0x2DCF2C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC524u;
            return;
        }
    }
    ctx->pc = 0x2DCF30u;
    // 0x2dcf30: 0x3407edf6  ori         $a3, $zero, 0xEDF6
    ctx->pc = 0x2dcf30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60918);
    // 0x2dcf34: 0x5516eff6  bnel        $t0, $s6, . + 4 + (-0x100A << 2)
    ctx->pc = 0x2DCF34u;
    {
        const bool branch_taken_0x2dcf34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 22));
        if (branch_taken_0x2dcf34) {
            ctx->pc = 0x2DCF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCF34u;
            // 0x2dcf38: 0xbb80b74  j           func_EE02DD0 (Delay Slot)
            // J 0xEE02DD0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8F10u;
            return;
        }
    }
    ctx->pc = 0x2DCF3Cu;
    // 0x2dcf3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DCF3Cu;
    {
        const bool branch_taken_0x2dcf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf3c) {
            ctx->pc = 0x2DCF6Cu;
            goto label_2dcf6c;
        }
    }
    ctx->pc = 0x2DCF44u;
    // 0x2dcf44: 0xa3c72051  sb          $a3, 0x2051($fp)
    ctx->pc = 0x2dcf44u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 8273), (uint8_t)GPR_U32(ctx, 7));
    // 0x2dcf48: 0x8d6fbd5d  lw          $t7, -0x42A3($t3)
    ctx->pc = 0x2dcf48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294950237)));
    // 0x2dcf4c: 0x269ce368  addiu       $gp, $s4, -0x1C98
    ctx->pc = 0x2dcf4cu;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959976));
    // 0x2dcf50: 0x3b66020  add         $t4, $sp, $s6
    ctx->pc = 0x2dcf50u;
    {     int32_t rs_val = GPR_S32(ctx, 29);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x2dcf54: 0x255515a0  addiu       $s5, $t2, 0x15A0
    ctx->pc = 0x2dcf54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 5536));
    // 0x2dcf58: 0xdc5f9b8f  ld          $ra, -0x6471($v0)
    ctx->pc = 0x2dcf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 2), 4294941583)));
    // 0x2dcf5c: 0xb6766703  sdr         $s6, 0x6703($s3)
    ctx->pc = 0x2dcf5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26371); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcf60: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dcf60u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2DCF60 raw=0x00000001");
    // 0x2dcf64: 0xb676678f  sdr         $s6, 0x678F($s3)
    ctx->pc = 0x2dcf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dcf68: 0x0  nop
    ctx->pc = 0x2dcf68u;
    // NOP
label_2dcf6c:
    // 0x2dcf6c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dcf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dcf70: 0x2442cf5c  addiu       $v0, $v0, -0x30A4
    ctx->pc = 0x2dcf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954844));
    // 0x2dcf74: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dcf74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dcf78: 0x2484cf3c  addiu       $a0, $a0, -0x30C4
    ctx->pc = 0x2dcf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954812));
    // 0x2dcf7c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dcf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dcf80: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dcf84: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCF84u;
    SET_GPR_U32(ctx, 31, 0x2DCF8Cu);
    ctx->pc = 0x2DCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF84u;
    // 0x2dcf88: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DCF84u, 0x2DCF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF8Cu;
label_2dcf8c:
    // 0x2dcf8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dcf8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dcf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcf94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dcf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dcf98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dcf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF9Cu;
        // 0x2dcfa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCFA4u;
    // 0x2dcfa4: 0x0  nop
    ctx->pc = 0x2dcfa4u;
    // NOP
    if (ctx->pc == 0x2dcfa4u) { ctx->pc = 0x2dcfa8u; }
}
