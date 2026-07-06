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

// Function: sub_0026EFE0
// Address: 0x26efe0 - 0x26f058
void sub_0026EFE0_0x26efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EFE0_0x26efe0");
#endif

    switch (ctx->pc) {
        case 0x26f000u: goto label_26f000;
        case 0x26f014u: goto label_26f014;
        case 0x26f02cu: goto label_26f02c;
        case 0x26f044u: goto label_26f044;
        default: break;
    }

    ctx->pc = 0x26efe0u;

    // 0x26efe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26efe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26efe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efe8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26efec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x26efecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26eff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26eff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26eff8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26EFF8u;
    SET_GPR_U32(ctx, 31, 0x26F000u);
    ctx->pc = 0x26EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFF8u;
    // 0x26effc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26EFF8u, 0x26F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F000u;
label_26f000:
    // 0x26f000: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26f004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f008: 0x24a59570  addiu       $a1, $a1, -0x6A90
    ctx->pc = 0x26f008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940016));
    // 0x26f00c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26F00Cu;
    SET_GPR_U32(ctx, 31, 0x26F014u);
    ctx->pc = 0x26F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F00Cu;
    // 0x26f010: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26F00Cu, 0x26F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F014u;
label_26f014:
    // 0x26f014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f018: 0x34058014  ori         $a1, $zero, 0x8014
    ctx->pc = 0x26f018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x26f01c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26f01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26f020: 0x34a56971  ori         $a1, $a1, 0x6971
    ctx->pc = 0x26f020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26993);
    // 0x26f024: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26F024u;
    SET_GPR_U32(ctx, 31, 0x26F02Cu);
    ctx->pc = 0x26F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F024u;
    // 0x26f028: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26F024u, 0x26F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F02Cu;
label_26f02c:
    // 0x26f02c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F02Cu;
    {
        const bool branch_taken_0x26f02c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F02Cu;
        // 0x26f030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f02c) {
            ctx->pc = 0x26F048u;
            goto label_26f048;
        }
    }
    ctx->pc = 0x26F034u;
    // 0x26f034: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26f034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26f038: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26f03c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26F03Cu;
    SET_GPR_U32(ctx, 31, 0x26F044u);
    ctx->pc = 0x26F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F03Cu;
    // 0x26f040: 0x24a59668  addiu       $a1, $a1, -0x6998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26F03Cu, 0x26F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F044u;
label_26f044:
    // 0x26f044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26f048:
    // 0x26f048: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26f048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f04c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26f04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f050: 0x3e00008  jr          $ra
    ctx->pc = 0x26F050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F050u;
        // 0x26f054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F058u;
}
