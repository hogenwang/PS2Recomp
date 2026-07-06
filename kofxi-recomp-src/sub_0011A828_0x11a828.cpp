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

// Function: sub_0011A828
// Address: 0x11a828 - 0x11aaf8
void sub_0011A828_0x11a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A828_0x11a828");
#endif

    switch (ctx->pc) {
        case 0x11a878u: goto label_11a878;
        case 0x11a8e0u: goto label_11a8e0;
        case 0x11a8e4u: goto label_11a8e4;
        case 0x11aa20u: goto label_11aa20;
        case 0x11aa70u: goto label_11aa70;
        default: break;
    }

    ctx->pc = 0x11a828u;

    // 0x11a828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a82c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a830: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11a830u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11a834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a838: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11a838u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11a83c: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x11a83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11a840: 0x3c0f507f  lui         $t7, 0x507F
    ctx->pc = 0x11a840u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)20607 << 16));
    // 0x11a844: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a844u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a84c: 0x22e8024  and         $s0, $s1, $t6
    ctx->pc = 0x11a84cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 14));
    // 0x11a850: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a850u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a854: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11A854u;
    {
        const bool branch_taken_0x11a854 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A854u;
        // 0x11a858: 0x46006186  mov.s       $f6, $f12 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a854) {
            ctx->pc = 0x11A890u;
            goto label_11a890;
        }
    }
    ctx->pc = 0x11A85Cu;
    // 0x11a85c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a860: 0x25efb11c  addiu       $t7, $t7, -0x4EE4
    ctx->pc = 0x11a860u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947100));
    // 0x11a864: 0x1e200004  bgtz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A864u;
    {
        const bool branch_taken_0x11a864 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x11A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A864u;
        // 0x11a868: 0xc5e40000  lwc1        $f4, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a864) {
            ctx->pc = 0x11A878u;
            goto label_11a878;
        }
    }
    ctx->pc = 0x11A86Cu;
    // 0x11a86c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a86cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a870: 0x25efb120  addiu       $t7, $t7, -0x4EE0
    ctx->pc = 0x11a870u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947104));
    // 0x11a874: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x11a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11a878:
    // 0x11a878: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x11a878u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x11a87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a888: 0x3e00008  jr          $ra
    ctx->pc = 0x11A888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A888u;
        // 0x11a88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A890u;
label_11a890:
    // 0x11a890: 0x3c0f3edf  lui         $t7, 0x3EDF
    ctx->pc = 0x11a890u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16095 << 16));
    // 0x11a894: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a894u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a898: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a898u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a89c: 0x15e0005e  bnez        $t7, . + 4 + (0x5E << 2)
    ctx->pc = 0x11A89Cu;
    {
        const bool branch_taken_0x11a89c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A89Cu;
        // 0x11a8a0: 0x3c0f30ff  lui         $t7, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a89c) {
            ctx->pc = 0x11AA18u;
            goto label_11aa18;
        }
    }
    ctx->pc = 0x11A8A4u;
    // 0x11a8a4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a8a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a8a8: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a8a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a8ac: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11A8ACu;
    {
        const bool branch_taken_0x11a8ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8ACu;
        // 0x11a8b0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8ac) {
            ctx->pc = 0x11A8E0u;
            goto label_11a8e0;
        }
    }
    ctx->pc = 0x11A8B4u;
    // 0x11a8b4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a8b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a8b8: 0x25efb124  addiu       $t7, $t7, -0x4EDC
    ctx->pc = 0x11a8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947108));
    // 0x11a8bc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a8c0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a8c4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11a8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11a8c8: 0x25efb128  addiu       $t7, $t7, -0x4ED8
    ctx->pc = 0x11a8c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947112));
    // 0x11a8cc: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a8d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11a8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11a8d4: 0x4501ffe8  bc1t        . + 4 + (-0x18 << 2)
    ctx->pc = 0x11A8D4u;
    {
        const bool branch_taken_0x11a8d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D4u;
        // 0x11a8d8: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8d4) {
            ctx->pc = 0x11A878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a878;
        }
    }
    ctx->pc = 0x11A8DCu;
    // 0x11a8dc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11a8dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a8e0:
    // 0x11a8e0: 0x46063142  mul.s       $f5, $f6, $f6
    ctx->pc = 0x11a8e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_11a8e4:
    // 0x11a8e4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a8e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a8e8: 0x25efb138  addiu       $t7, $t7, -0x4EC8
    ctx->pc = 0x11a8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947128));
    // 0x11a8ec: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a8f0: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x11a8f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11a8f4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a8f8: 0x25efb13c  addiu       $t7, $t7, -0x4EC4
    ctx->pc = 0x11a8f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947132));
    // 0x11a8fc: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a900: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a904: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a904u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a908: 0x25efb140  addiu       $t7, $t7, -0x4EC0
    ctx->pc = 0x11a908u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947136));
    // 0x11a90c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11a90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a910: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a914: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a914u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a918: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a91c: 0x25efb144  addiu       $t7, $t7, -0x4EBC
    ctx->pc = 0x11a91cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947140));
    // 0x11a920: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a924: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a928: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a928u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a92c: 0x25efb148  addiu       $t7, $t7, -0x4EB8
    ctx->pc = 0x11a92cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947144));
    // 0x11a930: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a934: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a938: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a938u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a93c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a93cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a940: 0x25efb14c  addiu       $t7, $t7, -0x4EB4
    ctx->pc = 0x11a940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947148));
    // 0x11a944: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11a944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a948: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a94c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a950: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a950u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a954: 0x25efb150  addiu       $t7, $t7, -0x4EB0
    ctx->pc = 0x11a954u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947152));
    // 0x11a958: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a95c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a960: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a960u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a964: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a968: 0x25efb154  addiu       $t7, $t7, -0x4EAC
    ctx->pc = 0x11a968u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947156));
    // 0x11a96c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11a96cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a970: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a974: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a978: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a978u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a97c: 0x25efb158  addiu       $t7, $t7, -0x4EA8
    ctx->pc = 0x11a97cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947160));
    // 0x11a980: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a984: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a988: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a988u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a98c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a990: 0x25efb15c  addiu       $t7, $t7, -0x4EA4
    ctx->pc = 0x11a990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947164));
    // 0x11a994: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11a994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a998: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11a998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11a99c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11a99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11a9a0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a9a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a9a4: 0x25efb160  addiu       $t7, $t7, -0x4EA0
    ctx->pc = 0x11a9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947168));
    // 0x11a9a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11a9a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11a9ac: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a9b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11a9b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11a9b4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11a9b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11a9b8: 0x5c10005  bgez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A9B8u;
    {
        const bool branch_taken_0x11a9b8 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x11A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9B8u;
        // 0x11a9bc: 0x46002802  mul.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9b8) {
            ctx->pc = 0x11A9D0u;
            goto label_11a9d0;
        }
    }
    ctx->pc = 0x11A9C0u;
    // 0x11a9c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11a9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11a9c4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11a9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11a9c8: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x11A9C8u;
    {
        const bool branch_taken_0x11a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9C8u;
        // 0x11a9cc: 0x46003101  sub.s       $f4, $f6, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9c8) {
            ctx->pc = 0x11A878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a878;
        }
    }
    ctx->pc = 0x11A9D0u;
label_11a9d0:
    // 0x11a9d0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11a9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11a9d4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a9d8: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11a9dc: 0x25efb0d8  addiu       $t7, $t7, -0x4F28
    ctx->pc = 0x11a9dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947032));
    // 0x11a9e0: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11a9e4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11a9e8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11a9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11a9ec: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a9f0: 0x25efb0c8  addiu       $t7, $t7, -0x4F38
    ctx->pc = 0x11a9f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947016));
    // 0x11a9f4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11a9f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11a9f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11a9f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11a9fc: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x11a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11aa00: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x11aa00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x11aa04: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11AA04u;
    {
        const bool branch_taken_0x11aa04 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA04u;
        // 0x11aa08: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa04) {
            ctx->pc = 0x11AA10u;
            goto label_11aa10;
        }
    }
    ctx->pc = 0x11AA0Cu;
    // 0x11aa0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11aa0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11aa10:
    // 0x11aa10: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x11AA10u;
    {
        const bool branch_taken_0x11aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA10u;
        // 0x11aa14: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa10) {
            ctx->pc = 0x11A878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a878;
        }
    }
    ctx->pc = 0x11AA18u;
label_11aa18:
    // 0x11aa18: 0xc046af4  jal         func_11ABD0
    ctx->pc = 0x11AA18u;
    SET_GPR_U32(ctx, 31, 0x11AA20u);
    ctx->pc = 0x11ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ABD0u, 0x11AA18u, 0x11AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA20u;
label_11aa20:
    // 0x11aa20: 0x3c0f3f97  lui         $t7, 0x3F97
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16279 << 16));
    // 0x11aa24: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11aa24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11aa28: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11aa28u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11aa2c: 0x15e0001b  bnez        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AA2Cu;
    {
        const bool branch_taken_0x11aa2c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA2Cu;
        // 0x11aa30: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa2c) {
            ctx->pc = 0x11AA9Cu;
            goto label_11aa9c;
        }
    }
    ctx->pc = 0x11AA34u;
    // 0x11aa34: 0x3c0f3f2f  lui         $t7, 0x3F2F
    ctx->pc = 0x11aa34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16175 << 16));
    // 0x11aa38: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11aa38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11aa3c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11aa3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11aa40: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11AA40u;
    {
        const bool branch_taken_0x11aa40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA40u;
        // 0x11aa44: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa40) {
            ctx->pc = 0x11AA84u;
            goto label_11aa84;
        }
    }
    ctx->pc = 0x11AA48u;
    // 0x11aa48: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11aa48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11aa4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11aa4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11aa50: 0x25efb12c  addiu       $t7, $t7, -0x4ED4
    ctx->pc = 0x11aa50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947116));
    // 0x11aa54: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x11aa54u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa58: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11aa5c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11aa5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11aa60: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x11aa60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x11aa64: 0x25efb128  addiu       $t7, $t7, -0x4ED8
    ctx->pc = 0x11aa64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947112));
    // 0x11aa68: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11aa6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11aa6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_11aa70:
    // 0x11aa70: 0x0  nop
    ctx->pc = 0x11aa70u;
    // NOP
    // 0x11aa74: 0x0  nop
    ctx->pc = 0x11aa74u;
    // NOP
    // 0x11aa78: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x11aa78u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[1];
    // 0x11aa7c: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x11AA7Cu;
    {
        const bool branch_taken_0x11aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA7Cu;
        // 0x11aa80: 0x46063142  mul.s       $f5, $f6, $f6 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa7c) {
            ctx->pc = 0x11A8E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a8e4;
        }
    }
    ctx->pc = 0x11AA84u;
label_11aa84:
    // 0x11aa84: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11aa84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aa88: 0x25efb128  addiu       $t7, $t7, -0x4ED8
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947112));
    // 0x11aa8c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aa90: 0x46003040  add.s       $f1, $f6, $f0
    ctx->pc = 0x11aa90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x11aa94: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11AA94u;
    {
        const bool branch_taken_0x11aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA94u;
        // 0x11aa98: 0x46003001  sub.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa94) {
            ctx->pc = 0x11AA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11aa70;
        }
    }
    ctx->pc = 0x11AA9Cu;
label_11aa9c:
    // 0x11aa9c: 0x3c0f401b  lui         $t7, 0x401B
    ctx->pc = 0x11aa9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16411 << 16));
    // 0x11aaa0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11aaa0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11aaa4: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11aaa4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11aaa8: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11AAA8u;
    {
        const bool branch_taken_0x11aaa8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAA8u;
        // 0x11aaac: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaa8) {
            ctx->pc = 0x11AADCu;
            goto label_11aadc;
        }
    }
    ctx->pc = 0x11AAB0u;
    // 0x11aab0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11aab0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11aab4: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x11aab4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11aab8: 0x25efb130  addiu       $t7, $t7, -0x4ED0
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947120));
    // 0x11aabc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aac0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11aac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11aac4: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x11aac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11aac8: 0x25efb128  addiu       $t7, $t7, -0x4ED8
    ctx->pc = 0x11aac8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947112));
    // 0x11aacc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11aad0: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x11aad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x11aad4: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11AAD4u;
    {
        const bool branch_taken_0x11aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAD4u;
        // 0x11aad8: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aad4) {
            ctx->pc = 0x11AA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11aa70;
        }
    }
    ctx->pc = 0x11AADCu;
label_11aadc:
    // 0x11aadc: 0x25efb134  addiu       $t7, $t7, -0x4ECC
    ctx->pc = 0x11aadcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947124));
    // 0x11aae0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11aae4: 0x0  nop
    ctx->pc = 0x11aae4u;
    // NOP
    // 0x11aae8: 0x0  nop
    ctx->pc = 0x11aae8u;
    // NOP
    // 0x11aaec: 0x46060183  div.s       $f6, $f0, $f6
    ctx->pc = 0x11aaecu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[6];
    // 0x11aaf0: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
    ctx->pc = 0x11AAF0u;
    {
        const bool branch_taken_0x11aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAF0u;
        // 0x11aaf4: 0x240e0003  addiu       $t6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaf0) {
            ctx->pc = 0x11A8E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a8e0;
        }
    }
    ctx->pc = 0x11AAF8u;
}
