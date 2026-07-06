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

// Function: sub_001BAF08
// Address: 0x1baf08 - 0x1baf78
void sub_001BAF08_0x1baf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAF08_0x1baf08");
#endif

    switch (ctx->pc) {
        case 0x1baf20u: goto label_1baf20;
        case 0x1baf54u: goto label_1baf54;
        case 0x1baf60u: goto label_1baf60;
        default: break;
    }

    ctx->pc = 0x1baf08u;

    // 0x1baf08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baf0c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAF0Cu;
    {
        const bool branch_taken_0x1baf0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF0Cu;
        // 0x1baf10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf0c) {
            ctx->pc = 0x1BAF28u;
            goto label_1baf28;
        }
    }
    ctx->pc = 0x1BAF14u;
    // 0x1baf14: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1baf14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1baf18: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BAF18u;
    SET_GPR_U32(ctx, 31, 0x1BAF20u);
    ctx->pc = 0x1BAF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF18u;
    // 0x1baf1c: 0x24848600  addiu       $a0, $a0, -0x7A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BAF18u, 0x1BAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF20u;
label_1baf20:
    // 0x1baf20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAF20u;
    {
        const bool branch_taken_0x1baf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF20u;
        // 0x1baf24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf20) {
            ctx->pc = 0x1BAF2Cu;
            goto label_1baf2c;
        }
    }
    ctx->pc = 0x1BAF28u;
label_1baf28:
    // 0x1baf28: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1baf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1baf2c:
    // 0x1baf2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf30: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF30u;
        // 0x1baf34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAF38u;
    // 0x1baf38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1baf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1baf3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1baf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1baf40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1baf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1baf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1baf48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1baf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1baf4c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF54u);
    ctx->pc = 0x1BAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF4Cu;
    // 0x1baf50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BAF4Cu, 0x1BAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF54u;
label_1baf54:
    // 0x1baf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf58: 0xc06ebde  jal         func_1BAF78
    ctx->pc = 0x1BAF58u;
    SET_GPR_U32(ctx, 31, 0x1BAF60u);
    ctx->pc = 0x1BAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF58u;
    // 0x1baf5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAF78u, 0x1BAF58u, 0x1BAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF60u;
label_1baf60:
    // 0x1baf60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1baf60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1baf64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1baf68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1baf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baf6c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BAF6Cu;
    ctx->pc = 0x1BAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF6Cu;
    // 0x1baf70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BAF74u;
    // 0x1baf74: 0x0  nop
    ctx->pc = 0x1baf74u;
    // NOP
}
