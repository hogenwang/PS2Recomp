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

// Function: sub_002039E0
// Address: 0x2039e0 - 0x203a70
void sub_002039E0_0x2039e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002039E0_0x2039e0");
#endif

    ctx->pc = 0x2039e0u;

    // 0x2039e0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2039e4: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x2039e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x2039e8: 0x8c6c9bf8  lw          $t4, -0x6408($v1)
    ctx->pc = 0x2039e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2039ec: 0x252998a0  addiu       $t1, $t1, -0x6760
    ctx->pc = 0x2039ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940832));
    // 0x2039f0: 0xec5821  addu        $t3, $a3, $t4
    ctx->pc = 0x2039f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x2039f4: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x2039f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2039f8: 0x8d870020  lw          $a3, 0x20($t4)
    ctx->pc = 0x2039f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x2039fc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2039fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203a00: 0x8c639bf0  lw          $v1, -0x6410($v1)
    ctx->pc = 0x203a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941680)));
    // 0x203a04: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x203a08: 0x912c0000  lbu         $t4, 0x0($t1)
    ctx->pc = 0x203a08u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x203a0c: 0x74a00  sll         $t1, $a3, 8
    ctx->pc = 0x203a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x203a10: 0xc5100  sll         $t2, $t4, 4
    ctx->pc = 0x203a10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x203a14: 0xc3840  sll         $a3, $t4, 1
    ctx->pc = 0x203a14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x203a18: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x203a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x203a1c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x203a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x203a20: 0x914a0524  lbu         $t2, 0x524($t2)
    ctx->pc = 0x203a20u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1316)));
    // 0x203a24: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x203a24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x203a28: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x203a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x203a2c: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x203a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x203a30: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x203a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x203a34: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x203a38: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x203a38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x203a3c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x203a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x203a40: 0x94690000  lhu         $t1, 0x0($v1)
    ctx->pc = 0x203a40u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203a44: 0x31277c00  andi        $a3, $t1, 0x7C00
    ctx->pc = 0x203a44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31744);
    // 0x203a48: 0x312303e0  andi        $v1, $t1, 0x3E0
    ctx->pc = 0x203a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)992);
    // 0x203a4c: 0x74283  sra         $t0, $a3, 10
    ctx->pc = 0x203a4cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 10));
    // 0x203a50: 0x33943  sra         $a3, $v1, 5
    ctx->pc = 0x203a50u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 5));
    // 0x203a54: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x203a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x203a58: 0x3123001f  andi        $v1, $t1, 0x1F
    ctx->pc = 0x203a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x203a5c: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x203a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x203a60: 0x3e00008  jr          $ra
    ctx->pc = 0x203A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A60u;
        // 0x203a64: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203A68u;
    // 0x203a68: 0x0  nop
    ctx->pc = 0x203a68u;
    // NOP
    // 0x203a6c: 0x0  nop
    ctx->pc = 0x203a6cu;
    // NOP
    if (ctx->pc == 0x203a6cu) { ctx->pc = 0x203a70u; }
}
