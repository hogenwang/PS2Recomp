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

// Function: sub_00261A30
// Address: 0x261a30 - 0x261ad8
void sub_00261A30_0x261a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261A30_0x261a30");
#endif

    switch (ctx->pc) {
        case 0x261a4cu: goto label_261a4c;
        case 0x261a6cu: goto label_261a6c;
        case 0x261a94u: goto label_261a94;
        case 0x261ab4u: goto label_261ab4;
        default: break;
    }

    ctx->pc = 0x261a30u;

    // 0x261a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261a34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x261a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x261a38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x261a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x261a44: 0xc09865c  jal         func_261970
    ctx->pc = 0x261A44u;
    SET_GPR_U32(ctx, 31, 0x261A4Cu);
    ctx->pc = 0x261A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A44u;
    // 0x261a48: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261970u, 0x261A44u, 0x261A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A4Cu;
label_261a4c:
    // 0x261a4c: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x261A4Cu;
    {
        const bool branch_taken_0x261a4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A4Cu;
        // 0x261a50: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a4c) {
            ctx->pc = 0x261AC4u;
            goto label_261ac4;
        }
    }
    ctx->pc = 0x261A54u;
    // 0x261a54: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x261a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x261a58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a5c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x261a60: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x261a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x261a64: 0xc098674  jal         func_2619D0
    ctx->pc = 0x261A64u;
    SET_GPR_U32(ctx, 31, 0x261A6Cu);
    ctx->pc = 0x261A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A64u;
    // 0x261a68: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2619D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2619D0u, 0x261A64u, 0x261A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A6Cu;
label_261a6c:
    // 0x261a6c: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x261A6Cu;
    {
        const bool branch_taken_0x261a6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A6Cu;
        // 0x261a70: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a6c) {
            ctx->pc = 0x261AC4u;
            goto label_261ac4;
        }
    }
    ctx->pc = 0x261A74u;
    // 0x261a74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x261a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x261a78: 0x34840f80  ori         $a0, $a0, 0xF80
    ctx->pc = 0x261a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3968);
    // 0x261a7c: 0x2405ff80  addiu       $a1, $zero, -0x80
    ctx->pc = 0x261a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x261a80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x261a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x261a84: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x261a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x261a88: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x261a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x261a8c: 0xc098624  jal         func_261890
    ctx->pc = 0x261A8Cu;
    SET_GPR_U32(ctx, 31, 0x261A94u);
    ctx->pc = 0x261A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A8Cu;
    // 0x261a90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261890u, 0x261A8Cu, 0x261A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A94u;
label_261a94:
    // 0x261a94: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x261A94u;
    {
        const bool branch_taken_0x261a94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A94u;
        // 0x261a98: 0x2405ff80  addiu       $a1, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a94) {
            ctx->pc = 0x261AC4u;
            goto label_261ac4;
        }
    }
    ctx->pc = 0x261A9Cu;
    // 0x261a9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x261a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261aa0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x261aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x261aa4: 0x34840f80  ori         $a0, $a0, 0xF80
    ctx->pc = 0x261aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3968);
    // 0x261aa8: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x261aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x261aac: 0xc098640  jal         func_261900
    ctx->pc = 0x261AACu;
    SET_GPR_U32(ctx, 31, 0x261AB4u);
    ctx->pc = 0x261AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AACu;
    // 0x261ab0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261900u, 0x261AACu, 0x261AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AB4u;
label_261ab4:
    // 0x261ab4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261AB4u;
    {
        const bool branch_taken_0x261ab4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x261AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AB4u;
        // 0x261ab8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ab4) {
            ctx->pc = 0x261AC4u;
            goto label_261ac4;
        }
    }
    ctx->pc = 0x261ABCu;
    // 0x261abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x261abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ac0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x261ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_261ac4:
    // 0x261ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261ac8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x261ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261acc: 0x3e00008  jr          $ra
    ctx->pc = 0x261ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ACCu;
        // 0x261ad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261AD4u;
    // 0x261ad4: 0x0  nop
    ctx->pc = 0x261ad4u;
    // NOP
    if (ctx->pc == 0x261ad4u) { ctx->pc = 0x261ad8u; }
}
