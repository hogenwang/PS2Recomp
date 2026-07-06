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

// Function: sub_001189E0
// Address: 0x1189e0 - 0x118ae0
void sub_001189E0_0x1189e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001189E0_0x1189e0");
#endif

    switch (ctx->pc) {
        case 0x118a3cu: goto label_118a3c;
        case 0x118a64u: goto label_118a64;
        case 0x118a7cu: goto label_118a7c;
        case 0x118ad0u: goto label_118ad0;
        default: break;
    }

    ctx->pc = 0x1189e0u;

    // 0x1189e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1189e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1189e4: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x1189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x1189e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1189e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1189ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1189ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1189f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1189f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1189f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189f8: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x1189f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1189fc: 0x820019  multu       $a0, $v0
    ctx->pc = 0x1189fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x118a00: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x118a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x118a04: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x118a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x118a08: 0x70008010  mfhi1       $s0
    ctx->pc = 0x118a08u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x118a0c: 0x3012  mflo        $a2
    ctx->pc = 0x118a0cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x118a10: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x118a10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x118a14: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x118a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x118a18: 0x2010  mfhi        $a0
    ctx->pc = 0x118a18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x118a1c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x118a1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x118a20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x118a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x118a24: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x118a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x118a28: 0x70003012  mflo1       $a2
    ctx->pc = 0x118a28u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x118a2c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x118a2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x118a30: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x118a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x118a34: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x118A34u;
    SET_GPR_U32(ctx, 31, 0x118A3Cu);
    ctx->pc = 0x118A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A34u;
    // 0x118a38: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x118A34u, 0x118A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A3Cu;
label_118a3c:
    // 0x118a3c: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x118a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x118a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118a44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118a48: 0x3e00008  jr          $ra
    ctx->pc = 0x118A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A48u;
        // 0x118a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118A50u;
    // 0x118a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118a54: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118A54u;
    {
        const bool branch_taken_0x118a54 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x118A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A54u;
        // 0x118a58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a54) {
            ctx->pc = 0x118A6Cu;
            goto label_118a6c;
        }
    }
    ctx->pc = 0x118A5Cu;
    // 0x118a5c: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x118A5Cu;
    SET_GPR_U32(ctx, 31, 0x118A64u);
    ctx->pc = 0x1202F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202F0u, 0x118A5Cu, 0x118A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A64u;
label_118a64:
    // 0x118a64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118A64u;
    {
        const bool branch_taken_0x118a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A64u;
        // 0x118a68: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a64) {
            ctx->pc = 0x118A80u;
            goto label_118a80;
        }
    }
    ctx->pc = 0x118A6Cu;
label_118a6c:
    // 0x118a6c: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x118a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x118a70: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x118a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x118a74: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x118A74u;
    SET_GPR_U32(ctx, 31, 0x118A7Cu);
    ctx->pc = 0x118A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A74u;
    // 0x118a78: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202F0u, 0x118A74u, 0x118A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A7Cu;
label_118a7c:
    // 0x118a7c: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x118a7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_118a80:
    // 0x118a80: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x118a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x118a84: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x118a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x118a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118a90: 0x0  nop
    ctx->pc = 0x118a90u;
    // NOP
    // 0x118a94: 0x0  nop
    ctx->pc = 0x118a94u;
    // NOP
    // 0x118a98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x118a98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x118a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x118A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A9Cu;
        // 0x118aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118AA4u;
    // 0x118aa4: 0x0  nop
    ctx->pc = 0x118aa4u;
    // NOP
    // 0x118aa8: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x118aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x118aac: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x118aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x118ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118ab4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118abc: 0x0  nop
    ctx->pc = 0x118abcu;
    // NOP
    // 0x118ac0: 0x0  nop
    ctx->pc = 0x118ac0u;
    // NOP
    // 0x118ac4: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x118ac4u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x118ac8: 0xc04814a  jal         func_120528
    ctx->pc = 0x118AC8u;
    SET_GPR_U32(ctx, 31, 0x118AD0u);
    ctx->pc = 0x120528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120528u, 0x118AC8u, 0x118AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AD0u;
label_118ad0:
    // 0x118ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x118AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AD4u;
        // 0x118ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118ADCu;
    // 0x118adc: 0x0  nop
    ctx->pc = 0x118adcu;
    // NOP
}
