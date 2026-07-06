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

// Function: sub_0029CD28
// Address: 0x29cd28 - 0x29cd90
void sub_0029CD28_0x29cd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CD28_0x29cd28");
#endif

    switch (ctx->pc) {
        case 0x29cd58u: goto label_29cd58;
        case 0x29cd68u: goto label_29cd68;
        default: break;
    }

    ctx->pc = 0x29cd28u;

    // 0x29cd28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29cd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29cd2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29cd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29cd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd34: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29CD34u;
    {
        const bool branch_taken_0x29cd34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD34u;
        // 0x29cd38: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd34) {
            ctx->pc = 0x29CD7Cu;
            goto label_29cd7c;
        }
    }
    ctx->pc = 0x29CD3Cu;
    // 0x29cd3c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x29cd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x29cd40: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x29cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29cd44: 0x24e7c550  addiu       $a3, $a3, -0x3AB0
    ctx->pc = 0x29cd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952272));
    // 0x29cd48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29cd4c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x29cd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29cd50: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x29CD50u;
    SET_GPR_U32(ctx, 31, 0x29CD58u);
    ctx->pc = 0x29CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD50u;
    // 0x29cd54: 0x240800f2  addiu       $t0, $zero, 0xF2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x29CD50u, 0x29CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD58u;
label_29cd58:
    // 0x29cd58: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29CD58u;
    {
        const bool branch_taken_0x29cd58 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x29CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD58u;
        // 0x29cd5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd58) {
            ctx->pc = 0x29CD80u;
            goto label_29cd80;
        }
    }
    ctx->pc = 0x29CD60u;
    // 0x29cd60: 0xc0a7364  jal         func_29CD90
    ctx->pc = 0x29CD60u;
    SET_GPR_U32(ctx, 31, 0x29CD68u);
    ctx->pc = 0x29CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD60u;
    // 0x29cd64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD90u, 0x29CD60u, 0x29CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD68u;
label_29cd68:
    // 0x29cd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29cd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cd74: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x29CD74u;
    ctx->pc = 0x29CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD74u;
    // 0x29cd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x29CD7Cu;
label_29cd7c:
    // 0x29cd7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29cd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29cd80:
    // 0x29cd80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29cd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cd84: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD84u;
        // 0x29cd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CD8Cu;
    // 0x29cd8c: 0x0  nop
    ctx->pc = 0x29cd8cu;
    // NOP
    if (ctx->pc == 0x29cd8cu) { ctx->pc = 0x29cd90u; }
}
