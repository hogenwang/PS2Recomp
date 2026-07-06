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

// Function: sub_002BDC00
// Address: 0x2bdc00 - 0x2bdc58
void sub_002BDC00_0x2bdc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDC00_0x2bdc00");
#endif

    switch (ctx->pc) {
        case 0x2bdc14u: goto label_2bdc14;
        case 0x2bdc20u: goto label_2bdc20;
        case 0x2bdc2cu: goto label_2bdc2c;
        case 0x2bdc38u: goto label_2bdc38;
        case 0x2bdc44u: goto label_2bdc44;
        default: break;
    }

    ctx->pc = 0x2bdc00u;

    // 0x2bdc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bdc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bdc04: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2bdc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2bdc08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdc0c: 0xc0a8a50  jal         func_2A2940
    ctx->pc = 0x2BDC0Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC14u);
    ctx->pc = 0x2BDC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC0Cu;
    // 0x2bdc10: 0x24843088  addiu       $a0, $a0, 0x3088 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2940u, 0x2BDC0Cu, 0x2BDC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC14u;
label_2bdc14:
    // 0x2bdc14: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2bdc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2bdc18: 0xc0a8e1e  jal         func_2A3878
    ctx->pc = 0x2BDC18u;
    SET_GPR_U32(ctx, 31, 0x2BDC20u);
    ctx->pc = 0x2BDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC18u;
    // 0x2bdc1c: 0x24843108  addiu       $a0, $a0, 0x3108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3878u, 0x2BDC18u, 0x2BDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC20u;
label_2bdc20:
    // 0x2bdc20: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2bdc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2bdc24: 0xc0a8e60  jal         func_2A3980
    ctx->pc = 0x2BDC24u;
    SET_GPR_U32(ctx, 31, 0x2BDC2Cu);
    ctx->pc = 0x2BDC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC24u;
    // 0x2bdc28: 0x248431b8  addiu       $a0, $a0, 0x31B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3980u, 0x2BDC24u, 0x2BDC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC2Cu;
label_2bdc2c:
    // 0x2bdc2c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2bdc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2bdc30: 0xc0a8e76  jal         func_2A39D8
    ctx->pc = 0x2BDC30u;
    SET_GPR_U32(ctx, 31, 0x2BDC38u);
    ctx->pc = 0x2BDC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC30u;
    // 0x2bdc34: 0x24843268  addiu       $a0, $a0, 0x3268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A39D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A39D8u, 0x2BDC30u, 0x2BDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC38u;
label_2bdc38:
    // 0x2bdc38: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2bdc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2bdc3c: 0xc0a8e8c  jal         func_2A3A30
    ctx->pc = 0x2BDC3Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC44u);
    ctx->pc = 0x2BDC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC3Cu;
    // 0x2bdc40: 0x248432c8  addiu       $a0, $a0, 0x32C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3A30u, 0x2BDC3Cu, 0x2BDC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC44u;
label_2bdc44:
    // 0x2bdc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bdc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bdc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC4Cu;
        // 0x2bdc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDC54u;
    // 0x2bdc54: 0x0  nop
    ctx->pc = 0x2bdc54u;
    // NOP
}
