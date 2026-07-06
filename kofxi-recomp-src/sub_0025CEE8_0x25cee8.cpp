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

// Function: sub_0025CEE8
// Address: 0x25cee8 - 0x25cfb8
void sub_0025CEE8_0x25cee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CEE8_0x25cee8");
#endif

    switch (ctx->pc) {
        case 0x25cf18u: goto label_25cf18;
        case 0x25cf2cu: goto label_25cf2c;
        case 0x25cf34u: goto label_25cf34;
        case 0x25cf58u: goto label_25cf58;
        case 0x25cf70u: goto label_25cf70;
        case 0x25cf7cu: goto label_25cf7c;
        default: break;
    }

    ctx->pc = 0x25cee8u;

    // 0x25cee8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25ceec: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25cef0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25cef4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25cef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cef8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25cefc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25cefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf00: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25cf04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25cf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x25cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25cf0c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25cf10: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25CF10u;
    SET_GPR_U32(ctx, 31, 0x25CF18u);
    ctx->pc = 0x25CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF10u;
    // 0x25cf14: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25CF10u, 0x25CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF18u;
label_25cf18:
    // 0x25cf18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25cf18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf1c: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x25CF1Cu;
    {
        const bool branch_taken_0x25cf1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF1Cu;
        // 0x25cf20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf1c) {
            ctx->pc = 0x25CF90u;
            goto label_25cf90;
        }
    }
    ctx->pc = 0x25CF24u;
    // 0x25cf24: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25CF24u;
    SET_GPR_U32(ctx, 31, 0x25CF2Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25CF24u, 0x25CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF2Cu;
label_25cf2c:
    // 0x25cf2c: 0xc08c0b6  jal         func_2302D8
    ctx->pc = 0x25CF2Cu;
    SET_GPR_U32(ctx, 31, 0x25CF34u);
    ctx->pc = 0x25CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF2Cu;
    // 0x25cf30: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2302D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2302D8u, 0x25CF2Cu, 0x25CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF34u;
label_25cf34:
    // 0x25cf34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25cf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf38: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CF38u;
    {
        const bool branch_taken_0x25cf38 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x25CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF38u;
        // 0x25cf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf38) {
            ctx->pc = 0x25CF48u;
            goto label_25cf48;
        }
    }
    ctx->pc = 0x25CF40u;
    // 0x25cf40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25CF40u;
    {
        const bool branch_taken_0x25cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF40u;
        // 0x25cf44: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf40) {
            ctx->pc = 0x25CF68u;
            goto label_25cf68;
        }
    }
    ctx->pc = 0x25CF48u;
label_25cf48:
    // 0x25cf48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25cf48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25cf4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf50: 0xc08b76e  jal         func_22DDB8
    ctx->pc = 0x25CF50u;
    SET_GPR_U32(ctx, 31, 0x25CF58u);
    ctx->pc = 0x25CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF50u;
    // 0x25cf54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DDB8u, 0x25CF50u, 0x25CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF58u;
label_25cf58:
    // 0x25cf58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cf58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf5c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25CF5Cu;
    {
        const bool branch_taken_0x25cf5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF5Cu;
        // 0x25cf60: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf5c) {
            ctx->pc = 0x25CF68u;
            goto label_25cf68;
        }
    }
    ctx->pc = 0x25CF64u;
    // 0x25cf64: 0xac5100cc  sw          $s1, 0xCC($v0)
    ctx->pc = 0x25cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 17));
label_25cf68:
    // 0x25cf68: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25CF68u;
    SET_GPR_U32(ctx, 31, 0x25CF70u);
    ctx->pc = 0x25CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF68u;
    // 0x25cf6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25CF68u, 0x25CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF70u;
label_25cf70:
    // 0x25cf70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25cf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf74: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25CF74u;
    SET_GPR_U32(ctx, 31, 0x25CF7Cu);
    ctx->pc = 0x25CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF74u;
    // 0x25cf78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25CF74u, 0x25CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF7Cu;
label_25cf7c:
    // 0x25cf7c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CF7Cu;
    {
        const bool branch_taken_0x25cf7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF7Cu;
        // 0x25cf80: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf7c) {
            ctx->pc = 0x25CF8Cu;
            goto label_25cf8c;
        }
    }
    ctx->pc = 0x25CF84u;
    // 0x25cf84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25CF84u;
    {
        const bool branch_taken_0x25cf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF84u;
        // 0x25cf88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf84) {
            ctx->pc = 0x25CF90u;
            goto label_25cf90;
        }
    }
    ctx->pc = 0x25CF8Cu;
label_25cf8c:
    // 0x25cf8c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x25cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_25cf90:
    // 0x25cf90: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x25cf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25cf94: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x25cf94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25cf98: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25cf98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cf9c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25cf9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cfa0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25cfa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cfa4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25cfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cfa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25cfa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cfac: 0x3e00008  jr          $ra
    ctx->pc = 0x25CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFACu;
        // 0x25cfb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CFB4u;
    // 0x25cfb4: 0x0  nop
    ctx->pc = 0x25cfb4u;
    // NOP
    if (ctx->pc == 0x25cfb4u) { ctx->pc = 0x25cfb8u; }
}
