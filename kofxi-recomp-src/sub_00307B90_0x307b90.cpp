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

// Function: sub_00307B90
// Address: 0x307b90 - 0x307c60
void sub_00307B90_0x307b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307B90_0x307b90");
#endif

    switch (ctx->pc) {
        case 0x307c20u: goto label_307c20;
        case 0x307c48u: goto label_307c48;
        default: break;
    }

    ctx->pc = 0x307b90u;

    // 0x307b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307b94: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307b9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x307b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x307ba0: 0xac404790  sw          $zero, 0x4790($v0)
    ctx->pc = 0x307ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 0));
    // 0x307ba4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307ba8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307bac: 0xac644788  sw          $a0, 0x4788($v1)
    ctx->pc = 0x307bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18312), GPR_U32(ctx, 4));
    // 0x307bb0: 0xac444780  sw          $a0, 0x4780($v0)
    ctx->pc = 0x307bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18304), GPR_U32(ctx, 4));
    // 0x307bb4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307bb8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307bbc: 0xac604748  sw          $zero, 0x4748($v1)
    ctx->pc = 0x307bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18248), GPR_U32(ctx, 0));
    // 0x307bc0: 0xac444740  sw          $a0, 0x4740($v0)
    ctx->pc = 0x307bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18240), GPR_U32(ctx, 4));
    // 0x307bc4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307bc8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307bcc: 0xac644738  sw          $a0, 0x4738($v1)
    ctx->pc = 0x307bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18232), GPR_U32(ctx, 4));
    // 0x307bd0: 0xac404778  sw          $zero, 0x4778($v0)
    ctx->pc = 0x307bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18296), GPR_U32(ctx, 0));
    // 0x307bd4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307bd8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307bdc: 0xac604770  sw          $zero, 0x4770($v1)
    ctx->pc = 0x307bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18288), GPR_U32(ctx, 0));
    // 0x307be0: 0xac404768  sw          $zero, 0x4768($v0)
    ctx->pc = 0x307be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18280), GPR_U32(ctx, 0));
    // 0x307be4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307be8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307bec: 0xac604760  sw          $zero, 0x4760($v1)
    ctx->pc = 0x307becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18272), GPR_U32(ctx, 0));
    // 0x307bf0: 0xac404758  sw          $zero, 0x4758($v0)
    ctx->pc = 0x307bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18264), GPR_U32(ctx, 0));
    // 0x307bf4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307bf8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307bfc: 0xac604750  sw          $zero, 0x4750($v1)
    ctx->pc = 0x307bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18256), GPR_U32(ctx, 0));
    // 0x307c00: 0xac404730  sw          $zero, 0x4730($v0)
    ctx->pc = 0x307c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18224), GPR_U32(ctx, 0));
    // 0x307c04: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307c08: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x307c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x307c0c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307c10: 0xac604728  sw          $zero, 0x4728($v1)
    ctx->pc = 0x307c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18216), GPR_U32(ctx, 0));
    // 0x307c14: 0x24841e70  addiu       $a0, $a0, 0x1E70
    ctx->pc = 0x307c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7792));
    // 0x307c18: 0xc040f30  jal         func_103CC0
    ctx->pc = 0x307C18u;
    SET_GPR_U32(ctx, 31, 0x307C20u);
    ctx->pc = 0x307C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C18u;
    // 0x307c1c: 0xac404720  sw          $zero, 0x4720($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 18208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103CC0u, 0x307C18u, 0x307C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C20u;
label_307c20:
    // 0x307c20: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x307c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x307c24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x307c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x307c28: 0x24841e70  addiu       $a0, $a0, 0x1E70
    ctx->pc = 0x307c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7792));
    // 0x307c2c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x307c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x307c30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x307c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307c34: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x307c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x307c38: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x307c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307c3c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x307c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x307c40: 0xc040e92  jal         func_103A48
    ctx->pc = 0x307C40u;
    SET_GPR_U32(ctx, 31, 0x307C48u);
    ctx->pc = 0x307C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C40u;
    // 0x307c44: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103A48u, 0x307C40u, 0x307C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C48u;
label_307c48:
    // 0x307c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x307C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C4Cu;
        // 0x307c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307C54u;
    // 0x307c54: 0x0  nop
    ctx->pc = 0x307c54u;
    // NOP
    // 0x307c58: 0x0  nop
    ctx->pc = 0x307c58u;
    // NOP
    // 0x307c5c: 0x0  nop
    ctx->pc = 0x307c5cu;
    // NOP
}
