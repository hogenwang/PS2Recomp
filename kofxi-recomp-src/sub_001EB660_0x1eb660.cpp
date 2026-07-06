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

// Function: sub_001EB660
// Address: 0x1eb660 - 0x1eb7a8
void sub_001EB660_0x1eb660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB660_0x1eb660");
#endif

    switch (ctx->pc) {
        case 0x1eb660u: goto label_1eb660;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb668u: goto label_1eb668;
        case 0x1eb66cu: goto label_1eb66c;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb674u: goto label_1eb674;
        case 0x1eb678u: goto label_1eb678;
        case 0x1eb67cu: goto label_1eb67c;
        case 0x1eb680u: goto label_1eb680;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb688u: goto label_1eb688;
        case 0x1eb68cu: goto label_1eb68c;
        case 0x1eb690u: goto label_1eb690;
        case 0x1eb694u: goto label_1eb694;
        case 0x1eb698u: goto label_1eb698;
        case 0x1eb69cu: goto label_1eb69c;
        case 0x1eb6a0u: goto label_1eb6a0;
        case 0x1eb6a4u: goto label_1eb6a4;
        case 0x1eb6a8u: goto label_1eb6a8;
        case 0x1eb6acu: goto label_1eb6ac;
        case 0x1eb6b0u: goto label_1eb6b0;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6b8u: goto label_1eb6b8;
        case 0x1eb6bcu: goto label_1eb6bc;
        case 0x1eb6c0u: goto label_1eb6c0;
        case 0x1eb6c4u: goto label_1eb6c4;
        case 0x1eb6c8u: goto label_1eb6c8;
        case 0x1eb6ccu: goto label_1eb6cc;
        case 0x1eb6d0u: goto label_1eb6d0;
        case 0x1eb6d4u: goto label_1eb6d4;
        case 0x1eb6d8u: goto label_1eb6d8;
        case 0x1eb6dcu: goto label_1eb6dc;
        case 0x1eb6e0u: goto label_1eb6e0;
        case 0x1eb6e4u: goto label_1eb6e4;
        case 0x1eb6e8u: goto label_1eb6e8;
        case 0x1eb6ecu: goto label_1eb6ec;
        case 0x1eb6f0u: goto label_1eb6f0;
        case 0x1eb6f4u: goto label_1eb6f4;
        case 0x1eb6f8u: goto label_1eb6f8;
        case 0x1eb6fcu: goto label_1eb6fc;
        case 0x1eb700u: goto label_1eb700;
        case 0x1eb704u: goto label_1eb704;
        case 0x1eb708u: goto label_1eb708;
        case 0x1eb70cu: goto label_1eb70c;
        case 0x1eb710u: goto label_1eb710;
        case 0x1eb714u: goto label_1eb714;
        case 0x1eb718u: goto label_1eb718;
        case 0x1eb71cu: goto label_1eb71c;
        case 0x1eb720u: goto label_1eb720;
        case 0x1eb724u: goto label_1eb724;
        case 0x1eb728u: goto label_1eb728;
        case 0x1eb72cu: goto label_1eb72c;
        case 0x1eb730u: goto label_1eb730;
        case 0x1eb734u: goto label_1eb734;
        case 0x1eb738u: goto label_1eb738;
        case 0x1eb73cu: goto label_1eb73c;
        case 0x1eb740u: goto label_1eb740;
        case 0x1eb744u: goto label_1eb744;
        case 0x1eb748u: goto label_1eb748;
        case 0x1eb74cu: goto label_1eb74c;
        case 0x1eb750u: goto label_1eb750;
        case 0x1eb754u: goto label_1eb754;
        case 0x1eb758u: goto label_1eb758;
        case 0x1eb75cu: goto label_1eb75c;
        case 0x1eb760u: goto label_1eb760;
        case 0x1eb764u: goto label_1eb764;
        case 0x1eb768u: goto label_1eb768;
        case 0x1eb76cu: goto label_1eb76c;
        case 0x1eb770u: goto label_1eb770;
        case 0x1eb774u: goto label_1eb774;
        case 0x1eb778u: goto label_1eb778;
        case 0x1eb77cu: goto label_1eb77c;
        case 0x1eb780u: goto label_1eb780;
        case 0x1eb784u: goto label_1eb784;
        case 0x1eb788u: goto label_1eb788;
        case 0x1eb78cu: goto label_1eb78c;
        case 0x1eb790u: goto label_1eb790;
        case 0x1eb794u: goto label_1eb794;
        case 0x1eb798u: goto label_1eb798;
        case 0x1eb79cu: goto label_1eb79c;
        case 0x1eb7a0u: goto label_1eb7a0;
        case 0x1eb7a4u: goto label_1eb7a4;
        default: break;
    }

    ctx->pc = 0x1eb660u;

label_1eb660:
    // 0x1eb660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eb664:
    // 0x1eb664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1eb668:
    // 0x1eb668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eb668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb66c:
    // 0x1eb66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eb66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1eb670:
    // 0x1eb670: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eb670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eb674:
    // 0x1eb674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eb674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1eb678:
    // 0x1eb678: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1eb678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1eb67c:
    // 0x1eb67c: 0xc07adea  jal         func_1EB7A8
label_1eb680:
    if (ctx->pc == 0x1EB680u) {
        ctx->pc = 0x1EB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB67Cu;
        // 0x1eb680: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB684u;
        goto label_1eb684;
    }
    ctx->pc = 0x1EB67Cu;
    SET_GPR_U32(ctx, 31, 0x1EB684u);
    ctx->pc = 0x1EB680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB67Cu;
    // 0x1eb680: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB7A8u, 0x1EB67Cu, 0x1EB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB684u;
label_1eb684:
    // 0x1eb684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb688:
    // 0x1eb688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb68c:
    // 0x1eb68c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1eb690:
    if (ctx->pc == 0x1EB690u) {
        ctx->pc = 0x1EB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB68Cu;
        // 0x1eb690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB694u;
        goto label_1eb694;
    }
    ctx->pc = 0x1EB68Cu;
    {
        const bool branch_taken_0x1eb68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB68Cu;
        // 0x1eb690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb68c) {
            ctx->pc = 0x1EB6B8u;
            goto label_1eb6b8;
        }
    }
    ctx->pc = 0x1EB694u;
label_1eb694:
    // 0x1eb694: 0xc072ff8  jal         func_1CBFE0
label_1eb698:
    if (ctx->pc == 0x1EB698u) {
        ctx->pc = 0x1EB69Cu;
        goto label_1eb69c;
    }
    ctx->pc = 0x1EB694u;
    SET_GPR_U32(ctx, 31, 0x1EB69Cu);
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1EB694u, 0x1EB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB69Cu;
label_1eb69c:
    // 0x1eb69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb6a0:
    // 0x1eb6a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1eb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1eb6a4:
    // 0x1eb6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb6a8:
    // 0x1eb6a8: 0xc072ff8  jal         func_1CBFE0
label_1eb6ac:
    if (ctx->pc == 0x1EB6ACu) {
        ctx->pc = 0x1EB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6A8u;
        // 0x1eb6ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6B0u;
        goto label_1eb6b0;
    }
    ctx->pc = 0x1EB6A8u;
    SET_GPR_U32(ctx, 31, 0x1EB6B0u);
    ctx->pc = 0x1EB6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6A8u;
    // 0x1eb6ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFE0u, 0x1EB6A8u, 0x1EB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6B0u;
label_1eb6b0:
    // 0x1eb6b0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1eb6b4:
    if (ctx->pc == 0x1EB6B4u) {
        ctx->pc = 0x1EB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6B0u;
        // 0x1eb6b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6B8u;
        goto label_1eb6b8;
    }
    ctx->pc = 0x1EB6B0u;
    {
        const bool branch_taken_0x1eb6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6B0u;
        // 0x1eb6b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb6b0) {
            ctx->pc = 0x1EB700u;
            goto label_1eb700;
        }
    }
    ctx->pc = 0x1EB6B8u;
label_1eb6b8:
    // 0x1eb6b8: 0xc07adf8  jal         func_1EB7E0
label_1eb6bc:
    if (ctx->pc == 0x1EB6BCu) {
        ctx->pc = 0x1EB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6B8u;
        // 0x1eb6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6C0u;
        goto label_1eb6c0;
    }
    ctx->pc = 0x1EB6B8u;
    SET_GPR_U32(ctx, 31, 0x1EB6C0u);
    ctx->pc = 0x1EB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB6B8u;
    // 0x1eb6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB7E0u, 0x1EB6B8u, 0x1EB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6C0u;
label_1eb6c0:
    // 0x1eb6c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1eb6c4:
    if (ctx->pc == 0x1EB6C4u) {
        ctx->pc = 0x1EB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6C0u;
        // 0x1eb6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6C8u;
        goto label_1eb6c8;
    }
    ctx->pc = 0x1EB6C0u;
    {
        const bool branch_taken_0x1eb6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6C0u;
        // 0x1eb6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb6c0) {
            ctx->pc = 0x1EB6F8u;
            goto label_1eb6f8;
        }
    }
    ctx->pc = 0x1EB6C8u;
label_1eb6c8:
    // 0x1eb6c8: 0xc072c90  jal         func_1CB240
label_1eb6cc:
    if (ctx->pc == 0x1EB6CCu) {
        ctx->pc = 0x1EB6D0u;
        goto label_1eb6d0;
    }
    ctx->pc = 0x1EB6C8u;
    SET_GPR_U32(ctx, 31, 0x1EB6D0u);
    ctx->pc = 0x1CB240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB240u, 0x1EB6C8u, 0x1EB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6D0u;
label_1eb6d0:
    // 0x1eb6d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb6d4:
    // 0x1eb6d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eb6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb6d8:
    // 0x1eb6d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1eb6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1eb6dc:
    // 0x1eb6dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1eb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1eb6e0:
    // 0x1eb6e0: 0x40f809  jalr        $v0
label_1eb6e4:
    if (ctx->pc == 0x1EB6E4u) {
        ctx->pc = 0x1EB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6E0u;
        // 0x1eb6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6E8u;
        goto label_1eb6e8;
    }
    ctx->pc = 0x1EB6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB6E8u);
        ctx->pc = 0x1EB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6E0u;
        // 0x1eb6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB6E0u, 0x1EB6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB6E8u;
label_1eb6e8:
    // 0x1eb6e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1eb6ec:
    // 0x1eb6ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1eb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eb6f0:
    // 0x1eb6f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eb6f4:
    if (ctx->pc == 0x1EB6F4u) {
        ctx->pc = 0x1EB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6F0u;
        // 0x1eb6f4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6F8u;
        goto label_1eb6f8;
    }
    ctx->pc = 0x1EB6F0u;
    {
        const bool branch_taken_0x1eb6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6F0u;
        // 0x1eb6f4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb6f0) {
            ctx->pc = 0x1EB700u;
            goto label_1eb700;
        }
    }
    ctx->pc = 0x1EB6F8u;
label_1eb6f8:
    // 0x1eb6f8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1eb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1eb6fc:
    // 0x1eb6fc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1eb6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1eb700:
    // 0x1eb700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb704:
    // 0x1eb704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eb704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1eb708:
    // 0x1eb708: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eb708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb70c:
    // 0x1eb70c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1eb70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eb710:
    // 0x1eb710: 0x3e00008  jr          $ra
label_1eb714:
    if (ctx->pc == 0x1EB714u) {
        ctx->pc = 0x1EB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB710u;
        // 0x1eb714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB718u;
        goto label_1eb718;
    }
    ctx->pc = 0x1EB710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB710u;
        // 0x1eb714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB718u;
label_1eb718:
    // 0x1eb718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eb71c:
    // 0x1eb71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb720:
    // 0x1eb720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eb720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eb724:
    // 0x1eb724: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eb724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1eb728:
    // 0x1eb728: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1eb728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1eb72c:
    // 0x1eb72c: 0xc072cec  jal         func_1CB3B0
label_1eb730:
    if (ctx->pc == 0x1EB730u) {
        ctx->pc = 0x1EB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB72Cu;
        // 0x1eb730: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB734u;
        goto label_1eb734;
    }
    ctx->pc = 0x1EB72Cu;
    SET_GPR_U32(ctx, 31, 0x1EB734u);
    ctx->pc = 0x1EB730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB72Cu;
    // 0x1eb730: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB3B0u, 0x1EB72Cu, 0x1EB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB734u;
label_1eb734:
    // 0x1eb734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eb734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb738:
    // 0x1eb738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eb738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb73c:
    // 0x1eb73c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1eb73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1eb740:
    // 0x1eb740: 0x40f809  jalr        $v0
label_1eb744:
    if (ctx->pc == 0x1EB744u) {
        ctx->pc = 0x1EB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB740u;
        // 0x1eb744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB748u;
        goto label_1eb748;
    }
    ctx->pc = 0x1EB740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB748u);
        ctx->pc = 0x1EB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB740u;
        // 0x1eb744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB740u, 0x1EB748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB748u;
label_1eb748:
    // 0x1eb748: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1eb748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
label_1eb74c:
    // 0x1eb74c: 0xac623cb0  sw          $v0, 0x3CB0($v1)
    ctx->pc = 0x1eb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15536), GPR_U32(ctx, 2));
label_1eb750:
    // 0x1eb750: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb754:
    // 0x1eb754: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1eb758:
    // 0x1eb758: 0x60f809  jalr        $v1
label_1eb75c:
    if (ctx->pc == 0x1EB75Cu) {
        ctx->pc = 0x1EB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB758u;
        // 0x1eb75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB760u;
        goto label_1eb760;
    }
    ctx->pc = 0x1EB758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB760u);
        ctx->pc = 0x1EB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB758u;
        // 0x1eb75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB758u, 0x1EB760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB760u;
label_1eb760:
    // 0x1eb760: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eb764:
    // 0x1eb764: 0xc072a66  jal         func_1CA998
label_1eb768:
    if (ctx->pc == 0x1EB768u) {
        ctx->pc = 0x1EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB764u;
        // 0x1eb768: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB76Cu;
        goto label_1eb76c;
    }
    ctx->pc = 0x1EB764u;
    SET_GPR_U32(ctx, 31, 0x1EB76Cu);
    ctx->pc = 0x1EB768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB764u;
    // 0x1eb768: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA998u, 0x1EB764u, 0x1EB76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB76Cu;
label_1eb76c:
    // 0x1eb76c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eb76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb770:
    // 0x1eb770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eb770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb774:
    // 0x1eb774: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1eb774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1eb778:
    // 0x1eb778: 0x40f809  jalr        $v0
label_1eb77c:
    if (ctx->pc == 0x1EB77Cu) {
        ctx->pc = 0x1EB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB778u;
        // 0x1eb77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB780u;
        goto label_1eb780;
    }
    ctx->pc = 0x1EB778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB780u);
        ctx->pc = 0x1EB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB778u;
        // 0x1eb77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB778u, 0x1EB780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB780u;
label_1eb780:
    // 0x1eb780: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1eb780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
label_1eb784:
    // 0x1eb784: 0xac623cb4  sw          $v0, 0x3CB4($v1)
    ctx->pc = 0x1eb784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15540), GPR_U32(ctx, 2));
label_1eb788:
    // 0x1eb788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1eb788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb78c:
    // 0x1eb78c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1eb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1eb790:
    // 0x1eb790: 0x60f809  jalr        $v1
label_1eb794:
    if (ctx->pc == 0x1EB794u) {
        ctx->pc = 0x1EB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB790u;
        // 0x1eb794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB798u;
        goto label_1eb798;
    }
    ctx->pc = 0x1EB790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB798u);
        ctx->pc = 0x1EB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB790u;
        // 0x1eb794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB790u, 0x1EB798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB798u;
label_1eb798:
    // 0x1eb798: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eb798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb79c:
    // 0x1eb79c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1eb79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eb7a0:
    // 0x1eb7a0: 0x3e00008  jr          $ra
label_1eb7a4:
    if (ctx->pc == 0x1EB7A4u) {
        ctx->pc = 0x1EB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7A0u;
        // 0x1eb7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB7A8u;
        goto label_fallthrough_0x1eb7a0;
    }
    ctx->pc = 0x1EB7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7A0u;
        // 0x1eb7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eb7a0:
    ctx->pc = 0x1EB7A8u;
}
