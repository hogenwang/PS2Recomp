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

// Function: sub_0018B420
// Address: 0x18b420 - 0x18b460
void sub_0018B420_0x18b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B420_0x18b420");
#endif

    ctx->pc = 0x18b420u;

    // 0x18b420: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x18b420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18b424: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x18b424u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18b428: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18b428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b42c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18b430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b434: 0x2442db7e  addiu       $v0, $v0, -0x2482
    ctx->pc = 0x18b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957950));
    // 0x18b438: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b43c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b440: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b448: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18b448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b44c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x18b44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b450: 0x3e00008  jr          $ra
    ctx->pc = 0x18B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B450u;
        // 0x18b454: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B458u;
    // 0x18b458: 0x0  nop
    ctx->pc = 0x18b458u;
    // NOP
    // 0x18b45c: 0x0  nop
    ctx->pc = 0x18b45cu;
    // NOP
    if (ctx->pc == 0x18b45cu) { ctx->pc = 0x18b460u; }
}
