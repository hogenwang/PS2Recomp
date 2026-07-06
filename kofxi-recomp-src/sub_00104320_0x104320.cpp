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

// Function: sub_00104320
// Address: 0x104320 - 0x104ae0
void sub_00104320_0x104320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104320_0x104320");
#endif

    switch (ctx->pc) {
        case 0x1043a8u: goto label_1043a8;
        case 0x1043d0u: goto label_1043d0;
        case 0x1043f8u: goto label_1043f8;
        case 0x1045ecu: goto label_1045ec;
        case 0x1045fcu: goto label_1045fc;
        case 0x1046acu: goto label_1046ac;
        case 0x104774u: goto label_104774;
        case 0x1047fcu: goto label_1047fc;
        case 0x104854u: goto label_104854;
        case 0x1048a8u: goto label_1048a8;
        case 0x1048e4u: goto label_1048e4;
        case 0x104950u: goto label_104950;
        case 0x1049a4u: goto label_1049a4;
        case 0x1049c8u: goto label_1049c8;
        case 0x104a38u: goto label_104a38;
        case 0x104a70u: goto label_104a70;
        default: break;
    }

    ctx->pc = 0x104320u;

    // 0x104320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x104320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x104324: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x104324u;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
    // 0x104328: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x104328u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10432c: 0x46009507  neg.s       $f20, $f18
    ctx->pc = 0x10432cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[18]);
    // 0x104330: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x104330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104334: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x104334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x104338: 0x46120000  add.s       $f0, $f0, $f18
    ctx->pc = 0x104338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[18]);
    // 0x10433c: 0x46130d42  mul.s       $f21, $f1, $f19
    ctx->pc = 0x10433cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x104340: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x104340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x104344: 0x4613a502  mul.s       $f20, $f20, $f19
    ctx->pc = 0x104344u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[19]);
    // 0x104348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10434c: 0x46018c42  mul.s       $f17, $f17, $f1
    ctx->pc = 0x10434cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x104350: 0xe7ba0090  swc1        $f26, 0x90($sp)
    ctx->pc = 0x104350u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x104354: 0x46009cc7  neg.s       $f19, $f19
    ctx->pc = 0x104354u;
    ctx->f[19] = FPU_NEG_S(ctx->f[19]);
    // 0x104358: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x104358u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x10435c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x10435cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x104360: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x104360u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x104364: 0x4611a500  add.s       $f20, $f20, $f17
    ctx->pc = 0x104364u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[17]);
    // 0x104368: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x104368u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x10436c: 0x46019cc0  add.s       $f19, $f19, $f1
    ctx->pc = 0x10436cu;
    ctx->f[19] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x104370: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x104370u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x104374: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x104374u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x104378: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x104378u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x10437c: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x10437cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x104380: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x104380u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x104384: 0x0  nop
    ctx->pc = 0x104384u;
    // NOP
    // 0x104388: 0x0  nop
    ctx->pc = 0x104388u;
    // NOP
    // 0x10438c: 0x4613ad43  div.s       $f21, $f21, $f19
    ctx->pc = 0x10438cu;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[19];
    // 0x104390: 0x0  nop
    ctx->pc = 0x104390u;
    // NOP
    // 0x104394: 0x0  nop
    ctx->pc = 0x104394u;
    // NOP
    // 0x104398: 0x4613a503  div.s       $f20, $f20, $f19
    ctx->pc = 0x104398u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[19];
    // 0x10439c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1043a0: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x1043A0u;
    SET_GPR_U32(ctx, 31, 0x1043A8u);
    ctx->pc = 0x1043A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043A0u;
    // 0x1043a4: 0x46008646  mov.s       $f25, $f16 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x1043A0u, 0x1043A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043A8u;
label_1043a8:
    // 0x1043a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1043a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1043ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1043acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1043b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1043b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043b4: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x1043b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1043b8: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x1043b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1043bc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1043bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1043c0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1043c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1043c4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1043c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1043c8: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x1043C8u;
    SET_GPR_U32(ctx, 31, 0x1043D0u);
    ctx->pc = 0x1043CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043C8u;
    // 0x1043cc: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x1043C8u, 0x1043D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043D0u;
label_1043d0:
    // 0x1043d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1043d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043d4: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x1043d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1043d8: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x1043d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1043dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1043dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043e0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1043e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1043e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1043e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043e8: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x1043e8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1043ec: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x1043ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1043f0: 0xc040d06  jal         func_103418
    ctx->pc = 0x1043F0u;
    SET_GPR_U32(ctx, 31, 0x1043F8u);
    ctx->pc = 0x1043F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043F0u;
    // 0x1043f4: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x1043F0u, 0x1043F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043F8u;
label_1043f8:
    // 0x1043f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1043f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1043fc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1043fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104400: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x104400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x104404: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x104404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x104408: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x104408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x10440c: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x10440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x104410: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x104410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x104414: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x104414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x104418: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x104418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10441c: 0x3e00008  jr          $ra
    ctx->pc = 0x10441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10441Cu;
        // 0x104420: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10441Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104424u;
    // 0x104424: 0x0  nop
    ctx->pc = 0x104424u;
    // NOP
    // 0x104428: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x104428u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x10442c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x10442Cu;
    {
        const bool branch_taken_0x10442c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x104430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10442Cu;
        // 0x104430: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10442c) {
            ctx->pc = 0x1044D8u;
            goto label_1044d8;
        }
    }
    ctx->pc = 0x104434u;
    // 0x104434: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x104434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104438: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x104438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10443c: 0x46018242  mul.s       $f9, $f16, $f1
    ctx->pc = 0x10443cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x104440: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x104440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104444: 0x46027a82  mul.s       $f10, $f15, $f2
    ctx->pc = 0x104444u;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x104448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10444c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x10444cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x104450: 0x46037182  mul.s       $f6, $f14, $f3
    ctx->pc = 0x104450u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x104454: 0xe490000c  swc1        $f16, 0xC($a0)
    ctx->pc = 0x104454u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x104458: 0x460009c7  neg.s       $f7, $f1
    ctx->pc = 0x104458u;
    ctx->f[7] = FPU_NEG_S(ctx->f[1]);
    // 0x10445c: 0xe48f001c  swc1        $f15, 0x1C($a0)
    ctx->pc = 0x10445cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x104460: 0x460a4800  add.s       $f0, $f9, $f10
    ctx->pc = 0x104460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x104464: 0xe48e002c  swc1        $f14, 0x2C($a0)
    ctx->pc = 0x104464u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x104468: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x104468u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
    // 0x10446c: 0xe4870030  swc1        $f7, 0x30($a0)
    ctx->pc = 0x10446cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x104470: 0x46001a07  neg.s       $f8, $f3
    ctx->pc = 0x104470u;
    ctx->f[8] = FPU_NEG_S(ctx->f[3]);
    // 0x104474: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x104474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x104478: 0xe4840034  swc1        $f4, 0x34($a0)
    ctx->pc = 0x104478u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x10447c: 0x460179c2  mul.s       $f7, $f15, $f1
    ctx->pc = 0x10447cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x104480: 0x46028102  mul.s       $f4, $f16, $f2
    ctx->pc = 0x104480u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x104484: 0xe4880038  swc1        $f8, 0x38($a0)
    ctx->pc = 0x104484u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x104488: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x104488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x10448c: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x10448cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x104490: 0xe4870010  swc1        $f7, 0x10($a0)
    ctx->pc = 0x104490u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x104494: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x104494u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x104498: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x104498u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x10449c: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x10449cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1044a0: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x1044a0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x1044a4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1044a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1044a8: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x1044a8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x1044ac: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1044acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1044b0: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x1044b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1044b4: 0xe485003c  swc1        $f5, 0x3C($a0)
    ctx->pc = 0x1044b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1044b8: 0x46038002  mul.s       $f0, $f16, $f3
    ctx->pc = 0x1044b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
    // 0x1044bc: 0xe4890000  swc1        $f9, 0x0($a0)
    ctx->pc = 0x1044bcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1044c0: 0x460378c2  mul.s       $f3, $f15, $f3
    ctx->pc = 0x1044c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x1044c4: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x1044c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1044c8: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x1044c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1044cc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1044ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1044d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1044D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1044D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044D0u;
        // 0x1044d4: 0xe4830018  swc1        $f3, 0x18($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1044D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1044D8u;
label_1044d8:
    // 0x1044d8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1044d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1044dc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x1044dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1044e0: 0x46028142  mul.s       $f5, $f16, $f2
    ctx->pc = 0x1044e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x1044e4: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x1044e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1044e8: 0x46047982  mul.s       $f6, $f15, $f4
    ctx->pc = 0x1044e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x1044ec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1044ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1044f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1044f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1044f4: 0x46077202  mul.s       $f8, $f14, $f7
    ctx->pc = 0x1044f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x1044f8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1044f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1044fc: 0x46001247  neg.s       $f9, $f2
    ctx->pc = 0x1044fcu;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
    // 0x104500: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x104500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x104504: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x104504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x104508: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x104508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x10450c: 0x46047282  mul.s       $f10, $f14, $f4
    ctx->pc = 0x10450cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x104510: 0x460022c7  neg.s       $f11, $f4
    ctx->pc = 0x104510u;
    ctx->f[11] = FPU_NEG_S(ctx->f[4]);
    // 0x104514: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x104514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x104518: 0x460278c2  mul.s       $f3, $f15, $f2
    ctx->pc = 0x104518u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x10451c: 0x46078302  mul.s       $f12, $f16, $f7
    ctx->pc = 0x10451cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x104520: 0x0  nop
    ctx->pc = 0x104520u;
    // NOP
    // 0x104524: 0x0  nop
    ctx->pc = 0x104524u;
    // NOP
    // 0x104528: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x104528u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x10452c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x10452cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x104530: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x104530u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x104534: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x104534u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x104538: 0x46077b42  mul.s       $f13, $f15, $f7
    ctx->pc = 0x104538u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x10453c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10453cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x104540: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x104540u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x104544: 0x46048102  mul.s       $f4, $f16, $f4
    ctx->pc = 0x104544u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
    // 0x104548: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x104548u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x10454c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10454cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104550: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x104550u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x104554: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x104554u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x104558: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x104558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x10455c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x10455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x104560: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x104560u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x104564: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x104564u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x104568: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x104568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x10456c: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x10456cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x104570: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x104570u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x104574: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x104574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x104578: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x104578u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x10457c: 0xe4890030  swc1        $f9, 0x30($a0)
    ctx->pc = 0x10457cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x104580: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x104580u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x104584: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x104584u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x104588: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x104588u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x10458c: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x10458cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x104590: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x104590u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x104594: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x104594u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x104598: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x104598u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x10459c: 0xe48b0034  swc1        $f11, 0x34($a0)
    ctx->pc = 0x10459cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1045a0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1045a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1045a4: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1045a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1045a8: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x1045a8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1045ac: 0xe4880028  swc1        $f8, 0x28($a0)
    ctx->pc = 0x1045acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1045b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1045B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1045B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045B0u;
        // 0x1045b4: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1045B8u;
    // 0x1045b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1045b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1045bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1045bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1045c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1045c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1045c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1045c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1045c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1045cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1045ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1045d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1045d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1045d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1045d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1045dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1045dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1045e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1045e4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1045E4u;
    SET_GPR_U32(ctx, 31, 0x1045ECu);
    ctx->pc = 0x1045E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045E4u;
    // 0x1045e8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1045E4u, 0x1045ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045ECu;
label_1045ec:
    // 0x1045ec: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1045ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1045f0: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x1045f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1045f4: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x1045f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1045f8: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x1045f8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_1045fc:
    // 0x1045fc: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x1045fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104600: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x104600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x104604: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x104604u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x104608: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x104608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x10460c: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x10460cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x104610: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x104610u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x104614: 0x4a0003bf  vwaitq
    ctx->pc = 0x104614u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x104618: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x104618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x10461c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10461Cu;
    {
        const bool branch_taken_0x10461c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10461Cu;
        // 0x104620: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10461c) {
            ctx->pc = 0x104628u;
            goto label_104628;
        }
    }
    ctx->pc = 0x104624u;
    // 0x104624: 0x4a6a497c  vftoi0.zw   $vf10, $vf9
    ctx->pc = 0x104624u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_104628:
    // 0x104628: 0xfa8a0000  sqc2        $vf10, 0x0($s4)
    ctx->pc = 0x104628u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x10462c: 0x2231ffff  addi        $s1, $s1, -0x1
    ctx->pc = 0x10462cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x104630: 0x22520010  addi        $s2, $s2, 0x10
    ctx->pc = 0x104630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x104634: 0x1411fff1  bne         $zero, $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x104634u;
    {
        const bool branch_taken_0x104634 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 17));
        ctx->pc = 0x104638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104634u;
        // 0x104638: 0x22940010  addi        $s4, $s4, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104634) {
            ctx->pc = 0x1045FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1045fc;
        }
    }
    ctx->pc = 0x10463Cu;
    // 0x10463c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10463Cu;
    {
        const bool branch_taken_0x10463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10463Cu;
        // 0x104640: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10463c) {
            ctx->pc = 0x104660u;
            goto label_104660;
        }
    }
    ctx->pc = 0x104644u;
    // 0x104644: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104644u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104648: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10464c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10464cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104650: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104658: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x104658u;
    ctx->pc = 0x10465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104658u;
    // 0x10465c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x104660u;
label_104660:
    // 0x104660: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104660u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104664: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104668: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10466c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10466cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104674: 0x3e00008  jr          $ra
    ctx->pc = 0x104674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104674u;
        // 0x104678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10467Cu;
    // 0x10467c: 0x0  nop
    ctx->pc = 0x10467cu;
    // NOP
    // 0x104680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x104680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x104684: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x104684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x104688: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10468c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10468cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104690: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104694: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x104694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10469c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10469cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1046a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1046a4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1046A4u;
    SET_GPR_U32(ctx, 31, 0x1046ACu);
    ctx->pc = 0x1046A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046A4u;
    // 0x1046a8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1046A4u, 0x1046ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046ACu;
label_1046ac:
    // 0x1046ac: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1046acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1046b0: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x1046b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1046b4: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x1046b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1046b8: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x1046b8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1046bc: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x1046bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1046c0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1046c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1046c4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1046c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1046c8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1046c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1046cc: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x1046ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1046d0: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x1046d0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1046d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1046d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1046d8: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x1046d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1046dc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1046DCu;
    {
        const bool branch_taken_0x1046dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046DCu;
        // 0x1046e0: 0x4bea497d  vftoi4.xyzw $vf10, $vf9 (Delay Slot)
        { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046dc) {
            ctx->pc = 0x1046E8u;
            goto label_1046e8;
        }
    }
    ctx->pc = 0x1046E4u;
    // 0x1046e4: 0x4a6a497c  vftoi0.zw   $vf10, $vf9
    ctx->pc = 0x1046e4u;
    { __m128 src = ctx->vu0_vf[9]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_1046e8:
    // 0x1046e8: 0xfa6a0000  sqc2        $vf10, 0x0($s3)
    ctx->pc = 0x1046e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1046ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1046ECu;
    {
        const bool branch_taken_0x1046ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046ECu;
        // 0x1046f0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046ec) {
            ctx->pc = 0x10470Cu;
            goto label_10470c;
        }
    }
    ctx->pc = 0x1046F4u;
    // 0x1046f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1046f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1046f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1046f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1046fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1046fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104704: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x104704u;
    ctx->pc = 0x104708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104704u;
    // 0x104708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x10470Cu;
label_10470c:
    // 0x10470c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10470cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104710: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104714: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10471c: 0x3e00008  jr          $ra
    ctx->pc = 0x10471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10471Cu;
        // 0x104720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104724u;
    // 0x104724: 0x0  nop
    ctx->pc = 0x104724u;
    // NOP
    // 0x104728: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x104728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10472c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x10472cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x104730: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x104730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104734: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x104734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x104738: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x104738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10473c: 0x3e00008  jr          $ra
    ctx->pc = 0x10473Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10473Cu;
        // 0x104740: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10473Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104744u;
    // 0x104744: 0x0  nop
    ctx->pc = 0x104744u;
    // NOP
    // 0x104748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x104748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10474c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x104750: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x104754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10475c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10475cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104760: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x104760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x104764: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x104764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104768: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x104768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10476c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10476Cu;
    SET_GPR_U32(ctx, 31, 0x104774u);
    ctx->pc = 0x104770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10476Cu;
    // 0x104770: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10476Cu, 0x104774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104774u;
label_104774:
    // 0x104774: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x104774u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104778: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x104778u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10477c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x10477cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104780: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x104780u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104784: 0x4a29233c  vmove.w     $vf9, $vf4
    ctx->pc = 0x104784u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x104788: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x104788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x10478c: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x10478cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x104790: 0x4bc621bc  vmulax.xyz  $ACC, $vf4, $vf6x
    ctx->pc = 0x104790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x104794: 0x4bc82a48  vmaddx.xyz  $vf9, $vf5, $vf8x
    ctx->pc = 0x104794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x104798: 0xfa490000  sqc2        $vf9, 0x0($s2)
    ctx->pc = 0x104798u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x10479c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10479Cu;
    {
        const bool branch_taken_0x10479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10479Cu;
        // 0x1047a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10479c) {
            ctx->pc = 0x1047BCu;
            goto label_1047bc;
        }
    }
    ctx->pc = 0x1047A4u;
    // 0x1047a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1047a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1047a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1047a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1047ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1047acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1047b0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1047b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1047b4: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1047B4u;
    ctx->pc = 0x1047B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047B4u;
    // 0x1047b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x1047BCu;
label_1047bc:
    // 0x1047bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1047bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1047c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1047c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1047c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1047c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1047c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1047c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1047cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1047CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1047D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047CCu;
        // 0x1047d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1047CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1047D4u;
    // 0x1047d4: 0x0  nop
    ctx->pc = 0x1047d4u;
    // NOP
    // 0x1047d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1047dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1047dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1047e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1047e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1047e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1047e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1047e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1047ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1047ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1047f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1047f4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1047F4u;
    SET_GPR_U32(ctx, 31, 0x1047FCu);
    ctx->pc = 0x1047F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047F4u;
    // 0x1047f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1047F4u, 0x1047FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047FCu;
label_1047fc:
    // 0x1047fc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1047fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104800: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x104800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x104804: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x104804u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x104808: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x104808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10480c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x10480cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x104810: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104810u;
    {
        const bool branch_taken_0x104810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104810u;
        // 0x104814: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104810) {
            ctx->pc = 0x10482Cu;
            goto label_10482c;
        }
    }
    ctx->pc = 0x104818u;
    // 0x104818: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10481c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10481cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104820: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x104820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104824: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x104824u;
    ctx->pc = 0x104828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104824u;
    // 0x104828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x10482Cu;
label_10482c:
    // 0x10482c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10482cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104834: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x104834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104838: 0x3e00008  jr          $ra
    ctx->pc = 0x104838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104838u;
        // 0x10483c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104840u;
    // 0x104840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x104848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10484c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10484Cu;
    SET_GPR_U32(ctx, 31, 0x104854u);
    ctx->pc = 0x104850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10484Cu;
    // 0x104850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10484Cu, 0x104854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104854u;
label_104854:
    // 0x104854: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x104854u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x104858: 0x3c034580  lui         $v1, 0x4580
    ctx->pc = 0x104858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17792 << 16));
    // 0x10485c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x10485cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x104860: 0x34634580  ori         $v1, $v1, 0x4580
    ctx->pc = 0x104860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17792);
    // 0x104864: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x104864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x104868: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x104868u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10486c: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x10486cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104870: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x104870u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 0);
    // 0x104874: 0x4ba4396c  vsub.xyw    $vf5, $vf7, $vf4
    ctx->pc = 0x104874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104878: 0x4b87316c  vsub.xy     $vf5, $vf6, $vf7
    ctx->pc = 0x104878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10487c: 0x4a0002ff  vnop
    ctx->pc = 0x10487cu;
    // NOP operation, no action needed for VU0
    // 0x104880: 0x4a0002ff  vnop
    ctx->pc = 0x104880u;
    // NOP operation, no action needed for VU0
    // 0x104884: 0x4a0002ff  vnop
    ctx->pc = 0x104884u;
    // NOP operation, no action needed for VU0
    // 0x104888: 0x4a0002ff  vnop
    ctx->pc = 0x104888u;
    // NOP operation, no action needed for VU0
    // 0x10488c: 0x4a0002ff  vnop
    ctx->pc = 0x10488cu;
    // NOP operation, no action needed for VU0
    // 0x104890: 0x48438000  cfc2.ni     $v1, $vi16
    ctx->pc = 0x104890u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat4);
    // 0x104894: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x104894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x104898: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104898u;
    {
        const bool branch_taken_0x104898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104898u;
        // 0x10489c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104898) {
            ctx->pc = 0x1048A8u;
            goto label_1048a8;
        }
    }
    ctx->pc = 0x1048A0u;
    // 0x1048a0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1048A0u;
    SET_GPR_U32(ctx, 31, 0x1048A8u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1048A0u, 0x1048A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048A8u;
label_1048a8:
    // 0x1048a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1048a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1048acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1048b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1048b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1048b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1048B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1048B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048B4u;
        // 0x1048b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1048B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1048BCu;
    // 0x1048bc: 0x0  nop
    ctx->pc = 0x1048bcu;
    // NOP
    // 0x1048c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1048c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1048c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1048c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1048c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1048c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1048cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1048ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1048d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1048d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1048d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1048d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1048dc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1048DCu;
    SET_GPR_U32(ctx, 31, 0x1048E4u);
    ctx->pc = 0x1048E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048DCu;
    // 0x1048e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1048DCu, 0x1048E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048E4u;
label_1048e4:
    // 0x1048e4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1048e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1048e8: 0x3c034580  lui         $v1, 0x4580
    ctx->pc = 0x1048e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17792 << 16));
    // 0x1048ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1048ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1048f0: 0x34634580  ori         $v1, $v1, 0x4580
    ctx->pc = 0x1048f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17792);
    // 0x1048f4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1048f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1048f8: 0xda460000  lqc2        $vf6, 0x0($s2)
    ctx->pc = 0x1048f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1048fc: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x1048fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104900: 0xda090000  lqc2        $vf9, 0x0($s0)
    ctx->pc = 0x104900u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104904: 0x48a33800  qmtc2.ni    $v1, $vf7
    ctx->pc = 0x104904u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x104908: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x104908u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 0);
    // 0x10490c: 0x4ba4316c  vsub.xyw    $vf5, $vf6, $vf4
    ctx->pc = 0x10490cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104910: 0x4b86396c  vsub.xy     $vf5, $vf7, $vf6
    ctx->pc = 0x104910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104914: 0x4ba4416c  vsub.xyw    $vf5, $vf8, $vf4
    ctx->pc = 0x104914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104918: 0x4b88396c  vsub.xy     $vf5, $vf7, $vf8
    ctx->pc = 0x104918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10491c: 0x4ba4496c  vsub.xyw    $vf5, $vf9, $vf4
    ctx->pc = 0x10491cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104920: 0x4b89396c  vsub.xy     $vf5, $vf7, $vf9
    ctx->pc = 0x104920u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x104924: 0x4a0002ff  vnop
    ctx->pc = 0x104924u;
    // NOP operation, no action needed for VU0
    // 0x104928: 0x4a0002ff  vnop
    ctx->pc = 0x104928u;
    // NOP operation, no action needed for VU0
    // 0x10492c: 0x4a0002ff  vnop
    ctx->pc = 0x10492cu;
    // NOP operation, no action needed for VU0
    // 0x104930: 0x4a0002ff  vnop
    ctx->pc = 0x104930u;
    // NOP operation, no action needed for VU0
    // 0x104934: 0x4a0002ff  vnop
    ctx->pc = 0x104934u;
    // NOP operation, no action needed for VU0
    // 0x104938: 0x48438000  cfc2.ni     $v1, $vi16
    ctx->pc = 0x104938u;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat4);
    // 0x10493c: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x10493cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x104940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104940u;
    {
        const bool branch_taken_0x104940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104940u;
        // 0x104944: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104940) {
            ctx->pc = 0x104950u;
            goto label_104950;
        }
    }
    ctx->pc = 0x104948u;
    // 0x104948: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x104948u;
    SET_GPR_U32(ctx, 31, 0x104950u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x104948u, 0x104950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104950u;
label_104950:
    // 0x104950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x104950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104954: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x104954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104958: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10495c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10495cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104964: 0x3e00008  jr          $ra
    ctx->pc = 0x104964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104964u;
        // 0x104968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10496Cu;
    // 0x10496c: 0x0  nop
    ctx->pc = 0x10496cu;
    // NOP
    // 0x104970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x104970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x104974: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x104974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x104978: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x104978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10497c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10497cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104980: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x104984: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x104984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104988: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10498c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10498cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104994: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x104994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104998: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x104998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10499c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10499Cu;
    SET_GPR_U32(ctx, 31, 0x1049A4u);
    ctx->pc = 0x1049A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10499Cu;
    // 0x1049a0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10499Cu, 0x1049A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049A4u;
label_1049a4:
    // 0x1049a4: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x1049a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1049a8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1049a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1049ac: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x1049acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1049b0: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x1049b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1049b4: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x1049b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1049b8: 0xda890000  lqc2        $vf9, 0x0($s4)
    ctx->pc = 0x1049b8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1049bc: 0xda6a0000  lqc2        $vf10, 0x0($s3)
    ctx->pc = 0x1049bcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1049c0: 0xda8b0000  lqc2        $vf11, 0x0($s4)
    ctx->pc = 0x1049c0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1049c4: 0xda6c0000  lqc2        $vf12, 0x0($s3)
    ctx->pc = 0x1049c4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1049c8:
    // 0x1049c8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1049c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1049cc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1049ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1049d0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1049d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1049d4: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1049d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1049d8: 0x4bc84adb  vmulw.xyz   $vf11, $vf9, $vf8w
    ctx->pc = 0x1049d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1049dc: 0x4bc8531b  vmulw.xyz   $vf12, $vf10, $vf8w
    ctx->pc = 0x1049dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1049e0: 0x4a0002ff  vnop
    ctx->pc = 0x1049e0u;
    // NOP operation, no action needed for VU0
    // 0x1049e4: 0x4a0002ff  vnop
    ctx->pc = 0x1049e4u;
    // NOP operation, no action needed for VU0
    // 0x1049e8: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x1049e8u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 0);
    // 0x1049ec: 0x4bab42ec  vsub.xyw    $vf11, $vf8, $vf11
    ctx->pc = 0x1049ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1049f0: 0x4ba8632c  vsub.xyw    $vf12, $vf12, $vf8
    ctx->pc = 0x1049f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1049f4: 0x4a2b4b3c  vmove.w     $vf11, $vf9
    ctx->pc = 0x1049f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
    // 0x1049f8: 0x4a2c533c  vmove.w     $vf12, $vf10
    ctx->pc = 0x1049f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[10], _mm_castsi128_ps(mask)); }
    // 0x1049fc: 0x4a0002ff  vnop
    ctx->pc = 0x1049fcu;
    // NOP operation, no action needed for VU0
    // 0x104a00: 0x22310010  addi        $s1, $s1, 0x10
    ctx->pc = 0x104a00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x104a04: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x104a04u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104a08: 0x2210ffff  addi        $s0, $s0, -0x1
    ctx->pc = 0x104a08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
    // 0x104a0c: 0x48438000  cfc2.ni     $v1, $vi16
    ctx->pc = 0x104a0cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat4);
    // 0x104a10: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x104a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x104a14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x104A14u;
    {
        const bool branch_taken_0x104a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104a14) {
            ctx->pc = 0x104A28u;
            goto label_104a28;
        }
    }
    ctx->pc = 0x104A1Cu;
    // 0x104a1c: 0x1410ffea  bne         $zero, $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x104A1Cu;
    {
        const bool branch_taken_0x104a1c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x104a1c) {
            ctx->pc = 0x1049C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1049c8;
        }
    }
    ctx->pc = 0x104A24u;
    // 0x104a24: 0x20030001  addi        $v1, $zero, 0x1
    ctx->pc = 0x104a24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_104a28:
    // 0x104a28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104A28u;
    {
        const bool branch_taken_0x104a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A28u;
        // 0x104a2c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a28) {
            ctx->pc = 0x104A38u;
            goto label_104a38;
        }
    }
    ctx->pc = 0x104A30u;
    // 0x104a30: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x104A30u;
    SET_GPR_U32(ctx, 31, 0x104A38u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x104A30u, 0x104A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A38u;
label_104a38:
    // 0x104a38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x104a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x104a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104a40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104a44: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104a48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104a4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104a54: 0x3e00008  jr          $ra
    ctx->pc = 0x104A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A54u;
        // 0x104a58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A5Cu;
    // 0x104a5c: 0x0  nop
    ctx->pc = 0x104a5cu;
    // NOP
    // 0x104a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104a68: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x104A68u;
    SET_GPR_U32(ctx, 31, 0x104A70u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x104A68u, 0x104A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A70u;
label_104a70:
    // 0x104a70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104a74: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x104a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x104a78: 0x34633830  ori         $v1, $v1, 0x3830
    ctx->pc = 0x104a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14384);
    // 0x104a7c: 0x34843820  ori         $a0, $a0, 0x3820
    ctx->pc = 0x104a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14368);
    // 0x104a80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x104a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x104a84: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x104a88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x104a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x104a8c: 0x34a53810  ori         $a1, $a1, 0x3810
    ctx->pc = 0x104a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14352);
    // 0x104a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104a94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x104a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x104a98: 0x4848e000  cfc2.ni     $t0, $vi28
    ctx->pc = 0x104a98u;
    SET_GPR_U32(ctx, 8, ctx->vu0_itop);
    // 0x104a9c: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x104a9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x104aa0: 0x48c8e000  ctc2.ni     $t0, $vi28
    ctx->pc = 0x104aa0u;
    ctx->vu0_itop = GPR_U32(ctx, 8) & 0x3FF;
    // 0x104aa4: 0x40f  sync.p
    ctx->pc = 0x104aa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x104aa8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x104aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x104aac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x104aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x104ab0: 0x24a584b0  addiu       $a1, $a1, -0x7B50
    ctx->pc = 0x104ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
    // 0x104ab4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x104ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x104ab8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x104ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104abc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x104abcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x104ac0: 0x78a40010  lq          $a0, 0x10($a1)
    ctx->pc = 0x104ac0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x104ac4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x104ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x104ac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104AC8u;
    {
        const bool branch_taken_0x104ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AC8u;
        // 0x104acc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ac8) {
            ctx->pc = 0x104AD8u;
            goto label_104ad8;
        }
    }
    ctx->pc = 0x104AD0u;
    // 0x104ad0: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x104AD0u;
    ctx->pc = 0x104AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AD0u;
    // 0x104ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x104AD8u;
label_104ad8:
    // 0x104ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x104AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AD8u;
        // 0x104adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104AE0u;
}
