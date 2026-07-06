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

// Function: sub_002BF7B0
// Address: 0x2bf7b0 - 0x2bf808
void sub_002BF7B0_0x2bf7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF7B0_0x2bf7b0");
#endif

    switch (ctx->pc) {
        case 0x2bf7b0u: goto label_2bf7b0;
        case 0x2bf7b4u: goto label_2bf7b4;
        case 0x2bf7b8u: goto label_2bf7b8;
        case 0x2bf7bcu: goto label_2bf7bc;
        case 0x2bf7c0u: goto label_2bf7c0;
        case 0x2bf7c4u: goto label_2bf7c4;
        case 0x2bf7c8u: goto label_2bf7c8;
        case 0x2bf7ccu: goto label_2bf7cc;
        case 0x2bf7d0u: goto label_2bf7d0;
        case 0x2bf7d4u: goto label_2bf7d4;
        case 0x2bf7d8u: goto label_2bf7d8;
        case 0x2bf7dcu: goto label_2bf7dc;
        case 0x2bf7e0u: goto label_2bf7e0;
        case 0x2bf7e4u: goto label_2bf7e4;
        case 0x2bf7e8u: goto label_2bf7e8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf7f0u: goto label_2bf7f0;
        case 0x2bf7f4u: goto label_2bf7f4;
        case 0x2bf7f8u: goto label_2bf7f8;
        case 0x2bf7fcu: goto label_2bf7fc;
        case 0x2bf800u: goto label_2bf800;
        case 0x2bf804u: goto label_2bf804;
        default: break;
    }

    ctx->pc = 0x2bf7b0u;

label_2bf7b0:
    // 0x2bf7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bf7b4:
    // 0x2bf7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bf7b8:
    // 0x2bf7b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bf7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf7bc:
    // 0x2bf7bc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2bf7c0:
    if (ctx->pc == 0x2BF7C0u) {
        ctx->pc = 0x2BF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7BCu;
        // 0x2bf7c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7C4u;
        goto label_2bf7c4;
    }
    ctx->pc = 0x2BF7BCu;
    {
        const bool branch_taken_0x2bf7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7BCu;
        // 0x2bf7c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7bc) {
            ctx->pc = 0x2BF7F8u;
            goto label_2bf7f8;
        }
    }
    ctx->pc = 0x2BF7C4u;
label_2bf7c4:
    // 0x2bf7c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2bf7c8:
    // 0x2bf7c8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2bf7cc:
    if (ctx->pc == 0x2BF7CCu) {
        ctx->pc = 0x2BF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7C8u;
        // 0x2bf7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7D0u;
        goto label_2bf7d0;
    }
    ctx->pc = 0x2BF7C8u;
    {
        const bool branch_taken_0x2bf7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7c8) {
            ctx->pc = 0x2BF7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7C8u;
            // 0x2bf7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7E8u;
            goto label_2bf7e8;
        }
    }
    ctx->pc = 0x2BF7D0u;
label_2bf7d0:
    // 0x2bf7d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bf7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2bf7d4:
    // 0x2bf7d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bf7d8:
    if (ctx->pc == 0x2BF7D8u) {
        ctx->pc = 0x2BF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7D4u;
        // 0x2bf7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7DCu;
        goto label_2bf7dc;
    }
    ctx->pc = 0x2BF7D4u;
    {
        const bool branch_taken_0x2bf7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7d4) {
            ctx->pc = 0x2BF7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7D4u;
            // 0x2bf7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7E8u;
            goto label_2bf7e8;
        }
    }
    ctx->pc = 0x2BF7DCu;
label_2bf7dc:
    // 0x2bf7dc: 0x40f809  jalr        $v0
label_2bf7e0:
    if (ctx->pc == 0x2BF7E0u) {
        ctx->pc = 0x2BF7E4u;
        goto label_2bf7e4;
    }
    ctx->pc = 0x2BF7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BF7E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF7DCu, 0x2BF7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF7E4u;
label_2bf7e4:
    // 0x2bf7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf7e8:
    // 0x2bf7e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bf7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf7ec:
    // 0x2bf7ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf7f0:
    // 0x2bf7f0: 0x80a8c0a  j           func_2A3028
label_2bf7f4:
    if (ctx->pc == 0x2BF7F4u) {
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F8u;
        goto label_2bf7f8;
    }
    ctx->pc = 0x2BF7F0u;
    ctx->pc = 0x2BF7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF7F0u;
    // 0x2bf7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2BF7F8u;
label_2bf7f8:
    // 0x2bf7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bf7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf7fc:
    // 0x2bf7fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf800:
    // 0x2bf800: 0x3e00008  jr          $ra
label_2bf804:
    if (ctx->pc == 0x2BF804u) {
        ctx->pc = 0x2BF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF800u;
        // 0x2bf804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF808u;
        goto label_fallthrough_0x2bf800;
    }
    ctx->pc = 0x2BF800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF800u;
        // 0x2bf804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2bf800:
    ctx->pc = 0x2BF808u;
}
