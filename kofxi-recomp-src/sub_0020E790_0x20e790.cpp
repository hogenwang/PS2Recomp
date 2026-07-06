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

// Function: sub_0020E790
// Address: 0x20e790 - 0x20e800
void sub_0020E790_0x20e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E790_0x20e790");
#endif

    switch (ctx->pc) {
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7ccu: goto label_20e7cc;
        default: break;
    }

    ctx->pc = 0x20e790u;

    // 0x20e790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20e794: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20e79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e7a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20e7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e7ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20e7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e7b0: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x20e7b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20e7b4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20E7B4u;
    {
        const bool branch_taken_0x20e7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7B4u;
        // 0x20e7b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e7b4) {
            ctx->pc = 0x20E7E0u;
            goto label_20e7e0;
        }
    }
    ctx->pc = 0x20E7BCu;
    // 0x20e7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e7c0:
    // 0x20e7c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20e7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e7c4: 0xc0839bc  jal         func_20E6F0
    ctx->pc = 0x20E7C4u;
    SET_GPR_U32(ctx, 31, 0x20E7CCu);
    ctx->pc = 0x20E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7C4u;
    // 0x20e7c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E6F0u, 0x20E7C4u, 0x20E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7CCu;
label_20e7cc:
    // 0x20e7cc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x20e7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x20e7d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e7d4: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x20e7d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20e7d8: 0x5483fff9  bnel        $a0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20E7D8u;
    {
        const bool branch_taken_0x20e7d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e7d8) {
            ctx->pc = 0x20E7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E7D8u;
            // 0x20e7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e7c0;
        }
    }
    ctx->pc = 0x20E7E0u;
label_20e7e0:
    // 0x20e7e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20e7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e7e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e7e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e7e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e7ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7F0u;
        // 0x20e7f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E7F8u;
    // 0x20e7f8: 0x0  nop
    ctx->pc = 0x20e7f8u;
    // NOP
    // 0x20e7fc: 0x0  nop
    ctx->pc = 0x20e7fcu;
    // NOP
    if (ctx->pc == 0x20e7fcu) { ctx->pc = 0x20e800u; }
}
