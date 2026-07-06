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

// Function: sub_0025C970
// Address: 0x25c970 - 0x25c9f0
void sub_0025C970_0x25c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C970_0x25c970");
#endif

    switch (ctx->pc) {
        case 0x25c998u: goto label_25c998;
        case 0x25c9a0u: goto label_25c9a0;
        case 0x25c9d0u: goto label_25c9d0;
        default: break;
    }

    ctx->pc = 0x25c970u;

    // 0x25c970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c974: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25c978: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25c978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25c97c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x25c97cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x25c980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c988: 0x8e441750  lw          $a0, 0x1750($s2)
    ctx->pc = 0x25c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
    // 0x25c98c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25c98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25c990: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25C990u;
    SET_GPR_U32(ctx, 31, 0x25C998u);
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x25C990u, 0x25C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C998u;
label_25c998:
    // 0x25c998: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25c998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25c99c: 0x8c70ae90  lw          $s0, -0x5170($v1)
    ctx->pc = 0x25c99cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946448)));
label_25c9a0:
    // 0x25c9a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C9A0u;
    {
        const bool branch_taken_0x25c9a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c9a0) {
            ctx->pc = 0x25C9C8u;
            goto label_25c9c8;
        }
    }
    ctx->pc = 0x25C9A8u;
    // 0x25c9a8: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x25c9a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25c9ac: 0x5451fffc  bnel        $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x25C9ACu;
    {
        const bool branch_taken_0x25c9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x25c9ac) {
            ctx->pc = 0x25C9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C9ACu;
            // 0x25c9b0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c9a0;
        }
    }
    ctx->pc = 0x25C9B4u;
    // 0x25c9b4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C9B4u;
    {
        const bool branch_taken_0x25c9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c9b4) {
            ctx->pc = 0x25C9C8u;
            goto label_25c9c8;
        }
    }
    ctx->pc = 0x25C9BCu;
    // 0x25c9bc: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x25c9bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x25c9c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25c9c4: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x25c9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_25c9c8:
    // 0x25c9c8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25C9C8u;
    SET_GPR_U32(ctx, 31, 0x25C9D0u);
    ctx->pc = 0x25C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C9C8u;
    // 0x25c9cc: 0x8e441750  lw          $a0, 0x1750($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x25C9C8u, 0x25C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9D0u;
label_25c9d0:
    // 0x25c9d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c9d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c9d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c9d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25c9d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c9dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25c9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25c9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9E4u;
        // 0x25c9e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C9ECu;
    // 0x25c9ec: 0x0  nop
    ctx->pc = 0x25c9ecu;
    // NOP
    if (ctx->pc == 0x25c9ecu) { ctx->pc = 0x25c9f0u; }
}
