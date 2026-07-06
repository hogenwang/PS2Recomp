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

// Function: sub_00203768
// Address: 0x203768 - 0x2038c8
void sub_00203768_0x203768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203768_0x203768");
#endif

    switch (ctx->pc) {
        case 0x2037acu: goto label_2037ac;
        case 0x2037e0u: goto label_2037e0;
        case 0x203808u: goto label_203808;
        default: break;
    }

    ctx->pc = 0x203768u;

    // 0x203768: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20376c: 0x3e00008  jr          $ra
    ctx->pc = 0x20376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20376Cu;
        // 0x203770: 0xdc622078  ld          $v0, 0x2078($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8312)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203774u;
    // 0x203774: 0x0  nop
    ctx->pc = 0x203774u;
    // NOP
    // 0x203778: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x203778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20377c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20377cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x203780: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x203780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x203784: 0xdc852078  ld          $a1, 0x2078($a0)
    ctx->pc = 0x203784u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8312)));
    // 0x203788: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x203788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x20378c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20378cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203790: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x203790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x203794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203798: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x203798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x20379c: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x20379cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x2037a0: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x2037a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2037a4: 0xc04818c  jal         func_120630
    ctx->pc = 0x2037A4u;
    SET_GPR_U32(ctx, 31, 0x2037ACu);
    ctx->pc = 0x2037A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037A4u;
    // 0x2037a8: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x2037A4u, 0x2037ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037ACu;
label_2037ac:
    // 0x2037ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2037acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2037b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2037B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2037B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037B0u;
        // 0x2037b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2037B8u;
    // 0x2037b8: 0x41178  dsll        $v0, $a0, 5
    ctx->pc = 0x2037b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 5);
    // 0x2037bc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2037bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2037c0: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x2037c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x2037c4: 0xdc652078  ld          $a1, 0x2078($v1)
    ctx->pc = 0x2037c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8312)));
    // 0x2037c8: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2037c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2037cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2037ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2037d0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x2037d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2037d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2037d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2037d8: 0xc04818c  jal         func_120630
    ctx->pc = 0x2037D8u;
    SET_GPR_U32(ctx, 31, 0x2037E0u);
    ctx->pc = 0x2037DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037D8u;
    // 0x2037dc: 0x220f8  dsll        $a0, $v0, 3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x2037D8u, 0x2037E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037E0u;
label_2037e0:
    // 0x2037e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2037e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2037E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037E4u;
        // 0x2037e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2037E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2037ECu;
    // 0x2037ec: 0x0  nop
    ctx->pc = 0x2037ecu;
    // NOP
    // 0x2037f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2037f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2037f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2037f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2037f8: 0xdc452078  ld          $a1, 0x2078($v0)
    ctx->pc = 0x2037f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8312)));
    // 0x2037fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2037fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203800: 0xc04818c  jal         func_120630
    ctx->pc = 0x203800u;
    SET_GPR_U32(ctx, 31, 0x203808u);
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x203800u, 0x203808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203808u;
label_203808:
    // 0x203808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20380c: 0x3e00008  jr          $ra
    ctx->pc = 0x20380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20380Cu;
        // 0x203810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203814u;
    // 0x203814: 0x0  nop
    ctx->pc = 0x203814u;
    // NOP
    // 0x203818: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x203818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20381c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20381cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x203820: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x203820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x203824: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x203824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
    // 0x203828: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x203828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20382c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20382cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x203830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x203834: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x203834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x203838: 0xc4412078  lwc1        $f1, 0x2078($v0)
    ctx->pc = 0x203838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20383c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20383cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203840: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x203840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x203844: 0x0  nop
    ctx->pc = 0x203844u;
    // NOP
    // 0x203848: 0x0  nop
    ctx->pc = 0x203848u;
    // NOP
    // 0x20384c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20384cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x203850: 0x3e00008  jr          $ra
    ctx->pc = 0x203850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203858u;
    // 0x203858: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x203858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20385c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20385cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x203860: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x203860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x203864: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x203864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x203868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20386c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20386cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x203870: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x203870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x203874: 0xc4412078  lwc1        $f1, 0x2078($v0)
    ctx->pc = 0x203874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203878: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x203878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20387c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20387cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x203880: 0x0  nop
    ctx->pc = 0x203880u;
    // NOP
    // 0x203884: 0x0  nop
    ctx->pc = 0x203884u;
    // NOP
    // 0x203888: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x203888u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x20388c: 0x3e00008  jr          $ra
    ctx->pc = 0x20388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203894u;
    // 0x203894: 0x0  nop
    ctx->pc = 0x203894u;
    // NOP
    // 0x203898: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x203898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20389c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20389cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2038a0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2038a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2038a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2038a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2038a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2038ac: 0xc4402078  lwc1        $f0, 0x2078($v0)
    ctx->pc = 0x2038acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2038b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2038b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2038b4: 0x0  nop
    ctx->pc = 0x2038b4u;
    // NOP
    // 0x2038b8: 0x0  nop
    ctx->pc = 0x2038b8u;
    // NOP
    // 0x2038bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2038bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2038c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2038C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2038C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2038C8u;
}
