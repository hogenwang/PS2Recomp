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

// Function: sub_00160F80
// Address: 0x160f80 - 0x160fd0
void sub_00160F80_0x160f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160F80_0x160f80");
#endif

    switch (ctx->pc) {
        case 0x160f80u: goto label_160f80;
        case 0x160f84u: goto label_160f84;
        case 0x160f88u: goto label_160f88;
        case 0x160f8cu: goto label_160f8c;
        case 0x160f90u: goto label_160f90;
        case 0x160f94u: goto label_160f94;
        case 0x160f98u: goto label_160f98;
        case 0x160f9cu: goto label_160f9c;
        case 0x160fa0u: goto label_160fa0;
        case 0x160fa4u: goto label_160fa4;
        case 0x160fa8u: goto label_160fa8;
        case 0x160facu: goto label_160fac;
        case 0x160fb0u: goto label_160fb0;
        case 0x160fb4u: goto label_160fb4;
        case 0x160fb8u: goto label_160fb8;
        case 0x160fbcu: goto label_160fbc;
        case 0x160fc0u: goto label_160fc0;
        case 0x160fc4u: goto label_160fc4;
        case 0x160fc8u: goto label_160fc8;
        case 0x160fccu: goto label_160fcc;
        default: break;
    }

    ctx->pc = 0x160f80u;

label_160f80:
    // 0x160f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_160f84:
    // 0x160f84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x160f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_160f88:
    // 0x160f88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160f8c:
    // 0x160f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_160f90:
    // 0x160f90: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x160f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_160f94:
    // 0x160f94: 0xa7a6001c  sh          $a2, 0x1C($sp)
    ctx->pc = 0x160f94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 6));
label_160f98:
    // 0x160f98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x160f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160f9c:
    // 0x160f9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x160f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160fa0:
    // 0x160fa0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x160fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_160fa4:
    // 0x160fa4: 0xa7a7001e  sh          $a3, 0x1E($sp)
    ctx->pc = 0x160fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 7));
label_160fa8:
    // 0x160fa8: 0x24421da0  addiu       $v0, $v0, 0x1DA0
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7584));
label_160fac:
    // 0x160fac: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x160facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_160fb0:
    // 0x160fb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160fb4:
    // 0x160fb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x160fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_160fb8:
    // 0x160fb8: 0x40f809  jalr        $v0
label_160fbc:
    if (ctx->pc == 0x160FBCu) {
        ctx->pc = 0x160FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FB8u;
        // 0x160fbc: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FC0u;
        goto label_160fc0;
    }
    ctx->pc = 0x160FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160FC0u);
        ctx->pc = 0x160FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FB8u;
        // 0x160fbc: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160FB8u, 0x160FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160FC0u;
label_160fc0:
    // 0x160fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160fc4:
    // 0x160fc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x160fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160fc8:
    // 0x160fc8: 0x3e00008  jr          $ra
label_160fcc:
    if (ctx->pc == 0x160FCCu) {
        ctx->pc = 0x160FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FC8u;
        // 0x160fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FD0u;
        goto label_fallthrough_0x160fc8;
    }
    ctx->pc = 0x160FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FC8u;
        // 0x160fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160fc8:
    ctx->pc = 0x160FD0u;
}
