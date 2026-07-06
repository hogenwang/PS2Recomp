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

// Function: sub_00294B20
// Address: 0x294b20 - 0x294c30
void sub_00294B20_0x294b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B20_0x294b20");
#endif

    switch (ctx->pc) {
        case 0x294b30u: goto label_294b30;
        case 0x294b3cu: goto label_294b3c;
        case 0x294b48u: goto label_294b48;
        case 0x294b54u: goto label_294b54;
        case 0x294b60u: goto label_294b60;
        case 0x294b6cu: goto label_294b6c;
        case 0x294ba0u: goto label_294ba0;
        case 0x294bc0u: goto label_294bc0;
        case 0x294c00u: goto label_294c00;
        case 0x294c10u: goto label_294c10;
        default: break;
    }

    ctx->pc = 0x294b20u;

    // 0x294b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294b28: 0xc0a5282  jal         func_294A08
    ctx->pc = 0x294B28u;
    SET_GPR_U32(ctx, 31, 0x294B30u);
    ctx->pc = 0x294A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A08u, 0x294B28u, 0x294B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B30u;
label_294b30:
    // 0x294b30: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x294b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x294b34: 0xc0a5296  jal         func_294A58
    ctx->pc = 0x294B34u;
    SET_GPR_U32(ctx, 31, 0x294B3Cu);
    ctx->pc = 0x294B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B34u;
    // 0x294b38: 0x24844bb0  addiu       $a0, $a0, 0x4BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A58u, 0x294B34u, 0x294B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B3Cu;
label_294b3c:
    // 0x294b3c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x294b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x294b40: 0xc0a52a0  jal         func_294A80
    ctx->pc = 0x294B40u;
    SET_GPR_U32(ctx, 31, 0x294B48u);
    ctx->pc = 0x294B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B40u;
    // 0x294b44: 0x24848e88  addiu       $a0, $a0, -0x7178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A80u, 0x294B40u, 0x294B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B48u;
label_294b48:
    // 0x294b48: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x294b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x294b4c: 0xc0a52aa  jal         func_294AA8
    ctx->pc = 0x294B4Cu;
    SET_GPR_U32(ctx, 31, 0x294B54u);
    ctx->pc = 0x294B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B4Cu;
    // 0x294b50: 0x24849170  addiu       $a0, $a0, -0x6E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AA8u, 0x294B4Cu, 0x294B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B54u;
label_294b54:
    // 0x294b54: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x294b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x294b58: 0xc0a52b4  jal         func_294AD0
    ctx->pc = 0x294B58u;
    SET_GPR_U32(ctx, 31, 0x294B60u);
    ctx->pc = 0x294B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B58u;
    // 0x294b5c: 0x24847938  addiu       $a0, $a0, 0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AD0u, 0x294B58u, 0x294B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B60u;
label_294b60:
    // 0x294b60: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x294b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x294b64: 0xc0a52be  jal         func_294AF8
    ctx->pc = 0x294B64u;
    SET_GPR_U32(ctx, 31, 0x294B6Cu);
    ctx->pc = 0x294B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B64u;
    // 0x294b68: 0x24844b80  addiu       $a0, $a0, 0x4B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AF8u, 0x294B64u, 0x294B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B6Cu;
label_294b6c:
    // 0x294b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294b74: 0x3e00008  jr          $ra
    ctx->pc = 0x294B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B74u;
        // 0x294b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B7Cu;
    // 0x294b7c: 0x0  nop
    ctx->pc = 0x294b7cu;
    // NOP
    // 0x294b80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x294b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294b88: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x294b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x294b8c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x294b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x294b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294b94: 0x24848198  addiu       $a0, $a0, -0x7E68
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934936));
    // 0x294b98: 0xc0a0018  jal         func_280060
    ctx->pc = 0x294B98u;
    SET_GPR_U32(ctx, 31, 0x294BA0u);
    ctx->pc = 0x294B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B98u;
    // 0x294b9c: 0x24a50a58  addiu       $a1, $a1, 0xA58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280060u, 0x294B98u, 0x294BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BA0u;
label_294ba0:
    // 0x294ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x294BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BA4u;
        // 0x294ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294BACu;
    // 0x294bac: 0x0  nop
    ctx->pc = 0x294bacu;
    // NOP
    // 0x294bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294bb8: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x294BB8u;
    SET_GPR_U32(ctx, 31, 0x294BC0u);
    ctx->pc = 0x294BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294BB8u;
    // 0x294bbc: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x294BB8u, 0x294BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294BC0u;
label_294bc0:
    // 0x294bc0: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x294bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x294bc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x294bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294bc8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x294bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x294bcc: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x294bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x294bd0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x294bd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x294bd4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x294bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x294bd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x294bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294bdc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x294bdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x294be0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x294be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x294be4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x294be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x294be8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x294be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x294bec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294bf4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x294bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x294bf8: 0xc0a004a  jal         func_280128
    ctx->pc = 0x294BF8u;
    SET_GPR_U32(ctx, 31, 0x294C00u);
    ctx->pc = 0x294BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294BF8u;
    // 0x294bfc: 0xa3a30020  sb          $v1, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x294BF8u, 0x294C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C00u;
label_294c00:
    // 0x294c00: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x294c00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x294c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x294c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294c08: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x294C08u;
    SET_GPR_U32(ctx, 31, 0x294C10u);
    ctx->pc = 0x294C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294C08u;
    // 0x294c0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x294C08u, 0x294C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294C10u;
label_294c10:
    // 0x294c10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294c14: 0x3e00008  jr          $ra
    ctx->pc = 0x294C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C14u;
        // 0x294c18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C1Cu;
    // 0x294c1c: 0x0  nop
    ctx->pc = 0x294c1cu;
    // NOP
    // 0x294c20: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294c24: 0x3e00008  jr          $ra
    ctx->pc = 0x294C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C24u;
        // 0x294c28: 0x24424ad0  addiu       $v0, $v0, 0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C2Cu;
    // 0x294c2c: 0x0  nop
    ctx->pc = 0x294c2cu;
    // NOP
    if (ctx->pc == 0x294c2cu) { ctx->pc = 0x294c30u; }
}
