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

// Function: sub_00178670
// Address: 0x178670 - 0x1786f0
void sub_00178670_0x178670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178670_0x178670");
#endif

    switch (ctx->pc) {
        case 0x178690u: goto label_178690;
        case 0x1786a4u: goto label_1786a4;
        case 0x1786b8u: goto label_1786b8;
        case 0x1786ccu: goto label_1786cc;
        case 0x1786e0u: goto label_1786e0;
        default: break;
    }

    ctx->pc = 0x178670u;

    // 0x178670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17867c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17867cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x178680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178684: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x178684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x178688: 0xc05e1bc  jal         func_1786F0
    ctx->pc = 0x178688u;
    SET_GPR_U32(ctx, 31, 0x178690u);
    ctx->pc = 0x17868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178688u;
    // 0x17868c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1786F0u, 0x178688u, 0x178690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178690u;
label_178690:
    // 0x178690: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x178690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x178694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17869c: 0xc05e1bc  jal         func_1786F0
    ctx->pc = 0x17869Cu;
    SET_GPR_U32(ctx, 31, 0x1786A4u);
    ctx->pc = 0x1786A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17869Cu;
    // 0x1786a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1786F0u, 0x17869Cu, 0x1786A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786A4u;
label_1786a4:
    // 0x1786a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1786a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1786a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1786a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1786acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1786b0: 0xc05e1bc  jal         func_1786F0
    ctx->pc = 0x1786B0u;
    SET_GPR_U32(ctx, 31, 0x1786B8u);
    ctx->pc = 0x1786B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786B0u;
    // 0x1786b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1786F0u, 0x1786B0u, 0x1786B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786B8u;
label_1786b8:
    // 0x1786b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1786b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1786bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1786bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1786c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1786c4: 0xc05e1bc  jal         func_1786F0
    ctx->pc = 0x1786C4u;
    SET_GPR_U32(ctx, 31, 0x1786CCu);
    ctx->pc = 0x1786C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786C4u;
    // 0x1786c8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1786F0u, 0x1786C4u, 0x1786CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786CCu;
label_1786cc:
    // 0x1786cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1786ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1786d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1786d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1786d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1786d8: 0xc05e1c8  jal         func_178720
    ctx->pc = 0x1786D8u;
    SET_GPR_U32(ctx, 31, 0x1786E0u);
    ctx->pc = 0x1786DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786D8u;
    // 0x1786dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178720u, 0x1786D8u, 0x1786E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786E0u;
label_1786e0:
    // 0x1786e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1786e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1786e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1786e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1786e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1786E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786E8u;
        // 0x1786ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1786E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786F0u;
}
