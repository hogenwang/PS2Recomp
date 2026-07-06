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

// Function: sub_0023D448
// Address: 0x23d448 - 0x23d498
void sub_0023D448_0x23d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D448_0x23d448");
#endif

    switch (ctx->pc) {
        case 0x23d448u: goto label_23d448;
        case 0x23d44cu: goto label_23d44c;
        case 0x23d450u: goto label_23d450;
        case 0x23d454u: goto label_23d454;
        case 0x23d458u: goto label_23d458;
        case 0x23d45cu: goto label_23d45c;
        case 0x23d460u: goto label_23d460;
        case 0x23d464u: goto label_23d464;
        case 0x23d468u: goto label_23d468;
        case 0x23d46cu: goto label_23d46c;
        case 0x23d470u: goto label_23d470;
        case 0x23d474u: goto label_23d474;
        case 0x23d478u: goto label_23d478;
        case 0x23d47cu: goto label_23d47c;
        case 0x23d480u: goto label_23d480;
        case 0x23d484u: goto label_23d484;
        case 0x23d488u: goto label_23d488;
        case 0x23d48cu: goto label_23d48c;
        case 0x23d490u: goto label_23d490;
        case 0x23d494u: goto label_23d494;
        default: break;
    }

    ctx->pc = 0x23d448u;

label_23d448:
    // 0x23d448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23d44c:
    // 0x23d44c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d450:
    // 0x23d450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23d454:
    // 0x23d454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d458:
    // 0x23d458: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x23d458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_23d45c:
    // 0x23d45c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x23d45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_23d460:
    // 0x23d460: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23d464:
    if (ctx->pc == 0x23D464u) {
        ctx->pc = 0x23D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D460u;
        // 0x23d464: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D468u;
        goto label_23d468;
    }
    ctx->pc = 0x23D460u;
    {
        const bool branch_taken_0x23d460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D460u;
        // 0x23d464: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d460) {
            ctx->pc = 0x23D48Cu;
            goto label_23d48c;
        }
    }
    ctx->pc = 0x23D468u;
label_23d468:
    // 0x23d468: 0xc08f4fc  jal         func_23D3F0
label_23d46c:
    if (ctx->pc == 0x23D46Cu) {
        ctx->pc = 0x23D470u;
        goto label_23d470;
    }
    ctx->pc = 0x23D468u;
    SET_GPR_U32(ctx, 31, 0x23D470u);
    ctx->pc = 0x23D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F0u, 0x23D468u, 0x23D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D470u;
label_23d470:
    // 0x23d470: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23d474:
    if (ctx->pc == 0x23D474u) {
        ctx->pc = 0x23D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D470u;
        // 0x23d474: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D478u;
        goto label_23d478;
    }
    ctx->pc = 0x23D470u;
    {
        const bool branch_taken_0x23d470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D470u;
        // 0x23d474: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d470) {
            ctx->pc = 0x23D48Cu;
            goto label_23d48c;
        }
    }
    ctx->pc = 0x23D478u;
label_23d478:
    // 0x23d478: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23d478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23d47c:
    // 0x23d47c: 0x8c625074  lw          $v0, 0x5074($v1)
    ctx->pc = 0x23d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20596)));
label_23d480:
    // 0x23d480: 0x40f809  jalr        $v0
label_23d484:
    if (ctx->pc == 0x23D484u) {
        ctx->pc = 0x23D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D480u;
        // 0x23d484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D488u;
        goto label_23d488;
    }
    ctx->pc = 0x23D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D488u);
        ctx->pc = 0x23D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D480u;
        // 0x23d484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D480u, 0x23D488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D488u;
label_23d488:
    // 0x23d488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d48c:
    // 0x23d48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d490:
    // 0x23d490: 0x3e00008  jr          $ra
label_23d494:
    if (ctx->pc == 0x23D494u) {
        ctx->pc = 0x23D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D490u;
        // 0x23d494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D498u;
        goto label_fallthrough_0x23d490;
    }
    ctx->pc = 0x23D490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D490u;
        // 0x23d494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23d490:
    ctx->pc = 0x23D498u;
}
