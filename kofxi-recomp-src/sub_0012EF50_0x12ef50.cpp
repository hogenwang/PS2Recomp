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

// Function: sub_0012EF50
// Address: 0x12ef50 - 0x12efa0
void sub_0012EF50_0x12ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EF50_0x12ef50");
#endif

    ctx->pc = 0x12ef50u;

    // 0x12ef50: 0x90880292  lbu         $t0, 0x292($a0)
    ctx->pc = 0x12ef50u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 658)));
    // 0x12ef54: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x12ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12ef58: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x12ef5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ef60: 0x24c6c1c0  addiu       $a2, $a2, -0x3E40
    ctx->pc = 0x12ef60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951360));
    // 0x12ef64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12ef68: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x12ef68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x12ef6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x12ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12ef70: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x12ef74: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x12ef74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ef78: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x12ef78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x12ef7c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x12ef7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12ef80: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x12ef80u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ef84: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x12ef84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12ef88: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12EF88u;
    {
        const bool branch_taken_0x12ef88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ef88) {
            ctx->pc = 0x12EF94u;
            goto label_12ef94;
        }
    }
    ctx->pc = 0x12EF90u;
    // 0x12ef90: 0xa4850292  sh          $a1, 0x292($a0)
    ctx->pc = 0x12ef90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 658), (uint16_t)GPR_U32(ctx, 5));
label_12ef94:
    // 0x12ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF9Cu;
    // 0x12ef9c: 0x0  nop
    ctx->pc = 0x12ef9cu;
    // NOP
}
