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

// Function: sub_001198C8
// Address: 0x1198c8 - 0x119d40
void sub_001198C8_0x1198c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001198C8_0x1198c8");
#endif

    switch (ctx->pc) {
        case 0x11990cu: goto label_11990c;
        case 0x119910u: goto label_119910;
        case 0x119970u: goto label_119970;
        case 0x119988u: goto label_119988;
        case 0x1199e4u: goto label_1199e4;
        case 0x119a40u: goto label_119a40;
        case 0x119ac8u: goto label_119ac8;
        case 0x119ae4u: goto label_119ae4;
        case 0x119bc8u: goto label_119bc8;
        case 0x119c18u: goto label_119c18;
        case 0x119c44u: goto label_119c44;
        case 0x119c60u: goto label_119c60;
        case 0x119ca0u: goto label_119ca0;
        case 0x119cd4u: goto label_119cd4;
        default: break;
    }

    ctx->pc = 0x1198c8u;

    // 0x1198c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1198c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1198cc: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x1198ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x1198d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1198d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1198d4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1198d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1198d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1198d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1198dc: 0x3c0f3f49  lui         $t7, 0x3F49
    ctx->pc = 0x1198dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16201 << 16));
    // 0x1198e0: 0x44126000  mfc1        $s2, $f12
    ctx->pc = 0x1198e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1198e4: 0x35ef0fd8  ori         $t7, $t7, 0xFD8
    ctx->pc = 0x1198e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4056);
    // 0x1198e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1198e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1198ec: 0x24e8024  and         $s0, $s2, $t6
    ctx->pc = 0x1198ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 14));
    // 0x1198f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1198f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1198f4: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x1198f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1198f8: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1198F8u;
    {
        const bool branch_taken_0x1198f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1198FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198F8u;
        // 0x1198fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198f8) {
            ctx->pc = 0x119924u;
            goto label_119924;
        }
    }
    ctx->pc = 0x119900u;
    // 0x119900: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x119900u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x119904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119908: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x119908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_11990c:
    // 0x11990c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11990cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_119910:
    // 0x119910: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x119910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119914: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119918: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x119918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11991c: 0x3e00008  jr          $ra
    ctx->pc = 0x11991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11991Cu;
        // 0x119920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11991Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119924u;
label_119924:
    // 0x119924: 0x3c0f4016  lui         $t7, 0x4016
    ctx->pc = 0x119924u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16406 << 16));
    // 0x119928: 0x35efcbe3  ori         $t7, $t7, 0xCBE3
    ctx->pc = 0x119928u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)52195);
    // 0x11992c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11992cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119930: 0x15e0003d  bnez        $t7, . + 4 + (0x3D << 2)
    ctx->pc = 0x119930u;
    {
        const bool branch_taken_0x119930 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119930u;
        // 0x119934: 0x3c0f4349  lui         $t7, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119930) {
            ctx->pc = 0x119A28u;
            goto label_119a28;
        }
    }
    ctx->pc = 0x119938u;
    // 0x119938: 0x1a40001e  blez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x119938u;
    {
        const bool branch_taken_0x119938 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119938u;
        // 0x11993c: 0x3c0e3fc9  lui         $t6, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119938) {
            ctx->pc = 0x1199B4u;
            goto label_1199b4;
        }
    }
    ctx->pc = 0x119940u;
    // 0x119940: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x119940u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119944: 0x25adafa8  addiu       $t5, $t5, -0x5058
    ctx->pc = 0x119944u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294946728));
    // 0x119948: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x11994c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119950: 0x20f7824  and         $t7, $s0, $t7
    ctx->pc = 0x119950u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x119954: 0x35ce0fd0  ori         $t6, $t6, 0xFD0
    ctx->pc = 0x119954u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4048);
    // 0x119958: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x119958u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11995c: 0x11ee000c  beq         $t7, $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x11995Cu;
    {
        const bool branch_taken_0x11995c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x119960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11995Cu;
        // 0x119960: 0x440d0800  mfc1        $t5, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11995c) {
            ctx->pc = 0x119990u;
            goto label_119990;
        }
    }
    ctx->pc = 0x119964u;
    // 0x119964: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119964u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119968: 0x25ceafac  addiu       $t6, $t6, -0x5054
    ctx->pc = 0x119968u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946732));
    // 0x11996c: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x11996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_119970:
    // 0x119970: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x119970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x119974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119978: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x119978u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11997c: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x11997cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x119980: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x119980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x119984: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x119984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_119988:
    // 0x119988: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x119988u;
    {
        const bool branch_taken_0x119988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119988u;
        // 0x11998c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119988) {
            ctx->pc = 0x11990Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11990c;
        }
    }
    ctx->pc = 0x119990u;
label_119990:
    // 0x119990: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119994: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119994u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119998: 0x25efafb4  addiu       $t7, $t7, -0x504C
    ctx->pc = 0x119998u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946740));
    // 0x11999c: 0x25ceafb0  addiu       $t6, $t6, -0x5050
    ctx->pc = 0x11999cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946736));
    // 0x1199a0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1199a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1199a4: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x1199a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1199a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1199a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1199ac: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1199ACu;
    {
        const bool branch_taken_0x1199ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ACu;
        // 0x1199b0: 0x440d0800  mfc1        $t5, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199ac) {
            ctx->pc = 0x119970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119970;
        }
    }
    ctx->pc = 0x1199B4u;
label_1199b4:
    // 0x1199b4: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x1199b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x1199b8: 0x25adafa8  addiu       $t5, $t5, -0x5058
    ctx->pc = 0x1199b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294946728));
    // 0x1199bc: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1199c0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x1199c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1199c4: 0x20f7824  and         $t7, $s0, $t7
    ctx->pc = 0x1199c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x1199c8: 0x35ce0fd0  ori         $t6, $t6, 0xFD0
    ctx->pc = 0x1199c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4048);
    // 0x1199cc: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x1199ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1199d0: 0x11ee000b  beq         $t7, $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x1199D0u;
    {
        const bool branch_taken_0x1199d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x1199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D0u;
        // 0x1199d4: 0x440d0800  mfc1        $t5, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d0) {
            ctx->pc = 0x119A00u;
            goto label_119a00;
        }
    }
    ctx->pc = 0x1199D8u;
    // 0x1199d8: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x1199d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x1199dc: 0x25ceafac  addiu       $t6, $t6, -0x5054
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946732));
    // 0x1199e0: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x1199e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1199e4:
    // 0x1199e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1199e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1199e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1199e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1199ec: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x1199ecu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1199f0: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x1199f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1199f4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1199f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1199f8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1199F8u;
    {
        const bool branch_taken_0x1199f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199F8u;
        // 0x1199fc: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199f8) {
            ctx->pc = 0x119988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119988;
        }
    }
    ctx->pc = 0x119A00u;
label_119a00:
    // 0x119a00: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119a04: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119a04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119a08: 0x25efafb4  addiu       $t7, $t7, -0x504C
    ctx->pc = 0x119a08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946740));
    // 0x119a0c: 0x25ceafb0  addiu       $t6, $t6, -0x5050
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946736));
    // 0x119a10: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119a14: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x119a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119a18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x119a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x119a1c: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x119A1Cu;
    {
        const bool branch_taken_0x119a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A1Cu;
        // 0x119a20: 0x440d0800  mfc1        $t5, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a1c) {
            ctx->pc = 0x1199E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199e4;
        }
    }
    ctx->pc = 0x119A24u;
    // 0x119a24: 0x0  nop
    ctx->pc = 0x119a24u;
    // NOP
label_119a28:
    // 0x119a28: 0x35ef0f80  ori         $t7, $t7, 0xF80
    ctx->pc = 0x119a28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)3968);
    // 0x119a2c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x119a2cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119a30: 0x15e0005d  bnez        $t7, . + 4 + (0x5D << 2)
    ctx->pc = 0x119A30u;
    {
        const bool branch_taken_0x119a30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A30u;
        // 0x119a34: 0x3c0e003e  lui         $t6, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a30) {
            ctx->pc = 0x119BA8u;
            goto label_119ba8;
        }
    }
    ctx->pc = 0x119A38u;
    // 0x119a38: 0xc046af4  jal         func_11ABD0
    ctx->pc = 0x119A38u;
    SET_GPR_U32(ctx, 31, 0x119A40u);
    ctx->pc = 0x11ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ABD0u, 0x119A38u, 0x119A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A40u;
label_119a40:
    // 0x119a40: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x119a40u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x119a44: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x119a44u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119a48: 0x25adafb8  addiu       $t5, $t5, -0x5048
    ctx->pc = 0x119a48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294946744));
    // 0x119a4c: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119a50: 0x25ceafbc  addiu       $t6, $t6, -0x5044
    ctx->pc = 0x119a50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946748));
    // 0x119a54: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119a58: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x119a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119a5c: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119a60: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x119a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x119a64: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x119a64u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119a68: 0x25adafa8  addiu       $t5, $t5, -0x5058
    ctx->pc = 0x119a68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294946728));
    // 0x119a6c: 0x25ceafac  addiu       $t6, $t6, -0x5054
    ctx->pc = 0x119a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946732));
    // 0x119a70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119a74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119a78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x119a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x119a7c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x119a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119a80: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x119a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119a84: 0x284f0020  slti        $t7, $v0, 0x20
    ctx->pc = 0x119a84u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x119a88: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119a8c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x119a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x119a90: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x119a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x119a94: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x119a94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x119a98: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x119A98u;
    {
        const bool branch_taken_0x119a98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A98u;
        // 0x119a9c: 0x46002141  sub.s       $f5, $f4, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a98) {
            ctx->pc = 0x119AF0u;
            goto label_119af0;
        }
    }
    ctx->pc = 0x119AA0u;
    // 0x119aa0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119aa4: 0x26880  sll         $t5, $v0, 2
    ctx->pc = 0x119aa4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119aa8: 0x25efaf00  addiu       $t7, $t7, -0x5100
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946560));
    // 0x119aac: 0x240eff00  addiu       $t6, $zero, -0x100
    ctx->pc = 0x119aacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x119ab0: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x119ab0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x119ab4: 0x20e7024  and         $t6, $s0, $t6
    ctx->pc = 0x119ab4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x119ab8: 0x8daffffc  lw          $t7, -0x4($t5)
    ctx->pc = 0x119ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294967292)));
    // 0x119abc: 0x11cf000d  beq         $t6, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x119ABCu;
    {
        const bool branch_taken_0x119abc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x119AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119ABCu;
        // 0x119ac0: 0x46032801  sub.s       $f0, $f5, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119abc) {
            ctx->pc = 0x119AF4u;
            goto label_119af4;
        }
    }
    ctx->pc = 0x119AC4u;
    // 0x119ac4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x119ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_119ac8:
    // 0x119ac8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x119ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119acc: 0x46012801  sub.s       $f0, $f5, $f1
    ctx->pc = 0x119accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x119ad0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x119ad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x119ad4: 0x641ff8d  bgez        $s2, . + 4 + (-0x73 << 2)
    ctx->pc = 0x119AD4u;
    {
        const bool branch_taken_0x119ad4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x119AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AD4u;
        // 0x119ad8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ad4) {
            ctx->pc = 0x11990Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11990c;
        }
    }
    ctx->pc = 0x119ADCu;
    // 0x119adc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x119adcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x119ae0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x119ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_119ae4:
    // 0x119ae4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x119ae4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x119ae8: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
    ctx->pc = 0x119AE8u;
    {
        const bool branch_taken_0x119ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AE8u;
        // 0x119aec: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ae8) {
            ctx->pc = 0x119988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119988;
        }
    }
    ctx->pc = 0x119AF0u;
label_119af0:
    // 0x119af0: 0x46032801  sub.s       $f0, $f5, $f3
    ctx->pc = 0x119af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_119af4:
    // 0x119af4: 0x106dc3  sra         $t5, $s0, 23
    ctx->pc = 0x119af4u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 16), 23));
    // 0x119af8: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x119af8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x119afc: 0xf7dc2  srl         $t7, $t7, 23
    ctx->pc = 0x119afcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x119b00: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x119b00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x119b04: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x119b04u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x119b08: 0x29ce0009  slti        $t6, $t6, 0x9
    ctx->pc = 0x119b08u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x119b0c: 0x15c0ffee  bnez        $t6, . + 4 + (-0x12 << 2)
    ctx->pc = 0x119B0Cu;
    {
        const bool branch_taken_0x119b0c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x119B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B0Cu;
        // 0x119b10: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b0c) {
            ctx->pc = 0x119AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119ac8;
        }
    }
    ctx->pc = 0x119B14u;
    // 0x119b14: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119b14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119b18: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x119b18u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x119b1c: 0x25efafb4  addiu       $t7, $t7, -0x504C
    ctx->pc = 0x119b1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946740));
    // 0x119b20: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x119b20u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x119b24: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119b28: 0x25ceafb0  addiu       $t6, $t6, -0x5050
    ctx->pc = 0x119b28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946736));
    // 0x119b2c: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x119b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119b30: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x119b30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x119b34: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x119b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x119b38: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x119b38u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x119b3c: 0x46052001  sub.s       $f0, $f4, $f5
    ctx->pc = 0x119b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x119b40: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x119b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x119b44: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x119b44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x119b48: 0x46032881  sub.s       $f2, $f5, $f3
    ctx->pc = 0x119b48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x119b4c: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x119b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x119b50: 0xf7dc2  srl         $t7, $t7, 23
    ctx->pc = 0x119b50u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x119b54: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x119b54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x119b58: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x119b58u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x119b5c: 0x29ce001a  slti        $t6, $t6, 0x1A
    ctx->pc = 0x119b5cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x119b60: 0x15c0ffd9  bnez        $t6, . + 4 + (-0x27 << 2)
    ctx->pc = 0x119B60u;
    {
        const bool branch_taken_0x119b60 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x119B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B60u;
        // 0x119b64: 0xe6220000  swc1        $f2, 0x0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b60) {
            ctx->pc = 0x119AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119ac8;
        }
    }
    ctx->pc = 0x119B68u;
    // 0x119b68: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119b6c: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x119b6cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x119b70: 0x25efafc0  addiu       $t7, $t7, -0x5040
    ctx->pc = 0x119b70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946752));
    // 0x119b74: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x119b74u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119b78: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119b7c: 0x25adafc4  addiu       $t5, $t5, -0x503C
    ctx->pc = 0x119b7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294946756));
    // 0x119b80: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x119b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119b84: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x119b84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x119b88: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x119b88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x119b8c: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x119b8cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x119b90: 0x46052001  sub.s       $f0, $f4, $f5
    ctx->pc = 0x119b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x119b94: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x119b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x119b98: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x119b98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x119b9c: 0x46032841  sub.s       $f1, $f5, $f3
    ctx->pc = 0x119b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x119ba0: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x119BA0u;
    {
        const bool branch_taken_0x119ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BA0u;
        // 0x119ba4: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ba0) {
            ctx->pc = 0x119AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119ac8;
        }
    }
    ctx->pc = 0x119BA8u;
label_119ba8:
    // 0x119ba8: 0x107dc3  sra         $t7, $s0, 23
    ctx->pc = 0x119ba8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 16), 23));
    // 0x119bac: 0x25ceafc8  addiu       $t6, $t6, -0x5038
    ctx->pc = 0x119bacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946760));
    // 0x119bb0: 0x25e6ff7a  addiu       $a2, $t7, -0x86
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967162));
    // 0x119bb4: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x119bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119bb8: 0x67dc0  sll         $t7, $a2, 23
    ctx->pc = 0x119bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x119bbc: 0x3a0602d  daddu       $t4, $sp, $zero
    ctx->pc = 0x119bbcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bc0: 0x20f6823  subu        $t5, $s0, $t7
    ctx->pc = 0x119bc0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x119bc4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x119bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_119bc8:
    // 0x119bc8: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x119bc8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119bcc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x119bd0: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x119bd0u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x119bd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x119bd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x119bd8: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x119bd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x119bdc: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x119bdcu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119be0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x119be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x119be4: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x119be4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x119be8: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x119be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x119bec: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x119becu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x119bf0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x119bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x119bf4: 0x5c1fff4  bgez        $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x119BF4u;
    {
        const bool branch_taken_0x119bf4 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x119BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BF4u;
        // 0x119bf8: 0x440d0800  mfc1        $t5, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bf4) {
            ctx->pc = 0x119BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119bc8;
        }
    }
    ctx->pc = 0x119BFCu;
    // 0x119bfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x119bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119c00: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x119c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x119c04: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x119c04u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119c08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x119c08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119c0c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x119C0Cu;
    {
        const bool branch_taken_0x119c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C0Cu;
        // 0x119c10: 0xafad0008  sw          $t5, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c0c) {
            ctx->pc = 0x119C2Cu;
            goto label_119c2c;
        }
    }
    ctx->pc = 0x119C14u;
    // 0x119c14: 0x27af0008  addiu       $t7, $sp, 0x8
    ctx->pc = 0x119c14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_119c18:
    // 0x119c18: 0x25effffc  addiu       $t7, $t7, -0x4
    ctx->pc = 0x119c18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
    // 0x119c1c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119c20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x119c20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119c24: 0x4501fffc  bc1t        . + 4 + (-0x4 << 2)
    ctx->pc = 0x119C24u;
    {
        const bool branch_taken_0x119c24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x119C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C24u;
        // 0x119c28: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c24) {
            ctx->pc = 0x119C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119c18;
        }
    }
    ctx->pc = 0x119C2Cu;
label_119c2c:
    // 0x119c2c: 0x3c09003e  lui         $t1, 0x3E
    ctx->pc = 0x119c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)62 << 16));
    // 0x119c30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c34: 0x2529abe8  addiu       $t1, $t1, -0x5418
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945768));
    // 0x119c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c3c: 0xc0467a4  jal         func_119E90
    ctx->pc = 0x119C3Cu;
    SET_GPR_U32(ctx, 31, 0x119C44u);
    ctx->pc = 0x119C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C3Cu;
    // 0x119c40: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119E90u, 0x119C3Cu, 0x119C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C44u;
label_119c44:
    // 0x119c44: 0x641ff32  bgez        $s2, . + 4 + (-0xCE << 2)
    ctx->pc = 0x119C44u;
    {
        const bool branch_taken_0x119c44 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x119C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C44u;
        // 0x119c48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c44) {
            ctx->pc = 0x119910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119910;
        }
    }
    ctx->pc = 0x119C4Cu;
    // 0x119c4c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x119c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119c50: 0x21023  negu        $v0, $v0
    ctx->pc = 0x119c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x119c54: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x119c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119c58: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x119C58u;
    {
        const bool branch_taken_0x119c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C58u;
        // 0x119c5c: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c58) {
            ctx->pc = 0x119AE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119ae4;
        }
    }
    ctx->pc = 0x119C60u;
label_119c60:
    // 0x119c60: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x119c64: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x119c64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x119c68: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119c68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x119c6c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x119c6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x119c70: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x119c70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x119c74: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x119c74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x119c78: 0x18f782b  sltu        $t7, $t4, $t7
    ctx->pc = 0x119c78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x119c7c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x119C7Cu;
    {
        const bool branch_taken_0x119c7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C7Cu;
        // 0x119c80: 0x440d6000  mfc1        $t5, $f12 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c7c) {
            ctx->pc = 0x119CA0u;
            goto label_119ca0;
        }
    }
    ctx->pc = 0x119C84u;
    // 0x119c84: 0x5c30008  bgezl       $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x119C84u;
    {
        const bool branch_taken_0x119c84 = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x119c84) {
            ctx->pc = 0x119C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119C84u;
            // 0x119c88: 0xe4dc3  sra         $t1, $t6, 23 (Delay Slot)
            SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119CA8u;
            goto label_119ca8;
        }
    }
    ctx->pc = 0x119C8Cu;
    // 0x119c8c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x119c8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x119c90: 0x0  nop
    ctx->pc = 0x119c90u;
    // NOP
    // 0x119c94: 0x0  nop
    ctx->pc = 0x119c94u;
    // NOP
    // 0x119c98: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x119c98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x119c9c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x119c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
label_119ca0:
    // 0x119ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x119CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CA0u;
        // 0x119ca4: 0x448d0000  mtc1        $t5, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119CA8u;
label_119ca8:
    // 0x119ca8: 0x2529ff81  addiu       $t1, $t1, -0x7F
    ctx->pc = 0x119ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x119cac: 0x1cc7824  and         $t7, $t6, $t4
    ctx->pc = 0x119cacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x119cb0: 0x312d0001  andi        $t5, $t1, 0x1
    ctx->pc = 0x119cb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x119cb4: 0x3c0e0080  lui         $t6, 0x80
    ctx->pc = 0x119cb4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)128 << 16));
    // 0x119cb8: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x119cb8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x119cbc: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x119cbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x119cc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x119cc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cc4: 0x1ae7004  sllv        $t6, $t6, $t5
    ctx->pc = 0x119cc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x119cc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x119cc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ccc: 0xe7040  sll         $t6, $t6, 1
    ctx->pc = 0x119cccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x119cd0: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_119cd4:
    // 0x119cd4: 0x16c6821  addu        $t5, $t3, $t4
    ctx->pc = 0x119cd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x119cd8: 0x1cd782a  slt         $t7, $t6, $t5
    ctx->pc = 0x119cd8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x119cdc: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119CDCu;
    {
        const bool branch_taken_0x119cdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x119cdc) {
            ctx->pc = 0x119CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119CDCu;
            // 0x119ce0: 0xc6042  srl         $t4, $t4, 1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119CF4u;
            goto label_119cf4;
        }
    }
    ctx->pc = 0x119CE4u;
    // 0x119ce4: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x119ce4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x119ce8: 0x1ac5821  addu        $t3, $t5, $t4
    ctx->pc = 0x119ce8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x119cec: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x119cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x119cf0: 0xc6042  srl         $t4, $t4, 1
    ctx->pc = 0x119cf0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_119cf4:
    // 0x119cf4: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119CF4u;
    {
        const bool branch_taken_0x119cf4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x119CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CF4u;
        // 0x119cf8: 0xe7040  sll         $t6, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cf4) {
            ctx->pc = 0x119CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119cd4;
        }
    }
    ctx->pc = 0x119CFCu;
    // 0x119cfc: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x119CFCu;
    {
        const bool branch_taken_0x119cfc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CFCu;
        // 0x119d00: 0xa7843  sra         $t7, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cfc) {
            ctx->pc = 0x119D28u;
            goto label_119d28;
        }
    }
    ctx->pc = 0x119D04u;
    // 0x119d04: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119d04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119d08: 0x25efafd8  addiu       $t7, $t7, -0x5028
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946776));
    // 0x119d0c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119d10: 0x46000036  c.le.s      $f0, $f0
    ctx->pc = 0x119d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119d14: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x119D14u;
    {
        const bool branch_taken_0x119d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119d14) {
            ctx->pc = 0x119D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119D14u;
            // 0x119d18: 0xa7843  sra         $t7, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119D28u;
            goto label_119d28;
        }
    }
    ctx->pc = 0x119D1Cu;
    // 0x119d1c: 0x314f0001  andi        $t7, $t2, 0x1
    ctx->pc = 0x119d1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x119d20: 0x14f5021  addu        $t2, $t2, $t7
    ctx->pc = 0x119d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x119d24: 0xa7843  sra         $t7, $t2, 1
    ctx->pc = 0x119d24u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 10), 1));
label_119d28:
    // 0x119d28: 0x3c0e3f00  lui         $t6, 0x3F00
    ctx->pc = 0x119d28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16128 << 16));
    // 0x119d2c: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x119d2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x119d30: 0x96dc0  sll         $t5, $t1, 23
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x119d34: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x119D34u;
    {
        const bool branch_taken_0x119d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D34u;
        // 0x119d38: 0x1cd6821  addu        $t5, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d34) {
            ctx->pc = 0x119CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119ca0;
        }
    }
    ctx->pc = 0x119D3Cu;
    // 0x119d3c: 0x0  nop
    ctx->pc = 0x119d3cu;
    // NOP
}
