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

// Function: sub_0032A0A0
// Address: 0x32a0a0 - 0x32a110
void sub_0032A0A0_0x32a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A0A0_0x32a0a0");
#endif

    switch (ctx->pc) {
        case 0x32a0fcu: goto label_32a0fc;
        default: break;
    }

    ctx->pc = 0x32a0a0u;

    // 0x32a0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a0a4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32a0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a0ac: 0x8c45ef88  lw          $a1, -0x1078($v0)
    ctx->pc = 0x32a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963080)));
    // 0x32a0b0: 0x94a3001a  lhu         $v1, 0x1A($a1)
    ctx->pc = 0x32a0b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x32a0b4: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x32a0b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32a0b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x32a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32a0bc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x32a0bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32a0c0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32a0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32a0c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x32A0C4u;
    {
        const bool branch_taken_0x32a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a0c4) {
            ctx->pc = 0x32A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A0C4u;
            // 0x32a0c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A100u;
            goto label_32a100;
        }
    }
    ctx->pc = 0x32A0CCu;
    // 0x32a0cc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x32a0d0: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x32a0d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32a0d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32a0d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32a0dc: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x32a0dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x32a0e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x32a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32a0e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x32a0e8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x32a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x32a0ec: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x32a0ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32a0f0: 0x3042f77f  andi        $v0, $v0, 0xF77F
    ctx->pc = 0x32a0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63359);
    // 0x32a0f4: 0xc0ca7fc  jal         func_329FF0
    ctx->pc = 0x32A0F4u;
    SET_GPR_U32(ctx, 31, 0x32A0FCu);
    ctx->pc = 0x32A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0F4u;
    // 0x32a0f8: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329FF0u, 0x32A0F4u, 0x32A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0FCu;
label_32a0fc:
    // 0x32a0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32a100:
    // 0x32a100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a104: 0x3e00008  jr          $ra
    ctx->pc = 0x32A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A104u;
        // 0x32a108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A10Cu;
    // 0x32a10c: 0x0  nop
    ctx->pc = 0x32a10cu;
    // NOP
}
