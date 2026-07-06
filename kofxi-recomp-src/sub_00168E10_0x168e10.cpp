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

// Function: sub_00168E10
// Address: 0x168e10 - 0x168e60
void sub_00168E10_0x168e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E10_0x168e10");
#endif

    switch (ctx->pc) {
        case 0x168e50u: goto label_168e50;
        default: break;
    }

    ctx->pc = 0x168e10u;

    // 0x168e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168e14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x168e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x168e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168e1c: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x168e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x168e20: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x168e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x168e24: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x168E24u;
    {
        const bool branch_taken_0x168e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E24u;
        // 0x168e28: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e24) {
            ctx->pc = 0x168E54u;
            goto label_168e54;
        }
    }
    ctx->pc = 0x168E2Cu;
    // 0x168e2c: 0x8c830490  lw          $v1, 0x490($a0)
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x168e30: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x168e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x168e34: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x168E34u;
    {
        const bool branch_taken_0x168e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168e34) {
            ctx->pc = 0x168E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168E34u;
            // 0x168e38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168E58u;
            goto label_168e58;
        }
    }
    ctx->pc = 0x168E3Cu;
    // 0x168e3c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x168e40: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168e44: 0x24a52af0  addiu       $a1, $a1, 0x2AF0
    ctx->pc = 0x168e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10992));
    // 0x168e48: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x168E48u;
    SET_GPR_U32(ctx, 31, 0x168E50u);
    ctx->pc = 0x168E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E48u;
    // 0x168e4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x168E48u, 0x168E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E50u;
label_168e50:
    // 0x168e50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x168e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_168e54:
    // 0x168e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168e58:
    // 0x168e58: 0x3e00008  jr          $ra
    ctx->pc = 0x168E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E58u;
        // 0x168e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168E60u;
}
