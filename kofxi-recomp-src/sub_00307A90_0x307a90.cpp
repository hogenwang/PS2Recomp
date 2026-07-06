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

// Function: sub_00307A90
// Address: 0x307a90 - 0x307b90
void sub_00307A90_0x307a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307A90_0x307a90");
#endif

    switch (ctx->pc) {
        case 0x307af0u: goto label_307af0;
        case 0x307b04u: goto label_307b04;
        case 0x307b18u: goto label_307b18;
        case 0x307b2cu: goto label_307b2c;
        case 0x307b40u: goto label_307b40;
        case 0x307b54u: goto label_307b54;
        case 0x307b68u: goto label_307b68;
        case 0x307b7cu: goto label_307b7c;
        default: break;
    }

    ctx->pc = 0x307a90u;

    // 0x307a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307a94: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307a9c: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307aa0: 0xac4047a0  sw          $zero, 0x47A0($v0)
    ctx->pc = 0x307aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18336), GPR_U32(ctx, 0));
    // 0x307aa4: 0x24847890  addiu       $a0, $a0, 0x7890
    ctx->pc = 0x307aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30864));
    // 0x307aa8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307aac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ab0: 0xac4047a4  sw          $zero, 0x47A4($v0)
    ctx->pc = 0x307ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18340), GPR_U32(ctx, 0));
    // 0x307ab4: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307ab8: 0xac4047a8  sw          $zero, 0x47A8($v0)
    ctx->pc = 0x307ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18344), GPR_U32(ctx, 0));
    // 0x307abc: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307ac0: 0xac4047ac  sw          $zero, 0x47AC($v0)
    ctx->pc = 0x307ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18348), GPR_U32(ctx, 0));
    // 0x307ac4: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307ac8: 0xac4047b0  sw          $zero, 0x47B0($v0)
    ctx->pc = 0x307ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18352), GPR_U32(ctx, 0));
    // 0x307acc: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307ad0: 0xac4047b4  sw          $zero, 0x47B4($v0)
    ctx->pc = 0x307ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18356), GPR_U32(ctx, 0));
    // 0x307ad4: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307ad8: 0xac4047b8  sw          $zero, 0x47B8($v0)
    ctx->pc = 0x307ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18360), GPR_U32(ctx, 0));
    // 0x307adc: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307ae0: 0xac4047bc  sw          $zero, 0x47BC($v0)
    ctx->pc = 0x307ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18364), GPR_U32(ctx, 0));
    // 0x307ae4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x307ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x307ae8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307AE8u;
    SET_GPR_U32(ctx, 31, 0x307AF0u);
    ctx->pc = 0x307AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AE8u;
    // 0x307aec: 0x34466080  ori         $a2, $v0, 0x6080 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307AE8u, 0x307AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AF0u;
label_307af0:
    // 0x307af0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307af8: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x307af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x307afc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307AFCu;
    SET_GPR_U32(ctx, 31, 0x307B04u);
    ctx->pc = 0x307B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AFCu;
    // 0x307b00: 0x24061608  addiu       $a2, $zero, 0x1608 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307AFCu, 0x307B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B04u;
label_307b04:
    // 0x307b04: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b0c: 0x24845990  addiu       $a0, $a0, 0x5990
    ctx->pc = 0x307b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22928));
    // 0x307b10: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307B10u;
    SET_GPR_U32(ctx, 31, 0x307B18u);
    ctx->pc = 0x307B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B10u;
    // 0x307b14: 0x240608e8  addiu       $a2, $zero, 0x8E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307B10u, 0x307B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B18u;
label_307b18:
    // 0x307b18: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b20: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x307b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
    // 0x307b24: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307B24u;
    SET_GPR_U32(ctx, 31, 0x307B2Cu);
    ctx->pc = 0x307B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B24u;
    // 0x307b28: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307B24u, 0x307B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B2Cu;
label_307b2c:
    // 0x307b2c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b34: 0x24844f40  addiu       $a0, $a0, 0x4F40
    ctx->pc = 0x307b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    // 0x307b38: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307B38u;
    SET_GPR_U32(ctx, 31, 0x307B40u);
    ctx->pc = 0x307B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B38u;
    // 0x307b3c: 0x24060280  addiu       $a2, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307B38u, 0x307B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B40u;
label_307b40:
    // 0x307b40: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b48: 0x24844cc0  addiu       $a0, $a0, 0x4CC0
    ctx->pc = 0x307b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19648));
    // 0x307b4c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307B4Cu;
    SET_GPR_U32(ctx, 31, 0x307B54u);
    ctx->pc = 0x307B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B4Cu;
    // 0x307b50: 0x24060280  addiu       $a2, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307B4Cu, 0x307B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B54u;
label_307b54:
    // 0x307b54: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b5c: 0x248449c0  addiu       $a0, $a0, 0x49C0
    ctx->pc = 0x307b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18880));
    // 0x307b60: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307B60u;
    SET_GPR_U32(ctx, 31, 0x307B68u);
    ctx->pc = 0x307B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B60u;
    // 0x307b64: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307B60u, 0x307B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B68u;
label_307b68:
    // 0x307b68: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b70: 0x248447c0  addiu       $a0, $a0, 0x47C0
    ctx->pc = 0x307b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
    // 0x307b74: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x307B74u;
    SET_GPR_U32(ctx, 31, 0x307B7Cu);
    ctx->pc = 0x307B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B74u;
    // 0x307b78: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x307B74u, 0x307B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B7Cu;
label_307b7c:
    // 0x307b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307b80: 0x3e00008  jr          $ra
    ctx->pc = 0x307B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B80u;
        // 0x307b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307B88u;
    // 0x307b88: 0x0  nop
    ctx->pc = 0x307b88u;
    // NOP
    // 0x307b8c: 0x0  nop
    ctx->pc = 0x307b8cu;
    // NOP
}
