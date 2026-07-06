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

// Function: sub_002A0440
// Address: 0x2a0440 - 0x2a0490
void sub_002A0440_0x2a0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0440_0x2a0440");
#endif

    switch (ctx->pc) {
        case 0x2a0440u: goto label_2a0440;
        case 0x2a0444u: goto label_2a0444;
        case 0x2a0448u: goto label_2a0448;
        case 0x2a044cu: goto label_2a044c;
        case 0x2a0450u: goto label_2a0450;
        case 0x2a0454u: goto label_2a0454;
        case 0x2a0458u: goto label_2a0458;
        case 0x2a045cu: goto label_2a045c;
        case 0x2a0460u: goto label_2a0460;
        case 0x2a0464u: goto label_2a0464;
        case 0x2a0468u: goto label_2a0468;
        case 0x2a046cu: goto label_2a046c;
        case 0x2a0470u: goto label_2a0470;
        case 0x2a0474u: goto label_2a0474;
        case 0x2a0478u: goto label_2a0478;
        case 0x2a047cu: goto label_2a047c;
        case 0x2a0480u: goto label_2a0480;
        case 0x2a0484u: goto label_2a0484;
        case 0x2a0488u: goto label_2a0488;
        case 0x2a048cu: goto label_2a048c;
        default: break;
    }

    ctx->pc = 0x2a0440u;

label_2a0440:
    // 0x2a0440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a0444:
    // 0x2a0444: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0448:
    // 0x2a0448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a044c:
    // 0x2a044c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2a044cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a0450:
    // 0x2a0450: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a0450u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a0454:
    // 0x2a0454: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2a0454u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a0458:
    // 0x2a0458: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x2a0458u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a045c:
    // 0x2a045c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2a045cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a0460:
    // 0x2a0460: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a0460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0464:
    // 0x2a0464: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a0464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a0468:
    // 0x2a0468: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2a0468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2a046c:
    // 0x2a046c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2a046cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2a0470:
    // 0x2a0470: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2a0470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2a0474:
    // 0x2a0474: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2a0474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a0478:
    // 0x2a0478: 0x40f809  jalr        $v0
label_2a047c:
    if (ctx->pc == 0x2A047Cu) {
        ctx->pc = 0x2A047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0478u;
        // 0x2a047c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0480u;
        goto label_2a0480;
    }
    ctx->pc = 0x2A0478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0480u);
        ctx->pc = 0x2A047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0478u;
        // 0x2a047c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0478u, 0x2A0480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0480u;
label_2a0480:
    // 0x2a0480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0484:
    // 0x2a0484: 0x3e00008  jr          $ra
label_2a0488:
    if (ctx->pc == 0x2A0488u) {
        ctx->pc = 0x2A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0484u;
        // 0x2a0488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A048Cu;
        goto label_2a048c;
    }
    ctx->pc = 0x2A0484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0484u;
        // 0x2a0488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A048Cu;
label_2a048c:
    // 0x2a048c: 0x0  nop
    ctx->pc = 0x2a048cu;
    // NOP
}
