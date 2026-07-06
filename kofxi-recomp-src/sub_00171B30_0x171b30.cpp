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

// Function: sub_00171B30
// Address: 0x171b30 - 0x171be0
void sub_00171B30_0x171b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B30_0x171b30");
#endif

    switch (ctx->pc) {
        case 0x171b4cu: goto label_171b4c;
        default: break;
    }

    ctx->pc = 0x171b30u;

    // 0x171b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b44: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x171B44u;
    SET_GPR_U32(ctx, 31, 0x171B4Cu);
    ctx->pc = 0x171B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B44u;
    // 0x171b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x171B44u, 0x171B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B4Cu;
label_171b4c:
    // 0x171b4c: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x171b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x171b50: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171b54: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x171b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x171b58: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x171b5c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x171b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x171b60: 0x2e010009  sltiu       $at, $s0, 0x9
    ctx->pc = 0x171b60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x171b64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171b68: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171b6c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x171B6Cu;
    {
        const bool branch_taken_0x171b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B6Cu;
        // 0x171b70: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b6c) {
            ctx->pc = 0x171BC8u;
            goto label_171bc8;
        }
    }
    ctx->pc = 0x171B74u;
    // 0x171b74: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x171b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x171b78: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x171b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x171b7c: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x171b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x171b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171b84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x171b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171b88: 0x400008  jr          $v0
    ctx->pc = 0x171B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171B90u: goto label_171b90;
            case 0x171B98u: goto label_171b98;
            case 0x171BA0u: goto label_171ba0;
            case 0x171BA8u: goto label_171ba8;
            case 0x171BB0u: goto label_171bb0;
            case 0x171BB8u: goto label_171bb8;
            case 0x171BC0u: goto label_171bc0;
            case 0x171BC8u: goto label_171bc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x171B90u;
label_171b90:
    // 0x171b90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x171B90u;
    {
        const bool branch_taken_0x171b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B90u;
        // 0x171b94: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b90) {
            ctx->pc = 0x171BCCu;
            goto label_171bcc;
        }
    }
    ctx->pc = 0x171B98u;
label_171b98:
    // 0x171b98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x171B98u;
    {
        const bool branch_taken_0x171b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B98u;
        // 0x171b9c: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b98) {
            ctx->pc = 0x171BCCu;
            goto label_171bcc;
        }
    }
    ctx->pc = 0x171BA0u;
label_171ba0:
    // 0x171ba0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x171BA0u;
    {
        const bool branch_taken_0x171ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BA0u;
        // 0x171ba4: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ba0) {
            ctx->pc = 0x171BCCu;
            goto label_171bcc;
        }
    }
    ctx->pc = 0x171BA8u;
label_171ba8:
    // 0x171ba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171BA8u;
    {
        const bool branch_taken_0x171ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BA8u;
        // 0x171bac: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ba8) {
            ctx->pc = 0x171BCCu;
            goto label_171bcc;
        }
    }
    ctx->pc = 0x171BB0u;
label_171bb0:
    // 0x171bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x171BB0u;
    {
        const bool branch_taken_0x171bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BB0u;
        // 0x171bb4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bb0) {
            ctx->pc = 0x171BCCu;
            goto label_171bcc;
        }
    }
    ctx->pc = 0x171BB8u;
label_171bb8:
    // 0x171bb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171BB8u;
    {
        const bool branch_taken_0x171bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BB8u;
        // 0x171bbc: 0x9482000a  lhu         $v0, 0xA($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bb8) {
            ctx->pc = 0x171BCCu;
            goto label_171bcc;
        }
    }
    ctx->pc = 0x171BC0u;
label_171bc0:
    // 0x171bc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171BC0u;
    {
        const bool branch_taken_0x171bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BC0u;
        // 0x171bc4: 0x9482000c  lhu         $v0, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bc0) {
            ctx->pc = 0x171BCCu;
            goto label_171bcc;
        }
    }
    ctx->pc = 0x171BC8u;
label_171bc8:
    // 0x171bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171bcc:
    // 0x171bcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x171BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BD8u;
        // 0x171bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171BE0u;
}
