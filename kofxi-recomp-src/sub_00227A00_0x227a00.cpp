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

// Function: sub_00227A00
// Address: 0x227a00 - 0x227ab8
void sub_00227A00_0x227a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227A00_0x227a00");
#endif

    switch (ctx->pc) {
        case 0x227a00u: goto label_227a00;
        case 0x227a04u: goto label_227a04;
        case 0x227a08u: goto label_227a08;
        case 0x227a0cu: goto label_227a0c;
        case 0x227a10u: goto label_227a10;
        case 0x227a14u: goto label_227a14;
        case 0x227a18u: goto label_227a18;
        case 0x227a1cu: goto label_227a1c;
        case 0x227a20u: goto label_227a20;
        case 0x227a24u: goto label_227a24;
        case 0x227a28u: goto label_227a28;
        case 0x227a2cu: goto label_227a2c;
        case 0x227a30u: goto label_227a30;
        case 0x227a34u: goto label_227a34;
        case 0x227a38u: goto label_227a38;
        case 0x227a3cu: goto label_227a3c;
        case 0x227a40u: goto label_227a40;
        case 0x227a44u: goto label_227a44;
        case 0x227a48u: goto label_227a48;
        case 0x227a4cu: goto label_227a4c;
        case 0x227a50u: goto label_227a50;
        case 0x227a54u: goto label_227a54;
        case 0x227a58u: goto label_227a58;
        case 0x227a5cu: goto label_227a5c;
        case 0x227a60u: goto label_227a60;
        case 0x227a64u: goto label_227a64;
        case 0x227a68u: goto label_227a68;
        case 0x227a6cu: goto label_227a6c;
        case 0x227a70u: goto label_227a70;
        case 0x227a74u: goto label_227a74;
        case 0x227a78u: goto label_227a78;
        case 0x227a7cu: goto label_227a7c;
        case 0x227a80u: goto label_227a80;
        case 0x227a84u: goto label_227a84;
        case 0x227a88u: goto label_227a88;
        case 0x227a8cu: goto label_227a8c;
        case 0x227a90u: goto label_227a90;
        case 0x227a94u: goto label_227a94;
        case 0x227a98u: goto label_227a98;
        case 0x227a9cu: goto label_227a9c;
        case 0x227aa0u: goto label_227aa0;
        case 0x227aa4u: goto label_227aa4;
        case 0x227aa8u: goto label_227aa8;
        case 0x227aacu: goto label_227aac;
        case 0x227ab0u: goto label_227ab0;
        case 0x227ab4u: goto label_227ab4;
        default: break;
    }

    ctx->pc = 0x227a00u;

label_227a00:
    // 0x227a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227a04:
    // 0x227a04: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x227a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227a08:
    // 0x227a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_227a0c:
    // 0x227a0c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_227a10:
    // 0x227a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x227a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_227a14:
    // 0x227a14: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_227a18:
    // 0x227a18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x227a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_227a1c:
    // 0x227a1c: 0x24844218  addiu       $a0, $a0, 0x4218
    ctx->pc = 0x227a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16920));
label_227a20:
    // 0x227a20: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x227a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
label_227a24:
    // 0x227a24: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x227a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_227a28:
    // 0x227a28: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x227a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_227a2c:
    // 0x227a2c: 0xc0897d6  jal         func_225F58
label_227a30:
    if (ctx->pc == 0x227A30u) {
        ctx->pc = 0x227A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A2Cu;
        // 0x227a30: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A34u;
        goto label_227a34;
    }
    ctx->pc = 0x227A2Cu;
    SET_GPR_U32(ctx, 31, 0x227A34u);
    ctx->pc = 0x227A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A2Cu;
    // 0x227a30: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227A2Cu, 0x227A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A34u;
label_227a34:
    // 0x227a34: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227a34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_227a38:
    // 0x227a38: 0x8deff1f8  lw          $t7, -0xE08($t7)
    ctx->pc = 0x227a38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963704)));
label_227a3c:
    // 0x227a3c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
label_227a40:
    if (ctx->pc == 0x227A40u) {
        ctx->pc = 0x227A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A3Cu;
        // 0x227a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A44u;
        goto label_227a44;
    }
    ctx->pc = 0x227A3Cu;
    {
        const bool branch_taken_0x227a3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A3Cu;
        // 0x227a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a3c) {
            ctx->pc = 0x227A5Cu;
            goto label_227a5c;
        }
    }
    ctx->pc = 0x227A44u;
label_227a44:
    // 0x227a44: 0x1e0f809  jalr        $t7
label_227a48:
    if (ctx->pc == 0x227A48u) {
        ctx->pc = 0x227A4Cu;
        goto label_227a4c;
    }
    ctx->pc = 0x227A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x227A4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A44u, 0x227A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227A4Cu;
label_227a4c:
    // 0x227a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227a50:
    // 0x227a50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_227a54:
    // 0x227a54: 0x3e00008  jr          $ra
label_227a58:
    if (ctx->pc == 0x227A58u) {
        ctx->pc = 0x227A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A54u;
        // 0x227a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A5Cu;
        goto label_227a5c;
    }
    ctx->pc = 0x227A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A54u;
        // 0x227a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227A5Cu;
label_227a5c:
    // 0x227a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_227a60:
    // 0x227a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227a64:
    // 0x227a64: 0x8049986  j           func_126618
label_227a68:
    if (ctx->pc == 0x227A68u) {
        ctx->pc = 0x227A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A64u;
        // 0x227a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A6Cu;
        goto label_227a6c;
    }
    ctx->pc = 0x227A64u;
    ctx->pc = 0x227A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A64u;
    // 0x227a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    sub_00126618_0x126618(rdram, ctx, runtime); return;
    ctx->pc = 0x227A6Cu;
label_227a6c:
    // 0x227a6c: 0x0  nop
    ctx->pc = 0x227a6cu;
    // NOP
label_227a70:
    // 0x227a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227a74:
    // 0x227a74: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x227a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_227a78:
    // 0x227a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_227a7c:
    // 0x227a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227a80:
    // 0x227a80: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x227a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_227a84:
    // 0x227a84: 0xc049cb6  jal         func_1272D8
label_227a88:
    if (ctx->pc == 0x227A88u) {
        ctx->pc = 0x227A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A84u;
        // 0x227a88: 0x2484f208  addiu       $a0, $a0, -0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A8Cu;
        goto label_227a8c;
    }
    ctx->pc = 0x227A84u;
    SET_GPR_U32(ctx, 31, 0x227A8Cu);
    ctx->pc = 0x227A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A84u;
    // 0x227a88: 0x2484f208  addiu       $a0, $a0, -0xDF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x227A84u, 0x227A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A8Cu;
label_227a8c:
    // 0x227a8c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x227a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_227a90:
    // 0x227a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227a94:
    // 0x227a94: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x227a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_227a98:
    // 0x227a98: 0xc049cb6  jal         func_1272D8
label_227a9c:
    if (ctx->pc == 0x227A9Cu) {
        ctx->pc = 0x227A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A98u;
        // 0x227a9c: 0x2484f538  addiu       $a0, $a0, -0xAC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AA0u;
        goto label_227aa0;
    }
    ctx->pc = 0x227A98u;
    SET_GPR_U32(ctx, 31, 0x227AA0u);
    ctx->pc = 0x227A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A98u;
    // 0x227a9c: 0x2484f538  addiu       $a0, $a0, -0xAC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x227A98u, 0x227AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AA0u;
label_227aa0:
    // 0x227aa0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_227aa4:
    // 0x227aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227aa8:
    // 0x227aa8: 0xade0f57c  sw          $zero, -0xA84($t7)
    ctx->pc = 0x227aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294964604), GPR_U32(ctx, 0));
label_227aac:
    // 0x227aac: 0x3e00008  jr          $ra
label_227ab0:
    if (ctx->pc == 0x227AB0u) {
        ctx->pc = 0x227AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AACu;
        // 0x227ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AB4u;
        goto label_227ab4;
    }
    ctx->pc = 0x227AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AACu;
        // 0x227ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227AB4u;
label_227ab4:
    // 0x227ab4: 0x0  nop
    ctx->pc = 0x227ab4u;
    // NOP
    if (ctx->pc == 0x227ab4u) { ctx->pc = 0x227ab8u; }
}
