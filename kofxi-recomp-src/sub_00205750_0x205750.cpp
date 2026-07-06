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

// Function: sub_00205750
// Address: 0x205750 - 0x2057c0
void sub_00205750_0x205750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205750_0x205750");
#endif

    switch (ctx->pc) {
        case 0x20576cu: goto label_20576c;
        case 0x205780u: goto label_205780;
        case 0x205798u: goto label_205798;
        default: break;
    }

    ctx->pc = 0x205750u;

    // 0x205750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x205754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20575c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205764: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205768: 0x27a4003f  addiu       $a0, $sp, 0x3F
    ctx->pc = 0x205768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
label_20576c:
    // 0x20576c: 0x27a5003e  addiu       $a1, $sp, 0x3E
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 62));
    // 0x205770: 0x27a6003d  addiu       $a2, $sp, 0x3D
    ctx->pc = 0x205770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 61));
    // 0x205774: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x205774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205778: 0xc080e78  jal         func_2039E0
    ctx->pc = 0x205778u;
    SET_GPR_U32(ctx, 31, 0x205780u);
    ctx->pc = 0x20577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205778u;
    // 0x20577c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2039E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2039E0u, 0x205778u, 0x205780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205780u;
label_205780:
    // 0x205780: 0x93a4003f  lbu         $a0, 0x3F($sp)
    ctx->pc = 0x205780u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x205784: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x205784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205788: 0x93a5003e  lbu         $a1, 0x3E($sp)
    ctx->pc = 0x205788u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x20578c: 0x93a6003d  lbu         $a2, 0x3D($sp)
    ctx->pc = 0x20578cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x205790: 0xc080ee8  jal         func_203BA0
    ctx->pc = 0x205790u;
    SET_GPR_U32(ctx, 31, 0x205798u);
    ctx->pc = 0x205794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205790u;
    // 0x205794: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203BA0u, 0x205790u, 0x205798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205798u;
label_205798:
    // 0x205798: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20579c: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x20579cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2057a0: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2057A0u;
    {
        const bool branch_taken_0x2057a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2057a0) {
            ctx->pc = 0x2057A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2057A0u;
            // 0x2057a4: 0x27a4003f  addiu       $a0, $sp, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20576Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20576c;
        }
    }
    ctx->pc = 0x2057A8u;
    // 0x2057a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2057a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2057ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2057acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2057b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2057b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2057b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2057B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2057B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B4u;
        // 0x2057b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2057BCu;
    // 0x2057bc: 0x0  nop
    ctx->pc = 0x2057bcu;
    // NOP
    if (ctx->pc == 0x2057bcu) { ctx->pc = 0x2057c0u; }
}
