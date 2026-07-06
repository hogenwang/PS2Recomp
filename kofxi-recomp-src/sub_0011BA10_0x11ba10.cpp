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

// Function: sub_0011BA10
// Address: 0x11ba10 - 0x11ba80
void sub_0011BA10_0x11ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BA10_0x11ba10");
#endif

    switch (ctx->pc) {
        case 0x11ba38u: goto label_11ba38;
        case 0x11ba40u: goto label_11ba40;
        case 0x11ba48u: goto label_11ba48;
        case 0x11ba50u: goto label_11ba50;
        case 0x11ba6cu: goto label_11ba6c;
        default: break;
    }

    ctx->pc = 0x11ba10u;

    // 0x11ba10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ba14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ba18: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11BA18u;
    {
        const bool branch_taken_0x11ba18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA18u;
        // 0x11ba1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba18) {
            ctx->pc = 0x11BA60u;
            goto label_11ba60;
        }
    }
    ctx->pc = 0x11BA20u;
    // 0x11ba20: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11ba24: 0x8c439dd0  lw          $v1, -0x6230($v0)
    ctx->pc = 0x11ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942160)));
    // 0x11ba28: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA28u;
    {
        const bool branch_taken_0x11ba28 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA28u;
        // 0x11ba2c: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba28) {
            ctx->pc = 0x11BA38u;
            goto label_11ba38;
        }
    }
    ctx->pc = 0x11BA30u;
    // 0x11ba30: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11BA30u;
    SET_GPR_U32(ctx, 31, 0x11BA38u);
    ctx->pc = 0x11BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA30u;
    // 0x11ba34: 0x2484b2d0  addiu       $a0, $a0, -0x4D30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11BA30u, 0x11BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA38u;
label_11ba38:
    // 0x11ba38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA38u;
    {
        const bool branch_taken_0x11ba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA38u;
        // 0x11ba3c: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba38) {
            ctx->pc = 0x11BA48u;
            goto label_11ba48;
        }
    }
    ctx->pc = 0x11BA40u;
label_11ba40:
    // 0x11ba40: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x11BA40u;
    SET_GPR_U32(ctx, 31, 0x11BA48u);
    ctx->pc = 0x11BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA40u;
    // 0x11ba44: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x11BA40u, 0x11BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA48u;
label_11ba48:
    // 0x11ba48: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x11BA48u;
    SET_GPR_U32(ctx, 31, 0x11BA50u);
    ctx->pc = 0x11BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA48u;
    // 0x11ba4c: 0x2604b940  addiu       $a0, $s0, -0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x11BA48u, 0x11BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA50u;
label_11ba50:
    // 0x11ba50: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11BA50u;
    {
        const bool branch_taken_0x11ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA50u;
        // 0x11ba54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba50) {
            ctx->pc = 0x11BA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ba40;
        }
    }
    ctx->pc = 0x11BA58u;
    // 0x11ba58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BA58u;
    {
        const bool branch_taken_0x11ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA58u;
        // 0x11ba5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba58) {
            ctx->pc = 0x11BA70u;
            goto label_11ba70;
        }
    }
    ctx->pc = 0x11BA60u;
label_11ba60:
    // 0x11ba60: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11ba64: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x11BA64u;
    SET_GPR_U32(ctx, 31, 0x11BA6Cu);
    ctx->pc = 0x11BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA64u;
    // 0x11ba68: 0x2484b940  addiu       $a0, $a0, -0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x11BA64u, 0x11BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA6Cu;
label_11ba6c:
    // 0x11ba6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ba6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11ba70:
    // 0x11ba70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ba70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba74: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA74u;
        // 0x11ba78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA7Cu;
    // 0x11ba7c: 0x0  nop
    ctx->pc = 0x11ba7cu;
    // NOP
}
