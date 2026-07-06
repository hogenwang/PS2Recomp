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

// Function: sub_00164A20
// Address: 0x164a20 - 0x164aa0
void sub_00164A20_0x164a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164A20_0x164a20");
#endif

    switch (ctx->pc) {
        case 0x164a94u: goto label_164a94;
        default: break;
    }

    ctx->pc = 0x164a20u;

    // 0x164a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164a28: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x164a2c: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x164A2Cu;
    {
        const bool branch_taken_0x164a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a2c) {
            ctx->pc = 0x164A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A2Cu;
            // 0x164a30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164A98u;
            goto label_164a98;
        }
    }
    ctx->pc = 0x164A34u;
    // 0x164a34: 0x946205e0  lhu         $v0, 0x5E0($v1)
    ctx->pc = 0x164a34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1504)));
    // 0x164a38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x164a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x164a3c: 0xa46205e0  sh          $v0, 0x5E0($v1)
    ctx->pc = 0x164a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1504), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a40: 0x906205e4  lbu         $v0, 0x5E4($v1)
    ctx->pc = 0x164a40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1508)));
    // 0x164a44: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x164a44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x164a48: 0x54200010  bnel        $at, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x164A48u;
    {
        const bool branch_taken_0x164a48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x164a48) {
            ctx->pc = 0x164A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164A48u;
            // 0x164a4c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164A8Cu;
            goto label_164a8c;
        }
    }
    ctx->pc = 0x164A50u;
    // 0x164a50: 0x8c6500dc  lw          $a1, 0xDC($v1)
    ctx->pc = 0x164a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x164a54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164a58: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x164a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x164a5c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x164a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x164a60: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x164a60u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x164a64: 0x2463dc50  addiu       $v1, $v1, -0x23B0
    ctx->pc = 0x164a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958160));
    // 0x164a68: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x164a6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x164a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x164a70: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x164a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164a74: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x164a78: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x164a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164a7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x164a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x164a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x164a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x164a88: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x164a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_164a8c:
    // 0x164a8c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x164A8Cu;
    SET_GPR_U32(ctx, 31, 0x164A94u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x164A8Cu, 0x164A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A94u;
label_164a94:
    // 0x164a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164a98:
    // 0x164a98: 0x3e00008  jr          $ra
    ctx->pc = 0x164A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A98u;
        // 0x164a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164AA0u;
}
