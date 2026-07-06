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

// Function: sub_001BE060
// Address: 0x1be060 - 0x1be0e0
void sub_001BE060_0x1be060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE060_0x1be060");
#endif

    switch (ctx->pc) {
        case 0x1be060u: goto label_1be060;
        case 0x1be064u: goto label_1be064;
        case 0x1be068u: goto label_1be068;
        case 0x1be06cu: goto label_1be06c;
        case 0x1be070u: goto label_1be070;
        case 0x1be074u: goto label_1be074;
        case 0x1be078u: goto label_1be078;
        case 0x1be07cu: goto label_1be07c;
        case 0x1be080u: goto label_1be080;
        case 0x1be084u: goto label_1be084;
        case 0x1be088u: goto label_1be088;
        case 0x1be08cu: goto label_1be08c;
        case 0x1be090u: goto label_1be090;
        case 0x1be094u: goto label_1be094;
        case 0x1be098u: goto label_1be098;
        case 0x1be09cu: goto label_1be09c;
        case 0x1be0a0u: goto label_1be0a0;
        case 0x1be0a4u: goto label_1be0a4;
        case 0x1be0a8u: goto label_1be0a8;
        case 0x1be0acu: goto label_1be0ac;
        case 0x1be0b0u: goto label_1be0b0;
        case 0x1be0b4u: goto label_1be0b4;
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0bcu: goto label_1be0bc;
        case 0x1be0c0u: goto label_1be0c0;
        case 0x1be0c4u: goto label_1be0c4;
        case 0x1be0c8u: goto label_1be0c8;
        case 0x1be0ccu: goto label_1be0cc;
        case 0x1be0d0u: goto label_1be0d0;
        case 0x1be0d4u: goto label_1be0d4;
        case 0x1be0d8u: goto label_1be0d8;
        case 0x1be0dcu: goto label_1be0dc;
        default: break;
    }

    ctx->pc = 0x1be060u;

label_1be060:
    // 0x1be060: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1be060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1be064:
    // 0x1be064: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1be068:
    // 0x1be068: 0x8c435344  lw          $v1, 0x5344($v0)
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21316)));
label_1be06c:
    // 0x1be06c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1be06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1be070:
    // 0x1be070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1be074:
    // 0x1be074: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1be074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be078:
    // 0x1be078: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1be07c:
    if (ctx->pc == 0x1BE07Cu) {
        ctx->pc = 0x1BE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE078u;
        // 0x1be07c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE080u;
        goto label_1be080;
    }
    ctx->pc = 0x1BE078u;
    {
        const bool branch_taken_0x1be078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE078u;
        // 0x1be07c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be078) {
            ctx->pc = 0x1BE0A0u;
            goto label_1be0a0;
        }
    }
    ctx->pc = 0x1BE080u;
label_1be080:
    // 0x1be080: 0xc06f7d4  jal         func_1BDF50
label_1be084:
    if (ctx->pc == 0x1BE084u) {
        ctx->pc = 0x1BE088u;
        goto label_1be088;
    }
    ctx->pc = 0x1BE080u;
    SET_GPR_U32(ctx, 31, 0x1BE088u);
    ctx->pc = 0x1BDF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDF50u, 0x1BE080u, 0x1BE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE088u;
label_1be088:
    // 0x1be088: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be08c:
    // 0x1be08c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1be090:
    if (ctx->pc == 0x1BE090u) {
        ctx->pc = 0x1BE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE08Cu;
        // 0x1be090: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE094u;
        goto label_1be094;
    }
    ctx->pc = 0x1BE08Cu;
    {
        const bool branch_taken_0x1be08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE08Cu;
        // 0x1be090: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be08c) {
            ctx->pc = 0x1BE0A0u;
            goto label_1be0a0;
        }
    }
    ctx->pc = 0x1BE094u;
label_1be094:
    // 0x1be094: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1be094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1be098:
    // 0x1be098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be09c:
    // 0x1be09c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1be09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1be0a0:
    // 0x1be0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be0a4:
    // 0x1be0a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1be0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1be0a8:
    // 0x1be0a8: 0x3e00008  jr          $ra
label_1be0ac:
    if (ctx->pc == 0x1BE0ACu) {
        ctx->pc = 0x1BE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0A8u;
        // 0x1be0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0B0u;
        goto label_1be0b0;
    }
    ctx->pc = 0x1BE0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0A8u;
        // 0x1be0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE0B0u;
label_1be0b0:
    // 0x1be0b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1be0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1be0b4:
    // 0x1be0b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be0b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1be0b8:
    // 0x1be0b8: 0x8c43c7c4  lw          $v1, -0x383C($v0)
    ctx->pc = 0x1be0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952900)));
label_1be0bc:
    // 0x1be0bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1be0c0:
    if (ctx->pc == 0x1BE0C0u) {
        ctx->pc = 0x1BE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0BCu;
        // 0x1be0c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0C4u;
        goto label_1be0c4;
    }
    ctx->pc = 0x1BE0BCu;
    {
        const bool branch_taken_0x1be0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0BCu;
        // 0x1be0c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be0bc) {
            ctx->pc = 0x1BE0D0u;
            goto label_1be0d0;
        }
    }
    ctx->pc = 0x1BE0C4u;
label_1be0c4:
    // 0x1be0c4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1be0c8:
    // 0x1be0c8: 0x60f809  jalr        $v1
label_1be0cc:
    if (ctx->pc == 0x1BE0CCu) {
        ctx->pc = 0x1BE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0C8u;
        // 0x1be0cc: 0x8c44c7c8  lw          $a0, -0x3838($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0D0u;
        goto label_1be0d0;
    }
    ctx->pc = 0x1BE0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BE0D0u);
        ctx->pc = 0x1BE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0C8u;
        // 0x1be0cc: 0x8c44c7c8  lw          $a0, -0x3838($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952904)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE0C8u, 0x1BE0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE0D0u;
label_1be0d0:
    // 0x1be0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be0d4:
    // 0x1be0d4: 0x3e00008  jr          $ra
label_1be0d8:
    if (ctx->pc == 0x1BE0D8u) {
        ctx->pc = 0x1BE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0D4u;
        // 0x1be0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE0DCu;
        goto label_1be0dc;
    }
    ctx->pc = 0x1BE0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE0D4u;
        // 0x1be0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE0DCu;
label_1be0dc:
    // 0x1be0dc: 0x0  nop
    ctx->pc = 0x1be0dcu;
    // NOP
}
