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

// Function: sub_002869C8
// Address: 0x2869c8 - 0x286a20
void sub_002869C8_0x2869c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002869C8_0x2869c8");
#endif

    switch (ctx->pc) {
        case 0x2869f8u: goto label_2869f8;
        default: break;
    }

    ctx->pc = 0x2869c8u;

    // 0x2869c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2869c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869cc: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2869d0: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2869D0u;
    {
        const bool branch_taken_0x2869d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2869D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869D0u;
        // 0x2869d4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869d0) {
            ctx->pc = 0x286A14u;
            goto label_286a14;
        }
    }
    ctx->pc = 0x2869D8u;
    // 0x2869d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2869dc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2869dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2869e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2869e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2869e4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2869e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2869e8: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2869E8u;
    {
        const bool branch_taken_0x2869e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2869ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869E8u;
        // 0x2869ec: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869e8) {
            ctx->pc = 0x286A14u;
            goto label_286a14;
        }
    }
    ctx->pc = 0x2869F0u;
    // 0x2869f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2869F0u;
    {
        const bool branch_taken_0x2869f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869F0u;
        // 0x2869f4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869f0) {
            ctx->pc = 0x286A00u;
            goto label_286a00;
        }
    }
    ctx->pc = 0x2869F8u;
label_2869f8:
    // 0x2869f8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2869f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2869fc: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2869fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_286a00:
    // 0x286a00: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286A00u;
    {
        const bool branch_taken_0x286a00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A00u;
        // 0x286a04: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a00) {
            ctx->pc = 0x286A14u;
            goto label_286a14;
        }
    }
    ctx->pc = 0x286A08u;
    // 0x286a08: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x286a08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286a0c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x286A0Cu;
    {
        const bool branch_taken_0x286a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A0Cu;
        // 0x286a10: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a0c) {
            ctx->pc = 0x2869F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2869f8;
        }
    }
    ctx->pc = 0x286A14u;
label_286a14:
    // 0x286a14: 0x3e00008  jr          $ra
    ctx->pc = 0x286A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286A1Cu;
    // 0x286a1c: 0x0  nop
    ctx->pc = 0x286a1cu;
    // NOP
    if (ctx->pc == 0x286a1cu) { ctx->pc = 0x286a20u; }
}
