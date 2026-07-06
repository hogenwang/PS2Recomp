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

// Function: sub_00294800
// Address: 0x294800 - 0x294a08
void sub_00294800_0x294800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294800_0x294800");
#endif

    switch (ctx->pc) {
        case 0x294800u: goto label_294800;
        case 0x294804u: goto label_294804;
        case 0x294808u: goto label_294808;
        case 0x29480cu: goto label_29480c;
        case 0x294810u: goto label_294810;
        case 0x294814u: goto label_294814;
        case 0x294818u: goto label_294818;
        case 0x29481cu: goto label_29481c;
        case 0x294820u: goto label_294820;
        case 0x294824u: goto label_294824;
        case 0x294828u: goto label_294828;
        case 0x29482cu: goto label_29482c;
        case 0x294830u: goto label_294830;
        case 0x294834u: goto label_294834;
        case 0x294838u: goto label_294838;
        case 0x29483cu: goto label_29483c;
        case 0x294840u: goto label_294840;
        case 0x294844u: goto label_294844;
        case 0x294848u: goto label_294848;
        case 0x29484cu: goto label_29484c;
        case 0x294850u: goto label_294850;
        case 0x294854u: goto label_294854;
        case 0x294858u: goto label_294858;
        case 0x29485cu: goto label_29485c;
        case 0x294860u: goto label_294860;
        case 0x294864u: goto label_294864;
        case 0x294868u: goto label_294868;
        case 0x29486cu: goto label_29486c;
        case 0x294870u: goto label_294870;
        case 0x294874u: goto label_294874;
        case 0x294878u: goto label_294878;
        case 0x29487cu: goto label_29487c;
        case 0x294880u: goto label_294880;
        case 0x294884u: goto label_294884;
        case 0x294888u: goto label_294888;
        case 0x29488cu: goto label_29488c;
        case 0x294890u: goto label_294890;
        case 0x294894u: goto label_294894;
        case 0x294898u: goto label_294898;
        case 0x29489cu: goto label_29489c;
        case 0x2948a0u: goto label_2948a0;
        case 0x2948a4u: goto label_2948a4;
        case 0x2948a8u: goto label_2948a8;
        case 0x2948acu: goto label_2948ac;
        case 0x2948b0u: goto label_2948b0;
        case 0x2948b4u: goto label_2948b4;
        case 0x2948b8u: goto label_2948b8;
        case 0x2948bcu: goto label_2948bc;
        case 0x2948c0u: goto label_2948c0;
        case 0x2948c4u: goto label_2948c4;
        case 0x2948c8u: goto label_2948c8;
        case 0x2948ccu: goto label_2948cc;
        case 0x2948d0u: goto label_2948d0;
        case 0x2948d4u: goto label_2948d4;
        case 0x2948d8u: goto label_2948d8;
        case 0x2948dcu: goto label_2948dc;
        case 0x2948e0u: goto label_2948e0;
        case 0x2948e4u: goto label_2948e4;
        case 0x2948e8u: goto label_2948e8;
        case 0x2948ecu: goto label_2948ec;
        case 0x2948f0u: goto label_2948f0;
        case 0x2948f4u: goto label_2948f4;
        case 0x2948f8u: goto label_2948f8;
        case 0x2948fcu: goto label_2948fc;
        case 0x294900u: goto label_294900;
        case 0x294904u: goto label_294904;
        case 0x294908u: goto label_294908;
        case 0x29490cu: goto label_29490c;
        case 0x294910u: goto label_294910;
        case 0x294914u: goto label_294914;
        case 0x294918u: goto label_294918;
        case 0x29491cu: goto label_29491c;
        case 0x294920u: goto label_294920;
        case 0x294924u: goto label_294924;
        case 0x294928u: goto label_294928;
        case 0x29492cu: goto label_29492c;
        case 0x294930u: goto label_294930;
        case 0x294934u: goto label_294934;
        case 0x294938u: goto label_294938;
        case 0x29493cu: goto label_29493c;
        case 0x294940u: goto label_294940;
        case 0x294944u: goto label_294944;
        case 0x294948u: goto label_294948;
        case 0x29494cu: goto label_29494c;
        case 0x294950u: goto label_294950;
        case 0x294954u: goto label_294954;
        case 0x294958u: goto label_294958;
        case 0x29495cu: goto label_29495c;
        case 0x294960u: goto label_294960;
        case 0x294964u: goto label_294964;
        case 0x294968u: goto label_294968;
        case 0x29496cu: goto label_29496c;
        case 0x294970u: goto label_294970;
        case 0x294974u: goto label_294974;
        case 0x294978u: goto label_294978;
        case 0x29497cu: goto label_29497c;
        case 0x294980u: goto label_294980;
        case 0x294984u: goto label_294984;
        case 0x294988u: goto label_294988;
        case 0x29498cu: goto label_29498c;
        case 0x294990u: goto label_294990;
        case 0x294994u: goto label_294994;
        case 0x294998u: goto label_294998;
        case 0x29499cu: goto label_29499c;
        case 0x2949a0u: goto label_2949a0;
        case 0x2949a4u: goto label_2949a4;
        case 0x2949a8u: goto label_2949a8;
        case 0x2949acu: goto label_2949ac;
        case 0x2949b0u: goto label_2949b0;
        case 0x2949b4u: goto label_2949b4;
        case 0x2949b8u: goto label_2949b8;
        case 0x2949bcu: goto label_2949bc;
        case 0x2949c0u: goto label_2949c0;
        case 0x2949c4u: goto label_2949c4;
        case 0x2949c8u: goto label_2949c8;
        case 0x2949ccu: goto label_2949cc;
        case 0x2949d0u: goto label_2949d0;
        case 0x2949d4u: goto label_2949d4;
        case 0x2949d8u: goto label_2949d8;
        case 0x2949dcu: goto label_2949dc;
        case 0x2949e0u: goto label_2949e0;
        case 0x2949e4u: goto label_2949e4;
        case 0x2949e8u: goto label_2949e8;
        case 0x2949ecu: goto label_2949ec;
        case 0x2949f0u: goto label_2949f0;
        case 0x2949f4u: goto label_2949f4;
        case 0x2949f8u: goto label_2949f8;
        case 0x2949fcu: goto label_2949fc;
        case 0x294a00u: goto label_294a00;
        case 0x294a04u: goto label_294a04;
        default: break;
    }

    ctx->pc = 0x294800u;

label_294800:
    // 0x294800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_294804:
    // 0x294804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294808:
    // 0x294808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29480c:
    // 0x29480c: 0xc0a3dd0  jal         func_28F740
label_294810:
    if (ctx->pc == 0x294810u) {
        ctx->pc = 0x294810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29480Cu;
        // 0x294810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294814u;
        goto label_294814;
    }
    ctx->pc = 0x29480Cu;
    SET_GPR_U32(ctx, 31, 0x294814u);
    ctx->pc = 0x294810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29480Cu;
    // 0x294810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x29480Cu, 0x294814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294814u;
label_294814:
    // 0x294814: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x294814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_294818:
    // 0x294818: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_29481c:
    if (ctx->pc == 0x29481Cu) {
        ctx->pc = 0x29481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294818u;
        // 0x29481c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294820u;
        goto label_294820;
    }
    ctx->pc = 0x294818u;
    {
        const bool branch_taken_0x294818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294818u;
        // 0x29481c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294818) {
            ctx->pc = 0x294840u;
            goto label_294840;
        }
    }
    ctx->pc = 0x294820u;
label_294820:
    // 0x294820: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x294820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_294824:
    // 0x294824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294828:
    // 0x294828: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x294828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_29482c:
    // 0x29482c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x29482cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_294830:
    // 0x294830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294834:
    // 0x294834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x294834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294838:
    // 0x294838: 0x80a5648  j           func_295920
label_29483c:
    if (ctx->pc == 0x29483Cu) {
        ctx->pc = 0x29483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294838u;
        // 0x29483c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294840u;
        goto label_294840;
    }
    ctx->pc = 0x294838u;
    ctx->pc = 0x29483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294838u;
    // 0x29483c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x294840u;
label_294840:
    // 0x294840: 0x40f809  jalr        $v0
label_294844:
    if (ctx->pc == 0x294844u) {
        ctx->pc = 0x294844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294840u;
        // 0x294844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294848u;
        goto label_294848;
    }
    ctx->pc = 0x294840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294848u);
        ctx->pc = 0x294844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294840u;
        // 0x294844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294840u, 0x294848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294848u;
label_294848:
    // 0x294848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29484c:
    // 0x29484c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29484cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294850:
    // 0x294850: 0x3e00008  jr          $ra
label_294854:
    if (ctx->pc == 0x294854u) {
        ctx->pc = 0x294854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294850u;
        // 0x294854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294858u;
        goto label_294858;
    }
    ctx->pc = 0x294850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294850u;
        // 0x294854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294858u;
label_294858:
    // 0x294858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29485c:
    // 0x29485c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294860:
    // 0x294860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_294864:
    // 0x294864: 0xc0a3dd0  jal         func_28F740
label_294868:
    if (ctx->pc == 0x294868u) {
        ctx->pc = 0x294868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294864u;
        // 0x294868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29486Cu;
        goto label_29486c;
    }
    ctx->pc = 0x294864u;
    SET_GPR_U32(ctx, 31, 0x29486Cu);
    ctx->pc = 0x294868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294864u;
    // 0x294868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x294864u, 0x29486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29486Cu;
label_29486c:
    // 0x29486c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x29486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_294870:
    // 0x294870: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_294874:
    if (ctx->pc == 0x294874u) {
        ctx->pc = 0x294874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294870u;
        // 0x294874: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294878u;
        goto label_294878;
    }
    ctx->pc = 0x294870u;
    {
        const bool branch_taken_0x294870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294870u;
        // 0x294874: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294870) {
            ctx->pc = 0x294894u;
            goto label_294894;
        }
    }
    ctx->pc = 0x294878u;
label_294878:
    // 0x294878: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x294878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_29487c:
    // 0x29487c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x29487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_294880:
    // 0x294880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294884:
    // 0x294884: 0xc0a5648  jal         func_295920
label_294888:
    if (ctx->pc == 0x294888u) {
        ctx->pc = 0x294888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294884u;
        // 0x294888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29488Cu;
        goto label_29488c;
    }
    ctx->pc = 0x294884u;
    SET_GPR_U32(ctx, 31, 0x29488Cu);
    ctx->pc = 0x294888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294884u;
    // 0x294888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x294884u, 0x29488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29488Cu;
label_29488c:
    // 0x29488c: 0x10000003  b           . + 4 + (0x3 << 2)
label_294890:
    if (ctx->pc == 0x294890u) {
        ctx->pc = 0x294890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29488Cu;
        // 0x294890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294894u;
        goto label_294894;
    }
    ctx->pc = 0x29488Cu;
    {
        const bool branch_taken_0x29488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29488Cu;
        // 0x294890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29488c) {
            ctx->pc = 0x29489Cu;
            goto label_29489c;
        }
    }
    ctx->pc = 0x294894u;
label_294894:
    // 0x294894: 0x40f809  jalr        $v0
label_294898:
    if (ctx->pc == 0x294898u) {
        ctx->pc = 0x294898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294894u;
        // 0x294898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29489Cu;
        goto label_29489c;
    }
    ctx->pc = 0x294894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29489Cu);
        ctx->pc = 0x294898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294894u;
        // 0x294898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294894u, 0x29489Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29489Cu;
label_29489c:
    // 0x29489c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2948a0:
    // 0x2948a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2948a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2948a4:
    // 0x2948a4: 0x3e00008  jr          $ra
label_2948a8:
    if (ctx->pc == 0x2948A8u) {
        ctx->pc = 0x2948A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948A4u;
        // 0x2948a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2948ACu;
        goto label_2948ac;
    }
    ctx->pc = 0x2948A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2948A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948A4u;
        // 0x2948a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2948A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948ACu;
label_2948ac:
    // 0x2948ac: 0x0  nop
    ctx->pc = 0x2948acu;
    // NOP
label_2948b0:
    // 0x2948b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2948b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2948b4:
    // 0x2948b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2948b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2948b8:
    // 0x2948b8: 0xc0a8bf6  jal         func_2A2FD8
label_2948bc:
    if (ctx->pc == 0x2948BCu) {
        ctx->pc = 0x2948BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948B8u;
        // 0x2948bc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2948C0u;
        goto label_2948c0;
    }
    ctx->pc = 0x2948B8u;
    SET_GPR_U32(ctx, 31, 0x2948C0u);
    ctx->pc = 0x2948BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948B8u;
    // 0x2948bc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2948B8u, 0x2948C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948C0u;
label_2948c0:
    // 0x2948c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2948c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2948c4:
    // 0x2948c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2948c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2948c8:
    // 0x2948c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2948c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2948cc:
    // 0x2948cc: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x2948ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
label_2948d0:
    // 0x2948d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2948d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2948d4:
    // 0x2948d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2948d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2948d8:
    // 0x2948d8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2948d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2948dc:
    // 0x2948dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2948dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2948e0:
    // 0x2948e0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2948e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_2948e4:
    // 0x2948e4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2948e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_2948e8:
    // 0x2948e8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2948e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_2948ec:
    // 0x2948ec: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2948ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_2948f0:
    // 0x2948f0: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2948f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_2948f4:
    // 0x2948f4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x2948f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_2948f8:
    // 0x2948f8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2948f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_2948fc:
    // 0x2948fc: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x2948fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_294900:
    // 0x294900: 0x3e00008  jr          $ra
label_294904:
    if (ctx->pc == 0x294904u) {
        ctx->pc = 0x294904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294900u;
        // 0x294904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294908u;
        goto label_294908;
    }
    ctx->pc = 0x294900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294900u;
        // 0x294904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294908u;
label_294908:
    // 0x294908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29490c:
    // 0x29490c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294910:
    // 0x294910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294914:
    // 0x294914: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_294918:
    if (ctx->pc == 0x294918u) {
        ctx->pc = 0x294918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294914u;
        // 0x294918: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29491Cu;
        goto label_29491c;
    }
    ctx->pc = 0x294914u;
    {
        const bool branch_taken_0x294914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x294918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294914u;
        // 0x294918: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294914) {
            ctx->pc = 0x2949F4u;
            goto label_2949f4;
        }
    }
    ctx->pc = 0x29491Cu;
label_29491c:
    // 0x29491c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x29491cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_294920:
    // 0x294920: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x294920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_294924:
    // 0x294924: 0x24e7b450  addiu       $a3, $a3, -0x4BB0
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947920));
label_294928:
    // 0x294928: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x294928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29492c:
    // 0x29492c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x29492cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_294930:
    // 0x294930: 0xc0a8b46  jal         func_2A2D18
label_294934:
    if (ctx->pc == 0x294934u) {
        ctx->pc = 0x294934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294930u;
        // 0x294934: 0x24080045  addiu       $t0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294938u;
        goto label_294938;
    }
    ctx->pc = 0x294930u;
    SET_GPR_U32(ctx, 31, 0x294938u);
    ctx->pc = 0x294934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294930u;
    // 0x294934: 0x24080045  addiu       $t0, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x294930u, 0x294938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294938u;
label_294938:
    // 0x294938: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
label_29493c:
    if (ctx->pc == 0x29493Cu) {
        ctx->pc = 0x29493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294938u;
        // 0x29493c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294940u;
        goto label_294940;
    }
    ctx->pc = 0x294938u;
    {
        const bool branch_taken_0x294938 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x29493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294938u;
        // 0x29493c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294938) {
            ctx->pc = 0x2949F8u;
            goto label_2949f8;
        }
    }
    ctx->pc = 0x294940u;
label_294940:
    // 0x294940: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x294940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_294944:
    // 0x294944: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_294948:
    if (ctx->pc == 0x294948u) {
        ctx->pc = 0x294948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294944u;
        // 0x294948: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29494Cu;
        goto label_29494c;
    }
    ctx->pc = 0x294944u;
    {
        const bool branch_taken_0x294944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294944) {
            ctx->pc = 0x294948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294944u;
            // 0x294948: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294958u;
            goto label_294958;
        }
    }
    ctx->pc = 0x29494Cu;
label_29494c:
    // 0x29494c: 0xc0a1a14  jal         func_286850
label_294950:
    if (ctx->pc == 0x294950u) {
        ctx->pc = 0x294954u;
        goto label_294954;
    }
    ctx->pc = 0x29494Cu;
    SET_GPR_U32(ctx, 31, 0x294954u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x29494Cu, 0x294954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294954u;
label_294954:
    // 0x294954: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x294954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_294958:
    // 0x294958: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_29495c:
    if (ctx->pc == 0x29495Cu) {
        ctx->pc = 0x29495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294958u;
        // 0x29495c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294960u;
        goto label_294960;
    }
    ctx->pc = 0x294958u;
    {
        const bool branch_taken_0x294958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294958) {
            ctx->pc = 0x29495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294958u;
            // 0x29495c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29496Cu;
            goto label_29496c;
        }
    }
    ctx->pc = 0x294960u;
label_294960:
    // 0x294960: 0xc0a1a14  jal         func_286850
label_294964:
    if (ctx->pc == 0x294964u) {
        ctx->pc = 0x294968u;
        goto label_294968;
    }
    ctx->pc = 0x294960u;
    SET_GPR_U32(ctx, 31, 0x294968u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x294960u, 0x294968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294968u;
label_294968:
    // 0x294968: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_29496c:
    // 0x29496c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_294970:
    if (ctx->pc == 0x294970u) {
        ctx->pc = 0x294970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29496Cu;
        // 0x294970: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294974u;
        goto label_294974;
    }
    ctx->pc = 0x29496Cu;
    {
        const bool branch_taken_0x29496c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29496c) {
            ctx->pc = 0x294970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29496Cu;
            // 0x294970: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294980u;
            goto label_294980;
        }
    }
    ctx->pc = 0x294974u;
label_294974:
    // 0x294974: 0xc0a1a14  jal         func_286850
label_294978:
    if (ctx->pc == 0x294978u) {
        ctx->pc = 0x29497Cu;
        goto label_29497c;
    }
    ctx->pc = 0x294974u;
    SET_GPR_U32(ctx, 31, 0x29497Cu);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x294974u, 0x29497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29497Cu;
label_29497c:
    // 0x29497c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_294980:
    // 0x294980: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_294984:
    if (ctx->pc == 0x294984u) {
        ctx->pc = 0x294984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294980u;
        // 0x294984: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294988u;
        goto label_294988;
    }
    ctx->pc = 0x294980u;
    {
        const bool branch_taken_0x294980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294980) {
            ctx->pc = 0x294984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294980u;
            // 0x294984: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294994u;
            goto label_294994;
        }
    }
    ctx->pc = 0x294988u;
label_294988:
    // 0x294988: 0xc0a1a14  jal         func_286850
label_29498c:
    if (ctx->pc == 0x29498Cu) {
        ctx->pc = 0x294990u;
        goto label_294990;
    }
    ctx->pc = 0x294988u;
    SET_GPR_U32(ctx, 31, 0x294990u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x294988u, 0x294990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294990u;
label_294990:
    // 0x294990: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x294990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_294994:
    // 0x294994: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_294998:
    if (ctx->pc == 0x294998u) {
        ctx->pc = 0x294998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294994u;
        // 0x294998: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29499Cu;
        goto label_29499c;
    }
    ctx->pc = 0x294994u;
    {
        const bool branch_taken_0x294994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294994) {
            ctx->pc = 0x294998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294994u;
            // 0x294998: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2949A8u;
            goto label_2949a8;
        }
    }
    ctx->pc = 0x29499Cu;
label_29499c:
    // 0x29499c: 0xc0a1a14  jal         func_286850
label_2949a0:
    if (ctx->pc == 0x2949A0u) {
        ctx->pc = 0x2949A4u;
        goto label_2949a4;
    }
    ctx->pc = 0x29499Cu;
    SET_GPR_U32(ctx, 31, 0x2949A4u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x29499Cu, 0x2949A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949A4u;
label_2949a4:
    // 0x2949a4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2949a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2949a8:
    // 0x2949a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2949ac:
    if (ctx->pc == 0x2949ACu) {
        ctx->pc = 0x2949ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949A8u;
        // 0x2949ac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2949B0u;
        goto label_2949b0;
    }
    ctx->pc = 0x2949A8u;
    {
        const bool branch_taken_0x2949a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2949a8) {
            ctx->pc = 0x2949ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2949A8u;
            // 0x2949ac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2949BCu;
            goto label_2949bc;
        }
    }
    ctx->pc = 0x2949B0u;
label_2949b0:
    // 0x2949b0: 0xc0a1a14  jal         func_286850
label_2949b4:
    if (ctx->pc == 0x2949B4u) {
        ctx->pc = 0x2949B8u;
        goto label_2949b8;
    }
    ctx->pc = 0x2949B0u;
    SET_GPR_U32(ctx, 31, 0x2949B8u);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2949B0u, 0x2949B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949B8u;
label_2949b8:
    // 0x2949b8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2949b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2949bc:
    // 0x2949bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2949c0:
    if (ctx->pc == 0x2949C0u) {
        ctx->pc = 0x2949C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949BCu;
        // 0x2949c0: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2949C4u;
        goto label_2949c4;
    }
    ctx->pc = 0x2949BCu;
    {
        const bool branch_taken_0x2949bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2949bc) {
            ctx->pc = 0x2949C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2949BCu;
            // 0x2949c0: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2949D0u;
            goto label_2949d0;
        }
    }
    ctx->pc = 0x2949C4u;
label_2949c4:
    // 0x2949c4: 0xc0a1a14  jal         func_286850
label_2949c8:
    if (ctx->pc == 0x2949C8u) {
        ctx->pc = 0x2949CCu;
        goto label_2949cc;
    }
    ctx->pc = 0x2949C4u;
    SET_GPR_U32(ctx, 31, 0x2949CCu);
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2949C4u, 0x2949CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949CCu;
label_2949cc:
    // 0x2949cc: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2949ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2949d0:
    // 0x2949d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2949d4:
    if (ctx->pc == 0x2949D4u) {
        ctx->pc = 0x2949D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949D0u;
        // 0x2949d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2949D8u;
        goto label_2949d8;
    }
    ctx->pc = 0x2949D0u;
    {
        const bool branch_taken_0x2949d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2949d0) {
            ctx->pc = 0x2949D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2949D0u;
            // 0x2949d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2949E4u;
            goto label_2949e4;
        }
    }
    ctx->pc = 0x2949D8u;
label_2949d8:
    // 0x2949d8: 0xc0a1f0c  jal         func_287C30
label_2949dc:
    if (ctx->pc == 0x2949DCu) {
        ctx->pc = 0x2949E0u;
        goto label_2949e0;
    }
    ctx->pc = 0x2949D8u;
    SET_GPR_U32(ctx, 31, 0x2949E0u);
    ctx->pc = 0x287C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C30u, 0x2949D8u, 0x2949E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949E0u;
label_2949e0:
    // 0x2949e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2949e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2949e4:
    // 0x2949e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2949e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2949e8:
    // 0x2949e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2949e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2949ec:
    // 0x2949ec: 0x80a8c0a  j           func_2A3028
label_2949f0:
    if (ctx->pc == 0x2949F0u) {
        ctx->pc = 0x2949F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949ECu;
        // 0x2949f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2949F4u;
        goto label_2949f4;
    }
    ctx->pc = 0x2949ECu;
    ctx->pc = 0x2949F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2949ECu;
    // 0x2949f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2949F4u;
label_2949f4:
    // 0x2949f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2949f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2949f8:
    // 0x2949f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2949f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2949fc:
    // 0x2949fc: 0x3e00008  jr          $ra
label_294a00:
    if (ctx->pc == 0x294A00u) {
        ctx->pc = 0x294A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949FCu;
        // 0x294a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294A04u;
        goto label_294a04;
    }
    ctx->pc = 0x2949FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2949FCu;
        // 0x294a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A04u;
label_294a04:
    // 0x294a04: 0x0  nop
    ctx->pc = 0x294a04u;
    // NOP
    if (ctx->pc == 0x294a04u) { ctx->pc = 0x294a08u; }
}
