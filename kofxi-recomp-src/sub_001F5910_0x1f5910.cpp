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

// Function: sub_001F5910
// Address: 0x1f5910 - 0x1f5960
void sub_001F5910_0x1f5910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5910_0x1f5910");
#endif

    ctx->pc = 0x1f5910u;

    // 0x1f5910: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f5910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5914: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1f5914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1f5918: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1f5918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f591c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f591cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f5920: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1f5920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f5924: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1f5928: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1f5928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f592c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1f592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f5930: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1f5930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f5934: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5934u;
    {
        const bool branch_taken_0x1f5934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5934u;
        // 0x1f5938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5934) {
            ctx->pc = 0x1F5954u;
            goto label_1f5954;
        }
    }
    ctx->pc = 0x1F593Cu;
    // 0x1f593c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f5940: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1f5940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5944: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1f5948: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1f5948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f594c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1f594cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f5950: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1f5954:
    // 0x1f5954: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F595Cu;
    // 0x1f595c: 0x0  nop
    ctx->pc = 0x1f595cu;
    // NOP
    if (ctx->pc == 0x1f595cu) { ctx->pc = 0x1f5960u; }
}
