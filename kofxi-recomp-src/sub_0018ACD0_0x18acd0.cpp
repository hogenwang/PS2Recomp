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

// Function: sub_0018ACD0
// Address: 0x18acd0 - 0x18ad40
void sub_0018ACD0_0x18acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018ACD0_0x18acd0");
#endif

    ctx->pc = 0x18acd0u;

    // 0x18acd0: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x18acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x18acd4: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x18acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x18acd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18acdc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x18acdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x18ace0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18ace4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ACE4u;
    {
        const bool branch_taken_0x18ace4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ace4) {
            ctx->pc = 0x18ACE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ACE4u;
            // 0x18ace8: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ACF4u;
            goto label_18acf4;
        }
    }
    ctx->pc = 0x18ACECu;
    // 0x18acec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18ACECu;
    {
        const bool branch_taken_0x18acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACECu;
        // 0x18acf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acec) {
            ctx->pc = 0x18AD34u;
            goto label_18ad34;
        }
    }
    ctx->pc = 0x18ACF4u;
label_18acf4:
    // 0x18acf4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x18acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x18acf8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ACF8u;
    {
        const bool branch_taken_0x18acf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18acf8) {
            ctx->pc = 0x18ACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ACF8u;
            // 0x18acfc: 0x8c83048c  lw          $v1, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AD08u;
            goto label_18ad08;
        }
    }
    ctx->pc = 0x18AD00u;
    // 0x18ad00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18AD00u;
    {
        const bool branch_taken_0x18ad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD00u;
        // 0x18ad04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad00) {
            ctx->pc = 0x18AD34u;
            goto label_18ad34;
        }
    }
    ctx->pc = 0x18AD08u;
label_18ad08:
    // 0x18ad08: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x18ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x18ad0c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x18ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x18ad10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18ad14: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AD14u;
    {
        const bool branch_taken_0x18ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ad14) {
            ctx->pc = 0x18AD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AD14u;
            // 0x18ad18: 0x8c8204a0  lw          $v0, 0x4A0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AD24u;
            goto label_18ad24;
        }
    }
    ctx->pc = 0x18AD1Cu;
    // 0x18ad1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18AD1Cu;
    {
        const bool branch_taken_0x18ad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD1Cu;
        // 0x18ad20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad1c) {
            ctx->pc = 0x18AD34u;
            goto label_18ad34;
        }
    }
    ctx->pc = 0x18AD24u;
label_18ad24:
    // 0x18ad24: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x18ad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x18ad28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18ad28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18ad2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18ad30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18ad34:
    // 0x18ad34: 0x3e00008  jr          $ra
    ctx->pc = 0x18AD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD3Cu;
    // 0x18ad3c: 0x0  nop
    ctx->pc = 0x18ad3cu;
    // NOP
}
