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

// Function: sub_001F8AF8
// Address: 0x1f8af8 - 0x1f8b38
void sub_001F8AF8_0x1f8af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8AF8_0x1f8af8");
#endif

    switch (ctx->pc) {
        case 0x1f8af8u: goto label_1f8af8;
        case 0x1f8afcu: goto label_1f8afc;
        case 0x1f8b00u: goto label_1f8b00;
        case 0x1f8b04u: goto label_1f8b04;
        case 0x1f8b08u: goto label_1f8b08;
        case 0x1f8b0cu: goto label_1f8b0c;
        case 0x1f8b10u: goto label_1f8b10;
        case 0x1f8b14u: goto label_1f8b14;
        case 0x1f8b18u: goto label_1f8b18;
        case 0x1f8b1cu: goto label_1f8b1c;
        case 0x1f8b20u: goto label_1f8b20;
        case 0x1f8b24u: goto label_1f8b24;
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b2cu: goto label_1f8b2c;
        case 0x1f8b30u: goto label_1f8b30;
        case 0x1f8b34u: goto label_1f8b34;
        default: break;
    }

    ctx->pc = 0x1f8af8u;

label_1f8af8:
    // 0x1f8af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8afc:
    // 0x1f8afc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1f8afcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f8b00:
    // 0x1f8b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8b04:
    // 0x1f8b04: 0x24860950  addiu       $a2, $a0, 0x950
    ctx->pc = 0x1f8b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
label_1f8b08:
    // 0x1f8b08: 0x8c820954  lw          $v0, 0x954($a0)
    ctx->pc = 0x1f8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2388)));
label_1f8b0c:
    // 0x1f8b0c: 0x8c870d64  lw          $a3, 0xD64($a0)
    ctx->pc = 0x1f8b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3428)));
label_1f8b10:
    // 0x1f8b10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f8b14:
    // 0x1f8b14: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f8b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f8b18:
    // 0x1f8b18: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1f8b1c:
    if (ctx->pc == 0x1F8B1Cu) {
        ctx->pc = 0x1F8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B18u;
        // 0x1f8b1c: 0xac820954  sw          $v0, 0x954($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B20u;
        goto label_1f8b20;
    }
    ctx->pc = 0x1F8B18u;
    {
        const bool branch_taken_0x1f8b18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B18u;
        // 0x1f8b1c: 0xac820954  sw          $v0, 0x954($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b18) {
            ctx->pc = 0x1F8B28u;
            goto label_1f8b28;
        }
    }
    ctx->pc = 0x1F8B20u;
label_1f8b20:
    // 0x1f8b20: 0xe0f809  jalr        $a3
label_1f8b24:
    if (ctx->pc == 0x1F8B24u) {
        ctx->pc = 0x1F8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B20u;
        // 0x1f8b24: 0x8c840d68  lw          $a0, 0xD68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B28u;
        goto label_1f8b28;
    }
    ctx->pc = 0x1F8B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1F8B28u);
        ctx->pc = 0x1F8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B20u;
        // 0x1f8b24: 0x8c840d68  lw          $a0, 0xD68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3432)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8B20u, 0x1F8B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8B28u;
label_1f8b28:
    // 0x1f8b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8b2c:
    // 0x1f8b2c: 0x3e00008  jr          $ra
label_1f8b30:
    if (ctx->pc == 0x1F8B30u) {
        ctx->pc = 0x1F8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B2Cu;
        // 0x1f8b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B34u;
        goto label_1f8b34;
    }
    ctx->pc = 0x1F8B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B2Cu;
        // 0x1f8b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8B34u;
label_1f8b34:
    // 0x1f8b34: 0x0  nop
    ctx->pc = 0x1f8b34u;
    // NOP
}
