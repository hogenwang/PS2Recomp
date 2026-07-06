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

// Function: sub_001BB050
// Address: 0x1bb050 - 0x1bb1b8
void sub_001BB050_0x1bb050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB050_0x1bb050");
#endif

    switch (ctx->pc) {
        case 0x1bb07cu: goto label_1bb07c;
        case 0x1bb09cu: goto label_1bb09c;
        case 0x1bb0c0u: goto label_1bb0c0;
        case 0x1bb0d0u: goto label_1bb0d0;
        case 0x1bb0fcu: goto label_1bb0fc;
        case 0x1bb164u: goto label_1bb164;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1a4u: goto label_1bb1a4;
        default: break;
    }

    ctx->pc = 0x1bb050u;

    // 0x1bb050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bb054: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bb054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bb058: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bb058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb05c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bb05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1bb060: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bb060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb064: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1bb064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1bb068: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB068u;
    {
        const bool branch_taken_0x1bb068 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB068u;
        // 0x1bb06c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb068) {
            ctx->pc = 0x1BB088u;
            goto label_1bb088;
        }
    }
    ctx->pc = 0x1BB070u;
    // 0x1bb070: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bb070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bb074: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BB074u;
    SET_GPR_U32(ctx, 31, 0x1BB07Cu);
    ctx->pc = 0x1BB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB074u;
    // 0x1bb078: 0x248486a0  addiu       $a0, $a0, -0x7960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BB074u, 0x1BB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB07Cu;
label_1bb07c:
    // 0x1bb07c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1BB07Cu;
    {
        const bool branch_taken_0x1bb07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB07Cu;
        // 0x1bb080: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb07c) {
            ctx->pc = 0x1BB168u;
            goto label_1bb168;
        }
    }
    ctx->pc = 0x1BB084u;
    // 0x1bb084: 0x0  nop
    ctx->pc = 0x1bb084u;
    // NOP
label_1bb088:
    // 0x1bb088: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x1bb08c: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BB08Cu;
    {
        const bool branch_taken_0x1bb08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB08Cu;
        // 0x1bb090: 0x82510001  lb          $s1, 0x1($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb08c) {
            ctx->pc = 0x1BB164u;
            goto label_1bb164;
        }
    }
    ctx->pc = 0x1BB094u;
    // 0x1bb094: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1BB094u;
    SET_GPR_U32(ctx, 31, 0x1BB09Cu);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1BB094u, 0x1BB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB09Cu;
label_1bb09c:
    // 0x1bb09c: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x1bb09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x1bb0a0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bb0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb0a4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BB0A4u;
    {
        const bool branch_taken_0x1bb0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0A4u;
        // 0x1bb0a8: 0xa2500072  sb          $s0, 0x72($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0a4) {
            ctx->pc = 0x1BB15Cu;
            goto label_1bb15c;
        }
    }
    ctx->pc = 0x1BB0ACu;
    // 0x1bb0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb0b0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB0B0u;
    {
        const bool branch_taken_0x1bb0b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0B0u;
        // 0x1bb0b4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0b0) {
            ctx->pc = 0x1BB0C8u;
            goto label_1bb0c8;
        }
    }
    ctx->pc = 0x1BB0B8u;
    // 0x1bb0b8: 0xc06d2ec  jal         func_1B4BB0
    ctx->pc = 0x1BB0B8u;
    SET_GPR_U32(ctx, 31, 0x1BB0C0u);
    ctx->pc = 0x1BB0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0B8u;
    // 0x1bb0bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BB0u, 0x1BB0B8u, 0x1BB0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0C0u;
label_1bb0c0:
    // 0x1bb0c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C0u;
        // 0x1bb0c4: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB0E0u;
            goto label_1bb0e0;
        }
    }
    ctx->pc = 0x1BB0C8u;
label_1bb0c8:
    // 0x1bb0c8: 0xc06d2ec  jal         func_1B4BB0
    ctx->pc = 0x1BB0C8u;
    SET_GPR_U32(ctx, 31, 0x1BB0D0u);
    ctx->pc = 0x1BB0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0C8u;
    // 0x1bb0cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BB0u, 0x1BB0C8u, 0x1BB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0D0u;
label_1bb0d0:
    // 0x1bb0d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1bb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1bb0d4: 0x8c432360  lw          $v1, 0x2360($v0)
    ctx->pc = 0x1bb0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9056)));
    // 0x1bb0d8: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x1bb0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x1bb0dc: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1bb0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1bb0e0:
    // 0x1bb0e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0e4: 0x2610c364  addiu       $s0, $s0, -0x3C9C
    ctx->pc = 0x1bb0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951780));
    // 0x1bb0e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1bb0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1bb0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb0f0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1bb0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1bb0f4: 0xc06e5d0  jal         func_1B9740
    ctx->pc = 0x1BB0F4u;
    SET_GPR_U32(ctx, 31, 0x1BB0FCu);
    ctx->pc = 0x1BB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0F4u;
    // 0x1bb0f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9740u, 0x1BB0F4u, 0x1BB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0FCu;
label_1bb0fc:
    // 0x1bb0fc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1bb100: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bb100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bb104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bb108: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x1bb108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x1bb10c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb110: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1bb110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb114: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bb114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bb118: 0xc441c3b0  lwc1        $f1, -0x3C50($v0)
    ctx->pc = 0x1bb118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb11c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bb11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb120: 0x0  nop
    ctx->pc = 0x1bb120u;
    // NOP
    // 0x1bb124: 0x0  nop
    ctx->pc = 0x1bb124u;
    // NOP
    // 0x1bb128: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bb128u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1bb12c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb130: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1bb130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb134: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb134u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bb138: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1bb138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bb13c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB13Cu;
    {
        const bool branch_taken_0x1bb13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB13Cu;
        // 0x1bb140: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb13c) {
            ctx->pc = 0x1BB158u;
            goto label_1bb158;
        }
    }
    ctx->pc = 0x1BB144u;
    // 0x1bb144: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1bb144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1bb148: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1bb14c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb14cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bb150: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1bb150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1bb154: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bb154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1bb158:
    // 0x1bb158: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x1bb158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_1bb15c:
    // 0x1bb15c: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1BB15Cu;
    SET_GPR_U32(ctx, 31, 0x1BB164u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1BB15Cu, 0x1BB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB164u;
label_1bb164:
    // 0x1bb164: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bb164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb168:
    // 0x1bb168: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1bb168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb16c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bb16cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb170: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bb170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bb174: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB174u;
        // 0x1bb178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB17Cu;
    // 0x1bb17c: 0x0  nop
    ctx->pc = 0x1bb17cu;
    // NOP
    // 0x1bb180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb18c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB18Cu;
    SET_GPR_U32(ctx, 31, 0x1BB194u);
    ctx->pc = 0x1BB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB18Cu;
    // 0x1bb190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB18Cu, 0x1BB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB194u;
label_1bb194:
    // 0x1bb194: 0xc06ec6e  jal         func_1BB1B8
    ctx->pc = 0x1BB194u;
    SET_GPR_U32(ctx, 31, 0x1BB19Cu);
    ctx->pc = 0x1BB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB194u;
    // 0x1bb198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1B8u, 0x1BB194u, 0x1BB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB19Cu;
label_1bb19c:
    // 0x1bb19c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB19Cu;
    SET_GPR_U32(ctx, 31, 0x1BB1A4u);
    ctx->pc = 0x1BB1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB19Cu;
    // 0x1bb1a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BB19Cu, 0x1BB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1A4u;
label_1bb1a4:
    // 0x1bb1a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb1a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1B0u;
        // 0x1bb1b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB1B8u;
}
