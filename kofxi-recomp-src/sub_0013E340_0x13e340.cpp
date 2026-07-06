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

// Function: sub_0013E340
// Address: 0x13e340 - 0x13e440
void sub_0013E340_0x13e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E340_0x13e340");
#endif

    switch (ctx->pc) {
        case 0x13e3dcu: goto label_13e3dc;
        case 0x13e3f8u: goto label_13e3f8;
        default: break;
    }

    ctx->pc = 0x13e340u;

    // 0x13e340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e344: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13e344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13e348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e34c: 0x2463c970  addiu       $v1, $v1, -0x3690
    ctx->pc = 0x13e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953328));
    // 0x13e350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13e354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e358: 0x90840204  lbu         $a0, 0x204($a0)
    ctx->pc = 0x13e358u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x13e35c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e360: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13e360u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e364: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13E364u;
    {
        const bool branch_taken_0x13e364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e364) {
            ctx->pc = 0x13E368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E364u;
            // 0x13e368: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E3C0u;
            goto label_13e3c0;
        }
    }
    ctx->pc = 0x13E36Cu;
    // 0x13e36c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e370: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E370u;
    {
        const bool branch_taken_0x13e370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e370) {
            ctx->pc = 0x13E374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E370u;
            // 0x13e374: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E3ACu;
            goto label_13e3ac;
        }
    }
    ctx->pc = 0x13E378u;
    // 0x13e378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e37c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E37Cu;
    {
        const bool branch_taken_0x13e37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e37c) {
            ctx->pc = 0x13E380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E37Cu;
            // 0x13e380: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E38Cu;
            goto label_13e38c;
        }
    }
    ctx->pc = 0x13E384u;
    // 0x13e384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E384u;
    {
        const bool branch_taken_0x13e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e384) {
            ctx->pc = 0x13E3A8u;
            goto label_13e3a8;
        }
    }
    ctx->pc = 0x13E38Cu;
label_13e38c:
    // 0x13e38c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x13e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13e390: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x13e390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x13e394: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x13e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x13e398: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x13e398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x13e39c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x13e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x13e3a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13E3A0u;
    {
        const bool branch_taken_0x13e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3A0u;
        // 0x13e3a4: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3a0) {
            ctx->pc = 0x13E3D4u;
            goto label_13e3d4;
        }
    }
    ctx->pc = 0x13E3A8u;
label_13e3a8:
    // 0x13e3a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x13e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_13e3ac:
    // 0x13e3ac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x13e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x13e3b0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x13e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x13e3b4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x13e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x13e3b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E3B8u;
    {
        const bool branch_taken_0x13e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3B8u;
        // 0x13e3bc: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3b8) {
            ctx->pc = 0x13E3D4u;
            goto label_13e3d4;
        }
    }
    ctx->pc = 0x13E3C0u;
label_13e3c0:
    // 0x13e3c0: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x13e3c4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x13e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x13e3c8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x13e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x13e3cc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x13e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x13e3d0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x13e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_13e3d4:
    // 0x13e3d4: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13E3D4u;
    SET_GPR_U32(ctx, 31, 0x13E3DCu);
    ctx->pc = 0x13E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3D4u;
    // 0x13e3d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x13E3D4u, 0x13E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3DCu;
label_13e3dc:
    // 0x13e3dc: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x13e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x13e3e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13e3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e3e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13e3ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13e3ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13e3f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e3f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13e3f4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13e3f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_13e3f8:
    // 0x13e3f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e3fc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13e400: 0x204082a  slt         $at, $s0, $a0
    ctx->pc = 0x13e400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e404: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E404u;
    {
        const bool branch_taken_0x13e404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e404) {
            ctx->pc = 0x13E420u;
            goto label_13e420;
        }
    }
    ctx->pc = 0x13E40Cu;
    // 0x13e40c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e410: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x13e410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13e414: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13E414u;
    {
        const bool branch_taken_0x13e414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E414u;
        // 0x13e418: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e414) {
            ctx->pc = 0x13E3F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13e3f8;
        }
    }
    ctx->pc = 0x13E41Cu;
    // 0x13e41c: 0x0  nop
    ctx->pc = 0x13e41cu;
    // NOP
label_13e420:
    // 0x13e420: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x13e420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13e424: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E424u;
    {
        const bool branch_taken_0x13e424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e424) {
            ctx->pc = 0x13E428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E424u;
            // 0x13e428: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E434u;
            goto label_13e434;
        }
    }
    ctx->pc = 0x13E42Cu;
    // 0x13e42c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e434:
    // 0x13e434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e438: 0x3e00008  jr          $ra
    ctx->pc = 0x13E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E438u;
        // 0x13e43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E440u;
}
