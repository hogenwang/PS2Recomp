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

// Function: sub_002F9178
// Address: 0x2f9178 - 0x2f91b0
void sub_002F9178_0x2f9178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9178_0x2f9178");
#endif

    switch (ctx->pc) {
        case 0x2f9178u: goto label_2f9178;
        case 0x2f917cu: goto label_2f917c;
        case 0x2f9180u: goto label_2f9180;
        case 0x2f9184u: goto label_2f9184;
        case 0x2f9188u: goto label_2f9188;
        case 0x2f918cu: goto label_2f918c;
        case 0x2f9190u: goto label_2f9190;
        case 0x2f9194u: goto label_2f9194;
        case 0x2f9198u: goto label_2f9198;
        case 0x2f919cu: goto label_2f919c;
        case 0x2f91a0u: goto label_2f91a0;
        case 0x2f91a4u: goto label_2f91a4;
        case 0x2f91a8u: goto label_2f91a8;
        case 0x2f91acu: goto label_2f91ac;
        default: break;
    }

    ctx->pc = 0x2f9178u;

label_2f9178:
    // 0x2f9178: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2f917c:
    // 0x2f917c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f917cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f9180:
    // 0x2f9180: 0x8c420664  lw          $v0, 0x664($v0)
    ctx->pc = 0x2f9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1636)));
label_2f9184:
    // 0x2f9184: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f9188:
    if (ctx->pc == 0x2F9188u) {
        ctx->pc = 0x2F9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9184u;
        // 0x2f9188: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F918Cu;
        goto label_2f918c;
    }
    ctx->pc = 0x2F9184u;
    {
        const bool branch_taken_0x2f9184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9184u;
        // 0x2f9188: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9184) {
            ctx->pc = 0x2F9198u;
            goto label_2f9198;
        }
    }
    ctx->pc = 0x2F918Cu;
label_2f918c:
    // 0x2f918c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9190:
    // 0x2f9190: 0x8049986  j           func_126618
label_2f9194:
    if (ctx->pc == 0x2F9194u) {
        ctx->pc = 0x2F9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9190u;
        // 0x2f9194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9198u;
        goto label_2f9198;
    }
    ctx->pc = 0x2F9190u;
    ctx->pc = 0x2F9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9190u;
    // 0x2f9194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    sub_00126618_0x126618(rdram, ctx, runtime); return;
    ctx->pc = 0x2F9198u;
label_2f9198:
    // 0x2f9198: 0x40f809  jalr        $v0
label_2f919c:
    if (ctx->pc == 0x2F919Cu) {
        ctx->pc = 0x2F91A0u;
        goto label_2f91a0;
    }
    ctx->pc = 0x2F9198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F91A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9198u, 0x2F91A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F91A0u;
label_2f91a0:
    // 0x2f91a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f91a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f91a4:
    // 0x2f91a4: 0x3e00008  jr          $ra
label_2f91a8:
    if (ctx->pc == 0x2F91A8u) {
        ctx->pc = 0x2F91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91A4u;
        // 0x2f91a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91ACu;
        goto label_2f91ac;
    }
    ctx->pc = 0x2F91A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91A4u;
        // 0x2f91a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F91A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F91ACu;
label_2f91ac:
    // 0x2f91ac: 0x0  nop
    ctx->pc = 0x2f91acu;
    // NOP
}
