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

// Function: sub_001AD118
// Address: 0x1ad118 - 0x1ad180
void sub_001AD118_0x1ad118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD118_0x1ad118");
#endif

    switch (ctx->pc) {
        case 0x1ad138u: goto label_1ad138;
        case 0x1ad154u: goto label_1ad154;
        default: break;
    }

    ctx->pc = 0x1ad118u;

    // 0x1ad118: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1ad118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1ad11c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad11cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad120: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ad120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad124: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x1ad124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
    // 0x1ad128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad12c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ad12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ad130: 0xc049c22  jal         func_127088
    ctx->pc = 0x1AD130u;
    SET_GPR_U32(ctx, 31, 0x1AD138u);
    ctx->pc = 0x1AD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD130u;
    // 0x1ad134: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1AD130u, 0x1AD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD138u;
label_1ad138:
    // 0x1ad138: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1ad138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1ad13c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1ad13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ad140: 0x24a57328  addiu       $a1, $a1, 0x7328
    ctx->pc = 0x1ad140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29480));
    // 0x1ad144: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD144u;
    {
        const bool branch_taken_0x1ad144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD144u;
        // 0x1ad148: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad144) {
            ctx->pc = 0x1AD168u;
            goto label_1ad168;
        }
    }
    ctx->pc = 0x1AD14Cu;
    // 0x1ad14c: 0xc049c22  jal         func_127088
    ctx->pc = 0x1AD14Cu;
    SET_GPR_U32(ctx, 31, 0x1AD154u);
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1AD14Cu, 0x1AD154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD154u;
label_1ad154:
    // 0x1ad154: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD154u;
    {
        const bool branch_taken_0x1ad154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad154) {
            ctx->pc = 0x1AD158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD154u;
            // 0x1ad158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD16Cu;
            goto label_1ad16c;
        }
    }
    ctx->pc = 0x1AD15Cu;
    // 0x1ad15c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD15Cu;
    {
        const bool branch_taken_0x1ad15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD15Cu;
        // 0x1ad160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad15c) {
            ctx->pc = 0x1AD16Cu;
            goto label_1ad16c;
        }
    }
    ctx->pc = 0x1AD164u;
    // 0x1ad164: 0x0  nop
    ctx->pc = 0x1ad164u;
    // NOP
label_1ad168:
    // 0x1ad168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad16c:
    // 0x1ad16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad170: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ad170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad174: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD174u;
        // 0x1ad178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD17Cu;
    // 0x1ad17c: 0x0  nop
    ctx->pc = 0x1ad17cu;
    // NOP
}
