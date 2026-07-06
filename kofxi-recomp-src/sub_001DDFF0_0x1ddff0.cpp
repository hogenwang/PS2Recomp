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

// Function: sub_001DDFF0
// Address: 0x1ddff0 - 0x1de140
void sub_001DDFF0_0x1ddff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDFF0_0x1ddff0");
#endif

    switch (ctx->pc) {
        case 0x1de02cu: goto label_1de02c;
        case 0x1de03cu: goto label_1de03c;
        case 0x1de04cu: goto label_1de04c;
        case 0x1de05cu: goto label_1de05c;
        case 0x1de0b4u: goto label_1de0b4;
        case 0x1de0c4u: goto label_1de0c4;
        case 0x1de0d4u: goto label_1de0d4;
        case 0x1de0e4u: goto label_1de0e4;
        case 0x1de0f4u: goto label_1de0f4;
        case 0x1de104u: goto label_1de104;
        case 0x1de114u: goto label_1de114;
        default: break;
    }

    ctx->pc = 0x1ddff0u;

    // 0x1ddff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ddff4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ddff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ddff8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddffc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ddffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de000: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de004: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1de004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de008: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de00c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1de00cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de010: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de014: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x1de014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1de018: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1de018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1de01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de020: 0x8c92003c  lw          $s2, 0x3C($a0)
    ctx->pc = 0x1de020u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1de024: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE024u;
    SET_GPR_U32(ctx, 31, 0x1DE02Cu);
    ctx->pc = 0x1DE028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE024u;
    // 0x1de028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE024u, 0x1DE02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE02Cu;
label_1de02c:
    // 0x1de02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1de030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de034: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE034u;
    SET_GPR_U32(ctx, 31, 0x1DE03Cu);
    ctx->pc = 0x1DE038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE034u;
    // 0x1de038: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE034u, 0x1DE03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE03Cu;
label_1de03c:
    // 0x1de03c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de044: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE044u;
    SET_GPR_U32(ctx, 31, 0x1DE04Cu);
    ctx->pc = 0x1DE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE044u;
    // 0x1de048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE044u, 0x1DE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE04Cu;
label_1de04c:
    // 0x1de04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de050: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1de054: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE054u;
    SET_GPR_U32(ctx, 31, 0x1DE05Cu);
    ctx->pc = 0x1DE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE054u;
    // 0x1de058: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE054u, 0x1DE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE05Cu;
label_1de05c:
    // 0x1de05c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de060: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x1de060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1de064: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1de064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1de068: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1de068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de06c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1de06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1de070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de074: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1de074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1de078: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1de078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1de07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1de084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1de088: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de08c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de08cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1de090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de094: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1de094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1de098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de09c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE09Cu;
    {
        const bool branch_taken_0x1de09c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE09Cu;
        // 0x1de0a0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de09c) {
            ctx->pc = 0x1DE0A8u;
            goto label_1de0a8;
        }
    }
    ctx->pc = 0x1DE0A4u;
    // 0x1de0a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1de0a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de0a8:
    // 0x1de0a8: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x1de0a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1de0ac: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE0ACu;
    SET_GPR_U32(ctx, 31, 0x1DE0B4u);
    ctx->pc = 0x1DE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0ACu;
    // 0x1de0b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE0ACu, 0x1DE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0B4u;
label_1de0b4:
    // 0x1de0b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0bc: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE0BCu;
    SET_GPR_U32(ctx, 31, 0x1DE0C4u);
    ctx->pc = 0x1DE0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0BCu;
    // 0x1de0c0: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE0BCu, 0x1DE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0C4u;
label_1de0c4:
    // 0x1de0c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0cc: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE0CCu;
    SET_GPR_U32(ctx, 31, 0x1DE0D4u);
    ctx->pc = 0x1DE0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0CCu;
    // 0x1de0d0: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE0CCu, 0x1DE0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0D4u;
label_1de0d4:
    // 0x1de0d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0d8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1de0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1de0dc: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE0DCu;
    SET_GPR_U32(ctx, 31, 0x1DE0E4u);
    ctx->pc = 0x1DE0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0DCu;
    // 0x1de0e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE0DCu, 0x1DE0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0E4u;
label_1de0e4:
    // 0x1de0e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0e8: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1de0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1de0ec: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE0ECu;
    SET_GPR_U32(ctx, 31, 0x1DE0F4u);
    ctx->pc = 0x1DE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0ECu;
    // 0x1de0f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE0ECu, 0x1DE0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0F4u;
label_1de0f4:
    // 0x1de0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0f8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1de0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1de0fc: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE0FCu;
    SET_GPR_U32(ctx, 31, 0x1DE104u);
    ctx->pc = 0x1DE100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0FCu;
    // 0x1de100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE0FCu, 0x1DE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE104u;
label_1de104:
    // 0x1de104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de108: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1de10c: 0xc07eb40  jal         func_1FAD00
    ctx->pc = 0x1DE10Cu;
    SET_GPR_U32(ctx, 31, 0x1DE114u);
    ctx->pc = 0x1DE110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE10Cu;
    // 0x1de110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD00u, 0x1DE10Cu, 0x1DE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE114u;
label_1de114:
    // 0x1de114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de11c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1de11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1de120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de12c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de12cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1de130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de134: 0x807bf88  j           func_1EFE20
    ctx->pc = 0x1DE134u;
    ctx->pc = 0x1DE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE134u;
    // 0x1de138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE20u, 0x1DE134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE13Cu;
    // 0x1de13c: 0x0  nop
    ctx->pc = 0x1de13cu;
    // NOP
    if (ctx->pc == 0x1de13cu) { ctx->pc = 0x1de140u; }
}
