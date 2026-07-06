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

// Function: sub_00294408
// Address: 0x294408 - 0x2944f0
void sub_00294408_0x294408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294408_0x294408");
#endif

    switch (ctx->pc) {
        case 0x294408u: goto label_294408;
        case 0x29440cu: goto label_29440c;
        case 0x294410u: goto label_294410;
        case 0x294414u: goto label_294414;
        case 0x294418u: goto label_294418;
        case 0x29441cu: goto label_29441c;
        case 0x294420u: goto label_294420;
        case 0x294424u: goto label_294424;
        case 0x294428u: goto label_294428;
        case 0x29442cu: goto label_29442c;
        case 0x294430u: goto label_294430;
        case 0x294434u: goto label_294434;
        case 0x294438u: goto label_294438;
        case 0x29443cu: goto label_29443c;
        case 0x294440u: goto label_294440;
        case 0x294444u: goto label_294444;
        case 0x294448u: goto label_294448;
        case 0x29444cu: goto label_29444c;
        case 0x294450u: goto label_294450;
        case 0x294454u: goto label_294454;
        case 0x294458u: goto label_294458;
        case 0x29445cu: goto label_29445c;
        case 0x294460u: goto label_294460;
        case 0x294464u: goto label_294464;
        case 0x294468u: goto label_294468;
        case 0x29446cu: goto label_29446c;
        case 0x294470u: goto label_294470;
        case 0x294474u: goto label_294474;
        case 0x294478u: goto label_294478;
        case 0x29447cu: goto label_29447c;
        case 0x294480u: goto label_294480;
        case 0x294484u: goto label_294484;
        case 0x294488u: goto label_294488;
        case 0x29448cu: goto label_29448c;
        case 0x294490u: goto label_294490;
        case 0x294494u: goto label_294494;
        case 0x294498u: goto label_294498;
        case 0x29449cu: goto label_29449c;
        case 0x2944a0u: goto label_2944a0;
        case 0x2944a4u: goto label_2944a4;
        case 0x2944a8u: goto label_2944a8;
        case 0x2944acu: goto label_2944ac;
        case 0x2944b0u: goto label_2944b0;
        case 0x2944b4u: goto label_2944b4;
        case 0x2944b8u: goto label_2944b8;
        case 0x2944bcu: goto label_2944bc;
        case 0x2944c0u: goto label_2944c0;
        case 0x2944c4u: goto label_2944c4;
        case 0x2944c8u: goto label_2944c8;
        case 0x2944ccu: goto label_2944cc;
        case 0x2944d0u: goto label_2944d0;
        case 0x2944d4u: goto label_2944d4;
        case 0x2944d8u: goto label_2944d8;
        case 0x2944dcu: goto label_2944dc;
        case 0x2944e0u: goto label_2944e0;
        case 0x2944e4u: goto label_2944e4;
        case 0x2944e8u: goto label_2944e8;
        case 0x2944ecu: goto label_2944ec;
        default: break;
    }

    ctx->pc = 0x294408u;

label_294408:
    // 0x294408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29440c:
    // 0x29440c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_294410:
    // 0x294410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294414:
    // 0x294414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294418:
    // 0x294418: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x294418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29441c:
    // 0x29441c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_294420:
    if (ctx->pc == 0x294420u) {
        ctx->pc = 0x294420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29441Cu;
        // 0x294420: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294424u;
        goto label_294424;
    }
    ctx->pc = 0x29441Cu;
    {
        const bool branch_taken_0x29441c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x294420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29441Cu;
        // 0x294420: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29441c) {
            ctx->pc = 0x29442Cu;
            goto label_29442c;
        }
    }
    ctx->pc = 0x294424u;
label_294424:
    // 0x294424: 0x10000002  b           . + 4 + (0x2 << 2)
label_294428:
    if (ctx->pc == 0x294428u) {
        ctx->pc = 0x294428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294424u;
        // 0x294428: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29442Cu;
        goto label_29442c;
    }
    ctx->pc = 0x294424u;
    {
        const bool branch_taken_0x294424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294424u;
        // 0x294428: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294424) {
            ctx->pc = 0x294430u;
            goto label_294430;
        }
    }
    ctx->pc = 0x29442Cu;
label_29442c:
    // 0x29442c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x29442cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_294430:
    // 0x294430: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_294434:
    if (ctx->pc == 0x294434u) {
        ctx->pc = 0x294434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294430u;
        // 0x294434: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294438u;
        goto label_294438;
    }
    ctx->pc = 0x294430u;
    {
        const bool branch_taken_0x294430 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x294430) {
            ctx->pc = 0x294434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294430u;
            // 0x294434: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x294438u;
label_294438:
    // 0x294438: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x294438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_29443c:
    // 0x29443c: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x29443cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_294440:
    // 0x294440: 0x10000011  b           . + 4 + (0x11 << 2)
label_294444:
    if (ctx->pc == 0x294444u) {
        ctx->pc = 0x294444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294440u;
        // 0x294444: 0x24060075  addiu       $a2, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294448u;
        goto label_294448;
    }
    ctx->pc = 0x294440u;
    {
        const bool branch_taken_0x294440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294440u;
        // 0x294444: 0x24060075  addiu       $a2, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294440) {
            ctx->pc = 0x294488u;
            goto label_294488;
        }
    }
    ctx->pc = 0x294448u;
label_294448:
    // 0x294448: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_29444c:
    if (ctx->pc == 0x29444Cu) {
        ctx->pc = 0x294450u;
        goto label_294450;
    }
    ctx->pc = 0x294448u;
    {
        const bool branch_taken_0x294448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294448) {
            ctx->pc = 0x29446Cu;
            goto label_29446c;
        }
    }
    ctx->pc = 0x294450u;
label_294450:
    // 0x294450: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x294450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_294454:
    // 0x294454: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x294454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_294458:
    // 0x294458: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x294458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29445c:
    // 0x29445c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_294460:
    if (ctx->pc == 0x294460u) {
        ctx->pc = 0x294460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29445Cu;
        // 0x294460: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294464u;
        goto label_294464;
    }
    ctx->pc = 0x29445Cu;
    {
        const bool branch_taken_0x29445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29445c) {
            ctx->pc = 0x294460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29445Cu;
            // 0x294460: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2944B4u;
            goto label_2944b4;
        }
    }
    ctx->pc = 0x294464u;
label_294464:
    // 0x294464: 0xc0a8c0a  jal         func_2A3028
label_294468:
    if (ctx->pc == 0x294468u) {
        ctx->pc = 0x29446Cu;
        goto label_29446c;
    }
    ctx->pc = 0x294464u;
    SET_GPR_U32(ctx, 31, 0x29446Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x294464u, 0x29446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29446Cu;
label_29446c:
    // 0x29446c: 0xc0a8bf6  jal         func_2A2FD8
label_294470:
    if (ctx->pc == 0x294470u) {
        ctx->pc = 0x294470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29446Cu;
        // 0x294470: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294474u;
        goto label_294474;
    }
    ctx->pc = 0x29446Cu;
    SET_GPR_U32(ctx, 31, 0x294474u);
    ctx->pc = 0x294470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29446Cu;
    // 0x294470: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29446Cu, 0x294474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294474u;
label_294474:
    // 0x294474: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_294478:
    if (ctx->pc == 0x294478u) {
        ctx->pc = 0x294478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294474u;
        // 0x294478: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29447Cu;
        goto label_29447c;
    }
    ctx->pc = 0x294474u;
    {
        const bool branch_taken_0x294474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294474u;
        // 0x294478: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294474) {
            ctx->pc = 0x29449Cu;
            goto label_29449c;
        }
    }
    ctx->pc = 0x29447Cu;
label_29447c:
    // 0x29447c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_294480:
    // 0x294480: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x294480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_294484:
    // 0x294484: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x294484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_294488:
    // 0x294488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29448c:
    // 0x29448c: 0xc0a5648  jal         func_295920
label_294490:
    if (ctx->pc == 0x294490u) {
        ctx->pc = 0x294490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29448Cu;
        // 0x294490: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294494u;
        goto label_294494;
    }
    ctx->pc = 0x29448Cu;
    SET_GPR_U32(ctx, 31, 0x294494u);
    ctx->pc = 0x294490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29448Cu;
    // 0x294490: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29448Cu, 0x294494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294494u;
label_294494:
    // 0x294494: 0x10000011  b           . + 4 + (0x11 << 2)
label_294498:
    if (ctx->pc == 0x294498u) {
        ctx->pc = 0x294498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294494u;
        // 0x294498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29449Cu;
        goto label_29449c;
    }
    ctx->pc = 0x294494u;
    {
        const bool branch_taken_0x294494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294494u;
        // 0x294498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294494) {
            ctx->pc = 0x2944DCu;
            goto label_2944dc;
        }
    }
    ctx->pc = 0x29449Cu;
label_29449c:
    // 0x29449c: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x29449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2944a0:
    // 0x2944a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2944a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2944a4:
    // 0x2944a4: 0xc049cb6  jal         func_1272D8
label_2944a8:
    if (ctx->pc == 0x2944A8u) {
        ctx->pc = 0x2944A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944A4u;
        // 0x2944a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944ACu;
        goto label_2944ac;
    }
    ctx->pc = 0x2944A4u;
    SET_GPR_U32(ctx, 31, 0x2944ACu);
    ctx->pc = 0x2944A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2944A4u;
    // 0x2944a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2944A4u, 0x2944ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2944ACu;
label_2944ac:
    // 0x2944ac: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2944acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2944b0:
    // 0x2944b0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2944b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2944b4:
    // 0x2944b4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2944b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2944b8:
    // 0x2944b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2944bc:
    if (ctx->pc == 0x2944BCu) {
        ctx->pc = 0x2944BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944B8u;
        // 0x2944bc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944C0u;
        goto label_2944c0;
    }
    ctx->pc = 0x2944B8u;
    {
        const bool branch_taken_0x2944b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2944b8) {
            ctx->pc = 0x2944BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2944B8u;
            // 0x2944bc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2944D0u;
            goto label_2944d0;
        }
    }
    ctx->pc = 0x2944C0u;
label_2944c0:
    // 0x2944c0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2944c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2944c4:
    // 0x2944c4: 0x40f809  jalr        $v0
label_2944c8:
    if (ctx->pc == 0x2944C8u) {
        ctx->pc = 0x2944C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944C4u;
        // 0x2944c8: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944CCu;
        goto label_2944cc;
    }
    ctx->pc = 0x2944C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2944CCu);
        ctx->pc = 0x2944C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944C4u;
        // 0x2944c8: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2944C4u, 0x2944CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2944CCu;
label_2944cc:
    // 0x2944cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2944ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2944d0:
    // 0x2944d0: 0x40f809  jalr        $v0
label_2944d4:
    if (ctx->pc == 0x2944D4u) {
        ctx->pc = 0x2944D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944D0u;
        // 0x2944d4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944D8u;
        goto label_2944d8;
    }
    ctx->pc = 0x2944D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2944D8u);
        ctx->pc = 0x2944D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944D0u;
        // 0x2944d4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2944D0u, 0x2944D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2944D8u;
label_2944d8:
    // 0x2944d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2944d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2944dc:
    // 0x2944dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2944dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2944e0:
    // 0x2944e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2944e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2944e4:
    // 0x2944e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2944e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2944e8:
    // 0x2944e8: 0x3e00008  jr          $ra
label_2944ec:
    if (ctx->pc == 0x2944ECu) {
        ctx->pc = 0x2944ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944E8u;
        // 0x2944ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944F0u;
        goto label_fallthrough_0x2944e8;
    }
    ctx->pc = 0x2944E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2944ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944E8u;
        // 0x2944ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2944E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2944e8:
    ctx->pc = 0x2944F0u;
}
