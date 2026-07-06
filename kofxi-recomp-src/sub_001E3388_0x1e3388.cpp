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

// Function: sub_001E3388
// Address: 0x1e3388 - 0x1e39b0
void sub_001E3388_0x1e3388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3388_0x1e3388");
#endif

    switch (ctx->pc) {
        case 0x1e339cu: goto label_1e339c;
        case 0x1e33b4u: goto label_1e33b4;
        case 0x1e33f8u: goto label_1e33f8;
        case 0x1e3410u: goto label_1e3410;
        case 0x1e3420u: goto label_1e3420;
        case 0x1e3430u: goto label_1e3430;
        case 0x1e344cu: goto label_1e344c;
        case 0x1e3460u: goto label_1e3460;
        case 0x1e3468u: goto label_1e3468;
        case 0x1e3474u: goto label_1e3474;
        case 0x1e3480u: goto label_1e3480;
        case 0x1e348cu: goto label_1e348c;
        case 0x1e34a4u: goto label_1e34a4;
        case 0x1e34e4u: goto label_1e34e4;
        case 0x1e3500u: goto label_1e3500;
        case 0x1e350cu: goto label_1e350c;
        case 0x1e3520u: goto label_1e3520;
        case 0x1e3538u: goto label_1e3538;
        case 0x1e3548u: goto label_1e3548;
        case 0x1e3638u: goto label_1e3638;
        case 0x1e36ccu: goto label_1e36cc;
        case 0x1e3700u: goto label_1e3700;
        case 0x1e373cu: goto label_1e373c;
        case 0x1e3770u: goto label_1e3770;
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e3940u: goto label_1e3940;
        case 0x1e396cu: goto label_1e396c;
        default: break;
    }

    ctx->pc = 0x1e3388u;

    // 0x1e3388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e338c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e3390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e3394: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E3394u;
    SET_GPR_U32(ctx, 31, 0x1E339Cu);
    ctx->pc = 0x1E3398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3394u;
    // 0x1e3398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E3394u, 0x1E339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E339Cu;
label_1e339c:
    // 0x1e339c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e339cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e33a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e33a4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E33A4u;
    {
        const bool branch_taken_0x1e33a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A4u;
        // 0x1e33a8: 0x2484d9b8  addiu       $a0, $a0, -0x2648 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33a4) {
            ctx->pc = 0x1E33C0u;
            goto label_1e33c0;
        }
    }
    ctx->pc = 0x1E33ACu;
    // 0x1e33ac: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E33ACu;
    SET_GPR_U32(ctx, 31, 0x1E33B4u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E33ACu, 0x1E33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33B4u;
label_1e33b4:
    // 0x1e33b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E33B4u;
    {
        const bool branch_taken_0x1e33b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33B4u;
        // 0x1e33b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33b4) {
            ctx->pc = 0x1E33C4u;
            goto label_1e33c4;
        }
    }
    ctx->pc = 0x1E33BCu;
    // 0x1e33bc: 0x0  nop
    ctx->pc = 0x1e33bcu;
    // NOP
label_1e33c0:
    // 0x1e33c0: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x1e33c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_1e33c4:
    // 0x1e33c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e33c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e33c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e33c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e33cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E33CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33CCu;
        // 0x1e33d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E33D4u;
    // 0x1e33d4: 0x0  nop
    ctx->pc = 0x1e33d4u;
    // NOP
    // 0x1e33d8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1e33d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1e33dc: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x1e33dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x1e33e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e33e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33e4: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x1e33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x1e33e8: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x1e33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x1e33ec: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x1e33ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x1e33f0: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E33F0u;
    SET_GPR_U32(ctx, 31, 0x1E33F8u);
    ctx->pc = 0x1E33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E33F0u;
    // 0x1e33f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E33F0u, 0x1E33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33F8u;
label_1e33f8:
    // 0x1e33f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e33fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3400: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3400u;
    {
        const bool branch_taken_0x1e3400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3400u;
        // 0x1e3404: 0x2484d9e8  addiu       $a0, $a0, -0x2618 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3400) {
            ctx->pc = 0x1E3428u;
            goto label_1e3428;
        }
    }
    ctx->pc = 0x1E3408u;
    // 0x1e3408: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3408u;
    SET_GPR_U32(ctx, 31, 0x1E3410u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E3408u, 0x1E3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3410u;
label_1e3410:
    // 0x1e3410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3418: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1E3418u;
    SET_GPR_U32(ctx, 31, 0x1E3420u);
    ctx->pc = 0x1E341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3418u;
    // 0x1e341c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1E3418u, 0x1E3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3420u;
label_1e3420:
    // 0x1e3420: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E3420u;
    {
        const bool branch_taken_0x1e3420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3420u;
        // 0x1e3424: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3420) {
            ctx->pc = 0x1E34B0u;
            goto label_1e34b0;
        }
    }
    ctx->pc = 0x1E3428u;
label_1e3428:
    // 0x1e3428: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E3428u;
    SET_GPR_U32(ctx, 31, 0x1E3430u);
    ctx->pc = 0x1E342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3428u;
    // 0x1e342c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E3428u, 0x1E3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3430u;
label_1e3430:
    // 0x1e3430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3434: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e3434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3438: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e343c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E343Cu;
    {
        const bool branch_taken_0x1e343c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E343Cu;
        // 0x1e3440: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e343c) {
            ctx->pc = 0x1E3458u;
            goto label_1e3458;
        }
    }
    ctx->pc = 0x1E3444u;
    // 0x1e3444: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1E3444u;
    SET_GPR_U32(ctx, 31, 0x1E344Cu);
    ctx->pc = 0x1E3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3444u;
    // 0x1e3448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1E3444u, 0x1E344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E344Cu;
label_1e344c:
    // 0x1e344c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E344Cu;
    {
        const bool branch_taken_0x1e344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E344Cu;
        // 0x1e3450: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e344c) {
            ctx->pc = 0x1E34B0u;
            goto label_1e34b0;
        }
    }
    ctx->pc = 0x1E3454u;
    // 0x1e3454: 0x0  nop
    ctx->pc = 0x1e3454u;
    // NOP
label_1e3458:
    // 0x1e3458: 0xc07ec64  jal         func_1FB190
    ctx->pc = 0x1E3458u;
    SET_GPR_U32(ctx, 31, 0x1E3460u);
    ctx->pc = 0x1E345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3458u;
    // 0x1e345c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB190u, 0x1E3458u, 0x1E3460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3460u;
label_1e3460:
    // 0x1e3460: 0xc07890e  jal         func_1E2438
    ctx->pc = 0x1E3460u;
    SET_GPR_U32(ctx, 31, 0x1E3468u);
    ctx->pc = 0x1E3464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3460u;
    // 0x1e3464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2438u, 0x1E3460u, 0x1E3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3468u;
label_1e3468:
    // 0x1e3468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e346c: 0xc078928  jal         func_1E24A0
    ctx->pc = 0x1E346Cu;
    SET_GPR_U32(ctx, 31, 0x1E3474u);
    ctx->pc = 0x1E3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E346Cu;
    // 0x1e3470: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E24A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E24A0u, 0x1E346Cu, 0x1E3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3474u;
label_1e3474:
    // 0x1e3474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3478: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x1E3478u;
    SET_GPR_U32(ctx, 31, 0x1E3480u);
    ctx->pc = 0x1E347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3478u;
    // 0x1e347c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD50u, 0x1E3478u, 0x1E3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3480u;
label_1e3480:
    // 0x1e3480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3484: 0xc078cac  jal         func_1E32B0
    ctx->pc = 0x1E3484u;
    SET_GPR_U32(ctx, 31, 0x1E348Cu);
    ctx->pc = 0x1E3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3484u;
    // 0x1e3488: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E32B0u, 0x1E3484u, 0x1E348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E348Cu;
label_1e348c:
    // 0x1e348c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3490: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1e3490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1e3494: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3498: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e3498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e349c: 0xc07ec8c  jal         func_1FB230
    ctx->pc = 0x1E349Cu;
    SET_GPR_U32(ctx, 31, 0x1E34A4u);
    ctx->pc = 0x1E34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E349Cu;
    // 0x1e34a0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB230u, 0x1E349Cu, 0x1E34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34A4u;
label_1e34a4:
    // 0x1e34a4: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x1e34a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34a8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1e34a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1e34ac: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x1e34acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_1e34b0:
    // 0x1e34b0: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x1e34b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e34b4: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x1e34b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e34b8: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x1e34b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e34bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E34BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34BCu;
        // 0x1e34c0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E34BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E34C4u;
    // 0x1e34c4: 0x0  nop
    ctx->pc = 0x1e34c4u;
    // NOP
    // 0x1e34c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e34c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e34cc: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1e34ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1e34d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e34d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34d4: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1e34d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1e34d8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1e34d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1e34dc: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E34DCu;
    SET_GPR_U32(ctx, 31, 0x1E34E4u);
    ctx->pc = 0x1E34E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E34DCu;
    // 0x1e34e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E34DCu, 0x1E34E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34E4u;
label_1e34e4:
    // 0x1e34e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e34e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e34ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34f0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E34F0u;
    {
        const bool branch_taken_0x1e34f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34F0u;
        // 0x1e34f4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34f0) {
            ctx->pc = 0x1E3518u;
            goto label_1e3518;
        }
    }
    ctx->pc = 0x1E34F8u;
    // 0x1e34f8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1E34F8u;
    SET_GPR_U32(ctx, 31, 0x1E3500u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1E34F8u, 0x1E3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3500u;
label_1e3500:
    // 0x1e3500: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e3504: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3504u;
    SET_GPR_U32(ctx, 31, 0x1E350Cu);
    ctx->pc = 0x1E3508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3504u;
    // 0x1e3508: 0x2484da18  addiu       $a0, $a0, -0x25E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E3504u, 0x1E350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E350Cu;
label_1e350c:
    // 0x1e350c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1E350Cu;
    {
        const bool branch_taken_0x1e350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E350Cu;
        // 0x1e3510: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e350c) {
            ctx->pc = 0x1E35ACu;
            goto label_1e35ac;
        }
    }
    ctx->pc = 0x1E3514u;
    // 0x1e3514: 0x0  nop
    ctx->pc = 0x1e3514u;
    // NOP
label_1e3518:
    // 0x1e3518: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E3518u;
    SET_GPR_U32(ctx, 31, 0x1E3520u);
    ctx->pc = 0x1E351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3518u;
    // 0x1e351c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E3518u, 0x1E3520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3520u;
label_1e3520:
    // 0x1e3520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3524: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3528: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3528u;
    {
        const bool branch_taken_0x1e3528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3528u;
        // 0x1e352c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3528) {
            ctx->pc = 0x1E3540u;
            goto label_1e3540;
        }
    }
    ctx->pc = 0x1E3530u;
    // 0x1e3530: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1E3530u;
    SET_GPR_U32(ctx, 31, 0x1E3538u);
    ctx->pc = 0x1E3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3530u;
    // 0x1e3534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1E3530u, 0x1E3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3538u;
label_1e3538:
    // 0x1e3538: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E3538u;
    {
        const bool branch_taken_0x1e3538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3538u;
        // 0x1e353c: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3538) {
            ctx->pc = 0x1E35ACu;
            goto label_1e35ac;
        }
    }
    ctx->pc = 0x1E3540u;
label_1e3540:
    // 0x1e3540: 0xc07ec64  jal         func_1FB190
    ctx->pc = 0x1E3540u;
    SET_GPR_U32(ctx, 31, 0x1E3548u);
    ctx->pc = 0x1E3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3540u;
    // 0x1e3544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB190u, 0x1E3540u, 0x1E3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3548u;
label_1e3548:
    // 0x1e3548: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x1e3548u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e354c: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x1e354cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3550: 0xdfa50048  ld          $a1, 0x48($sp)
    ctx->pc = 0x1e3550u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e3554: 0xdfa60050  ld          $a2, 0x50($sp)
    ctx->pc = 0x1e3554u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3558: 0xdfa70058  ld          $a3, 0x58($sp)
    ctx->pc = 0x1e3558u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e355c: 0xdfa80060  ld          $t0, 0x60($sp)
    ctx->pc = 0x1e355cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3560: 0xdfa90068  ld          $t1, 0x68($sp)
    ctx->pc = 0x1e3560u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e3564: 0xdfaa0070  ld          $t2, 0x70($sp)
    ctx->pc = 0x1e3564u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3568: 0xdfab0078  ld          $t3, 0x78($sp)
    ctx->pc = 0x1e3568u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e356c: 0xdfac0080  ld          $t4, 0x80($sp)
    ctx->pc = 0x1e356cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3570: 0xdfad0088  ld          $t5, 0x88($sp)
    ctx->pc = 0x1e3570u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e3574: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x1e3574u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e3578: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e3578u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e357c: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x1e357cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x1e3580: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1e3580u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1e3584: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x1e3584u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x1e3588: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x1e3588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x1e358c: 0xfe070020  sd          $a3, 0x20($s0)
    ctx->pc = 0x1e358cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 7));
    // 0x1e3590: 0xfe080028  sd          $t0, 0x28($s0)
    ctx->pc = 0x1e3590u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 8));
    // 0x1e3594: 0xfe090030  sd          $t1, 0x30($s0)
    ctx->pc = 0x1e3594u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 9));
    // 0x1e3598: 0xfe0a0038  sd          $t2, 0x38($s0)
    ctx->pc = 0x1e3598u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 10));
    // 0x1e359c: 0xfe0b0040  sd          $t3, 0x40($s0)
    ctx->pc = 0x1e359cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 11));
    // 0x1e35a0: 0xfe0c0048  sd          $t4, 0x48($s0)
    ctx->pc = 0x1e35a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 12));
    // 0x1e35a4: 0xfe0d0050  sd          $t5, 0x50($s0)
    ctx->pc = 0x1e35a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 13));
    // 0x1e35a8: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1e35a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1e35ac:
    // 0x1e35ac: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1e35acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e35b0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1e35b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e35b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E35B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35B4u;
        // 0x1e35b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E35B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E35BCu;
    // 0x1e35bc: 0x0  nop
    ctx->pc = 0x1e35bcu;
    // NOP
    // 0x1e35c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e35c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e35c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e35c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e35cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e35d0: 0x8c6703cc  lw          $a3, 0x3CC($v1)
    ctx->pc = 0x1e35d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 972)));
    // 0x1e35d4: 0x24453fff  addiu       $a1, $v0, 0x3FFF
    ctx->pc = 0x1e35d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16383));
    // 0x1e35d8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1e35d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e35dc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1e35dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1e35e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e35e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e35e4: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x1e35e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x1e35e8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1e35e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35ec: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1e35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1e35f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e35f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e35f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e35f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e35f8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1e35f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e35fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e35fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e3600: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e3600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e3604: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1e3604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e3608: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x1e3608u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x1e360c: 0x8078a2e  j           func_1E28B8
    ctx->pc = 0x1E360Cu;
    ctx->pc = 0x1E3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E360Cu;
    // 0x1e3610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28B8u, 0x1E360Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E3614u;
    // 0x1e3614: 0x0  nop
    ctx->pc = 0x1e3614u;
    // NOP
    // 0x1e3618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e361c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e361cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3624: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1e3624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e3628: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3628u;
    {
        const bool branch_taken_0x1e3628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3628u;
        // 0x1e362c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3628) {
            ctx->pc = 0x1E363Cu;
            goto label_1e363c;
        }
    }
    ctx->pc = 0x1E3630u;
    // 0x1e3630: 0xc079f48  jal         func_1E7D20
    ctx->pc = 0x1E3630u;
    SET_GPR_U32(ctx, 31, 0x1E3638u);
    ctx->pc = 0x1E3634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3630u;
    // 0x1e3634: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D20u, 0x1E3630u, 0x1E3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3638u;
label_1e3638:
    // 0x1e3638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e363c:
    // 0x1e363c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e363cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3640: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3640u;
        // 0x1e3644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3648u;
    // 0x1e3648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e364c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e364cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3650: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E3650u;
    {
        const bool branch_taken_0x1e3650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3650u;
        // 0x1e3654: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3650) {
            ctx->pc = 0x1E36A0u;
            goto label_1e36a0;
        }
    }
    ctx->pc = 0x1E3658u;
    // 0x1e3658: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1e3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e365c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1e365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e3660: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3660u;
    {
        const bool branch_taken_0x1e3660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3660u;
        // 0x1e3664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3660) {
            ctx->pc = 0x1E3690u;
            goto label_1e3690;
        }
    }
    ctx->pc = 0x1E3668u;
    // 0x1e3668: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E3668u;
    {
        const bool branch_taken_0x1e3668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3668u;
        // 0x1e366c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3668) {
            ctx->pc = 0x1E36A0u;
            goto label_1e36a0;
        }
    }
    ctx->pc = 0x1E3670u;
    // 0x1e3670: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1e3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1e3674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3674u;
    {
        const bool branch_taken_0x1e3674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3674u;
        // 0x1e3678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3674) {
            ctx->pc = 0x1E3688u;
            goto label_1e3688;
        }
    }
    ctx->pc = 0x1E367Cu;
    // 0x1e367c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3680: 0x8079f52  j           func_1E7D48
    ctx->pc = 0x1E3680u;
    ctx->pc = 0x1E3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3680u;
    // 0x1e3684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D48u;
    sub_001E7D48_0x1e7d48(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3688u;
label_1e3688:
    // 0x1e3688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3688u;
    {
        const bool branch_taken_0x1e3688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3688u;
        // 0x1e368c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3688) {
            ctx->pc = 0x1E36A0u;
            goto label_1e36a0;
        }
    }
    ctx->pc = 0x1E3690u;
label_1e3690:
    // 0x1e3690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3694: 0x8079f52  j           func_1E7D48
    ctx->pc = 0x1E3694u;
    ctx->pc = 0x1E3698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3694u;
    // 0x1e3698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D48u;
    sub_001E7D48_0x1e7d48(rdram, ctx, runtime); return;
    ctx->pc = 0x1E369Cu;
    // 0x1e369c: 0x0  nop
    ctx->pc = 0x1e369cu;
    // NOP
label_1e36a0:
    // 0x1e36a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e36a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e36a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E36A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36A4u;
        // 0x1e36a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E36A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E36ACu;
    // 0x1e36ac: 0x0  nop
    ctx->pc = 0x1e36acu;
    // NOP
    // 0x1e36b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e36b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e36b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e36b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e36bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e36c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e36c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e36c4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E36C4u;
    SET_GPR_U32(ctx, 31, 0x1E36CCu);
    ctx->pc = 0x1E36C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36C4u;
    // 0x1e36c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E36C4u, 0x1E36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36CCu;
label_1e36cc:
    // 0x1e36cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e36d0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E36D0u;
    {
        const bool branch_taken_0x1e36d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36D0u;
        // 0x1e36d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36d0) {
            ctx->pc = 0x1E36F8u;
            goto label_1e36f8;
        }
    }
    ctx->pc = 0x1E36D8u;
    // 0x1e36d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e36dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e36dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e36e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e36e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e36e4: 0x2484da48  addiu       $a0, $a0, -0x25B8
    ctx->pc = 0x1e36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957640));
    // 0x1e36e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e36e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e36ec: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E36ECu;
    ctx->pc = 0x1E36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36ECu;
    // 0x1e36f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E36F4u;
    // 0x1e36f4: 0x0  nop
    ctx->pc = 0x1e36f4u;
    // NOP
label_1e36f8:
    // 0x1e36f8: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E36F8u;
    SET_GPR_U32(ctx, 31, 0x1E3700u);
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E36F8u, 0x1E3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3700u;
label_1e3700:
    // 0x1e3700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e370c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e370cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3714: 0x807dcc2  j           func_1F7308
    ctx->pc = 0x1E3714u;
    ctx->pc = 0x1E3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3714u;
    // 0x1e3718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7308u;
    sub_001F7308_0x1f7308(rdram, ctx, runtime); return;
    ctx->pc = 0x1E371Cu;
    // 0x1e371c: 0x0  nop
    ctx->pc = 0x1e371cu;
    // NOP
    // 0x1e3720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e372c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1e372cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e3730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e3730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e3734: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E3734u;
    SET_GPR_U32(ctx, 31, 0x1E373Cu);
    ctx->pc = 0x1E3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3734u;
    // 0x1e3738: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E3734u, 0x1E373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E373Cu;
label_1e373c:
    // 0x1e373c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3740: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3740u;
    {
        const bool branch_taken_0x1e3740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3740u;
        // 0x1e3744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3740) {
            ctx->pc = 0x1E3768u;
            goto label_1e3768;
        }
    }
    ctx->pc = 0x1E3748u;
    // 0x1e3748: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e374c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e374cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3750: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e3750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3754: 0x2484da78  addiu       $a0, $a0, -0x2588
    ctx->pc = 0x1e3754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957688));
    // 0x1e3758: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1e3758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e375c: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E375Cu;
    ctx->pc = 0x1E3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E375Cu;
    // 0x1e3760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3764u;
    // 0x1e3764: 0x0  nop
    ctx->pc = 0x1e3764u;
    // NOP
label_1e3768:
    // 0x1e3768: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E3768u;
    SET_GPR_U32(ctx, 31, 0x1E3770u);
    ctx->pc = 0x1E2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2398u, 0x1E3768u, 0x1E3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3770u;
label_1e3770:
    // 0x1e3770: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1e3774: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3778: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e3778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e377c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e377cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3784: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1e3784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1e3788: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e3788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e378c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e378cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e3790: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e3790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e3794: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e3794u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e379c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e379cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e37a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E37A0u;
    {
        const bool branch_taken_0x1e37a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37A0u;
        // 0x1e37a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37a0) {
            ctx->pc = 0x1E37ACu;
            goto label_1e37ac;
        }
    }
    ctx->pc = 0x1E37A8u;
    // 0x1e37a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e37a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e37ac:
    // 0x1e37ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e37acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e37b0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e37b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e37b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e37b8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1e37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e37bc: 0x807dcc2  j           func_1F7308
    ctx->pc = 0x1E37BCu;
    ctx->pc = 0x1E37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E37BCu;
    // 0x1e37c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7308u;
    sub_001F7308_0x1f7308(rdram, ctx, runtime); return;
    ctx->pc = 0x1E37C4u;
    // 0x1e37c4: 0x0  nop
    ctx->pc = 0x1e37c4u;
    // NOP
    // 0x1e37c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e37c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e37cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e37ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e37d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e37d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e37d4: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1e37d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1e37d8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e37dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e37dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e37e0: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E37E0u;
    ctx->pc = 0x1E37E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E37E0u;
    // 0x1e37e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E37E8u;
    // 0x1e37e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e37e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e37ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e37ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e37f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e37f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e37f4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e37f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e37f8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e37fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e37fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3800: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3800u;
    ctx->pc = 0x1E3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3800u;
    // 0x1e3804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3808u;
    // 0x1e3808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e380c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e380cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3814: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x1e3814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1e3818: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e3818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e381c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e381cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3820: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3820u;
    ctx->pc = 0x1E3824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3820u;
    // 0x1e3824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3828u;
    // 0x1e3828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e382c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e382cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3834: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1e3834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1e3838: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e3838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e383c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e383cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3840: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3840u;
    ctx->pc = 0x1E3844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3840u;
    // 0x1e3844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3848u;
    // 0x1e3848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e384c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e384cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3854: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x1e3854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1e3858: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e3858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e385c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e385cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3860: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3860u;
    ctx->pc = 0x1E3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3860u;
    // 0x1e3864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3868u;
    // 0x1e3868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e386c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3870: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e3870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e3874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3878: 0x807ec2a  j           func_1FB0A8
    ctx->pc = 0x1E3878u;
    ctx->pc = 0x1E387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3878u;
    // 0x1e387c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB0A8u, 0x1E3878u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E3880u;
    // 0x1e3880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3888: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e3888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e388c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e388cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3890: 0x807ec0e  j           func_1FB038
    ctx->pc = 0x1E3890u;
    ctx->pc = 0x1E3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3890u;
    // 0x1e3894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB038u, 0x1E3890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E3898u;
    // 0x1e3898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e389c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e38a0: 0xc07ec1e  jal         func_1FB078
    ctx->pc = 0x1E38A0u;
    SET_GPR_U32(ctx, 31, 0x1E38A8u);
    ctx->pc = 0x1E38A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38A0u;
    // 0x1e38a4: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB078u, 0x1E38A0u, 0x1E38A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38A8u;
label_1e38a8:
    // 0x1e38a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e38a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e38ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E38ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38ACu;
        // 0x1e38b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E38ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E38B4u;
    // 0x1e38b4: 0x0  nop
    ctx->pc = 0x1e38b4u;
    // NOP
    // 0x1e38b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e38b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e38bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e38bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e38c0: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e38c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e38c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e38c8: 0x807ec22  j           func_1FB088
    ctx->pc = 0x1E38C8u;
    ctx->pc = 0x1E38CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38C8u;
    // 0x1e38cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB088u, 0x1E38C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E38D0u;
    // 0x1e38d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e38d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e38d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e38d8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e38dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e38dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e38e0: 0x807b6ba  j           func_1EDAE8
    ctx->pc = 0x1E38E0u;
    ctx->pc = 0x1E38E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38E0u;
    // 0x1e38e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAE8u;
    sub_001EDAE8_0x1edae8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E38E8u;
    // 0x1e38e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e38e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e38ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e38ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e38f0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1e38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e38f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e38f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e38f8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1e38f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e38fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E38FCu;
    {
        const bool branch_taken_0x1e38fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38FCu;
        // 0x1e3900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38fc) {
            ctx->pc = 0x1E3918u;
            goto label_1e3918;
        }
    }
    ctx->pc = 0x1E3904u;
    // 0x1e3904: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e3904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e3908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e390c: 0x2484daa8  addiu       $a0, $a0, -0x2558
    ctx->pc = 0x1e390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957736));
    // 0x1e3910: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E3910u;
    ctx->pc = 0x1E3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3910u;
    // 0x1e3914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3918u;
label_1e3918:
    // 0x1e3918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e391c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1e3920: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E3920u;
    ctx->pc = 0x1E3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3920u;
    // 0x1e3924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3928u;
    // 0x1e3928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e392c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3930: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e3930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1e3934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3938: 0xc07ebda  jal         func_1FAF68
    ctx->pc = 0x1E3938u;
    SET_GPR_U32(ctx, 31, 0x1E3940u);
    ctx->pc = 0x1E393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3938u;
    // 0x1e393c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF68u, 0x1E3938u, 0x1E3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3940u;
label_1e3940:
    // 0x1e3940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e3940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3948: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3948u;
        // 0x1e394c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3950u;
    // 0x1e3950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3958: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e3958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e395c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3964: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E3964u;
    SET_GPR_U32(ctx, 31, 0x1E396Cu);
    ctx->pc = 0x1E3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3964u;
    // 0x1e3968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E3964u, 0x1E396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E396Cu;
label_1e396c:
    // 0x1e396c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e396cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e3970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3974: 0x2484dad0  addiu       $a0, $a0, -0x2530
    ctx->pc = 0x1e3974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957776));
    // 0x1e3978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e3978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e397c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E397Cu;
    {
        const bool branch_taken_0x1e397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E397Cu;
        // 0x1e3980: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e397c) {
            ctx->pc = 0x1E3998u;
            goto label_1e3998;
        }
    }
    ctx->pc = 0x1E3984u;
    // 0x1e3984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e3988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e398c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3990: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E3990u;
    ctx->pc = 0x1E3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3990u;
    // 0x1e3994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3998u;
label_1e3998:
    // 0x1e3998: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x1e3998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1e399c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e399cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e39a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e39a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e39a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e39a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e39a8: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E39A8u;
    ctx->pc = 0x1E39ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E39A8u;
    // 0x1e39ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E39B0u;
}
