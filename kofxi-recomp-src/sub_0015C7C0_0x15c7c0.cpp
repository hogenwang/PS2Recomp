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

// Function: sub_0015C7C0
// Address: 0x15c7c0 - 0x15c820
void sub_0015C7C0_0x15c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C7C0_0x15c7c0");
#endif

    ctx->pc = 0x15c7c0u;

    // 0x15c7c0: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15C7C0u;
    {
        const bool branch_taken_0x15c7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7c0) {
            ctx->pc = 0x15C814u;
            goto label_15c814;
        }
    }
    ctx->pc = 0x15C7C8u;
    // 0x15c7c8: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x15c7c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15c7cc: 0x914905a8  lbu         $t1, 0x5A8($t2)
    ctx->pc = 0x15c7ccu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1448)));
    // 0x15c7d0: 0x29210003  slti        $at, $t1, 0x3
    ctx->pc = 0x15c7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15c7d4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x15C7D4u;
    {
        const bool branch_taken_0x15c7d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c7d4) {
            ctx->pc = 0x15C814u;
            goto label_15c814;
        }
    }
    ctx->pc = 0x15C7DCu;
    // 0x15c7dc: 0x9148059c  lbu         $t0, 0x59C($t2)
    ctx->pc = 0x15c7dcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1436)));
    // 0x15c7e0: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x15c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x15c7e4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x15c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x15c7e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c7ec: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x15c7ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x15c7f0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x15c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x15c7f4: 0xa148059c  sb          $t0, 0x59C($t2)
    ctx->pc = 0x15c7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1436), (uint8_t)GPR_U32(ctx, 8));
    // 0x15c7f8: 0xa46405ac  sh          $a0, 0x5AC($v1)
    ctx->pc = 0x15c7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1452), (uint16_t)GPR_U32(ctx, 4));
    // 0x15c7fc: 0xac6505b0  sw          $a1, 0x5B0($v1)
    ctx->pc = 0x15c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1456), GPR_U32(ctx, 5));
    // 0x15c800: 0xa46605b4  sh          $a2, 0x5B4($v1)
    ctx->pc = 0x15c800u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1460), (uint16_t)GPR_U32(ctx, 6));
    // 0x15c804: 0xa46705b6  sh          $a3, 0x5B6($v1)
    ctx->pc = 0x15c804u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1462), (uint16_t)GPR_U32(ctx, 7));
    // 0x15c808: 0x914305a8  lbu         $v1, 0x5A8($t2)
    ctx->pc = 0x15c808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1448)));
    // 0x15c80c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c810: 0xa14305a8  sb          $v1, 0x5A8($t2)
    ctx->pc = 0x15c810u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1448), (uint8_t)GPR_U32(ctx, 3));
label_15c814:
    // 0x15c814: 0x3e00008  jr          $ra
    ctx->pc = 0x15C814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C81Cu;
    // 0x15c81c: 0x0  nop
    ctx->pc = 0x15c81cu;
    // NOP
    if (ctx->pc == 0x15c81cu) { ctx->pc = 0x15c820u; }
}
