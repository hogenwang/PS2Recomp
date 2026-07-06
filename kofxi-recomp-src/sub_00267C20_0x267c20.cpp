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

// Function: sub_00267C20
// Address: 0x267c20 - 0x267cc0
void sub_00267C20_0x267c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267C20_0x267c20");
#endif

    switch (ctx->pc) {
        case 0x267c50u: goto label_267c50;
        case 0x267c60u: goto label_267c60;
        case 0x267c78u: goto label_267c78;
        case 0x267c90u: goto label_267c90;
        case 0x267ca4u: goto label_267ca4;
        default: break;
    }

    ctx->pc = 0x267c20u;

    // 0x267c20: 0x27bdf190  addiu       $sp, $sp, -0xE70
    ctx->pc = 0x267c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963600));
    // 0x267c24: 0xffb20e50  sd          $s2, 0xE50($sp)
    ctx->pc = 0x267c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3664), GPR_U64(ctx, 18));
    // 0x267c28: 0xffb10e40  sd          $s1, 0xE40($sp)
    ctx->pc = 0x267c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3648), GPR_U64(ctx, 17));
    // 0x267c2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x267c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c30: 0xffb00e30  sd          $s0, 0xE30($sp)
    ctx->pc = 0x267c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3632), GPR_U64(ctx, 16));
    // 0x267c34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x267c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c3c: 0xffbf0e60  sd          $ra, 0xE60($sp)
    ctx->pc = 0x267c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3680), GPR_U64(ctx, 31));
    // 0x267c40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c48: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267C48u;
    SET_GPR_U32(ctx, 31, 0x267C50u);
    ctx->pc = 0x267C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C48u;
    // 0x267c4c: 0x24060e24  addiu       $a2, $zero, 0xE24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x267C48u, 0x267C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C50u;
label_267c50:
    // 0x267c50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c58: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267C58u;
    SET_GPR_U32(ctx, 31, 0x267C60u);
    ctx->pc = 0x267C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C58u;
    // 0x267c5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267C58u, 0x267C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C60u;
label_267c60:
    // 0x267c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c64: 0x3405ce24  ori         $a1, $zero, 0xCE24
    ctx->pc = 0x267c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52772);
    // 0x267c68: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267c6c: 0x34a569d2  ori         $a1, $a1, 0x69D2
    ctx->pc = 0x267c6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27090);
    // 0x267c70: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267C70u;
    SET_GPR_U32(ctx, 31, 0x267C78u);
    ctx->pc = 0x267C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C70u;
    // 0x267c74: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x267C70u, 0x267C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C78u;
label_267c78:
    // 0x267c78: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267C78u;
    {
        const bool branch_taken_0x267c78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C78u;
        // 0x267c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c78) {
            ctx->pc = 0x267C98u;
            goto label_267c98;
        }
    }
    ctx->pc = 0x267C80u;
    // 0x267c80: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x267c84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x267c88: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x267C88u;
    SET_GPR_U32(ctx, 31, 0x267C90u);
    ctx->pc = 0x267C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C88u;
    // 0x267c8c: 0x24a57c18  addiu       $a1, $a1, 0x7C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x267C88u, 0x267C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C90u;
label_267c90:
    // 0x267c90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x267C90u;
    {
        const bool branch_taken_0x267c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C90u;
        // 0x267c94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267c90) {
            ctx->pc = 0x267CA8u;
            goto label_267ca8;
        }
    }
    ctx->pc = 0x267C98u;
label_267c98:
    // 0x267c98: 0x27a50510  addiu       $a1, $sp, 0x510
    ctx->pc = 0x267c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x267c9c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267C9Cu;
    SET_GPR_U32(ctx, 31, 0x267CA4u);
    ctx->pc = 0x267CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267C9Cu;
    // 0x267ca0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x267C9Cu, 0x267CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267CA4u;
label_267ca4:
    // 0x267ca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267ca8:
    // 0x267ca8: 0xdfbf0e60  ld          $ra, 0xE60($sp)
    ctx->pc = 0x267ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3680)));
    // 0x267cac: 0xdfb20e50  ld          $s2, 0xE50($sp)
    ctx->pc = 0x267cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3664)));
    // 0x267cb0: 0xdfb10e40  ld          $s1, 0xE40($sp)
    ctx->pc = 0x267cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3648)));
    // 0x267cb4: 0xdfb00e30  ld          $s0, 0xE30($sp)
    ctx->pc = 0x267cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3632)));
    // 0x267cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x267CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CB8u;
        // 0x267cbc: 0x27bd0e70  addiu       $sp, $sp, 0xE70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267CC0u;
}
