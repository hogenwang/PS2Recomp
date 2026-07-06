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

// Function: sub_002052E0
// Address: 0x2052e0 - 0x205390
void sub_002052E0_0x2052e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002052E0_0x2052e0");
#endif

    switch (ctx->pc) {
        case 0x2052f4u: goto label_2052f4;
        case 0x205320u: goto label_205320;
        case 0x20535cu: goto label_20535c;
        default: break;
    }

    ctx->pc = 0x2052e0u;

    // 0x2052e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2052e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2052e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2052e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2052e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2052e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2052ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2052ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2052f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2052f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2052f4:
    // 0x2052f4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2052f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2052f8: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2052f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2052fc: 0x8c459bf8  lw          $a1, -0x6408($v0)
    ctx->pc = 0x2052fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205300: 0x90a30065  lbu         $v1, 0x65($a1)
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 101)));
    // 0x205304: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x205304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x205308: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x205308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20530c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20530cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x205310: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x205310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205314: 0x90450524  lbu         $a1, 0x524($v0)
    ctx->pc = 0x205314u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x205318: 0xc080e9c  jal         func_203A70
    ctx->pc = 0x205318u;
    SET_GPR_U32(ctx, 31, 0x205320u);
    ctx->pc = 0x20531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205318u;
    // 0x20531c: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A70u, 0x205318u, 0x205320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205320u;
label_205320:
    // 0x205320: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x205320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x205324: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x205324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x205328: 0x8c63b7d0  lw          $v1, -0x4830($v1)
    ctx->pc = 0x205328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948816)));
    // 0x20532c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20532cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x205330: 0x8c449bf8  lw          $a0, -0x6408($v0)
    ctx->pc = 0x205330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x205334: 0x34210400  ori         $at, $at, 0x400
    ctx->pc = 0x205334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1024);
    // 0x205338: 0x618021  addu        $s0, $v1, $at
    ctx->pc = 0x205338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x20533c: 0x90830065  lbu         $v1, 0x65($a0)
    ctx->pc = 0x20533cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
    // 0x205340: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x205340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x205344: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x205344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x205348: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x205348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20534c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205350: 0x90440524  lbu         $a0, 0x524($v0)
    ctx->pc = 0x205350u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1316)));
    // 0x205354: 0xc08144c  jal         func_205130
    ctx->pc = 0x205354u;
    SET_GPR_U32(ctx, 31, 0x20535Cu);
    ctx->pc = 0x205358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205354u;
    // 0x205358: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205130u, 0x205354u, 0x20535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20535Cu;
label_20535c:
    // 0x20535c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205360: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x205364: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x205368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20536c: 0x2a23000f  slti        $v1, $s1, 0xF
    ctx->pc = 0x20536cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x205370: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x205370u;
    {
        const bool branch_taken_0x205370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205370u;
        // 0x205374: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205370) {
            ctx->pc = 0x2052F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2052f4;
        }
    }
    ctx->pc = 0x205378u;
    // 0x205378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20537c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20537cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205384: 0x3e00008  jr          $ra
    ctx->pc = 0x205384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205384u;
        // 0x205388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20538Cu;
    // 0x20538c: 0x0  nop
    ctx->pc = 0x20538cu;
    // NOP
}
