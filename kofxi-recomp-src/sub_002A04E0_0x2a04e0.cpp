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

// Function: sub_002A04E0
// Address: 0x2a04e0 - 0x2a0530
void sub_002A04E0_0x2a04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A04E0_0x2a04e0");
#endif

    switch (ctx->pc) {
        case 0x2a04e0u: goto label_2a04e0;
        case 0x2a04e4u: goto label_2a04e4;
        case 0x2a04e8u: goto label_2a04e8;
        case 0x2a04ecu: goto label_2a04ec;
        case 0x2a04f0u: goto label_2a04f0;
        case 0x2a04f4u: goto label_2a04f4;
        case 0x2a04f8u: goto label_2a04f8;
        case 0x2a04fcu: goto label_2a04fc;
        case 0x2a0500u: goto label_2a0500;
        case 0x2a0504u: goto label_2a0504;
        case 0x2a0508u: goto label_2a0508;
        case 0x2a050cu: goto label_2a050c;
        case 0x2a0510u: goto label_2a0510;
        case 0x2a0514u: goto label_2a0514;
        case 0x2a0518u: goto label_2a0518;
        case 0x2a051cu: goto label_2a051c;
        case 0x2a0520u: goto label_2a0520;
        case 0x2a0524u: goto label_2a0524;
        case 0x2a0528u: goto label_2a0528;
        case 0x2a052cu: goto label_2a052c;
        default: break;
    }

    ctx->pc = 0x2a04e0u;

label_2a04e0:
    // 0x2a04e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a04e4:
    // 0x2a04e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a04e8:
    // 0x2a04e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a04e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a04ec:
    // 0x2a04ec: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2a04ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a04f0:
    // 0x2a04f0: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a04f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a04f4:
    // 0x2a04f4: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2a04f4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a04f8:
    // 0x2a04f8: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x2a04f8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a04fc:
    // 0x2a04fc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2a04fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a0500:
    // 0x2a0500: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a0500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0504:
    // 0x2a0504: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a0508:
    // 0x2a0508: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2a0508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2a050c:
    // 0x2a050c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2a050cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2a0510:
    // 0x2a0510: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2a0510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2a0514:
    // 0x2a0514: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2a0514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a0518:
    // 0x2a0518: 0x40f809  jalr        $v0
label_2a051c:
    if (ctx->pc == 0x2A051Cu) {
        ctx->pc = 0x2A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0518u;
        // 0x2a051c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0520u;
        goto label_2a0520;
    }
    ctx->pc = 0x2A0518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0520u);
        ctx->pc = 0x2A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0518u;
        // 0x2a051c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0518u, 0x2A0520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0520u;
label_2a0520:
    // 0x2a0520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0524:
    // 0x2a0524: 0x3e00008  jr          $ra
label_2a0528:
    if (ctx->pc == 0x2A0528u) {
        ctx->pc = 0x2A0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0524u;
        // 0x2a0528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A052Cu;
        goto label_2a052c;
    }
    ctx->pc = 0x2A0524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0524u;
        // 0x2a0528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A052Cu;
label_2a052c:
    // 0x2a052c: 0x0  nop
    ctx->pc = 0x2a052cu;
    // NOP
    if (ctx->pc == 0x2a052cu) { ctx->pc = 0x2a0530u; }
}
