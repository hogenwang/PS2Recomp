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

// Function: sub_001A4B00
// Address: 0x1a4b00 - 0x1a4b80
void sub_001A4B00_0x1a4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4B00_0x1a4b00");
#endif

    switch (ctx->pc) {
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b68u: goto label_1a4b68;
        default: break;
    }

    ctx->pc = 0x1a4b00u;

    // 0x1a4b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4b04: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a4b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4b0c: 0x2484b900  addiu       $a0, $a0, -0x4700
    ctx->pc = 0x1a4b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949120));
    // 0x1a4b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b14: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A4B14u;
    SET_GPR_U32(ctx, 31, 0x1A4B1Cu);
    ctx->pc = 0x1A4B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B14u;
    // 0x1a4b18: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1A4B14u, 0x1A4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B1Cu;
label_1a4b1c:
    // 0x1a4b1c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a4b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a4b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b24: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x1a4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    // 0x1a4b28: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A4B28u;
    SET_GPR_U32(ctx, 31, 0x1A4B30u);
    ctx->pc = 0x1A4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B28u;
    // 0x1a4b2c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1A4B28u, 0x1A4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A4B30u;
    SET_GPR_U32(ctx, 31, 0x1A4B38u);
    ctx->pc = 0x1A49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49D0u, 0x1A4B30u, 0x1A4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B38u;
label_1a4b38:
    // 0x1a4b38: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a4b3c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x1a4b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x1a4b40: 0xac62b8f0  sw          $v0, -0x4710($v1)
    ctx->pc = 0x1a4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949104), GPR_U32(ctx, 2));
    // 0x1a4b44: 0x24a5d840  addiu       $a1, $a1, -0x27C0
    ctx->pc = 0x1a4b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957120));
    // 0x1a4b48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a4b4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4b50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a4b54: 0x3c030120  lui         $v1, 0x120
    ctx->pc = 0x1a4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)288 << 16));
    // 0x1a4b58: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1a4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1a4b5c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1a4b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1a4b60: 0xc06961c  jal         func_1A5870
    ctx->pc = 0x1A4B60u;
    SET_GPR_U32(ctx, 31, 0x1A4B68u);
    ctx->pc = 0x1A4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B60u;
    // 0x1a4b64: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5870u, 0x1A4B60u, 0x1A4B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B68u;
label_1a4b68:
    // 0x1a4b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B6Cu;
        // 0x1a4b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B74u;
    // 0x1a4b74: 0x0  nop
    ctx->pc = 0x1a4b74u;
    // NOP
    // 0x1a4b78: 0x0  nop
    ctx->pc = 0x1a4b78u;
    // NOP
    // 0x1a4b7c: 0x0  nop
    ctx->pc = 0x1a4b7cu;
    // NOP
    if (ctx->pc == 0x1a4b7cu) { ctx->pc = 0x1a4b80u; }
}
