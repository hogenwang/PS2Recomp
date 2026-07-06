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

// Function: sub_002054B0
// Address: 0x2054b0 - 0x205510
void sub_002054B0_0x2054b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002054B0_0x2054b0");
#endif

    switch (ctx->pc) {
        case 0x2054e8u: goto label_2054e8;
        default: break;
    }

    ctx->pc = 0x2054b0u;

    // 0x2054b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2054b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2054b4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2054b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2054b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2054b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2054bc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2054bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2054c0: 0x8c469bf8  lw          $a2, -0x6408($v0)
    ctx->pc = 0x2054c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2054c4: 0x90c50065  lbu         $a1, 0x65($a2)
    ctx->pc = 0x2054c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 101)));
    // 0x2054c8: 0x8cc3005c  lw          $v1, 0x5C($a2)
    ctx->pc = 0x2054c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x2054cc: 0x90c20064  lbu         $v0, 0x64($a2)
    ctx->pc = 0x2054ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x2054d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2054d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2054d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2054d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2054d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2054d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2054dc: 0x90650524  lbu         $a1, 0x524($v1)
    ctx->pc = 0x2054dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1316)));
    // 0x2054e0: 0xc080e9c  jal         func_203A70
    ctx->pc = 0x2054E0u;
    SET_GPR_U32(ctx, 31, 0x2054E8u);
    ctx->pc = 0x2054E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2054E0u;
    // 0x2054e4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A70u, 0x2054E0u, 0x2054E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054E8u;
label_2054e8:
    // 0x2054e8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x2054e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x2054ec: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2054f0: 0x8c63b7d0  lw          $v1, -0x4830($v1)
    ctx->pc = 0x2054f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948816)));
    // 0x2054f4: 0xac6403d4  sw          $a0, 0x3D4($v1)
    ctx->pc = 0x2054f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 980), GPR_U32(ctx, 4));
    // 0x2054f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2054f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2054fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2054FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054FCu;
        // 0x205500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205504u;
    // 0x205504: 0x0  nop
    ctx->pc = 0x205504u;
    // NOP
    // 0x205508: 0x0  nop
    ctx->pc = 0x205508u;
    // NOP
    // 0x20550c: 0x0  nop
    ctx->pc = 0x20550cu;
    // NOP
    if (ctx->pc == 0x20550cu) { ctx->pc = 0x205510u; }
}
