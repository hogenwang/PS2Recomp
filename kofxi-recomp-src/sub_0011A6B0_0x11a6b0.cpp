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

// Function: sub_0011A6B0
// Address: 0x11a6b0 - 0x11a7a8
void sub_0011A6B0_0x11a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A6B0_0x11a6b0");
#endif

    ctx->pc = 0x11a6b0u;

    // 0x11a6b0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a6b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11a6b4: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11a6b8: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11a6b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11a6bc: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11a6bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11a6c0: 0x3c0e31ff  lui         $t6, 0x31FF
    ctx->pc = 0x11a6c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)12799 << 16));
    // 0x11a6c4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11a6c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11a6c8: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11a6c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11a6cc: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x11a6ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11a6d0: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11a6d0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11a6d4: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A6D4u;
    {
        const bool branch_taken_0x11a6d4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6D4u;
        // 0x11a6d8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6d4) {
            ctx->pc = 0x11A6E4u;
            goto label_11a6e4;
        }
    }
    ctx->pc = 0x11A6DCu;
    // 0x11a6dc: 0x1180002f  beqz        $t4, . + 4 + (0x2F << 2)
    ctx->pc = 0x11A6DCu;
    {
        const bool branch_taken_0x11a6dc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a6dc) {
            ctx->pc = 0x11A79Cu;
            goto label_11a79c;
        }
    }
    ctx->pc = 0x11A6E4u;
label_11a6e4:
    // 0x11a6e4: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x11a6e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11a6e8: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a6e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a6ec: 0x25efb0a4  addiu       $t7, $t7, -0x4F5C
    ctx->pc = 0x11a6ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946980));
    // 0x11a6f0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a6f4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a6f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a6f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a6fc: 0x25efb0a8  addiu       $t7, $t7, -0x4F58
    ctx->pc = 0x11a6fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946984));
    // 0x11a700: 0x460c10c2  mul.s       $f3, $f2, $f12
    ctx->pc = 0x11a700u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x11a704: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a70c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a70cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a710: 0x25efb0ac  addiu       $t7, $t7, -0x4F54
    ctx->pc = 0x11a710u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946988));
    // 0x11a714: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a718: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a71c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a71cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a724: 0x25efb0b0  addiu       $t7, $t7, -0x4F50
    ctx->pc = 0x11a724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946992));
    // 0x11a728: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a72c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a730: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a730u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a734: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a738: 0x25efb0b4  addiu       $t7, $t7, -0x4F4C
    ctx->pc = 0x11a738u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946996));
    // 0x11a73c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a73cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a740: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a744: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A744u;
    {
        const bool branch_taken_0x11a744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A744u;
        // 0x11a748: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a744) {
            ctx->pc = 0x11A76Cu;
            goto label_11a76c;
        }
    }
    ctx->pc = 0x11A74Cu;
    // 0x11a74c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a750: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a750u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a754: 0x25efb0b8  addiu       $t7, $t7, -0x4F48
    ctx->pc = 0x11a754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947000));
    // 0x11a758: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a75c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11a75cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11a760: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x11a760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x11a764: 0x3e00008  jr          $ra
    ctx->pc = 0x11A764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A764u;
        // 0x11a768: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A76Cu;
label_11a76c:
    // 0x11a76c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a76cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a770: 0x25efb0bc  addiu       $t7, $t7, -0x4F44
    ctx->pc = 0x11a770u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947004));
    // 0x11a774: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a778: 0x4601681a  mula.s      $f13, $f1
    ctx->pc = 0x11a778u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[13], ctx->f[1]));
    // 0x11a77c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11a77cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x11a780: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x11a780u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x11a784: 0x25efb0b8  addiu       $t7, $t7, -0x4F48
    ctx->pc = 0x11a784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294947000));
    // 0x11a788: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a78c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11a78cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11a790: 0x460d0019  suba.s      $f0, $f13
    ctx->pc = 0x11a790u;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[0], ctx->f[13]));
    // 0x11a794: 0x4601181d  msub.s      $f0, $f3, $f1
    ctx->pc = 0x11a794u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x11a798: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11a798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_11a79c:
    // 0x11a79c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A7A4u;
    // 0x11a7a4: 0x0  nop
    ctx->pc = 0x11a7a4u;
    // NOP
}
