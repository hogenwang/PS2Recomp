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

// Function: sub_0015EFF0
// Address: 0x15eff0 - 0x15f070
void sub_0015EFF0_0x15eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EFF0_0x15eff0");
#endif

    switch (ctx->pc) {
        case 0x15f054u: goto label_15f054;
        default: break;
    }

    ctx->pc = 0x15eff0u;

    // 0x15eff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15eff4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x15eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x15eff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15effc: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x15effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x15f000: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f004: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f008: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15F008u;
    {
        const bool branch_taken_0x15f008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F008u;
        // 0x15f00c: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f008) {
            ctx->pc = 0x15F05Cu;
            goto label_15f05c;
        }
    }
    ctx->pc = 0x15F010u;
    // 0x15f010: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x15f010u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15f014: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x15f014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x15f018: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x15f018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15f01c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15F01Cu;
    {
        const bool branch_taken_0x15f01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f01c) {
            ctx->pc = 0x15F020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F01Cu;
            // 0x15f020: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F060u;
            goto label_15f060;
        }
    }
    ctx->pc = 0x15F024u;
    // 0x15f024: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15f028: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15f02c: 0xa04044d0  sb          $zero, 0x44D0($v0)
    ctx->pc = 0x15f02cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17616), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f030: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15f034: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x15f034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15f038: 0x2402f77f  addiu       $v0, $zero, -0x881
    ctx->pc = 0x15f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965119));
    // 0x15f03c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15f040: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x15f040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x15f044: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15f048: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f04c: 0xc057b48  jal         func_15ED20
    ctx->pc = 0x15F04Cu;
    SET_GPR_U32(ctx, 31, 0x15F054u);
    ctx->pc = 0x15F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F04Cu;
    // 0x15f050: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED20u, 0x15F04Cu, 0x15F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F054u;
label_15f054:
    // 0x15f054: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F054u;
    {
        const bool branch_taken_0x15f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F054u;
        // 0x15f058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f054) {
            ctx->pc = 0x15F060u;
            goto label_15f060;
        }
    }
    ctx->pc = 0x15F05Cu;
label_15f05c:
    // 0x15f05c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f060:
    // 0x15f060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f064: 0x3e00008  jr          $ra
    ctx->pc = 0x15F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F064u;
        // 0x15f068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F06Cu;
    // 0x15f06c: 0x0  nop
    ctx->pc = 0x15f06cu;
    // NOP
    if (ctx->pc == 0x15f06cu) { ctx->pc = 0x15f070u; }
}
