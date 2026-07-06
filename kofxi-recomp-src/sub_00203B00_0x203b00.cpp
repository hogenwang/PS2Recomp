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

// Function: sub_00203B00
// Address: 0x203b00 - 0x203ba0
void sub_00203B00_0x203b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203B00_0x203b00");
#endif

    ctx->pc = 0x203b00u;

    // 0x203b00: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203b04: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x203b08: 0x8c6b9bf8  lw          $t3, -0x6408($v1)
    ctx->pc = 0x203b08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203b0c: 0x252998a0  addiu       $t1, $t1, -0x6760
    ctx->pc = 0x203b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940832));
    // 0x203b10: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x203b10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x203b14: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x203b14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x203b18: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x203b18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x203b1c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203b20: 0x91680065  lbu         $t0, 0x65($t3)
    ctx->pc = 0x203b20u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 101)));
    // 0x203b24: 0x8c639bf0  lw          $v1, -0x6410($v1)
    ctx->pc = 0x203b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941680)));
    // 0x203b28: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x203b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x203b2c: 0x10b5021  addu        $t2, $t0, $t3
    ctx->pc = 0x203b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x203b30: 0x912b0000  lbu         $t3, 0x0($t1)
    ctx->pc = 0x203b30u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x203b34: 0xb4900  sll         $t1, $t3, 4
    ctx->pc = 0x203b34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x203b38: 0xb4040  sll         $t0, $t3, 1
    ctx->pc = 0x203b38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x203b3c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x203b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x203b40: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x203b44: 0x91290524  lbu         $t1, 0x524($t1)
    ctx->pc = 0x203b44u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1316)));
    // 0x203b48: 0x84280  sll         $t0, $t0, 10
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 10));
    // 0x203b4c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x203b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x203b50: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x203b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x203b54: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x203b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x203b58: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x203b5c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x203b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x203b60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x203b64: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x203b64u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203b68: 0x31037c00  andi        $v1, $t0, 0x7C00
    ctx->pc = 0x203b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31744);
    // 0x203b6c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x203b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x203b70: 0x329c2  srl         $a1, $v1, 7
    ctx->pc = 0x203b70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x203b74: 0x310303e0  andi        $v1, $t0, 0x3E0
    ctx->pc = 0x203b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)992);
    // 0x203b78: 0xe53025  or          $a2, $a3, $a1
    ctx->pc = 0x203b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x203b7c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x203b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x203b80: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x203b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x203b84: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x203b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203b88: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x203b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x203b8c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x203b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x203b90: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x203b94: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x203b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x203b98: 0x3e00008  jr          $ra
    ctx->pc = 0x203B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B98u;
        // 0x203b9c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203BA0u;
}
