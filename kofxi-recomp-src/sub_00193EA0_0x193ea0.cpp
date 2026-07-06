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

// Function: sub_00193EA0
// Address: 0x193ea0 - 0x193f30
void sub_00193EA0_0x193ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193EA0_0x193ea0");
#endif

    switch (ctx->pc) {
        case 0x193ed0u: goto label_193ed0;
        default: break;
    }

    ctx->pc = 0x193ea0u;

    // 0x193ea0: 0xa080035d  sb          $zero, 0x35D($a0)
    ctx->pc = 0x193ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 861), (uint8_t)GPR_U32(ctx, 0));
    // 0x193ea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ea8: 0xa080035f  sb          $zero, 0x35F($a0)
    ctx->pc = 0x193ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 863), (uint8_t)GPR_U32(ctx, 0));
    // 0x193eac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x193eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eb0: 0xa080035c  sb          $zero, 0x35C($a0)
    ctx->pc = 0x193eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 860), (uint8_t)GPR_U32(ctx, 0));
    // 0x193eb4: 0xa080036d  sb          $zero, 0x36D($a0)
    ctx->pc = 0x193eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 877), (uint8_t)GPR_U32(ctx, 0));
    // 0x193eb8: 0xa080036f  sb          $zero, 0x36F($a0)
    ctx->pc = 0x193eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 879), (uint8_t)GPR_U32(ctx, 0));
    // 0x193ebc: 0xa080036c  sb          $zero, 0x36C($a0)
    ctx->pc = 0x193ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 876), (uint8_t)GPR_U32(ctx, 0));
    // 0x193ec0: 0xa480037c  sh          $zero, 0x37C($a0)
    ctx->pc = 0x193ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 892), (uint16_t)GPR_U32(ctx, 0));
    // 0x193ec4: 0xa480037e  sh          $zero, 0x37E($a0)
    ctx->pc = 0x193ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 894), (uint16_t)GPR_U32(ctx, 0));
    // 0x193ec8: 0xa0800380  sb          $zero, 0x380($a0)
    ctx->pc = 0x193ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 896), (uint8_t)GPR_U32(ctx, 0));
    // 0x193ecc: 0xa0800381  sb          $zero, 0x381($a0)
    ctx->pc = 0x193eccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 897), (uint8_t)GPR_U32(ctx, 0));
label_193ed0:
    // 0x193ed0: 0xa4a00382  sh          $zero, 0x382($a1)
    ctx->pc = 0x193ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 898), (uint16_t)GPR_U32(ctx, 0));
    // 0x193ed4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x193ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x193ed8: 0xa4a00384  sh          $zero, 0x384($a1)
    ctx->pc = 0x193ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 900), (uint16_t)GPR_U32(ctx, 0));
    // 0x193edc: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x193edcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x193ee0: 0xa4a00386  sh          $zero, 0x386($a1)
    ctx->pc = 0x193ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 902), (uint16_t)GPR_U32(ctx, 0));
    // 0x193ee4: 0xa4a00388  sh          $zero, 0x388($a1)
    ctx->pc = 0x193ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 904), (uint16_t)GPR_U32(ctx, 0));
    // 0x193ee8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x193EE8u;
    {
        const bool branch_taken_0x193ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EE8u;
        // 0x193eec: 0x24a50006  addiu       $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ee8) {
            ctx->pc = 0x193ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193ed0;
        }
    }
    ctx->pc = 0x193EF0u;
    // 0x193ef0: 0xa480039a  sh          $zero, 0x39A($a0)
    ctx->pc = 0x193ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x193ef4: 0xa480039c  sh          $zero, 0x39C($a0)
    ctx->pc = 0x193ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 924), (uint16_t)GPR_U32(ctx, 0));
    // 0x193ef8: 0xa080039e  sb          $zero, 0x39E($a0)
    ctx->pc = 0x193ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 926), (uint8_t)GPR_U32(ctx, 0));
    // 0x193efc: 0xa080039f  sb          $zero, 0x39F($a0)
    ctx->pc = 0x193efcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 927), (uint8_t)GPR_U32(ctx, 0));
    // 0x193f00: 0xa08003a0  sb          $zero, 0x3A0($a0)
    ctx->pc = 0x193f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 928), (uint8_t)GPR_U32(ctx, 0));
    // 0x193f04: 0xa08003a1  sb          $zero, 0x3A1($a0)
    ctx->pc = 0x193f04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 929), (uint8_t)GPR_U32(ctx, 0));
    // 0x193f08: 0xa08003a2  sb          $zero, 0x3A2($a0)
    ctx->pc = 0x193f08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 930), (uint8_t)GPR_U32(ctx, 0));
    // 0x193f0c: 0xa48003a4  sh          $zero, 0x3A4($a0)
    ctx->pc = 0x193f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 0));
    // 0x193f10: 0x948303a4  lhu         $v1, 0x3A4($a0)
    ctx->pc = 0x193f10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x193f14: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x193f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x193f18: 0xa48303a4  sh          $v1, 0x3A4($a0)
    ctx->pc = 0x193f18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x193f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x193F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F1Cu;
        // 0x193f20: 0xa08003a6  sb          $zero, 0x3A6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 934), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193F24u;
    // 0x193f24: 0x0  nop
    ctx->pc = 0x193f24u;
    // NOP
    // 0x193f28: 0x0  nop
    ctx->pc = 0x193f28u;
    // NOP
    // 0x193f2c: 0x0  nop
    ctx->pc = 0x193f2cu;
    // NOP
}
