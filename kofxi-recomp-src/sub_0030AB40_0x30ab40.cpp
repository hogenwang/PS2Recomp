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

// Function: sub_0030AB40
// Address: 0x30ab40 - 0x30ad50
void sub_0030AB40_0x30ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AB40_0x30ab40");
#endif

    switch (ctx->pc) {
        case 0x30ab70u: goto label_30ab70;
        case 0x30ab80u: goto label_30ab80;
        case 0x30ab88u: goto label_30ab88;
        case 0x30ab98u: goto label_30ab98;
        case 0x30aba4u: goto label_30aba4;
        case 0x30abacu: goto label_30abac;
        case 0x30abdcu: goto label_30abdc;
        case 0x30ac70u: goto label_30ac70;
        case 0x30ac80u: goto label_30ac80;
        case 0x30ac90u: goto label_30ac90;
        case 0x30aca0u: goto label_30aca0;
        case 0x30acb4u: goto label_30acb4;
        case 0x30acc8u: goto label_30acc8;
        case 0x30acd8u: goto label_30acd8;
        case 0x30ace8u: goto label_30ace8;
        case 0x30acfcu: goto label_30acfc;
        case 0x30ad0cu: goto label_30ad0c;
        case 0x30ad1cu: goto label_30ad1c;
        case 0x30ad30u: goto label_30ad30;
        default: break;
    }

    ctx->pc = 0x30ab40u;

label_30ab40:
    // 0x30ab40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x30ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x30ab44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30ab48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30ab4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ab50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30ab50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ab58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30ab58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab5c: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x30ab5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30ab60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30ab64: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30ab68: 0xc040ec6  jal         func_103B18
    ctx->pc = 0x30AB68u;
    SET_GPR_U32(ctx, 31, 0x30AB70u);
    ctx->pc = 0x30AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB68u;
    // 0x30ab6c: 0x24a51f40  addiu       $a1, $a1, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B18u, 0x30AB68u, 0x30AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB70u;
label_30ab70:
    // 0x30ab70: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30ab70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30ab74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30ab78: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30AB78u;
    SET_GPR_U32(ctx, 31, 0x30AB80u);
    ctx->pc = 0x30AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB78u;
    // 0x30ab7c: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x30AB78u, 0x30AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB80u;
label_30ab80:
    // 0x30ab80: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30AB80u;
    SET_GPR_U32(ctx, 31, 0x30AB88u);
    ctx->pc = 0x30AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB80u;
    // 0x30ab84: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30AB80u, 0x30AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB88u;
label_30ab88:
    // 0x30ab88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30ab8c: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x30ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x30ab90: 0xc040e92  jal         func_103A48
    ctx->pc = 0x30AB90u;
    SET_GPR_U32(ctx, 31, 0x30AB98u);
    ctx->pc = 0x30AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB90u;
    // 0x30ab94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103A48u, 0x30AB90u, 0x30AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB98u;
label_30ab98:
    // 0x30ab98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30ab9c: 0xc0c25d0  jal         func_309740
    ctx->pc = 0x30AB9Cu;
    SET_GPR_U32(ctx, 31, 0x30ABA4u);
    ctx->pc = 0x30ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB9Cu;
    // 0x30aba0: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309740u, 0x30AB9Cu, 0x30ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABA4u;
label_30aba4:
    // 0x30aba4: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30ABA4u;
    SET_GPR_U32(ctx, 31, 0x30ABACu);
    ctx->pc = 0x30ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ABA4u;
    // 0x30aba8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30ABA4u, 0x30ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABACu;
label_30abac:
    // 0x30abac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x30abacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x30abb0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x30abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x30abb4: 0x34420d0c  ori         $v0, $v0, 0xD0C
    ctx->pc = 0x30abb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3340);
    // 0x30abb8: 0x34630d0c  ori         $v1, $v1, 0xD0C
    ctx->pc = 0x30abb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3340);
    // 0x30abbc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30abbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30abc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30abc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30abc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30abc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abcc: 0x34420d0c  ori         $v0, $v0, 0xD0C
    ctx->pc = 0x30abccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3340);
    // 0x30abd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30abd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30abd4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30abd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30abd8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30abd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30abdc:
    // 0x30abdc: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x30abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30abe0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x30abe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30abe4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x30ABE4u;
    {
        const bool branch_taken_0x30abe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30abe4) {
            ctx->pc = 0x30AC10u;
            goto label_30ac10;
        }
    }
    ctx->pc = 0x30ABECu;
    // 0x30abec: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x30abecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x30abf0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x30abf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x30abf4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x30abf4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x30abf8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30abf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30abfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30abfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30ac00: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x30ac00u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x30ac04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30AC04u;
    {
        const bool branch_taken_0x30ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC04u;
        // 0x30ac08: 0xe48000c0  swc1        $f0, 0xC0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac04) {
            ctx->pc = 0x30AC50u;
            goto label_30ac50;
        }
    }
    ctx->pc = 0x30AC0Cu;
    // 0x30ac0c: 0x0  nop
    ctx->pc = 0x30ac0cu;
    // NOP
label_30ac10:
    // 0x30ac10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30ac10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ac14: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x30AC14u;
    {
        const bool branch_taken_0x30ac14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ac14) {
            ctx->pc = 0x30AC50u;
            goto label_30ac50;
        }
    }
    ctx->pc = 0x30AC1Cu;
    // 0x30ac1c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x30ac1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x30ac20: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x30ac20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x30ac24: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x30ac24u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x30ac28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ac28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30ac2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30ac2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ac30: 0x0  nop
    ctx->pc = 0x30ac30u;
    // NOP
    // 0x30ac34: 0x21023  negu        $v0, $v0
    ctx->pc = 0x30ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x30ac38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ac38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ac3c: 0x0  nop
    ctx->pc = 0x30ac3cu;
    // NOP
    // 0x30ac40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30ac40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30ac44: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x30ac44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x30ac48: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x30ac48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x30ac4c: 0x0  nop
    ctx->pc = 0x30ac4cu;
    // NOP
label_30ac50:
    // 0x30ac50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30ac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30ac54: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x30ac54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30ac58: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x30AC58u;
    {
        const bool branch_taken_0x30ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC58u;
        // 0x30ac5c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac58) {
            ctx->pc = 0x30ABDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30abdc;
        }
    }
    ctx->pc = 0x30AC60u;
    // 0x30ac60: 0xc60c00c0  lwc1        $f12, 0xC0($s0)
    ctx->pc = 0x30ac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ac64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30ac68: 0xc040fa0  jal         func_103E80
    ctx->pc = 0x30AC68u;
    SET_GPR_U32(ctx, 31, 0x30AC70u);
    ctx->pc = 0x30AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC68u;
    // 0x30ac6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103E80u, 0x30AC68u, 0x30AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC70u;
label_30ac70:
    // 0x30ac70: 0xc60c00c4  lwc1        $f12, 0xC4($s0)
    ctx->pc = 0x30ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ac74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30ac78: 0xc040fde  jal         func_103F78
    ctx->pc = 0x30AC78u;
    SET_GPR_U32(ctx, 31, 0x30AC80u);
    ctx->pc = 0x30AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC78u;
    // 0x30ac7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103F78u, 0x30AC78u, 0x30AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC80u;
label_30ac80:
    // 0x30ac80: 0xc60c00c8  lwc1        $f12, 0xC8($s0)
    ctx->pc = 0x30ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ac84: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30ac88: 0xc040f64  jal         func_103D90
    ctx->pc = 0x30AC88u;
    SET_GPR_U32(ctx, 31, 0x30AC90u);
    ctx->pc = 0x30AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC88u;
    // 0x30ac8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D90u, 0x30AC88u, 0x30AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC90u;
label_30ac90:
    // 0x30ac90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30ac94: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30ac94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30ac98: 0xc040d06  jal         func_103418
    ctx->pc = 0x30AC98u;
    SET_GPR_U32(ctx, 31, 0x30ACA0u);
    ctx->pc = 0x30AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC98u;
    // 0x30ac9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30AC98u, 0x30ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACA0u;
label_30aca0:
    // 0x30aca0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30aca4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x30aca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30aca8: 0x24841f40  addiu       $a0, $a0, 0x1F40
    ctx->pc = 0x30aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    // 0x30acac: 0xc040d06  jal         func_103418
    ctx->pc = 0x30ACACu;
    SET_GPR_U32(ctx, 31, 0x30ACB4u);
    ctx->pc = 0x30ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACACu;
    // 0x30acb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30ACACu, 0x30ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACB4u;
label_30acb4:
    // 0x30acb4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30acb8: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x30acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x30acbc: 0x24841eb0  addiu       $a0, $a0, 0x1EB0
    ctx->pc = 0x30acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7856));
    // 0x30acc0: 0xc040e2a  jal         func_1038A8
    ctx->pc = 0x30ACC0u;
    SET_GPR_U32(ctx, 31, 0x30ACC8u);
    ctx->pc = 0x30ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACC0u;
    // 0x30acc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038A8u, 0x30ACC0u, 0x30ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACC8u;
label_30acc8:
    // 0x30acc8: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30acc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30accc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x30acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x30acd0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30ACD0u;
    SET_GPR_U32(ctx, 31, 0x30ACD8u);
    ctx->pc = 0x30ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACD0u;
    // 0x30acd4: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x30ACD0u, 0x30ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACD8u;
label_30acd8:
    // 0x30acd8: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30acdc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x30acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x30ace0: 0xc040ec6  jal         func_103B18
    ctx->pc = 0x30ACE0u;
    SET_GPR_U32(ctx, 31, 0x30ACE8u);
    ctx->pc = 0x30ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACE0u;
    // 0x30ace4: 0x24a51f40  addiu       $a1, $a1, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B18u, 0x30ACE0u, 0x30ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACE8u;
label_30ace8:
    // 0x30ace8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30acec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ACECu;
    {
        const bool branch_taken_0x30acec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30acec) {
            ctx->pc = 0x30ACFCu;
            goto label_30acfc;
        }
    }
    ctx->pc = 0x30ACF4u;
    // 0x30acf4: 0xc0c2ad0  jal         func_30AB40
    ctx->pc = 0x30ACF4u;
    SET_GPR_U32(ctx, 31, 0x30ACFCu);
    ctx->pc = 0x30ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACF4u;
    // 0x30acf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB40u;
    goto label_30ab40;
    ctx->pc = 0x30ACFCu;
label_30acfc:
    // 0x30acfc: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30ad00: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x30ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30ad04: 0xc040ec6  jal         func_103B18
    ctx->pc = 0x30AD04u;
    SET_GPR_U32(ctx, 31, 0x30AD0Cu);
    ctx->pc = 0x30AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD04u;
    // 0x30ad08: 0x24841f40  addiu       $a0, $a0, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B18u, 0x30AD04u, 0x30AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD0Cu;
label_30ad0c:
    // 0x30ad0c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30ad10: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30ad14: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30AD14u;
    SET_GPR_U32(ctx, 31, 0x30AD1Cu);
    ctx->pc = 0x30AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD14u;
    // 0x30ad18: 0x24841eb0  addiu       $a0, $a0, 0x1EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x30AD14u, 0x30AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD1Cu;
label_30ad1c:
    // 0x30ad1c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30ad20: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AD20u;
    {
        const bool branch_taken_0x30ad20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad20) {
            ctx->pc = 0x30AD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AD20u;
            // 0x30ad24: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AD34u;
            goto label_30ad34;
        }
    }
    ctx->pc = 0x30AD28u;
    // 0x30ad28: 0xc0c2ad0  jal         func_30AB40
    ctx->pc = 0x30AD28u;
    SET_GPR_U32(ctx, 31, 0x30AD30u);
    ctx->pc = 0x30AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD28u;
    // 0x30ad2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB40u;
    goto label_30ab40;
    ctx->pc = 0x30AD30u;
label_30ad30:
    // 0x30ad30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30ad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30ad34:
    // 0x30ad34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ad34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ad38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ad38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ad3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ad3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ad40: 0x3e00008  jr          $ra
    ctx->pc = 0x30AD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD40u;
        // 0x30ad44: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AD48u;
    // 0x30ad48: 0x0  nop
    ctx->pc = 0x30ad48u;
    // NOP
    // 0x30ad4c: 0x0  nop
    ctx->pc = 0x30ad4cu;
    // NOP
}
