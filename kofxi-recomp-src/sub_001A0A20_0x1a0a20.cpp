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

// Function: sub_001A0A20
// Address: 0x1a0a20 - 0x1a0ad0
void sub_001A0A20_0x1a0a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0A20_0x1a0a20");
#endif

    switch (ctx->pc) {
        case 0x1a0a40u: goto label_1a0a40;
        case 0x1a0aa0u: goto label_1a0aa0;
        default: break;
    }

    ctx->pc = 0x1a0a20u;

    // 0x1a0a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0a24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0a30: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x1a0a30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x1a0a34: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A0A34u;
    {
        const bool branch_taken_0x1a0a34 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1A0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A34u;
        // 0x1a0a38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a34) {
            ctx->pc = 0x1A0AC0u;
            goto label_1a0ac0;
        }
    }
    ctx->pc = 0x1A0A3Cu;
    // 0x1a0a3c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x1a0a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1a0a40:
    // 0x1a0a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0a44: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1a0a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a0a48: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0a4c: 0x9063db00  lbu         $v1, -0x2500($v1)
    ctx->pc = 0x1a0a4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957824)));
    // 0x1a0a50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a0a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a0a54: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0A54u;
    {
        const bool branch_taken_0x1a0a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a54) {
            ctx->pc = 0x1A0AA0u;
            goto label_1a0aa0;
        }
    }
    ctx->pc = 0x1A0A5Cu;
    // 0x1a0a5c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a0a60: 0x801827  not         $v1, $a0
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x1a0a64: 0x401027  not         $v0, $v0
    ctx->pc = 0x1a0a64u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1a0a68: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1a0a68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0a6c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1a0a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a0a70: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a0a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a0a74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a0a78: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0a7c: 0x9047daf0  lbu         $a3, -0x2510($v0)
    ctx->pc = 0x1a0a7cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957808)));
    // 0x1a0a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a84: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x1a0a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1a0a88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a0a8c: 0xa0a7daf0  sb          $a3, -0x2510($a1)
    ctx->pc = 0x1a0a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957808), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a0a90: 0x9063daf0  lbu         $v1, -0x2510($v1)
    ctx->pc = 0x1a0a90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x1a0a94: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a0a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a0a98: 0xc0682f0  jal         func_1A0BC0
    ctx->pc = 0x1A0A98u;
    SET_GPR_U32(ctx, 31, 0x1A0AA0u);
    ctx->pc = 0x1A0A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A98u;
    // 0x1a0a9c: 0xa043daf0  sb          $v1, -0x2510($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957808), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0BC0u, 0x1A0A98u, 0x1A0AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AA0u;
label_1a0aa0:
    // 0x1a0aa0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0aa4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1a0aa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0aa8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0aac: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x1a0aacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x1a0ab0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1a0ab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0ab4: 0x5460ffe2  bnel        $v1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1A0AB4u;
    {
        const bool branch_taken_0x1a0ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ab4) {
            ctx->pc = 0x1A0AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0AB4u;
            // 0x1a0ab8: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0a40;
        }
    }
    ctx->pc = 0x1A0ABCu;
    // 0x1a0abc: 0x0  nop
    ctx->pc = 0x1a0abcu;
    // NOP
label_1a0ac0:
    // 0x1a0ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AC8u;
        // 0x1a0acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0AD0u;
}
