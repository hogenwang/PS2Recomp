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

// Function: sub_0019FE60
// Address: 0x19fe60 - 0x19ff00
void sub_0019FE60_0x19fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FE60_0x19fe60");
#endif

    switch (ctx->pc) {
        case 0x19fe88u: goto label_19fe88;
        default: break;
    }

    ctx->pc = 0x19fe60u;

    // 0x19fe60: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x19fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19fe64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fe64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe68: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x19fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fe6c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x19fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19fe70: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19fe74: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x19fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19fe78: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x19fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x19fe7c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19fe80: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fe84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19fe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fe88:
    // 0x19fe88: 0xa4a001ac  sh          $zero, 0x1AC($a1)
    ctx->pc = 0x19fe88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 428), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fe8c: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x19fe90: 0xa4a001ae  sh          $zero, 0x1AE($a1)
    ctx->pc = 0x19fe90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 430), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fe94: 0x28c30006  slti        $v1, $a2, 0x6
    ctx->pc = 0x19fe94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19fe98: 0xa4a001b0  sh          $zero, 0x1B0($a1)
    ctx->pc = 0x19fe98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 432), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fe9c: 0xa4a001b2  sh          $zero, 0x1B2($a1)
    ctx->pc = 0x19fe9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 434), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fea0: 0xa4a001b4  sh          $zero, 0x1B4($a1)
    ctx->pc = 0x19fea0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 436), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fea4: 0xa4a001b6  sh          $zero, 0x1B6($a1)
    ctx->pc = 0x19fea4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fea8: 0xa4a001b8  sh          $zero, 0x1B8($a1)
    ctx->pc = 0x19fea8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 440), (uint16_t)GPR_U32(ctx, 0));
    // 0x19feac: 0xa4a001ba  sh          $zero, 0x1BA($a1)
    ctx->pc = 0x19feacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x19feb0: 0xa4a001bc  sh          $zero, 0x1BC($a1)
    ctx->pc = 0x19feb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x19feb4: 0xa4a001be  sh          $zero, 0x1BE($a1)
    ctx->pc = 0x19feb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 446), (uint16_t)GPR_U32(ctx, 0));
    // 0x19feb8: 0xa4a001c0  sh          $zero, 0x1C0($a1)
    ctx->pc = 0x19feb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 448), (uint16_t)GPR_U32(ctx, 0));
    // 0x19febc: 0xa4a001c2  sh          $zero, 0x1C2($a1)
    ctx->pc = 0x19febcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 450), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fec0: 0xa4a001c4  sh          $zero, 0x1C4($a1)
    ctx->pc = 0x19fec0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 452), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fec4: 0xa4a001c6  sh          $zero, 0x1C6($a1)
    ctx->pc = 0x19fec4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 454), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fec8: 0xa4a001c8  sh          $zero, 0x1C8($a1)
    ctx->pc = 0x19fec8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 456), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fecc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19FECCu;
    {
        const bool branch_taken_0x19fecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FECCu;
        // 0x19fed0: 0x24a5001e  addiu       $a1, $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fecc) {
            ctx->pc = 0x19FE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19fe88;
        }
    }
    ctx->pc = 0x19FED4u;
    // 0x19fed4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x19fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x19fed8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x19fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19fedc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19fee0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fee4: 0xa46001ac  sh          $zero, 0x1AC($v1)
    ctx->pc = 0x19fee4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 428), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fee8: 0xa46001ae  sh          $zero, 0x1AE($v1)
    ctx->pc = 0x19fee8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 430), (uint16_t)GPR_U32(ctx, 0));
    // 0x19feec: 0x3e00008  jr          $ra
    ctx->pc = 0x19FEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEECu;
        // 0x19fef0: 0xa46001b0  sh          $zero, 0x1B0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 432), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FEF4u;
    // 0x19fef4: 0x0  nop
    ctx->pc = 0x19fef4u;
    // NOP
    // 0x19fef8: 0x0  nop
    ctx->pc = 0x19fef8u;
    // NOP
    // 0x19fefc: 0x0  nop
    ctx->pc = 0x19fefcu;
    // NOP
    if (ctx->pc == 0x19fefcu) { ctx->pc = 0x19ff00u; }
}
