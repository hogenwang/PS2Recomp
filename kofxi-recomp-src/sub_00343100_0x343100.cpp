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

// Function: sub_00343100
// Address: 0x343100 - 0x343180
void sub_00343100_0x343100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343100_0x343100");
#endif

    switch (ctx->pc) {
        case 0x34312cu: goto label_34312c;
        default: break;
    }

    ctx->pc = 0x343100u;

    // 0x343100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343104: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34310c: 0x8c43fe48  lw          $v1, -0x1B8($v0)
    ctx->pc = 0x34310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966856)));
    // 0x343110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x343110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x343114: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343118: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x343118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x34311c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x34311Cu;
    {
        const bool branch_taken_0x34311c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x343120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34311Cu;
        // 0x343120: 0xac43fe48  sw          $v1, -0x1B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34311c) {
            ctx->pc = 0x343168u;
            goto label_343168;
        }
    }
    ctx->pc = 0x343124u;
    // 0x343124: 0xc0d0c28  jal         func_3430A0
    ctx->pc = 0x343124u;
    SET_GPR_U32(ctx, 31, 0x34312Cu);
    ctx->pc = 0x3430A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3430A0u, 0x343124u, 0x34312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34312Cu;
label_34312c:
    // 0x34312c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34312Cu;
    {
        const bool branch_taken_0x34312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34312c) {
            ctx->pc = 0x343158u;
            goto label_343158;
        }
    }
    ctx->pc = 0x343134u;
    // 0x343134: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343138: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34313c: 0x8c63fe40  lw          $v1, -0x1C0($v1)
    ctx->pc = 0x34313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966848)));
    // 0x343140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x343140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x343144: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x343144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x343148: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x343148u;
    {
        const bool branch_taken_0x343148 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343148u;
        // 0x34314c: 0xac43fe40  sw          $v1, -0x1C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343148) {
            ctx->pc = 0x343160u;
            goto label_343160;
        }
    }
    ctx->pc = 0x343150u;
    // 0x343150: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x343150u;
    {
        const bool branch_taken_0x343150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343150u;
        // 0x343154: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343150) {
            ctx->pc = 0x34316Cu;
            goto label_34316c;
        }
    }
    ctx->pc = 0x343158u;
label_343158:
    // 0x343158: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34315c: 0xac40fe40  sw          $zero, -0x1C0($v0)
    ctx->pc = 0x34315cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966848), GPR_U32(ctx, 0));
label_343160:
    // 0x343160: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343164: 0xac40fe48  sw          $zero, -0x1B8($v0)
    ctx->pc = 0x343164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966856), GPR_U32(ctx, 0));
label_343168:
    // 0x343168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34316c:
    // 0x34316c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343170: 0x3e00008  jr          $ra
    ctx->pc = 0x343170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343170u;
        // 0x343174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343178u;
    // 0x343178: 0x0  nop
    ctx->pc = 0x343178u;
    // NOP
    // 0x34317c: 0x0  nop
    ctx->pc = 0x34317cu;
    // NOP
}
