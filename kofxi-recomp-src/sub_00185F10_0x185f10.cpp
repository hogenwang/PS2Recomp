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

// Function: sub_00185F10
// Address: 0x185f10 - 0x185fb0
void sub_00185F10_0x185f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185F10_0x185f10");
#endif

    ctx->pc = 0x185f10u;

    // 0x185f10: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x185f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185f14: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x185f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x185f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185f1c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x185f20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x185f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185f24: 0x24c6db78  addiu       $a2, $a2, -0x2488
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957944));
    // 0x185f28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185f2c: 0x24a5db77  addiu       $a1, $a1, -0x2489
    ctx->pc = 0x185f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957943));
    // 0x185f30: 0x348c0  sll         $t1, $v1, 3
    ctx->pc = 0x185f30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185f34: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x185f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x185f38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185f3c: 0x2484db7a  addiu       $a0, $a0, -0x2486
    ctx->pc = 0x185f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957946));
    // 0x185f40: 0x2463dcac  addiu       $v1, $v1, -0x2354
    ctx->pc = 0x185f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958252));
    // 0x185f44: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x185f48: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x185f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x185f4c: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x185f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x185f50: 0x693021  addu        $a2, $v1, $t1
    ctx->pc = 0x185f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x185f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185f58: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x185f58u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x185f5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x185f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185f60: 0x91430001  lbu         $v1, 0x1($t2)
    ctx->pc = 0x185f60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x185f64: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x185f64u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x185f68: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x185f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x185f6c: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x185f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x185f70: 0xa0e90000  sb          $t1, 0x0($a3)
    ctx->pc = 0x185f70u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x185f74: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x185f74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x185f78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x185f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x185f7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x185f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x185f80: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x185f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x185f84: 0x91430001  lbu         $v1, 0x1($t2)
    ctx->pc = 0x185f84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x185f88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x185f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x185f8c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x185f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x185f90: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x185f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x185f94: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x185f94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x185f98: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x185f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x185f9c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x185fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x185FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FA0u;
        // 0x185fa4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185FA8u;
    // 0x185fa8: 0x0  nop
    ctx->pc = 0x185fa8u;
    // NOP
    // 0x185fac: 0x0  nop
    ctx->pc = 0x185facu;
    // NOP
}
