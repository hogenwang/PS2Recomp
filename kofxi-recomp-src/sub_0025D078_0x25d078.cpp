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

// Function: sub_0025D078
// Address: 0x25d078 - 0x25d108
void sub_0025D078_0x25d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D078_0x25d078");
#endif

    switch (ctx->pc) {
        case 0x25d098u: goto label_25d098;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0d4u: goto label_25d0d4;
        case 0x25d0e0u: goto label_25d0e0;
        case 0x25d0ecu: goto label_25d0ec;
        default: break;
    }

    ctx->pc = 0x25d078u;

    // 0x25d078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d07c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25d080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d084: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d088: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d08c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25d08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25d090: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25D090u;
    SET_GPR_U32(ctx, 31, 0x25D098u);
    ctx->pc = 0x25D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D090u;
    // 0x25d094: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25D090u, 0x25D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D098u;
label_25d098:
    // 0x25d098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d09c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25D09Cu;
    {
        const bool branch_taken_0x25d09c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D09Cu;
        // 0x25d0a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d09c) {
            ctx->pc = 0x25D0ECu;
            goto label_25d0ec;
        }
    }
    ctx->pc = 0x25D0A4u;
    // 0x25d0a4: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25D0A4u;
    SET_GPR_U32(ctx, 31, 0x25D0ACu);
    ctx->pc = 0x25D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0A4u;
    // 0x25d0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25D0A4u, 0x25D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0ACu;
label_25d0ac:
    // 0x25d0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0b0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D0B0u;
    {
        const bool branch_taken_0x25d0b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0B0u;
        // 0x25d0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0b0) {
            ctx->pc = 0x25D0C0u;
            goto label_25d0c0;
        }
    }
    ctx->pc = 0x25D0B8u;
    // 0x25d0b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25D0B8u;
    {
        const bool branch_taken_0x25d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0B8u;
        // 0x25d0bc: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0b8) {
            ctx->pc = 0x25D0D8u;
            goto label_25d0d8;
        }
    }
    ctx->pc = 0x25D0C0u;
label_25d0c0:
    // 0x25d0c0: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25D0C0u;
    SET_GPR_U32(ctx, 31, 0x25D0C8u);
    ctx->pc = 0x25D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0C0u;
    // 0x25d0c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE98u, 0x25D0C0u, 0x25D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0C8u;
label_25d0c8:
    // 0x25d0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0cc: 0xc08b7f2  jal         func_22DFC8
    ctx->pc = 0x25D0CCu;
    SET_GPR_U32(ctx, 31, 0x25D0D4u);
    ctx->pc = 0x25D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0CCu;
    // 0x25d0d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DFC8u, 0x25D0CCu, 0x25D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0D4u;
label_25d0d4:
    // 0x25d0d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d0d8:
    // 0x25d0d8: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25D0D8u;
    SET_GPR_U32(ctx, 31, 0x25D0E0u);
    ctx->pc = 0x25D0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0D8u;
    // 0x25d0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEB0u, 0x25D0D8u, 0x25D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0E0u;
label_25d0e0:
    // 0x25d0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0e4: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D0E4u;
    SET_GPR_U32(ctx, 31, 0x25D0ECu);
    ctx->pc = 0x25D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0E4u;
    // 0x25d0e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25D0E4u, 0x25D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0ECu;
label_25d0ec:
    // 0x25d0ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25d0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d0f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25d0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d0f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25d0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25d0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0FCu;
        // 0x25d100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D104u;
    // 0x25d104: 0x0  nop
    ctx->pc = 0x25d104u;
    // NOP
    if (ctx->pc == 0x25d104u) { ctx->pc = 0x25d108u; }
}
