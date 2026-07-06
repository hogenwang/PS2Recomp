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

// Function: sub_001FCE80
// Address: 0x1fce80 - 0x1fcef0
void sub_001FCE80_0x1fce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCE80_0x1fce80");
#endif

    switch (ctx->pc) {
        case 0x1fcec4u: goto label_1fcec4;
        default: break;
    }

    ctx->pc = 0x1fce80u;

    // 0x1fce80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fce84: 0x24830d88  addiu       $v1, $a0, 0xD88
    ctx->pc = 0x1fce84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1fce88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fce8c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fce8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fce94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce9c: 0x8c6202cc  lw          $v0, 0x2CC($v1)
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x1fcea0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCEA0u;
    {
        const bool branch_taken_0x1fcea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEA0u;
        // 0x1fcea4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcea0) {
            ctx->pc = 0x1FCEB8u;
            goto label_1fceb8;
        }
    }
    ctx->pc = 0x1FCEA8u;
    // 0x1fcea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fceac: 0xac6002cc  sw          $zero, 0x2CC($v1)
    ctx->pc = 0x1fceacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 716), GPR_U32(ctx, 0));
    // 0x1fceb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FCEB0u;
    {
        const bool branch_taken_0x1fceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB0u;
        // 0x1fceb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceb0) {
            ctx->pc = 0x1FCEDCu;
            goto label_1fcedc;
        }
    }
    ctx->pc = 0x1FCEB8u;
label_1fceb8:
    // 0x1fceb8: 0x8c6602cc  lw          $a2, 0x2CC($v1)
    ctx->pc = 0x1fceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x1fcebc: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1FCEBCu;
    SET_GPR_U32(ctx, 31, 0x1FCEC4u);
    ctx->pc = 0x1FCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEBCu;
    // 0x1fcec0: 0x8c4716fc  lw          $a3, 0x16FC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5884)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1FCEBCu, 0x1FCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEC4u;
label_1fcec4:
    // 0x1fcec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCEC4u;
    {
        const bool branch_taken_0x1fcec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEC4u;
        // 0x1fcec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcec4) {
            ctx->pc = 0x1FCED8u;
            goto label_1fced8;
        }
    }
    ctx->pc = 0x1FCECCu;
    // 0x1fcecc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCECCu;
    {
        const bool branch_taken_0x1fcecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCECCu;
        // 0x1fced0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcecc) {
            ctx->pc = 0x1FCEDCu;
            goto label_1fcedc;
        }
    }
    ctx->pc = 0x1FCED4u;
    // 0x1fced4: 0x0  nop
    ctx->pc = 0x1fced4u;
    // NOP
label_1fced8:
    // 0x1fced8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fced8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1fcedc:
    // 0x1fcedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcee0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fcee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEE4u;
        // 0x1fcee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCEECu;
    // 0x1fceec: 0x0  nop
    ctx->pc = 0x1fceecu;
    // NOP
    if (ctx->pc == 0x1fceecu) { ctx->pc = 0x1fcef0u; }
}
