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

// Function: sub_001A4A10
// Address: 0x1a4a10 - 0x1a4b00
void sub_001A4A10_0x1a4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4A10_0x1a4a10");
#endif

    switch (ctx->pc) {
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a90u: goto label_1a4a90;
        case 0x1a4aa0u: goto label_1a4aa0;
        case 0x1a4ad0u: goto label_1a4ad0;
        default: break;
    }

    ctx->pc = 0x1a4a10u;

    // 0x1a4a10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a4a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a4a14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a4a18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a4a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a4a1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a4a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a4a20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a4a24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a4a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4a2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a4a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4a34: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x1a4a34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1a4a38: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4A38u;
    {
        const bool branch_taken_0x1a4a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A38u;
        // 0x1a4a3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a38) {
            ctx->pc = 0x1A4A50u;
            goto label_1a4a50;
        }
    }
    ctx->pc = 0x1A4A40u;
    // 0x1a4a40: 0xc049c48  jal         func_127120
    ctx->pc = 0x1A4A40u;
    SET_GPR_U32(ctx, 31, 0x1A4A48u);
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1A4A40u, 0x1A4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A48u;
label_1a4a48:
    // 0x1a4a48: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A4A48u;
    {
        const bool branch_taken_0x1a4a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A48u;
        // 0x1a4a4c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a48) {
            ctx->pc = 0x1A4AD4u;
            goto label_1a4ad4;
        }
    }
    ctx->pc = 0x1A4A50u;
label_1a4a50:
    // 0x1a4a50: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x1a4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1a4a54: 0x74082b  sltu        $at, $v1, $s4
    ctx->pc = 0x1a4a54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1a4a58: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4A58u;
    {
        const bool branch_taken_0x1a4a58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a58) {
            ctx->pc = 0x1A4A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4A58u;
            // 0x1a4a5c: 0x2939023  subu        $s2, $s4, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4A70u;
            goto label_1a4a70;
        }
    }
    ctx->pc = 0x1A4A60u;
    // 0x1a4a60: 0xc049c48  jal         func_127120
    ctx->pc = 0x1A4A60u;
    SET_GPR_U32(ctx, 31, 0x1A4A68u);
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1A4A60u, 0x1A4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A68u;
label_1a4a68:
    // 0x1a4a68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A4A68u;
    {
        const bool branch_taken_0x1a4a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a68) {
            ctx->pc = 0x1A4AD0u;
            goto label_1a4ad0;
        }
    }
    ctx->pc = 0x1A4A70u;
label_1a4a70:
    // 0x1a4a70: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4A70u;
    {
        const bool branch_taken_0x1a4a70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A70u;
        // 0x1a4a74: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a70) {
            ctx->pc = 0x1A4AD0u;
            goto label_1a4ad0;
        }
    }
    ctx->pc = 0x1A4A78u;
    // 0x1a4a78: 0x728023  subu        $s0, $v1, $s2
    ctx->pc = 0x1a4a78u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a4a7c: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x1a4a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1a4a80: 0x72a823  subu        $s5, $v1, $s2
    ctx->pc = 0x1a4a80u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a4a84: 0xd2182b  sltu        $v1, $a2, $s2
    ctx->pc = 0x1a4a84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a4a88: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4A88u;
    {
        const bool branch_taken_0x1a4a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a88) {
            ctx->pc = 0x1A4AB8u;
            goto label_1a4ab8;
        }
    }
    ctx->pc = 0x1A4A90u;
label_1a4a90:
    // 0x1a4a90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a98: 0xc049c48  jal         func_127120
    ctx->pc = 0x1A4A98u;
    SET_GPR_U32(ctx, 31, 0x1A4AA0u);
    ctx->pc = 0x1A4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A98u;
    // 0x1a4a9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1A4A98u, 0x1A4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AA0u;
label_1a4aa0:
    // 0x1a4aa0: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1a4aa4: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1a4aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1a4aa8: 0x232082b  sltu        $at, $s1, $s2
    ctx->pc = 0x1a4aa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a4aac: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A4AACu;
    {
        const bool branch_taken_0x1a4aac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AACu;
        // 0x1a4ab0: 0x2b2a823  subu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4aac) {
            ctx->pc = 0x1A4A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4a90;
        }
    }
    ctx->pc = 0x1A4AB4u;
    // 0x1a4ab4: 0x0  nop
    ctx->pc = 0x1a4ab4u;
    // NOP
label_1a4ab8:
    // 0x1a4ab8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4AB8u;
    {
        const bool branch_taken_0x1a4ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ab8) {
            ctx->pc = 0x1A4AD0u;
            goto label_1a4ad0;
        }
    }
    ctx->pc = 0x1A4AC0u;
    // 0x1a4ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a4ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ac4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a4ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ac8: 0xc049c48  jal         func_127120
    ctx->pc = 0x1A4AC8u;
    SET_GPR_U32(ctx, 31, 0x1A4AD0u);
    ctx->pc = 0x1A4ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AC8u;
    // 0x1a4acc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1A4AC8u, 0x1A4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AD0u;
label_1a4ad0:
    // 0x1a4ad0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a4ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4ad4:
    // 0x1a4ad4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a4ad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a4ad8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a4ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4adc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a4adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AECu;
        // 0x1a4af0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AF4u;
    // 0x1a4af4: 0x0  nop
    ctx->pc = 0x1a4af4u;
    // NOP
    // 0x1a4af8: 0x0  nop
    ctx->pc = 0x1a4af8u;
    // NOP
    // 0x1a4afc: 0x0  nop
    ctx->pc = 0x1a4afcu;
    // NOP
    if (ctx->pc == 0x1a4afcu) { ctx->pc = 0x1a4b00u; }
}
