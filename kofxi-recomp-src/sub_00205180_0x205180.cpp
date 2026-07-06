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

// Function: sub_00205180
// Address: 0x205180 - 0x205210
void sub_00205180_0x205180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205180_0x205180");
#endif

    switch (ctx->pc) {
        case 0x2051b4u: goto label_2051b4;
        case 0x2051c4u: goto label_2051c4;
        case 0x2051d4u: goto label_2051d4;
        default: break;
    }

    ctx->pc = 0x205180u;

    // 0x205180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x205180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x205184: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x205188: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x205188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20518c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x205190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x205190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x205194: 0x34210400  ori         $at, $at, 0x400
    ctx->pc = 0x205194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1024);
    // 0x205198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20519c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2051a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2051a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2051a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2051a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051a8: 0x8c42b7d0  lw          $v0, -0x4830($v0)
    ctx->pc = 0x2051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948816)));
    // 0x2051ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2051acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2051b0: 0x419821  addu        $s3, $v0, $at
    ctx->pc = 0x2051b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2051b4:
    // 0x2051b4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2051b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2051b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2051b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051bc: 0xc080e9c  jal         func_203A70
    ctx->pc = 0x2051BCu;
    SET_GPR_U32(ctx, 31, 0x2051C4u);
    ctx->pc = 0x2051C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051BCu;
    // 0x2051c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A70u, 0x2051BCu, 0x2051C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051C4u;
label_2051c4:
    // 0x2051c4: 0x8fb2005c  lw          $s2, 0x5C($sp)
    ctx->pc = 0x2051c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2051c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2051c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051cc: 0xc08144c  jal         func_205130
    ctx->pc = 0x2051CCu;
    SET_GPR_U32(ctx, 31, 0x2051D4u);
    ctx->pc = 0x2051D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051CCu;
    // 0x2051d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205130u, 0x2051CCu, 0x2051D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051D4u;
label_2051d4:
    // 0x2051d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2051d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2051d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2051dc: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2051dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2051e0: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x2051e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2051e4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2051E4u;
    {
        const bool branch_taken_0x2051e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2051E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051E4u;
        // 0x2051e8: 0xac920000  sw          $s2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051e4) {
            ctx->pc = 0x2051B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2051b4;
        }
    }
    ctx->pc = 0x2051ECu;
    // 0x2051ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2051ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2051f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2051f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2051f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2051f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2051f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2051f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2051fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2051fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205200: 0x3e00008  jr          $ra
    ctx->pc = 0x205200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205200u;
        // 0x205204: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205208u;
    // 0x205208: 0x0  nop
    ctx->pc = 0x205208u;
    // NOP
    // 0x20520c: 0x0  nop
    ctx->pc = 0x20520cu;
    // NOP
}
