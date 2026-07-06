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

// Function: sub_00312490
// Address: 0x312490 - 0x3125d0
void sub_00312490_0x312490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312490_0x312490");
#endif

    switch (ctx->pc) {
        case 0x3124acu: goto label_3124ac;
        case 0x3124d8u: goto label_3124d8;
        case 0x312504u: goto label_312504;
        case 0x31251cu: goto label_31251c;
        case 0x31255cu: goto label_31255c;
        case 0x312574u: goto label_312574;
        case 0x31257cu: goto label_31257c;
        case 0x312590u: goto label_312590;
        case 0x3125b0u: goto label_3125b0;
        case 0x3125bcu: goto label_3125bc;
        default: break;
    }

    ctx->pc = 0x312490u;

    // 0x312490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312494: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x312494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x312498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31249c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3124a0: 0xac4029dc  sw          $zero, 0x29DC($v0)
    ctx->pc = 0x3124a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10716), GPR_U32(ctx, 0));
    // 0x3124a4: 0xc09cfa4  jal         func_273E90
    ctx->pc = 0x3124A4u;
    SET_GPR_U32(ctx, 31, 0x3124ACu);
    ctx->pc = 0x3124A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124A4u;
    // 0x3124a8: 0x248429d0  addiu       $a0, $a0, 0x29D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273E90u, 0x3124A4u, 0x3124ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124ACu;
label_3124ac:
    // 0x3124ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3124ACu;
    {
        const bool branch_taken_0x3124ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3124ac) {
            ctx->pc = 0x3124C0u;
            goto label_3124c0;
        }
    }
    ctx->pc = 0x3124B4u;
    // 0x3124b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3124b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3124b8: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x3124b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3124bc: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x3124bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3124c0:
    // 0x3124c0: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x3124c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x3124c4: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x3124c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x3124c8: 0x248429c0  addiu       $a0, $a0, 0x29C0
    ctx->pc = 0x3124c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10688));
    // 0x3124cc: 0x24a529d0  addiu       $a1, $a1, 0x29D0
    ctx->pc = 0x3124ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10704));
    // 0x3124d0: 0xc049c22  jal         func_127088
    ctx->pc = 0x3124D0u;
    SET_GPR_U32(ctx, 31, 0x3124D8u);
    ctx->pc = 0x3124D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124D0u;
    // 0x3124d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x3124D0u, 0x3124D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124D8u;
label_3124d8:
    // 0x3124d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3124D8u;
    {
        const bool branch_taken_0x3124d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3124d8) {
            ctx->pc = 0x31251Cu;
            goto label_31251c;
        }
    }
    ctx->pc = 0x3124E0u;
    // 0x3124e0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3124e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3124e4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3124e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3124e8: 0x8c4529d0  lw          $a1, 0x29D0($v0)
    ctx->pc = 0x3124e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10704)));
    // 0x3124ec: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3124ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3124f0: 0x8c4629d4  lw          $a2, 0x29D4($v0)
    ctx->pc = 0x3124f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10708)));
    // 0x3124f4: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3124f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3124f8: 0x8c4729d8  lw          $a3, 0x29D8($v0)
    ctx->pc = 0x3124f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10712)));
    // 0x3124fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x3124FCu;
    SET_GPR_U32(ctx, 31, 0x312504u);
    ctx->pc = 0x312500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124FCu;
    // 0x312500: 0x24843780  addiu       $a0, $a0, 0x3780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x3124FCu, 0x312504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312504u;
label_312504:
    // 0x312504: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x312504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x312508: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x312508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x31250c: 0x248429c0  addiu       $a0, $a0, 0x29C0
    ctx->pc = 0x31250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10688));
    // 0x312510: 0x24a529d0  addiu       $a1, $a1, 0x29D0
    ctx->pc = 0x312510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10704));
    // 0x312514: 0xc049c48  jal         func_127120
    ctx->pc = 0x312514u;
    SET_GPR_U32(ctx, 31, 0x31251Cu);
    ctx->pc = 0x312518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312514u;
    // 0x312518: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x312514u, 0x31251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31251Cu;
label_31251c:
    // 0x31251c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31251cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x312520: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x312520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x312524: 0x8c4429d0  lw          $a0, 0x29D0($v0)
    ctx->pc = 0x312524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10704)));
    // 0x312528: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x312528u;
    {
        const bool branch_taken_0x312528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x312528) {
            ctx->pc = 0x312564u;
            goto label_312564;
        }
    }
    ctx->pc = 0x312530u;
    // 0x312530: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x312530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x312534: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x312534u;
    {
        const bool branch_taken_0x312534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x312534) {
            ctx->pc = 0x312564u;
            goto label_312564;
        }
    }
    ctx->pc = 0x31253Cu;
    // 0x31253c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x312540: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312540u;
    {
        const bool branch_taken_0x312540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x312540) {
            ctx->pc = 0x312550u;
            goto label_312550;
        }
    }
    ctx->pc = 0x312548u;
    // 0x312548: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x312548u;
    {
        const bool branch_taken_0x312548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312548) {
            ctx->pc = 0x312574u;
            goto label_312574;
        }
    }
    ctx->pc = 0x312550u;
label_312550:
    // 0x312550: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x312550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x312554: 0xc082674  jal         func_2099D0
    ctx->pc = 0x312554u;
    SET_GPR_U32(ctx, 31, 0x31255Cu);
    ctx->pc = 0x312558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312554u;
    // 0x312558: 0x248425a0  addiu       $a0, $a0, 0x25A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x312554u, 0x31255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31255Cu;
label_31255c:
    // 0x31255c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31255Cu;
    {
        const bool branch_taken_0x31255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31255c) {
            ctx->pc = 0x312574u;
            goto label_312574;
        }
    }
    ctx->pc = 0x312564u;
label_312564:
    // 0x312564: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x312564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x312568: 0x8c4529d4  lw          $a1, 0x29D4($v0)
    ctx->pc = 0x312568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10708)));
    // 0x31256c: 0xc0c4974  jal         func_3125D0
    ctx->pc = 0x31256Cu;
    SET_GPR_U32(ctx, 31, 0x312574u);
    ctx->pc = 0x312570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31256Cu;
    // 0x312570: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3125D0u, 0x31256Cu, 0x312574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312574u;
label_312574:
    // 0x312574: 0xc0d0c40  jal         func_343100
    ctx->pc = 0x312574u;
    SET_GPR_U32(ctx, 31, 0x31257Cu);
    ctx->pc = 0x343100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343100u, 0x312574u, 0x31257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31257Cu;
label_31257c:
    // 0x31257c: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31257Cu;
    {
        const bool branch_taken_0x31257c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31257c) {
            ctx->pc = 0x312580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31257Cu;
            // 0x312580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312594u;
            goto label_312594;
        }
    }
    ctx->pc = 0x312584u;
    // 0x312584: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x312584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x312588: 0xc0c4974  jal         func_3125D0
    ctx->pc = 0x312588u;
    SET_GPR_U32(ctx, 31, 0x312590u);
    ctx->pc = 0x31258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312588u;
    // 0x31258c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3125D0u, 0x312588u, 0x312590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312590u;
label_312590:
    // 0x312590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312594:
    // 0x312594: 0x3e00008  jr          $ra
    ctx->pc = 0x312594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312594u;
        // 0x312598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31259Cu;
    // 0x31259c: 0x0  nop
    ctx->pc = 0x31259cu;
    // NOP
    // 0x3125a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3125a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3125a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3125a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3125a8: 0xc09cea0  jal         func_273A80
    ctx->pc = 0x3125A8u;
    SET_GPR_U32(ctx, 31, 0x3125B0u);
    ctx->pc = 0x273A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A80u, 0x3125A8u, 0x3125B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125B0u;
label_3125b0:
    // 0x3125b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3125b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3125b4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3125B4u;
    SET_GPR_U32(ctx, 31, 0x3125BCu);
    ctx->pc = 0x3125B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125B4u;
    // 0x3125b8: 0x24847280  addiu       $a0, $a0, 0x7280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3125B4u, 0x3125BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125BCu;
label_3125bc:
    // 0x3125bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3125bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3125c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3125C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3125C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125C0u;
        // 0x3125c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3125C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3125C8u;
    // 0x3125c8: 0x0  nop
    ctx->pc = 0x3125c8u;
    // NOP
    // 0x3125cc: 0x0  nop
    ctx->pc = 0x3125ccu;
    // NOP
    if (ctx->pc == 0x3125ccu) { ctx->pc = 0x3125d0u; }
}
