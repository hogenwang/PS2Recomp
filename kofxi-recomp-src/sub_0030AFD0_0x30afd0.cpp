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

// Function: sub_0030AFD0
// Address: 0x30afd0 - 0x30b230
void sub_0030AFD0_0x30afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AFD0_0x30afd0");
#endif

    switch (ctx->pc) {
        case 0x30b014u: goto label_30b014;
        case 0x30b028u: goto label_30b028;
        case 0x30b03cu: goto label_30b03c;
        case 0x30b068u: goto label_30b068;
        case 0x30b078u: goto label_30b078;
        case 0x30b084u: goto label_30b084;
        case 0x30b08cu: goto label_30b08c;
        case 0x30b0bcu: goto label_30b0bc;
        case 0x30b150u: goto label_30b150;
        case 0x30b160u: goto label_30b160;
        case 0x30b170u: goto label_30b170;
        case 0x30b180u: goto label_30b180;
        case 0x30b194u: goto label_30b194;
        case 0x30b1a8u: goto label_30b1a8;
        case 0x30b1b8u: goto label_30b1b8;
        case 0x30b1c8u: goto label_30b1c8;
        case 0x30b1dcu: goto label_30b1dc;
        case 0x30b1f8u: goto label_30b1f8;
        case 0x30b20cu: goto label_30b20c;
        default: break;
    }

    ctx->pc = 0x30afd0u;

label_30afd0:
    // 0x30afd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x30afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30afd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30afd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30afd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30afdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30afe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30afe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30afe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30afe8: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x30afe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30afec: 0x9203012f  lbu         $v1, 0x12F($s0)
    ctx->pc = 0x30afecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 303)));
    // 0x30aff0: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x30AFF0u;
    {
        const bool branch_taken_0x30aff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFF0u;
        // 0x30aff4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aff0) {
            ctx->pc = 0x30B1E4u;
            goto label_30b1e4;
        }
    }
    ctx->pc = 0x30AFF8u;
    // 0x30aff8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30affc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30AFFCu;
    {
        const bool branch_taken_0x30affc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30affc) {
            ctx->pc = 0x30B030u;
            goto label_30b030;
        }
    }
    ctx->pc = 0x30B004u;
    // 0x30b004: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b008: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30b00c: 0xc040ec6  jal         func_103B18
    ctx->pc = 0x30B00Cu;
    SET_GPR_U32(ctx, 31, 0x30B014u);
    ctx->pc = 0x30B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B00Cu;
    // 0x30b010: 0x24841f40  addiu       $a0, $a0, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B18u, 0x30B00Cu, 0x30B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B014u;
label_30b014:
    // 0x30b014: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30b018: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b01c: 0x24841eb0  addiu       $a0, $a0, 0x1EB0
    ctx->pc = 0x30b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7856));
    // 0x30b020: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30B020u;
    SET_GPR_U32(ctx, 31, 0x30B028u);
    ctx->pc = 0x30B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B020u;
    // 0x30b024: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x30B020u, 0x30B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B028u;
label_30b028:
    // 0x30b028: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30B028u;
    {
        const bool branch_taken_0x30b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B028u;
        // 0x30b02c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b028) {
            ctx->pc = 0x30B060u;
            goto label_30b060;
        }
    }
    ctx->pc = 0x30B030u;
label_30b030:
    // 0x30b030: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b034: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30B034u;
    SET_GPR_U32(ctx, 31, 0x30B03Cu);
    ctx->pc = 0x30B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B034u;
    // 0x30b038: 0x24841f40  addiu       $a0, $a0, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30B034u, 0x30B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B03Cu;
label_30b03c:
    // 0x30b03c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b040: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b044: 0xac601eb0  sw          $zero, 0x1EB0($v1)
    ctx->pc = 0x30b044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7856), GPR_U32(ctx, 0));
    // 0x30b048: 0xac401eb4  sw          $zero, 0x1EB4($v0)
    ctx->pc = 0x30b048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7860), GPR_U32(ctx, 0));
    // 0x30b04c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30b050: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30b050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30b054: 0xac601eb8  sw          $zero, 0x1EB8($v1)
    ctx->pc = 0x30b054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7864), GPR_U32(ctx, 0));
    // 0x30b058: 0xac401ebc  sw          $zero, 0x1EBC($v0)
    ctx->pc = 0x30b058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7868), GPR_U32(ctx, 0));
    // 0x30b05c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_30b060:
    // 0x30b060: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30B060u;
    SET_GPR_U32(ctx, 31, 0x30B068u);
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30B060u, 0x30B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B068u;
label_30b068:
    // 0x30b068: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b06c: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x30b06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x30b070: 0xc040e92  jal         func_103A48
    ctx->pc = 0x30B070u;
    SET_GPR_U32(ctx, 31, 0x30B078u);
    ctx->pc = 0x30B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B070u;
    // 0x30b074: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103A48u, 0x30B070u, 0x30B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B078u;
label_30b078:
    // 0x30b078: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30b078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b07c: 0xc0c25d0  jal         func_309740
    ctx->pc = 0x30B07Cu;
    SET_GPR_U32(ctx, 31, 0x30B084u);
    ctx->pc = 0x30B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B07Cu;
    // 0x30b080: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309740u, 0x30B07Cu, 0x30B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B084u;
label_30b084:
    // 0x30b084: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x30B084u;
    SET_GPR_U32(ctx, 31, 0x30B08Cu);
    ctx->pc = 0x30B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B084u;
    // 0x30b088: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x30B084u, 0x30B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B08Cu;
label_30b08c:
    // 0x30b08c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x30b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x30b090: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x30b090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x30b094: 0x34420d0c  ori         $v0, $v0, 0xD0C
    ctx->pc = 0x30b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3340);
    // 0x30b098: 0x34630d0c  ori         $v1, $v1, 0xD0C
    ctx->pc = 0x30b098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3340);
    // 0x30b09c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30b09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30b0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30b0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0ac: 0x34420d0c  ori         $v0, $v0, 0xD0C
    ctx->pc = 0x30b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3340);
    // 0x30b0b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30b0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30b0b4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x30b0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30b0b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30b0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30b0bc:
    // 0x30b0bc: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x30b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30b0c0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x30b0c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b0c4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x30B0C4u;
    {
        const bool branch_taken_0x30b0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b0c4) {
            ctx->pc = 0x30B0F0u;
            goto label_30b0f0;
        }
    }
    ctx->pc = 0x30B0CCu;
    // 0x30b0cc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x30b0ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x30b0d0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x30b0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x30b0d4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x30b0d4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x30b0d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30b0d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30b0dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30b0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30b0e0: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x30b0e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x30b0e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30B0E4u;
    {
        const bool branch_taken_0x30b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0E4u;
        // 0x30b0e8: 0xe48000c0  swc1        $f0, 0xC0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0e4) {
            ctx->pc = 0x30B130u;
            goto label_30b130;
        }
    }
    ctx->pc = 0x30B0ECu;
    // 0x30b0ec: 0x0  nop
    ctx->pc = 0x30b0ecu;
    // NOP
label_30b0f0:
    // 0x30b0f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30b0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b0f4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x30B0F4u;
    {
        const bool branch_taken_0x30b0f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30b0f4) {
            ctx->pc = 0x30B130u;
            goto label_30b130;
        }
    }
    ctx->pc = 0x30B0FCu;
    // 0x30b0fc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x30b0fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x30b100: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x30b100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x30b104: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x30b104u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x30b108: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30b108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30b10c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30b10cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30b110: 0x0  nop
    ctx->pc = 0x30b110u;
    // NOP
    // 0x30b114: 0x21023  negu        $v0, $v0
    ctx->pc = 0x30b114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x30b118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b11c: 0x0  nop
    ctx->pc = 0x30b11cu;
    // NOP
    // 0x30b120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30b120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30b124: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x30b124u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x30b128: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x30b128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x30b12c: 0x0  nop
    ctx->pc = 0x30b12cu;
    // NOP
label_30b130:
    // 0x30b130: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30b134: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x30b134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30b138: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x30B138u;
    {
        const bool branch_taken_0x30b138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B138u;
        // 0x30b13c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b138) {
            ctx->pc = 0x30B0BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b0bc;
        }
    }
    ctx->pc = 0x30B140u;
    // 0x30b140: 0xc60c00c0  lwc1        $f12, 0xC0($s0)
    ctx->pc = 0x30b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30b144: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b148: 0xc040fa0  jal         func_103E80
    ctx->pc = 0x30B148u;
    SET_GPR_U32(ctx, 31, 0x30B150u);
    ctx->pc = 0x30B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B148u;
    // 0x30b14c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103E80u, 0x30B148u, 0x30B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B150u;
label_30b150:
    // 0x30b150: 0xc60c00c4  lwc1        $f12, 0xC4($s0)
    ctx->pc = 0x30b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30b154: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b158: 0xc040fde  jal         func_103F78
    ctx->pc = 0x30B158u;
    SET_GPR_U32(ctx, 31, 0x30B160u);
    ctx->pc = 0x30B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B158u;
    // 0x30b15c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103F78u, 0x30B158u, 0x30B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B160u;
label_30b160:
    // 0x30b160: 0xc60c00c8  lwc1        $f12, 0xC8($s0)
    ctx->pc = 0x30b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30b164: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30b164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b168: 0xc040f64  jal         func_103D90
    ctx->pc = 0x30B168u;
    SET_GPR_U32(ctx, 31, 0x30B170u);
    ctx->pc = 0x30B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B168u;
    // 0x30b16c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D90u, 0x30B168u, 0x30B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B170u;
label_30b170:
    // 0x30b170: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b174: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x30b174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30b178: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B178u;
    SET_GPR_U32(ctx, 31, 0x30B180u);
    ctx->pc = 0x30B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B178u;
    // 0x30b17c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30B178u, 0x30B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B180u;
label_30b180:
    // 0x30b180: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b184: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x30b184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b188: 0x24841f40  addiu       $a0, $a0, 0x1F40
    ctx->pc = 0x30b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8000));
    // 0x30b18c: 0xc040d06  jal         func_103418
    ctx->pc = 0x30B18Cu;
    SET_GPR_U32(ctx, 31, 0x30B194u);
    ctx->pc = 0x30B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B18Cu;
    // 0x30b190: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30B18Cu, 0x30B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B194u;
label_30b194:
    // 0x30b194: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30b194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30b198: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x30b198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x30b19c: 0x24841eb0  addiu       $a0, $a0, 0x1EB0
    ctx->pc = 0x30b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7856));
    // 0x30b1a0: 0xc040e2a  jal         func_1038A8
    ctx->pc = 0x30B1A0u;
    SET_GPR_U32(ctx, 31, 0x30B1A8u);
    ctx->pc = 0x30B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1A0u;
    // 0x30b1a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038A8u, 0x30B1A0u, 0x30B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1A8u;
label_30b1a8:
    // 0x30b1a8: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30b1ac: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x30b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x30b1b0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x30B1B0u;
    SET_GPR_U32(ctx, 31, 0x30B1B8u);
    ctx->pc = 0x30B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1B0u;
    // 0x30b1b4: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x30B1B0u, 0x30B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1B8u;
label_30b1b8:
    // 0x30b1b8: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30b1bc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x30b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x30b1c0: 0xc040ec6  jal         func_103B18
    ctx->pc = 0x30B1C0u;
    SET_GPR_U32(ctx, 31, 0x30B1C8u);
    ctx->pc = 0x30B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1C0u;
    // 0x30b1c4: 0x24a51f40  addiu       $a1, $a1, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B18u, 0x30B1C0u, 0x30B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1C8u;
label_30b1c8:
    // 0x30b1c8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30b1cc: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x30B1CCu;
    {
        const bool branch_taken_0x30b1cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b1cc) {
            ctx->pc = 0x30B1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B1CCu;
            // 0x30b1d0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B1FCu;
            goto label_30b1fc;
        }
    }
    ctx->pc = 0x30B1D4u;
    // 0x30b1d4: 0xc0c2ad0  jal         func_30AB40
    ctx->pc = 0x30B1D4u;
    SET_GPR_U32(ctx, 31, 0x30B1DCu);
    ctx->pc = 0x30B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1D4u;
    // 0x30b1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB40u, 0x30B1D4u, 0x30B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1DCu;
label_30b1dc:
    // 0x30b1dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30B1DCu;
    {
        const bool branch_taken_0x30b1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b1dc) {
            ctx->pc = 0x30B1F8u;
            goto label_30b1f8;
        }
    }
    ctx->pc = 0x30B1E4u;
label_30b1e4:
    // 0x30b1e4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30b1e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B1E8u;
    {
        const bool branch_taken_0x30b1e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b1e8) {
            ctx->pc = 0x30B1F8u;
            goto label_30b1f8;
        }
    }
    ctx->pc = 0x30B1F0u;
    // 0x30b1f0: 0xc0c2bf4  jal         func_30AFD0
    ctx->pc = 0x30B1F0u;
    SET_GPR_U32(ctx, 31, 0x30B1F8u);
    ctx->pc = 0x30AFD0u;
    goto label_30afd0;
    ctx->pc = 0x30B1F8u;
label_30b1f8:
    // 0x30b1f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30b1fc:
    // 0x30b1fc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B1FCu;
    {
        const bool branch_taken_0x30b1fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b1fc) {
            ctx->pc = 0x30B200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B1FCu;
            // 0x30b200: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B210u;
            goto label_30b210;
        }
    }
    ctx->pc = 0x30B204u;
    // 0x30b204: 0xc0c2bf4  jal         func_30AFD0
    ctx->pc = 0x30B204u;
    SET_GPR_U32(ctx, 31, 0x30B20Cu);
    ctx->pc = 0x30B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B204u;
    // 0x30b208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AFD0u;
    goto label_30afd0;
    ctx->pc = 0x30B20Cu;
label_30b20c:
    // 0x30b20c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30b20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30b210:
    // 0x30b210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b21c: 0x3e00008  jr          $ra
    ctx->pc = 0x30B21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B21Cu;
        // 0x30b220: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B224u;
    // 0x30b224: 0x0  nop
    ctx->pc = 0x30b224u;
    // NOP
    // 0x30b228: 0x0  nop
    ctx->pc = 0x30b228u;
    // NOP
    // 0x30b22c: 0x0  nop
    ctx->pc = 0x30b22cu;
    // NOP
}
